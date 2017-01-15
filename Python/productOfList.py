# Procedure that takes a list and returns the product of all list elements
# if the list is empty, return 1


def product_list(list_of_numbers):
    if list_of_numbers:
        return reduce(lambda x, y: x * y, list_of_numbers)
    return 1


def test():
    test_cases = [([-5, 5, 23, 6], -3450),
                  ([31], 31),
                  ([1, 2, 3, 4, 5], 120),
                  ([], 1)]
    for (args, answer) in test_cases:
        result = product_list(args)
        if result != answer:
            print "Expected:", answer, "Received:", result
        else:
            print "Test case passed:", product_list(args)


test()

