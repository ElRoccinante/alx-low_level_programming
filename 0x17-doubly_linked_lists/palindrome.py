#!/usr/bin/python3
def is_palindrome(n):
    # Convert the number to a string
    string = str(n)
    # Check if the string is equal to its reverse
    return string == string[::-1]

list_of_numbers = []
for i in range(999, 99, -1):
    for j in range(i, 99, -1):
        if is_palindrome(i * j):
            list_of_numbers.append(i * j)

# Find the maximum palindrome number in the list
max_palindrome = max(list_of_numbers)
print(max_palindrome)
