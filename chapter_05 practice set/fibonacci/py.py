def fibonacci(n):
    sequence = [0, 1]
    for i in range(2, n):
        sequence.append(sequence[i-1] + sequence[i-2])
    return sequence

print(fibonacci(10))  # Outputs: [0, 1, 1, 2, 3, 5, 8, 13, 21, 34]
