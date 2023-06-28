## Queues
- A queue is a linear data structure that stores elements in a sequence. The location of an element does not depend on its value, and its position in the sequence does not alter its value.
- Queues follow the behavior of FIFO (First In First Out).

### Applications of Queues
- Process scheduling
- Data waiting to be processed
- Solving mapping problems

### Library
```
#include <queue>
```

###Creating a Queue
```
// Queue that stores integers
queue<int> num;

// Queue that stores strings
queue<string> str;
```

### Operations
- push: Enqueues an element.
- pop: Dequeues an element (removes the first element that was enqueued, following the FIFO order).
```
num.push(1);
num.push(4);
num.push(10);
num.pop();

str.push("Luiza");
str.push("Kuze");
str.pop();
```

- front: Returns the element at the front of the queue.
- back: Returns the element at the back of the queue (the last enqueued element).
```
cout << "Last enqueued element (end of the queue): " << num.back() << endl;
cout << "First enqueued element (beginning of the queue): " << num.front() << endl;
```

- size: Returns the size of the queue (the number of elements stored in it).
- empty: Returns true if the queue is empty, and false otherwise.
```
cout << "Length of the number queue: " << num.size() << endl;
cout << "Length of the string queue: " << str.size() << endl;

while (!num.empty()) {
   cout << "Number: " << num.front() << endl;
   num.pop(); // Dequeues a number
}
```
