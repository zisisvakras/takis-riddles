# As the solution describes, this algorithm will calculate
# the N + 2 number of the fibonacci sequence
n = int(input("Number of stairs: "))
a, b = 0, 1
for i in range(n):
    a, b = b, a + b
print("Answer:", b,"ways")
