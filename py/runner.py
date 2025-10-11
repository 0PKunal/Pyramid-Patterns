try:
    # Preferred: running as a package (python -m py.runner)
    from .half_pyramid import half_pyramid
    from .full_pyramid import full_pyramid
    from .inverted_pyramid import inverted_pyramid
    from .number_pyramid import number_pyramid
    from .floyd_triangle import floyd_triangle
    from .pascal_triangle import pascal_triangle
    from .diamond_pattern import diamond_pattern
except Exception:
    # Fallback: allow running the file directly (python path\to\runner.py)
    import importlib.util
    import sys
    from pathlib import Path

    pkg_dir = Path(__file__).resolve().parent
    sys.path.insert(0, str(pkg_dir))

    half_pyramid = importlib.import_module('half_pyramid').half_pyramid
    full_pyramid = importlib.import_module('full_pyramid').full_pyramid
    inverted_pyramid = importlib.import_module('inverted_pyramid').inverted_pyramid
    number_pyramid = importlib.import_module('number_pyramid').number_pyramid
    floyd_triangle = importlib.import_module('floyd_triangle').floyd_triangle
    pascal_triangle = importlib.import_module('pascal_triangle').pascal_triangle
    diamond_pattern = importlib.import_module('diamond_pattern').diamond_pattern

def run_all(n=5):
    print('\nHalf Pyramid:')
    half_pyramid(n)
    print('\nFull Pyramid:')
    full_pyramid(n)
    print('\nInverted Pyramid:')
    inverted_pyramid(n)
    print('\nNumber Pyramid:')
    number_pyramid(n)
    print('\nFloyd\'s Triangle:')
    floyd_triangle(n)
    print('\nPascal Triangle:')
    pascal_triangle(n)
    print('\nDiamond Pattern:')
    diamond_pattern(n)

if __name__ == '__main__':
    import sys
    n = int(sys.argv[1]) if len(sys.argv) > 1 else 5
    run_all(n)
