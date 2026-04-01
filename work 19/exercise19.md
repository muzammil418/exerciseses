Worksheet 19
Date: 18th of March, 2026
Points: 10

Note:
1. Do not write code that you don't understand or would not be able to explain yourself. This includes the syntax of the program, the interpreation of the code including functions, datastructures, and algorithms used throughout the program.
2. Use any and all tools/techniques necessary (including AI) to ask questions, understand code, or ask for clarifications, or ask for syntax, or ask for how things work. However, you may not use AI to have it write the code for you. In other words, you write the code -- the AI may help with understanding, clarifications ONLY.

===========================================================================================

## Assignment: Discovering Why Linked Lists Exist

# Part A — Singly Linked Lists

### Question 1 — The Cost of Finding a Position

A singly linked list contains **N nodes**.

1. If you want to access the **10th node**, where must you start?
Ans. always start from the head

2. How many nodes must be visited to reach the 10th node?
Ans. total 10th nodes

3. If the list contains **100 nodes**, what is the **maximum number of iterations** required to reach the last node?
Ans. total 100th iterations

Explain why linked lists **cannot jump directly** to a position like arrays can.
Ans. linked list does not store element in contiguous memory 

---

### Question 2 — Efficient Insertion

Suppose you already have a pointer to a node called `current`.

You want to insert a new node **after `current`**.

1. How many pointer updates are required to insert the new node?
Ans. total two pointer are updated

2. Does the size of the list (N) affect this number?
Ans. no the size of the list does not effect thi number

3. What advantage does this give linked lists compared to arrays?
Ans. linked list are fast for insertation and  deletion in the middle because you does not move the other element

---

### Question 3 — Frequent Insertions

Consider a program that must **insert thousands of new elements at the beginning** of a sequence.

1. In an **array**, what usually needs to happen when inserting at the beginning?
Ans. in arrays inserting in the beginning require shifting all element

2. In a **singly linked list**, how many nodes must be moved?
Ans. in a singly list no nodes are moved

3. How many pointer changes are required?
Ans. total two pointer changes

Explain why linked lists can be better for this type of workload.
Ans. because in a linked list we dont need to shift nodes and we only need to change two pointers

---

### Question 4 — Finding the Previous Node

In a singly linked list, each node only knows the **next node**.

1. If you have a pointer to node number **8**, can you directly access node **7**?
Ans. NO

2. If not, where must you start to find it?
Ans. we must start from the head

3. How many nodes might you need to traverse in the worst case?
Ans. total eight nodes visited

Explain why this limitation exists.
Ans. because a singly list only stores one pointer per node we cant go backwards

---

### Question 5 — Reversing the List

You want to reverse a singly linked list containing **N nodes**.

1. How many iterations are required to reverse the list?
Ans. N iterations

2. Why must every node be visited?
Ans. every nodes must be visited because its next pointer needs to be moved

3. During reversal, what happens to the **direction of each `next` pointer**?
Ans. the direction of each next pointer is reversed

Explain the basic idea of how the algorithm works.
Ans. it reverse the next pointer to the preivious node then moves forward and in the end preivious node  become new head

---

# Part B — Doubly Linked Lists

### Question 6 — Why Add a Second Pointer?

A doubly linked list node contains:

* `next`
* `prev`

1. What new ability does the `prev` pointer give the list?
Ans. we can go backwards by using prev pointer

2. What is the cost of adding this extra pointer?
Ans. adding a pointer has a cost in memory and complexity

3. Why might some programs still prefer singly linked lists?
Ans. a singly linked list offers simplicity and efficiency
 
---

### Question 7 — Moving Backwards

Imagine a music player that allows users to press **Next Song** and **Previous Song**.

1. Why would a singly linked list make the **Previous Song** operation difficult?
Ans. because we cant go backward in a singly list

2. How does a doubly linked list solve this problem?
Ans. a doubly linked list solves this problem by providing a prev pointer in each node

Describe how the pointers make this possible.
Ans. the prev pointer allow us to directly access the pervious node and the next all to go forward

---

### Question 8 — Deleting a Known Node

Suppose you already have a pointer to the node you want to delete.

**Singly Linked List**

1. Why might you still need to search for another node before deleting it?
Ans. because you need to find the preivious node to update the pointer

**Doubly Linked List**

2. Which two pointers must be updated to remove the node?
Ans. prev and next pointer

Explain why deletion is often easier in doubly linked lists.
Ans. because you dont need to find the prev preivious

---

### Question 9 — Using Both Ends of the List

Some doubly linked lists store both:

* a **head pointer**
* a **tail pointer**

1. How many iterations are required to insert a node **at the end**?
Ans. zero iterations

2. How many iterations are required to access the **last node**?
Ans. zero iterations

3. Why is this useful for applications such as queues?
Ans. because its allow fast insertation and removal

---

### Question 10 — Reversing the List

Consider reversing a list with **N nodes**.

1. How many iterations are required to reverse a **singly linked list**?
Ans. N iterations are required

2. How many iterations are required to reverse a **doubly linked list (with a tail pointer)**?
Ans. N iterations are required

3. Even though both require visiting every node, which one is **conceptually simpler**, and why?
Ans. singly linked list is simpler because each node had  only one pointer

Hint: Think about how many pointers are available at each node.

---

# Final Challenge — Choosing the Right Structure

You must design three different programs:

1. A **playlist manager** where users frequently move forward and backward between songs.
2. A **log system** where new events are constantly added to the beginning of the list.
3. A **dataset where random elements must be accessed quickly by index**.

For each case, decide whether you would use:

* an **array**
* a **singly linked list**
* a **doubly linked list**

Explain **why your choice is the best**.

Ans1. Playlist manager:  a double linked list is best because it support efficient traverse

Ans2. log system:  a singly linked list is best because it allow fast insertation at the beginning 

Ans3. dataset where random elements must be accessed quickly by index:  an array is best because it provides efficient random access
