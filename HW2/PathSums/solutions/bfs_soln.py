n = int(input())
tree = [tuple(map(int, input().split())) for _ in range(n)]
k = int(input())

def bfs(head, sum):
    if head == -1:
        return 0
    value = tree[head][0]
    return (value == sum) + bfs(tree[head][1], sum - value) + bfs(tree[head][2], sum - value)

num_sums = 0
for i in range(n):
    num_sums += bfs(i, k)

print(num_sums)

