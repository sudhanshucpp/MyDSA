# Define parameters
mean = 10
sd = 2  # mean and standard deviation of interarrival time distribution
n = 30

# Calculate expected waiting time
expected_waiting_time = mean * n

# Print the result
print("The expected waiting time until 30th arrival in")
print("a renewal process with normally distributed")
print("renewal cycle lengths is:", expected_waiting_time)
