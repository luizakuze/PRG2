## Data structure 

In Chapter 3 of the repository, we discussed the development of data structures, specifically the implementation of a dynamic array and a hash table.

We began by introducing the concept of a dynamic array, which allows for the alteration of the stored data quantity, unlike a static array. We discussed the requirements and functionalities necessary for this structure, such as dynamic memory allocation.

Next, we delved into the implementation of the dynamic array structure, using templates to enable the generalization of the stored data type. We explored the attributes of the structure, such as capacity and item count, as well as dynamic memory allocation to store the data.

We then turned our attention to the implementation of a hash table, which aims to create a structure similar to an unordered map. We discussed the importance of a good hash function, which should be computationally efficient and evenly spread indices among possible output values. We provided examples of hash functions and emphasized the need to avoid collisions, where two different keys have the same index in the table.

We discussed table expansion, which occurs when the current size reaches the load factor. We explored the calculation of the load factor and the need to expand the table to accommodate new elements.

Finally, we discussed collision handling techniques, highlighting chaining as the chosen approach, where keys with the same index are stored in a linked list. We also mentioned other techniques such as open addressing with linear probing, quadratic probing, and double hashing.