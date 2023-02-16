from cs50 import get_int

# while height is not between 1 and 8, get int, other wise break the loop
while True:
    height = get_int('Height: ')
    if height < 1 or height > 8:
        True
        print('Height between 1 and 8')

    else:
        break
# for each row in range of height
for row in range(height):
    # print spaces, signs (row + 1) times, then 2 spaces and then another signs (row + 1) times.
    space = height - row - 1
    print(' ' * (space), end='')
    print('#' * (row + 1), end='')
    print('  ', end='')
    print('#' * (row + 1))

