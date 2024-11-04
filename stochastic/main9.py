import numpy as np
from scipy.linalg import eig

# Define the transition matrix
t = np.array([
    [0, 0.5, 0.5, 0],
    [0.25, 0, 0.5, 0.25],
    [2/3, 1/3, 0, 0],
    [1/3, 1/3, 1/3, 0]
])

# Calculate the stationary distribution
def stationary_distribution(matrix):
    # Transpose the matrix and get eigenvalues and eigenvectors
    evals, evecs = eig(matrix.T)
    
    # Find the eigenvector with eigenvalue 1 (or close to 1)
    stationary_vector = evecs[:, np.isclose(evals, 1)]
    
    # Normalize the eigenvector to get probabilities that sum to 1
    stationary_vector = stationary_vector[:, 0]
    stationary_vector = stationary_vector / stationary_vector.sum()
    
    return stationary_vector.real

# Get the stationary distribution
ans = stationary_distribution(t)

# Print the result
for value in ans:
    print(f"{value:.4f}")

