## Summary of Files and Strings

### Concept of Stream
The file is opened by identifying its pathname (path). The directory and file name are specified. <br>
Example: /home/luiza/main.cpp <br> The file can be opened for reading, writing, or both operations.
Read and/or write operations are performed. If both operations are performed, they occur successively as described.
The file is closed.
<br>

### Functioning
Libraries for working with files:

```
#include <errno.h>
#include <fstream>
```

<br>

### There are 3 classes for accessing files:
- ofstream - writing mode
- ifstream - reading mode
- fstream - reading/writing mode
<br>

Example in code:

- Creating an object "arq" of the "ifstream" class
```
ifstream arq("/users/luiza");
```

<br>

### Checking if the file was opened:
<br> If the file is not opened, it displays the error message that occurred.

```
if (!arq.is_open()) {
perror("Failed to open /etc/hosts");
return errno;
}
```
<br>

### Closing the File
In C++, the file does not need to be closed. It is closed automatically. <br> In pure C, the fclose(file_name) command is used to close the file.

### The getline function 
- Returns false when it fails to read a new line. <br> The code below uses this idea "while getline can read a line, do something with the content of 'line' ".

```
string line;
ifstream arq("test.txt");

while (getline(arq, line)) {
// do something with the content of "line"
}
```

### Reading Word by Word
Here, the >> operator extracts one word at a time from the file.

```
string word;
ifstream arq("test.txt");

while (arq >> word) {
// do something with the content of "word"
}
```