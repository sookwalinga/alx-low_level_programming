## 0x0E. C - Structures, typedef

### What are structures, when, why and how to use them.

Structures in C are a way of defining a user-defined data type that can hold multiple variables of different types under a single name. A structure is a collection of variables of different types, referred to as members, grouped together under a single name. They are used to organize and group related data items, making it easier to manage and manipulate complex data structures.

Example of a structure definition:

```
struct person {
    char name[20];
    int age;
    float height;
};
```

This declares a structure named person that has three members: a character array named name with a maximum size of 20 characters, an integer named age, and a float named height. To declare a variable of type person, we would write:

` struct person p1 = { "Alice", 25, 1.65 };`

Structures are often used to represent real-world objects or concepts in programming. For example, a car structure might contain members for the make, model, year, color, and engine size of a car.

### How to use typedef

The typedef keyword in C is used to create an alias for a data type. This is often used to create a shorter or more descriptive name for a complex or frequently used data type. For example:

```
typedef struct person {
    char name[20];
    int age;
    float height;
} Person;
```

This creates an alias Person for the struct type struct person. Now, instead of declaring a variable of type struct person, we can declare it using the Person alias:

`Person p1 = { "Alice", 25, 1.65 };`

This makes the code easier to read and reduces typing errors.

In summary, structures are used to group related data items under a single name, while typedef is used to create an alias for a data type to make it easier to use and read in code.
