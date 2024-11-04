import numpy as np

# Define parameters
p = 0.5  # probability of winning
money = 2  # initial amount of money

# Create a transition matrix with absorbing barriers
b = np.zeros((int(2 * money + 1), int(2 * money + 1)))
print("The absorbing barriers are at {} and {}".format(0, 2 * money))

# Fill the transition matrix
for i in range(0, int(2 * money + 1)):
    for j in range(0, int(2 * money + 1)):
        if i == 0 or i == int(2 * money):
            b[i][i] = 1  # Absorbing states
        else:
            if i + 1 == j:
                b[i][j] = p  # Probability of moving to the right
            elif i - 1 == j:
                b[i][j] = 1 - p  # Probability of moving to the left

# Number of plays
n = 3

# Calculate the transition matrix raised to the power of n
b = np.linalg.matrix_power(b, n)

# Print the probability that the gambler loses their fortune
print("The Probability that the gambler loses his fortune at the end of {} plays: {}".format(n, b[int(money)][0]))
