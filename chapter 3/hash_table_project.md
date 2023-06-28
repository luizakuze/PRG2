## Hash Table Project Notes

### Objective
Implement a data structure similar to unordered map.

### Hash Function
The hash function has the following implementation requirements:

-Be computationally lightweight.
- Spread the indices uniformly among all possible output values.
- In addition to these requirements, the position of the data will be calculated using the following formula:

```
hN(k) = k mod N
```
Where mod means the remainder of the division, and K is an integer.

Example of a hash function:
```
unsigned int hash(const string& key, unsigned int N) {
unsigned int total = 0;

for (auto& c : key)
total += c;

return total % N;
}
```

Another example: <br>
string s = "ABC" ----> in ASCII, 65 = A, 66 = B, and 67 = C <br>
Taking N = 32, <br>
(65 + 66 + 67) = 198 ---> 198 mod 32 = 6 <br> <br>
This is not a good solution as it causes many collisions in a portion of the table. <br>

The simpler solution:
```
unsigned int hash_simple(const string& key, int N) {
unsigned int sum = 0;

    for (auto& c : key) {
      // Shift the previous sum value 8 bits to the left
      sum = ((sum << 8) + c) % N; 
    }
    return sum % N;  
}
```
- The Fletcher32 algorithm is also a good option, an existing hashing algorithm.

### Table Expansion
The table is expanded whenever the current size of the table is equal to the load factor. <br>
<br> This load factor can be obtained from the following ratio:

- Load Factor: Size / number of rows <br>
- Number of rows = "buckets"

If you look in the C++ library, there is a topic called "buckets" in "unordered_map". <br>
There you can find its value in a real table.

### Collision Handling
Collision occurs when the hash is calculated and the calculated position is the same for the key. <br>
"It happens when two different keys have the same index in the table."

There are several approaches to handle collisions, and one example is the use of cryptographic hash functions, which are used for generating digital keys and digital signatures.

Chosen Approach: Instead of storing a key-value pair, store it in a list. <br>
Consequences -> Linear search to find the additional data because now there is a list instead of directly accessing the data. Here, the need for a good hash function is evident, as the data must be well separated to avoid having a very large list in a single column of the table (which would be costly to traverse).
<br> It could be a list or a vector, but the list optimizes the code. The last accessed data will move to the beginning of the hash table. Some data is used more frequently than others.

### Some techniques to avoid collisions:

#### Open Addressing
1 - Hash function to identify the table row to store a key. <br>
2 - If that row is occupied, it looks for an alternative position in the table (this can be done more than once).
<br> 3 - If it doesn't find an alternative position, the table is considered full and needs to be expanded.

#### Linear Probing

1 - It calculates the hash, and if the position is occupied, it stores the key in the next available position. It works like a circular queue. <br>
2 - If it traverses all the rows and doesn't find a free location, it indicates that the table is full.

#### Quadratic Probing

Similar to linear probing, but if the position is occupied, it calculates the new position based on a quadratic polynomial.