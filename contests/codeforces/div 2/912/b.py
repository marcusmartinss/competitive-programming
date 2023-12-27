""" def find_array(t, test_cases):
    results = []
    for _ in range(t):
        n = test_cases[_][0]
        matrix = test_cases[_][1]

        # Find an array that satisfies the condition
        # Initialize result_array with the first row of the matrix
        result_array = matrix[0][:]

        for i in range(1, n):
            # Set result_array[0] to the bitwise OR of all elements in the first column
            result_array[0] |= matrix[i][0]
            # Set result_array[i] to matrix[i][0]
            result_array[i] = matrix[i][0]

        results.append(result_array)

    return results

def print_results(results):
    for result in results:
        print("YES")
        print(" ".join(map(str, result)))

# Input reading
t = int(input())
test_cases = []

for _ in range(t):
    n = int(input())
    matrix = [list(map(int, input().split())) for _ in range(n)]
    test_cases.append((n, matrix))

# Find and print results
results = find_array(t, test_cases)
print_results(results)
 """