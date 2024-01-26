# generate_random_numbers.py

import random
import sys

def generate_unique_random_numbers(num_numbers, start_range, end_range):
    return [random.randint(start_range, end_range) for _ in range(num_numbers)]

if __name__ == "__main__":
    # Check if the correct number of command-line arguments is provided
    if len(sys.argv) != 4:
        print("Usage: python generate_random_numbers.py <num_numbers> <start_range> <end_range>")
        sys.exit(1)

    # Parse command-line arguments
    num_numbers = int(sys.argv[1])
    start_range = int(sys.argv[2])
    end_range = int(sys.argv[3])

    # Generate random numbers by calling the function
    my_variable = generate_unique_random_numbers(num_numbers, start_range, end_range)

    # Print the generated random numbers
    print(' '.join(map(str, my_variable)))
