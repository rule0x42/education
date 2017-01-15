# Udacity exercise 'Lists of Lists'


def total_enrollment(univs):
    """Uses list unpacking to get sum and product of
        students and tuition"""
    num_students = 0;
    annual_tuition = 0;
    if univs:
        for _, y, z in univs:
            num_students += y
            annual_tuition += y * z
        return num_students, annual_tuition
    return 0


usa_univs = [ ['California Institute of Technology', 2175, 37704],
              ['Harvard', 19627, 39849],
              ['Massachusetts Institute of Technology', 10566, 40732],
              ['Princeton', 7802, 37000],
              ['Rice', 5879, 35551],
              ['Stanford', 19535, 40569],
              ['Yale', 11701, 40500] ]

print total_enrollment(usa_univs)

