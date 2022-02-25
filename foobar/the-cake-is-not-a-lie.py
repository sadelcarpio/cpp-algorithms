def solution(s):
    output = 1
    for i in reversed(range(1, len(s) + 1)):
        sub_s = s[:i]
        step = len(sub_s)
        for k in range(0, len(s) + 1, step):
            if k == len(s):
                output = len(s) // step
            if s[k:k+step] != sub_s:
                break
    return output

print(solution('uiduiduiiduiuiduiduiiduiuiduiduiiduiuiduiduiid'))