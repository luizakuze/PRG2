##  Templates for Generic Data Types

- Templates generalize data structures.
- It is the possibility for the structure to store any type of data that the user desires.

### List and stack declarations:
```
queue<string> q;
stack<int> s;
```

### Implementation wt Template
- The template declaration must be in a .h file.
- It should look something like this:

```
template <typename T> struct Vector {

// struct attribute declarations

};
arduino
Copy code
template <typename T> struct Vector {
int capacity; // how many data items can this vector currently hold
int items; // how many data items are stored in this vector
T* mem; // memory area to store data of type T
};
```