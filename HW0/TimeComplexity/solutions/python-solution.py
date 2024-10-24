input()
nums = map(int, input().split(" "))
prev = 0
ans = 0
for num in nums:
    cur = num if prev < 0 else num + prev
    ans = max(ans, cur)
    prev = cur
print(ans)
