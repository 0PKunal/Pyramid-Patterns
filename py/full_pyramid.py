def full_pyramid(n):
    for i in range(1, n+1):
        print(' ' * (n - i) + '*' * (2*i - 1))

if __name__ == '__main__':
    import sys
    n = int(sys.argv[1]) if len(sys.argv) > 1 else 5
    full_pyramid(n)
