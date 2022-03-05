def main():
    s = input()
    print(solution(s))

def solution(s: str) -> int:
    """Cuenta cuantas veces como máximo se repite un string dentro de otro, sin dejar faltantes

    Args:
        s (str): String a consultar

    Returns:
        int: número máximo de veces que se repite un patrón en el string
    """
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

if __name__ == '__main__':
    main()