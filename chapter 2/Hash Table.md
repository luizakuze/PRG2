## Hash Table
- A hash table is an associative data structure, where the position of the data depends on its value. It is also referred to as a hash map or a hash dictionary. The term "hash" refers to the process of spreading or dispersing the data.
- Each data element has a unique key that is used to access and store the data in the table.

### Needs
- Searching for elements within a large dataset.
- Finding duplicates in a dataset.
- Storing and retrieving elements quickly from a large dataset.

### How It Works
A query or search is performed using the key of the data being searched. A hash function is used to calculate a numeric value from the key. This numeric value is then used to access a "bucket" or a position in an array where the data is stored. The desired data is obtained from the bucket during the search. The key advantage of a hash table is that the calculation of the position using the hash function is highly efficient, allowing for fast data retrieval.

### Implementations
- unordered_map: It is an implementation of a hash table, where data is stored as key-value pairs. The key is used to access the corresponding value.
- unordered_set: It is an implementation of a set, which only contains unique values. It is useful when checking for duplicates.

### Library
```
#include <unordered_map>
#include <unordered_set>
```

### Creating a Hash Table
```
// Key is of type string and value is of type integer
unordered_map<string, int> hashTable;
```

### Creating a Set
```
// Set that stores elements of type string
unordered_set<string> hashSet;
```

### Iterating Over Elements
```
for (auto& element : hashTable) {
  cout << element.first << ' ' << element.second;
}
```

Using auto makes the code cleaner and more readable, and the following is what it represents:
```
for (pair<string, int>& element : hashTable) {
  cout << element.first << ' ' << element.second; 
}
```

A third, less common and less recommended form:
```
auto it = hashTable.begin(); it != hashTable.end(); it++) {
  cout << it->first << ": " << it->second;
}
```

### Operations
- count: Checks how many times a particular data element appears in the hash table.
```
// Read pairs of values from a file
// Each pair consists of a product name and its quantity
while (file >> product >> quantity) {

  // If the key (product name) already exists in the hash table (i.e., already present in the set of data)
  if (totals.count(product) > 0) {

    // Access the associated value and add the read quantity to it
    totals[product] += quantity;

  } else {

    // Otherwise, store the read quantity and associate it with the product name
    totals[product] = quantity;
  }
}
```
### Map vs. Set
Maps and sets are similar to hash tables, but the main difference is that they are already ordered. They are implemented internally as binary search trees.
