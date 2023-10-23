# simple_shell

**This is a simple version of the Linux shell used to do common operations and commands**

it is fully implemented with C programming language using only system commands 
and all files are written with Betty code style and documentation and 
free from any memory leak problems.

it is only supported in **Linux OS** due to some OS function calls

it has two modes of running
- interactive
- non-interactive

<br />
<br />

### This is an initial version of the project
#### It doesn't support:
> - pipes
> 
> - lazy AND, OR operators ```&&``` and ```||```
> 
> - wild cards
> 
> - input from files
  
---

# Installation:

clone the repo into any directory

```bash
git clone https://github.com/A-Yehia19/simple_shell.git
```

<br />

go into the project directory
```bash
cd simple_shell
```


all codes are compiled and ready to use in the **hsh** file

---

# Run Program:

- for interactive mode:
```bash
./hsh
```

press enter then start typing your commands on the screen

<br />

- for non-interactive mode:

```bash
echo "ls -l" | ./hsh
```

it will run the ```ls -l``` command only as an example

