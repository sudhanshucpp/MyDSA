import sympy as sp
from math import factorial

# Define symbolic variables
z, s, p, q = sp.symbols('z s p q', real=True)

# Define the function
f = z / ((-s * (z**2) * p) + (1 - (s * (1 - p - q))) * z - q * s)

# Set values for constants
n = 10
k = 4
f = f.subs(p, 0.49)
f = f.subs(q, 0.44)

# Differentiate f with respect to 's' and 'z'
for _ in range(n):
    f = sp.diff(f, s)
for _ in range(k):
    f = sp.diff(f, z)

# Extract the coefficient of s*z
f = f.coeff(s * z)

# Calculate the required probability using generating function
f = f / (factorial(n) * factorial(k))
f = f.subs(z, 1)
f = f.subs(s, 1)

# Print the result
print("Required probability using Generating Function:", float(f))
