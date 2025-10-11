from math import comb

def pascal_triangle(n):
    for i in range(n):
        print(' ' * (n - i - 1) + ' '.join(str(comb(i, j)) for j in range(i+1)))

if __name__ == '__main__':
    import sys
    n = int(sys.argv[1]) if len(sys.argv) > 1 else 5
    pascal_triangle(n)
