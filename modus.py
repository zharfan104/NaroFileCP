N = int(input())
b = list(map(int,input().split()))
memo = [0] * 1001
for value in b:
    memo[value] +=1
modus = [0]
k = memo[0]
for p in range(len(memo)):
    if memo[p] >= k:
        k = memo[p]
        modus.append(p)
print(modus)