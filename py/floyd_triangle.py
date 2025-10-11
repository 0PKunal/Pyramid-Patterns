def floyd_triangle(n):
    num = 1
    for i in range(1, n+1):
        line = []
        for _ in range(i):
            line.append(str(num))
            num += 1
        print(' '.join(line))

if __name__ == '__main__':
    import sys
    n = int(sys.argv[1]) if len(sys.argv) > 1 else 5
    floyd_triangle(n)
