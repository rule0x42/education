# Udacity exercise - Sudoku

# A valid sudoku square satisfies these
# two properties:
#   1. Each column of the square contains
#       each of the whole numbers from 1 to n exactly once.
#   2. Each row of the square contains each
#       of the whole numbers from 1 to n exactly once.


def check_sudoku(puzzle):
    columns = zip(*puzzle)
    if column_and_rows(puzzle) and column_and_rows(columns):
        return True
    return False


def column_and_rows(puzzle):
    for col_row in puzzle:
        for i in range(len(col_row)):
            if (i + 1) not in col_row:
                return False
    return True


def test():
    test_cases = [([[1, 2, 3],
                    [2, 3, 1],
                    [3, 1, 2]], True),
                  ([[1, 2, 3, 4],
                    [2, 3, 1, 3],
                    [3, 1, 2, 3],
                    [4, 4, 4, 4]], False),
                  ([[1, 2, 3, 4],
                    [2, 3, 1, 4],
                    [4, 1, 2, 3],
                    [3, 4, 1, 2]], False),
                  ([[1, 2, 3, 4, 5],
                    [2, 3, 1, 5, 6],
                    [4, 5, 2, 1, 3],
                    [3, 4, 5, 2, 1],
                    [5, 6, 4, 3, 2]], False),
                  ([['a', 'b', 'c'],
                    ['b', 'c', 'a'],
                    ['c', 'a', 'b']], False),
                  ([[1, 1.5],
                    [1.5, 1]], False)]
    for (args, answer) in test_cases:
        result = check_sudoku(args)
        if result != answer:
            print "Expected:", answer, "Received:", result
        else:
            print "Test case passed:", check_sudoku(args)

test()
