## Stacks
- A stack is a linear data structure that stores elements in a sequence.
- The location of an element does not depend on its value.
- Stacks follow the behavior of LIFO (Last In First Out).

### Library
```
#include <stack>
```
### Creating a Stack
```
// Stack that stores integers
stack<int> stack;
```
### Operations
- push: Pushes an element onto the stack.
- pop: Pops (removes) the top element from the stack (removes the most recently pushed element, following the LIFO order).
```
stack.push(1);
stack.push(2);
stack.push(3);
stack.push(4);

// LIFO (Last In First Out)
// Here, 4 is popped from the stack
stack.pop();
```

top: Returns the top element of the stack (the most recently pushed element).
```
cout << "Last pushed element (top): " << stack.top() << endl;
```

size: Returns the size of the stack (the number of elements stored in it).
empty: Returns true if the stack is empty, and false otherwise.
```
cout << "Length of the number stack: " << stack.size() << endl;

while (!stack.empty()) {
   cout << "Number: " << stack.top() << endl;
   stack.pop(); // Pops an element
}
```
