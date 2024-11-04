# Define parameters
rate = 3  # lambda (rate of the process)
n = 30    # number of arrivals

# Calculate expected waiting time
expected_waiting_time = n / rate

# Print the result
print("The expected waiting time until 30th arrival in a renewal")
print("process with exponentially distributed renewal cycle")
print("lengths is:", expected_waiting_time)
