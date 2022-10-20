# Getting necessary data
frds = int(input("\nNumber of friends in the grid: "))
c, r = [], []
for i in range(frds):
    c.append(int(input("\nColumn of friend " + str(i + 1) + ": ")))
    r.append(int(input("Row of friend " + str(i + 1) + ": ")))
c.sort()
r.sort()

# Executing solution and printing the result
if frds % 2 == 1: # Odd friend case
    i = int((frds + 1)/2 - 1)
    loc = "("+ str(c[i]) + "," + str(r[i]) + ")"
    print("\nThe optimal location for the coffee shop is:", loc)
else: # Even friend case
    i = int(frds/2)
    loc = "(" + str(c[i - 1]) + "-" + str(c[i]) + "," + str(r[i - 1]) + "-" + str(r[i]) + ")"
    print("\nThe optimal locations for the coffee shop are:", loc)
