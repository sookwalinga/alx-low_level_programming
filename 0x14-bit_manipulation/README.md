## 0x14. C - Bit manipulation

### How to manipulate bits and use bitwise operators in C?

In C, we can manipulate bits and use bitwise operators using the following operators:

1. Bitwise AND (&): The '&' operator takes two operands and performs the bitwise AND operation between the bits of these operands. The result of the operation is a value that has a 1 in each bit position where both operands have a 1. For example:

```
int a = 5;    // 0b0101
int b = 3;    // 0b0011
int c = a & b;  // 0b0001
```

2. Bitwise OR (|): The '|' operator takes two operands and performs the bitwise OR operation between the bits of these operands. The result of the operation is a value that has a 1 in each bit position where at least one of the operands has a 1. For example:

```
int a = 5;    // 0b0101
int b = 3;    // 0b0011
int c = a | b;  // 0b0111
```

3. Bitwise XOR (^): The '^' operator takes two operands and performs the bitwise XOR operation between the bits of these operands. The result of the operation is a value that has a 1 in each bit position where only one of the operands has a 1. For example:

```
int a = 5;    // 0b0101
int b = 3;    // 0b0011
int c = a ^ b;  // 0b0110
```

4. Bitwise NOT (): The '' operator takes a single operand and performs the bitwise NOT operation on its bits. The result of the operation is a value that has the complement of each bit in the operand. For example:

```
int a = 5;     // 0b0101
int b = ~a;    // 0b1010
```

5. Left shift (<<): The '<<' operator takes two operands and shifts the bits of the first operand to the left by the number of positions specified by the second operand. The result of the operation is a value that has the shifted bits. For example:

```
int a = 5;     // 0b0101
int b = a << 2;  // 0b010100
```

6. Right shift (>>): The '>>' operator takes two operands and shifts the bits of the first operand to the right by the number of positions specified by the second operand. The result of the operation is a value that has the shifted bits. For example:

```
int a = 5;     // 0b0101
int b = a >> 1;  // 0b0010
```

These operators can be used in a variety of applications, such as manipulating binary data or performing low-level optimizations in software.
