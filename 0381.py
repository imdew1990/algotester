
n,k = map(int, input().split())

a = 2
for i in range(2, n + 1):
    a *= 2


print((a//(10**k))%10)

