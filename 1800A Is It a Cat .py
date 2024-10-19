def solve():
    n = int(input())  # Read integer input
    s = input()  # Read the string input
    s = s.lower()  # Convert string to lowercase
    # Remove consecutive duplicates
    result = []
    for i in range(n):
        if i == 0 or s[i] != s[i - 1]:
            result.append(s[i])
    # Join the list to form a new string without consecutive duplicates
    result = "".join(result)
    print("YES" if result == "meow" else "NO")


# Main function to handle multiple test cases
t = int(input())  # Read the number of test cases
for _ in range(t):
    solve()
