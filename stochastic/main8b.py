import numpy as np

# Define state probabilities
state_0 = 0.7
state_1 = 0.5
state_2 = 0.4
state_3 = 0.2

# Initialize the transition matrix
a = np.zeros((4, 4))  # 4 states

# Fill the transition matrix based on state probabilities
a[0][0] = state_0
a[0][1] = 0  # No transition to state 1 from state 0
a[0][2] = 1 - state_0
a[0][3] = 0  # No transition to state 3 from state 0

a[1][0] = state_1
a[1][1] = 0  # No transition to state 1 from state 1
a[1][2] = 1 - state_1
a[1][3] = 0  # No transition to state 3 from state 1

a[2][0] = 0  # No transition to state 0 from state 2
a[2][1] = state_2
a[2][2] = 0  # No transition to state 2 from state 2
a[2][3] = 1 - state_2

a[3][0] = 0  # No transition to state 0 from state 3
a[3][1] = state_3
a[3][2] = 0  # No transition to state 2 from state 3
a[3][3] = 1 - state_3

# Calculate the transition matrix raised to the power of 2
a = np.linalg.matrix_power(a, 2)

# Calculate the probability of it raining the past 2 days and it will rain tomorrow
probability = a[0][0] + a[0][1]  # Probability it rained today or was sunny yesterday
print("Probability that it rained the past 2 days and it will rain tomorrow: {}".format(probability))
