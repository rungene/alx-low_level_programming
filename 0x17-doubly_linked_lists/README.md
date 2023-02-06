# 0x17. C - Doubly linked lists

## Resources

**Read or watch:**

- [What is a Doubly Linked List](https://www.youtube.com/watch?v=1Lfv5tUGsn8)

# Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General

- What is a doubly linked list 
- How to use doubly linked lists
- Start to look for the right source of information without too much help

# Copyright - Plagiarism

- You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work. 
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

# Requirements

## General

- Allowed editors: vi, vim, emacs
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, printf and exit
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called lists.h
- Don’t forget to push your header file
- All your header files should be include guarded

# More Info

Please use this data structure for this project:

```

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```
# Tasks

**0. Print list**
	
	Write a function that prints all the elements of a dlistint_t list.

	- Prototype: size\_t print\_dlistint(const dlistint\_t *h);
	- Return: the number of nodes

**1. List length**
	
	Write a function that returns the number of elements in a linked dlistint_t list.
	- Prototype: size\_t dlistint\_len(const dlistint\_t *h);

**2. Add node**

	Write a function that adds a new node at the beginning of a dlistint_t list.

	- Prototype: dlistint\_t *add_dnodeint(dlistint_t \*\*head, const int n);
	- Return: the address of the new element, or NULL if it failed

**3. Add node at the end**
	
	Write a function that adds a new node at the end of a dlistint_t list.

	- Prototype: dlistint\_t *add\_dnodeint\_end(dlistint\_t \*\*head, const int n);
	- Return: the address of the new element, or NULL if it failed

**4. Free list**

	Write a function that frees a dlistint_t list.

	- Prototype: void free\_dlistint(dlistint\_t *head);

**5. Get node at index**

	Write a function that returns the nth node of a dlistint_t linked list.

	- Prototype: dlistint_t *get\_dnodeint\_at\_index(dlistint\_t *head, unsigned int index);
	- where index is the index of the node, starting from 0
	- if the node does not exist, return NULL

**6. Sum list**

	Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

	- Prototype: int sum_dlistint(dlistint_t *head);
	- if the list is empty, return 0
