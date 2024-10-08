# Example table represented as a list of lists
table = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
    [10, 11, 12]
]

# Step 1: Count the number of rows and columns
num_rows = len(table)
num_columns = len(table[0]) if num_rows > 0 else 0  # Handles case where table may be empty

# Step 2: Calculate total number of cells by multiplying rows and columns
total_cells = num_rows * num_columns

# Print the results
print("Number of rows:", num_rows)
print("Number of columns:", num_columns)
print("Total number of cells:", total_cells)
