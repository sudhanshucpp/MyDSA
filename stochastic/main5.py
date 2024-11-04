from scipy.stats import norm
import math

def rndwalk(p, q, j, k, n):
    if p + q < 1:
        r = 1 - p - q
        c = 0.5
    else:
        c = 1

    mean_val = p - q
    sd = math.sqrt(p + q - (p - q)**2)

    probability = norm.cdf((k + c - n * mean_val) / (sd * math.sqrt(n))) - \
                  norm.cdf((j - c - n * mean_val) / (sd * math.sqrt(n)))
    return probability

# Test the function
p = 0.3
q = 0.2
j = -1
k = 1
n = 100
result = rndwalk(p, q, j, k, n)
print("Result:", result)

