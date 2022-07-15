n = int(input())

while n > 0:
    in_string = input()
    s_len = len(in_string)
    print(in_string) if s_len <= 10 else print(in_string[0] + str(s_len - 2) + in_string[-1])
    n -= 1
