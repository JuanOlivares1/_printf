# _printf

<a href="https://imgbb.com/"><img src="https://i.ibb.co/5Tj4yKN/deabe6bd-c401-48b8-a9e7-a72d779c5694.jpg" alt="deabe6bd-c401-48b8-a9e7-a72d779c5694" border="0"></a>

_printf is a project made for holberton school where the famous function printf from C language is replicated.

How to use printf: https://linux.die.net/man/3/printf

### Usage

The use of this function is exactly the same as printf from C

```txt
_printf("example...  int:%i,  char:%c,  string:%s,  hexa:%X",  1,  's', "hello", 15);

```
outputs:
```txt
example... int:1, char:s, string:hello, hexa:F

```
### Installation

1- Clone this repo.

2- Put all files of this repository in the same folder of your C project. 

3- Include the following header in your C file:
```txt
#include holberton.h
```
example:
```txt
#include "holberton.h"

int main(void)
{
  _printf("example...  int:%i,  char:%c,  string:%s,  hexa:%X",  1,  's', "hello", 15);
  return (0);
}
```

### Valid arguments for this function
| Argument        | output           | example  |
| ------------- |:-------------:| -----:|
| c             | char           | 'a' |
| i or d       | int           |   12 |
| s             | str      |    "hell yeah" |
| x             | lower hexadecimal       |    fd98a |
| X             | upper hexadecimal       |    FD98A |
| o             | octal       |    7 |
| u             | unsigned int       |    7 |

for more info read our man page:
```txt
man ./man_3_printf
```
### Authors
- Daniel Perez https://github.com/d1sd41n
- Juan Olivares https://github.com/JuanOlivares1

License
----

MIT