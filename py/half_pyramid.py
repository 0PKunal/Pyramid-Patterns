def half_pyramid(n):
    for i in range(1, n+1):
        print('*' * i)

if __name__ == '__main__':
    import sys
    n = int(sys.argv[1]) if len(sys.argv) > 1 else 5
    half_pyramid(n)
