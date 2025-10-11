def inverted_pyramid(n):
    for i in range(n, 0, -1):
        print('*' * i)

if __name__ == '__main__':
    import sys
    n = int(sys.argv[1]) if len(sys.argv) > 1 else 5
    inverted_pyramid(n)
