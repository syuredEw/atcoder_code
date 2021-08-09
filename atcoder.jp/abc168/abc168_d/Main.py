from collections import deque

#入力読み込み
n, m = map(int, input().split())
links = [list(map(int, input().split())) for _ in range(m)]

#インスタンス(Node)を生成し，nodesに格納する
#ノード0も生成されるが使用しない．

class Node:
    def __init__(self, index):
        #メソッドの定義
        self.index = index #Node(頂点)の番号の定義
        self.nears = [] #隣接Nodeのリストを定義
        self.sign = -1 #探索済みかどうかを定義
    
    def __repr__(self):
        return f'Node index:{self.index} Node nears:{self.nears} Node sign:{self.sign}'
    
nodes = []
for i in range(n + 1):
    nodes.append(Node(i))

#print([node.sign for node in nodes])

#隣接 node を　nears メソッドに格納する
for j in range(m):
    edge_start, edge_end = links[j]
    nodes[edge_start].nears.append(edge_end)
    nodes[edge_end].nears.append(edge_start) #有効グラフの時は消す

#BFS
#探索対象nodeをqueueに入れる
queue = deque()
#今回はnode1から探索を開始するので queueにnode 1を最初に入れる
queue.append(nodes[1])
#print(queue)
#queueがなくなるまで探索を続ける
while queue:
    #queueからnodeを1つ取り出す．取り出したノードについて調べる
    #取り出されたnodeはqueueから消える
    node = queue.popleft() #pop()にするとDFSになる
    #print(node) #DFSとBFSで比べるといい
    #取り出されたnodeの隣接node達をnearsに入れる．
    nears = node.nears
    #隣接node達が探索済みか1つずつ調べる
    for near in nears:
        #未探索の隣接nodeはqueueに追加する
        #取り出してきた親nodeは道しるべとなるため，子nodeのsignメソッドに追加する．
        if nodes[near].sign == -1:
            queue.append(nodes[near])
            nodes[near].sign = node.index 

#YesまたはNoを表示
if -1 in [node.sign for node in nodes][2:]:
    print('No')
    exit(0)
else:
    print('Yes')

#道しるべを表示
for k in range(2, n + 1):
    print(nodes[k].sign)