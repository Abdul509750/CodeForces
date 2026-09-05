def solve(n, k, s):
    answer = 0

    for i in range(0, n, k):
        farm = s[i:i+k]

        if "0" not in farm:
            answer += 1

    return answer


t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    s = input().strip()

    print(solve(n, k, s))