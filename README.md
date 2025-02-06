<div align="center">

</br>
</br>

<strong>Libft - My First C Library 📚</strong>

<p>This is my very first C library project, where I implemented a series of essential functions from scratch! Through this project, I gained valuable insights into memory management, safety, and the inner workings of C programming 🛠️</p>

</br>

</div>

## 🚀 Project Overview

Libft is a custom library I developed to deepen my understanding of key C concepts such as memory management, linked lists, and memory safety. I learned how to allocate and free memory, handle malloc errors, and ensure there are no memory leaks using tools like Valgrind. This library includes important functions that can be integrated into various C programs.

</br>

## 🏆 Key Takeaways

- **Memory Management:** Gained an understanding of memory allocation, deallocation, and safety practices.
- **Linked Lists:** Learned how to implement, manipulate, and free linked lists properly.
- **Memory Leaks:** Used tools like Valgrind to identify and fix memory leaks.
- **Malloc Protection:** Ensured all malloc calls are checked and handled safely.

</br>

## 📂 Files and Functions

Below is a list of the implemented functions along with their descriptions and key takeaways:

</br>

### 🔢 Conversion Functions

- `ft_atoi.c` - Converts a string to an integer. Learned about ASCII values and overflow protection.
- `ft_itoa.c` - Converts an integer to a string. Improved memory allocation handling.

</br>

### 🛠️ Memory Management

- `ft_bzero.c` - Sets a block of memory to zero.
- `ft_calloc.c` - Allocates memory and initializes it to zero. Learned how to protect malloc calls.
- `ft_memchr.c` - Searches for a byte in a memory block.
- `ft_memcmp.c` - Compares two memory blocks.
- `ft_memcpy.c` - Copies memory from one location to another.
- `ft_memmove.c` - Similar to memcpy but handles overlapping memory areas.
- `ft_memset.c` - Fills a block of memory with a specific value.

</br>

### 🔤 Character and String Functions

- `ft_isalnum.c` - Checks if a character is alphanumeric.
- `ft_isalpha.c` - Checks if a character is alphabetic.
- `ft_isascii.c` - Checks if a character belongs to the ASCII set.
- `ft_isdigit.c` - Checks if a character is a digit.
- `ft_isprint.c` - Checks if a character is printable.
- `ft_tolower.c` - Converts a character to lowercase.
- `ft_toupper.c` - Converts a character to uppercase.

</br>

### 🔍 String Manipulation

- `ft_strchr.c` - Locates a character in a string.
- `ft_strdup.c` - Duplicates a string. Learned how to dynamically allocate memory.
- `ft_striteri.c` - Applies a function to each character of a string.
- `ft_strjoin.c` - Concatenates two strings into a new memory allocation.
- `ft_strlcat.c` - Concatenates strings with buffer size protection.
- `ft_strlcpy.c` - Copies strings with buffer size protection.
- `ft_strlen.c` - Calculates the length of a string.
- `ft_strmapi.c` - Maps a function to each character of a string.
- `ft_strncmp.c` - Compares two strings up to a given length.
- `ft_strnstr.c` - Searches for a substring within a string.
- `ft_strrchr.c` - Finds the last occurrence of a character in a string.
- `ft_strtrim.c` - Trims characters from the beginning and end of a string.
- `ft_substr.c` - Extracts a substring from a string.
- `ft_split.c` - Splits a string into an array based on a delimiter.

</br>

### 📝 File Descriptor Functions

- `ft_putchar_fd.c` - Writes a character to a file descriptor.
- `ft_putendl_fd.c` - Writes a string followed by a newline.
- `ft_putnbr_fd.c` - Writes an integer to a file descriptor.
- `ft_putstr_fd.c` - Writes a string to a file descriptor.

</br>

### 🔗 Linked List Functions (Bonus)

- `ft_lstadd_back_bonus.c` - Adds an element to the end of a linked list.
- `ft_lstadd_front_bonus.c` - Adds an element to the front of a linked list.
- `ft_lstclear_bonus.c` - Clears a linked list and frees memory.
- `ft_lstdelone_bonus.c` - Deletes a single node from a linked list.
- `ft_lstiter_bonus.c` - Iterates through a linked list and applies a function to each node.
- `ft_lstlast_bonus.c` - Finds the last node of a linked list.
- `ft_lstmap_bonus.c` - Creates a new linked list by applying a function to each node.
- `ft_lstnew_bonus.c` - Creates a new linked list node.
- `ft_lstsize_bonus.c` - Counts the number of elements in a linked list.
