## Lists
- Dynamically stored in memory, organizing themselves in a sequence.
- Any data in the list can be accessed regardless of its position.
- Each stored data has references to both its successor and predecessor, so when you want to access data in the middle of the list, it must be done either from the beginning or the end of the list.
 
### Applications
- Storing a set of data whose quantity cannot be known beforehand.
- When you need to remove data from the beginning (push_front) or the middle, the list is better than a vector. If you only need to modify data that arrives at the end, the vector is better.
- Storing data whose memory order is frequently modified.
- Examples include databases and music playlists.

### Library
````
#include <list> lista;
````

### Creating a List
```
// List that stores strings
list <string> names;
```

### Commands
- push_front: Adds data to the beginning of the list.
- push_back: Adds data to the end of the list.
- pop_front: Removes data from the front of the list.
- pop_back: Removes data from the end of the list.
```
list.push_front("luiza");
list.push_back("kuze");
list.push_back("oi");

list.pop_front(); // Removes the string "luiza"
list.pop_back(); // Removes the string "oi"
```

Some list operations require ITERATORS as parameters, such as the insert and erase commands.
- begin(): Beginning of the list.
- back(): End of the list.
- insert: Inserts data at a certain position.
- erase: Removes one or more data from a specific position.
```
// List with some initial values
list <string> list = {"luiza", "lulu", "luizinha"}

// Get the iterator of the first data in the list
auto it = list.begin();

// Incrementing the iterator
it++;

// Add the string "hello world" at position 2 in the list
// Placed in front of "lulu"
list.insert (it, "hello world");
```

- size: Returns the length of the list.
- empty: Returns 'true' if the list is empty, and 'false' otherwise.
```
cout << "The string list has a length of " << list.size() << endl;

while (!list.empty()) {
   cout << "String: " << list.front() << endl;
   list.pop_front(); 
}
```
clear: Removes all data from the list at once.
```
list.clear();
```

### Sort Method
- sort: Sorts elements in a sequence in ascending order.
- reverse: Sorts elements in descending order.

Initial Syntax:
```
sort(begin, end, comparison);
```
Explanation <br>
"begin" is a pointer to the first element of the sequence to be sorted, "end" is a pointer to the element following the last <br> element of the sequence, and "comparison" is an optional function that specifies how the elements should be compared for sorting.
<br>
If "comparison" is not provided, sort uses the '<' operator. This means that the elements will be sorted in ascending order.
<br> <br>

Example 1
```
numeros.push_back(21);
numeros.push_back(8);
numeros.push_back(12);
numeros.push_back(17);

// ordena a lista
numeros.sort();

// mostra o conteúdo da lista
for (auto & x: numeros) {
   cout << x << endl;
}
```
Example 2

```
#include <algorithm>
#include <vector>
#include <iostream>

bool greater(int a, int b) {
    return a > b;
}

int main() {
    std::vector<int> v = {4, 2, 7, 1, 3};
    std::sort(v.begin(), v.end(), greater);
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

```
