from collections import deque
import sys

def main():
    input = sys.stdin.readline #入力の高速化
    
    class Node:
        def __init__(self, row, col):
            self.col = col 
            self.row = row 
            self.nears = [[row, col+1], [row, col-1], [row+1, col], [row-1, col]]
            self.sign = False
            
        def __repr__(self):
            return f'Node row:{self.row} Node col:{self.col} nears:{self.nears} sign:{self.sign}'

    #入力読み込み
    h, w = map(int, input().split())
    pic = [list('#' * (w + 2))]
    for i in range(h):
        pic.append(list('#' + input() + '#'))
    pic.append(list('#' * (w + 2)))

    #探索候補をqueueに入力する
    queue = deque()

    nodes = []

    for i in range(h+2):
        nodes.append([])
        for j in range(w+2):
            nodes[i].append(Node(i, j))
            #スタート位置のnodeはqueueに入れる
            #スタート位置のnodeを探索済みにして，signメソッドにTrueをいれる
            if pic[i][j] == 's':
                queue.append(nodes[i][j])
                nodes[i][j].sign = True

    #DFS 
    #queue がなくなるまで続ける
    while queue:
        # queueから探索候補を一つ取り出す
        node = queue.pop() #.popleft()にするとBFSになる
        #print(node)
        #取り出した探索候補の隣接nodeを取得する
        nears = node.nears
        for near in nears:
            if nodes[near[0]][near[1]].sign == False:
                #訪れていなければ調べる
                #道であれば探索済みとして queueに追加する．
                #ゴールであれば終了
                if pic[near[0]][near[1]] == '.':
                    nodes[near[0]][near[1]].sign = True
                    queue.append(nodes[near[0]][near[1]])
                elif pic[near[0]][near[1]] == 'g':
                    print('Yes')
                    exit()

    #最後までたどり着けなかったらNoを出力
    print('No')

if __name__ =='__main__':
    main()
                