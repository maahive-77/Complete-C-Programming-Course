# String Functions in C: `strlen`, `strcpy`, `strcat`

![String Functions](relative/path/to/strings_functions.jpg)

## 1. **`strlen`**: Finds the Length of a String
- **Use**: Returns the number of characters in a string **excluding the null terminator (`\0`)**.
- **Prototype**:
  ```c
  #include <string.h>
  size_t strlen(const char *str);
  ```
- **Example**:
  ```c
  #include <stdio.h>
  #include <string.h>

  int main() {
      char str[] = "Hello, World!";
      printf("Length of string: %zu\n", strlen(str)); // Output: 13
      return 0;
  }
  ```
- **Important Note**: `strlen` doesn’t modify the string; it only calculates the length.

---

## 2. **`strcpy`**: Copies One String into Another
- **Use**: Copies the content of the source string into the destination string, **including the null terminator (`\0`)**.
- **Prototype**:
  ```c
  #include <string.h>
  char *strcpy(char *dest, const char *src);
  ```
- **Example**:
  ```c
  #include <stdio.h>
  #include <string.h>

  int main() {
      char src[] = "Hello, C!";
      char dest[20]; // Ensure the destination array is large enough
      strcpy(dest, src);
      printf("Source: %s\n", src);
      printf("Destination: %s\n", dest);
      return 0;
  }
  ```
- **Important Note**: Ensure the destination array has enough space to hold the source string, or it may lead to a buffer overflow.

---

## 3. **`strcat`**: Appends One String to Another
- **Use**: Concatenates (appends) the source string to the end of the destination string.
- **Prototype**:
  ```c
  #include <string.h>
  char *strcat(char *dest, const char *src);
  ```
- **Example**:
  ```c
  #include <stdio.h>
  #include <string.h>

  int main() {
      char str1[50] = "Hello, ";
      char str2[] = "World!";
      strcat(str1, str2); // Appends str2 to str1
      printf("Concatenated String: %s\n", str1); // Output: Hello, World!
      return 0;
  }
  ```
- **Important Note**: The destination string must have enough space to hold both the original and appended strings, including the null terminator.

---

## Comparison Table
| **Function** | **Purpose**                     | **Modifies String?** | **Null Terminator Included?** |
|--------------|---------------------------------|-----------------------|--------------------------------|
| **`strlen`** | Finds the length of a string    | No                    | Not applicable                |
| **`strcpy`** | Copies source string to destination | Yes                  | Yes                            |
| **`strcat`** | Appends source string to destination | Yes                  | Yes                            |

---

## Usage
This guide explains three basic string functions in C programming, with examples and key notes to ensure proper usage. Make sure to allocate sufficient memory for strings when using `strcpy` or `strcat`.
