def diamond_pattern(n):
    for i in range(1, n+1):
        print(' ' * (n - i) + '*' * (2*i - 1))
    for i in range(n-1, 0, -1):
        print(' ' * (n - i) + '*' * (2*i - 1))

if __name__ == '__main__':
    import sys
    n = int(sys.argv[1]) if len(sys.argv) > 1 else 5
    diamond_pattern(n)
