## Memory Allocation

- **Static** <br>

The compiler knows how much memory each data type requires and reserves the appropriate amount of memory for each variable.

- **Dynamic** <br>

The amount of data to be stored is unknown.
<div align="center">

<img align="center" width="500px" src="https://github.com/luizakuze/Prog2/assets/111708035/7d9206fe-7afc-4d13-b230-d8fecb98a397">

</div>

<br>

### Memory
- **Stack** <br>

Where variables and function parameters are stored.

- ** Heap** <br>

Where dynamic memory allocation is performed. In the heap, the programmer has control over the amount of memory, with only the machine's storage capacity as the limit.
```
"1<<20"
Means shifting the number 1 by 20 positions to the left.

bzero(mem, size);
Writes zeros to the "mem" for a specified size.
```
### Unallocated Memory Area, Error Message:
The processor itself triggers the error. In this case, Linux determines the maximum stack memory.

When functions call other functions, this error can occur. <br> Each function call requires allocating more memory ("StackOverflow").

**Stack test:** 
<div align="center">

<img align="center" width="500px" src="https://github.com/luizakuze/Prog2/assets/111708035/b22d319e-ab80-4607-aae1-bc52ac123e3b">

</div>

<br>

**Heap test:** 

<div align="center">

<img align="center" width="500px" src="https://github.com/luizakuze/Prog2/assets/111708035/aea42518-a640-42f3-8ee2-1e5ee58516db">

</div>


### How does dynamic memory allocation work?

**Heap**
<div align="center">

<img align="center" width="500px" src="https://github.com/luizakuze/Prog2/assets/111708035/dda8053b-2ee2-41b2-b771-4f0abbe4d516">

</div>

<br>

**Stack**
<div align="center">

<img align="center" width="500px" src="https://github.com/luizakuze/Prog2/assets/111708035/80dd8bb4-ae05-4702-a11f-6cb7f161b193">

</div>

<br>


It is not possible to reallocate memory (expand it). <br> Instead, you need to create a new space and copy all the elements to this new space, which should have more available memory.

---

### Pointer Syntax and Memory

- **In C++**
<br> Conventional:
int x; <br>
Dynamic Allocation: int * p = new int; <br>(the keyword "new" means "allocate memory dynamically as per the required data size").

- **In C** <br>
int * = (int*)malloc(sizeof(int));

- **In C++** <br>
Conventional: int v[10]; <br> Dynamic Allocation:
int * pv = new int[10];

- **In C** <br>
int * = (int*)malloc(10*sizeof(int));
```
Annotations for dynamic allocation:
Allocates memory.
Initializes the memory area if the instruction is provided.
```