# C/C++ Value Categories: lvalue, rvalue, and no value

## 1. lvalue (locator value)
- An expression referring to an object with an identifiable memory location.
- In C, typically appears on left side of assignment (destination), but can appear in other contexts.
- Address can be taken with `&` (except bit-field, register, or some other special case).
- Examples:
  - Variables: `int x;`
  - Array elements: `arr[0]`
  - Dereferenced pointers: `*ptr`
  - Struct members: `obj.member`, `p->member`

### lvalue rules
- Must denote an object or function (functions are glvalues too).
- Assignment targets must be modifiable lvalues (not const-qualified, not read-only, not rvalue).
- `const int y = 5;` is lvalue but non-modifiable.

### C++ refinement
- `glvalue` includes lvalues and xvalues
- `xvalue` (expiring value) has identity but can be moved from (e.g., `std::move(x)`).

## 2. rvalue (right value)
- A temporary value with no persistent object identity.
- Commonly seen on right side of assignment or in temporary expressions.
- Cannot generally take address (`&42` is invalid in C and C++). 
- Examples:
  - Literals: `42`, `3.14`, `"hello"`, `nullptr`
  - Arithmetic results: `a + b`, `x * 4`
  - Function returns by value: `int square(int x) { return x*x; }`

### rvalue properties
- Cannot be assigned to: `42 = a;` is invalid.
- Can initialize objects: `int v = a + b;`
- In C++: `prvalue` (pure rvalue) + `xvalue` form `rvalue` category.
- `rvalue` references: `T&&` binds to rvalues and xvalues.

## 3. no value (void / expression-without-value)
- Not an official C++ value category, but important in practice.
- Expression yields no data value.
- In C/C++ this is represented by type `void`.

### Typical no-value contexts
- `void` function calls: `void sayHello() { printf("Hello\n"); }`  
  - Expression `sayHello()` has no value, cannot be assigned: `int x = sayHello();` is invalid.
- Expression statements where result is discarded: `x = 5;` is an expression statement and the resulting value is ignored.
- Cast to `void`: `(void)printf("Hi");` prevents compiler warnings about discarded result.

## 4. Practical examples
```c
int a = 5;             // `a` is lvalue
int b = a + 3;         // `a + 3` is rvalue

arr[0] = 10;           // arr[0] lvalue target

int square(int x) { return x * x; }
int n = square(4);     // `square(4)` is rvalue

void sayHello() { puts("Hello"); }
sayHello();            // no-value expression
```

```cpp
#include <optional>

std::optional<int> opt;      // starts as no-value
if (!opt) {
    opt = 42;                // now has value
}

int x = 1;
int &&rr = std::move(x);     // `std::move(x)` is xvalue
int &&rr2 = 2;              // literal converted to prvalue/temporary and bound to rvalue reference
```

## 5. Key distinctions
- lvalue: has location; can usually appear on left side; can take address.
- rvalue: temporary; no stable location; appears right side; can initialize objects.
- no-value: `void`-typed expressions; no object result, cannot be used in value contexts.

## 6. Common errors
- `5 = a;` (rvalue on left)
- `(a + b) = 2;` (temporary rvalue cannot be assigned)
- `int z = sayHello();` (`sayHello` returns void)
- `int *p = & (a + b);` (cannot take address of rvalue)

## 7. Further reading
- C++ Value Categories (lvalue, xvalue, prvalue, glvalue)
- C standard: expressions and assignment constraints
- `std::optional` for safe no-value handling
