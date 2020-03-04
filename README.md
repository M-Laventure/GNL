# Get_Next_Line

GNL is a project consisting in writing the function get_next_line which will return the next_line in a file while keeping the current position through the file.

These are some constraints or additional feature for the project:


* We cannot come back in the file descriptor. You can only move forward in the
  file descriptor. 
* The only functions allowed are *read*, *free*, *malloc*. *lseek* is forbidden.
* No global variable.
* you can read multiple file descriptors at the same time (which implies a
  buffer).
* Memory leaks are not allowed.
* The size of the buffer can be modified.

## How to run and test get_next_line.c

Clone this repo : git clone https://github.com/M-Laventure/GNL
	
Follow these steps in your Shell 

```Shell
make -C libft/ fclean && make -C libft
gcc -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
gcc -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
gcc -o gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
```

### Testing

Make sure the tests files are into the repo, feel free to create your own test.

To run the executable : ```./gnl testfile.txt```
