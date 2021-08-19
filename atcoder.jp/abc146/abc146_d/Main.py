from collections import deque
import sys

# クラスを宣言
class Node:
    # コンストラクタを宣言
    def __init__(self,index):
        # メソッドを定義
        self.index = index # node （頂点） の番号を定義
        self.nears = [] # 隣接 node のリストを定義
        self.color = None # 親 node と繋がっている edge の色を定義
        self.par = 0 # 親 node を定義（親は 1 人しかいないのでリストで定義しなくてよい）

    def __repr__(self):
        return f'Node index:{self.index} Node nears:{self.nears} Node color:{self.color} Node par:{self.par}'

def main():

    # 入力読み込み
    input = sys.stdin.readline # 入力の高速化
    N = int(input())

    # インスタンス（Node）を生成し、nodes に格納する。
    # ノード 0 も生成されるが使用しない。
    nodes = []
    for i in range(N + 1):
        nodes.append(Node(i))

    # 本問では edge の順番で聞かれる 
    edges = [tuple(map(int, input().split())) for _ in range(N)]

    # 隣接 node を nears メソッドに格納する
    for i in range(N-1):
        a,b = edges[i]
        nodes[a].nears.append(b) 
        nodes[b].nears.append(a)

    # 探索対象 node を queue （キュー）に入れる。
    queue = deque()

    # Node 1 から探索を始める。
    queue.append(nodes[1])

    # Node 1 に親は存在しないが、便宜上 color メソッドを定義する。
    nodes[1].color = len(nodes[1].nears) + 1

    # queue がなくなるまで BFS を続ける。
    while queue:

        # queue から node を 1 つ取り出す。取り出したノードについて調べる。
        # 取り出された node は queue から消える。
        node = queue.popleft()

        # 取り出された node の隣接 node 達を nears に入れる。
        # nears は子 node の候補である。
        nears = node.nears

        # 子 node に使う色の候補を color_list とする。
        color_list = list(range(len(nears)+2))

        # 親 node と繋がっている edge の色を color_list から削除する。
        # 子 node を持たない node では IndexError が返されるため、これを回避する。
        try:
            del color_list[node.color]
        except IndexError:
            pass

        # 隣接 node 達が探索済みか 1 つずつ調べる。
        # 子 node を持たない node では for ループはスキップされる。
        for near, color in zip(nears, color_list[1:]):

            # 未探索の near には色が付いていない。
            # 色が付いていない node は子 node として queue に追加する。
            if nodes[near].color is None:
                queue.append(nodes[near])

                # 子 node から見て、親 node と何色でつながるのかを決める。
                nodes[near].color = color

                # 子 node から見た親 node は現在探索中の node である。
                nodes[near].par = node.index

                # 隣接 node から親 node を除く。
                nodes[near].nears.remove(node.index)

        # print(node) # コメントアウトを外すと BFS の様子を追跡できる。

    # ans リストを作成する。
    ans = []

    # edge の順番で答えを追加する
    for edge in edges[:-1]:

        # edge が結ぶ 2 つの node のうち、どちらが子 node であるのかを調べる。
        # 子 node の color メソッドを ans に追加する。
        # node 1 は root なので子 node にはならない。
        if edge[0] == 1:
            ans.append(nodes[edge[1]].color)
        elif nodes[edge[0]].par == edge[1]:
            ans.append(nodes[edge[0]].color)
        else:
            ans.append(nodes[edge[1]].color)

    # 木全体で使う色の数を答える。
    print(max(ans))

    # Edge の色を答える。
    for a in ans:
        print(a)

# 実行の高速化
if __name__ == '__main__':
    main()