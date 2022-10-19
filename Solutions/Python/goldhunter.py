# The inputs for the problem are:
#
# gold.jpg : 5 and 1.6.3.5.1.15.3.8.2.1.2.2.6.4
#
# goldlarge.jpg : 9 and 1.6.3.5.1.15.3.8.2.1.2.1.6.4.4.1.2.6.3.7.10.8.17.2.7.8.4.7.2.10.7.8.4.2.6.14.4.6.8.4.7.6.7.10

# Calculating specific number in the sequence
def calculate(row, column, sequence):
    math_thing = 2
    if row == 1:
        math_thing = 0
    else:
        for i in range(2, row, 1):
            math_thing += i + 1
    return int(sequence[math_thing + column - 1])


# Getting data
height = int(input("What is the height of the pyramid: "))
sequence = str(input("Input the pyramid sequence from top to bottom and left to right, seperated with dots: ")).split(".")

# Going through every path where:
# 0 means going left and 1 means going right
for i in range(height - 1):
    best, column = 0, 0
    for j in range(1, i):
        if calculate(i, j, sequence) > best:
            best, column = calculate(i, j, sequence), j
    

# Sorting the dictionary and printing result
sorted_dict = dict(sorted(paths_value.items(), key=lambda x: x[1]))
print("\nThe best path is: |", list(sorted_dict.keys())[-1].replace("0", "Left ").replace("1", "Right ") + "| with value:", sorted_dict[list(sorted_dict.keys())[-1]])
