# FILEPATH: /path/to/file.py

def calculate_sum(numbers):
    """
    Calculates the sum of a list of numbers.

    Args:
        numbers (list): A list of numbers.

    Returns:
        float: The sum of the numbers in the list.
    """
    return sum(numbers)
# Basic Notes for Learning C++
This is a basic notes for learning C++.
## 1. Basic Syntax
## Scope Resulution Operater (::)
1. It is used to define a function outside a class.
2. It is used to access a global variable when there is a local variable with same name.
3. It is used to access a class's static variable.
4. It is used to access a class's static function.
5. It is used to define a namespace outside the scope of the namespace.
6. It is used to access a class's name hidden by a declaration of a variable in a function or block.
7. It is used to access a class's member when a class has overloaded member functions.
8. It is used to access a specific class's member when many classes have members with same name.

### For example:
```cpp
#include <iostream>
using namespace std;
int x = 10;
int main() {
    int x = 20;
    cout << "Value of global x is " << ::x << endl;
    cout << "Value of local x is " << x << endl;
    return 0;
}
```

## Type caste
converte one data type into another
### For example:
```cpp
double b = 34.5;
int c = (int) d;
or
int c = int (d);

or 34.5f --> float ,34.5l --> long double
```

## Reference Variables
Those Variables which refere to other Variable
### For example:
```cpp
float c = 34.5;
float &y = c;   // y is reference variable of c

cout<<y        // 34.5
```

## Manipulators
These are used to format the output.
1. endl             
2. setw()             
3. setprecision()
4. setfill()
5. setbase()
6. setiosflags()
7. resetiosflags()
8. setf() and unsetf()

```cpp
#include<iomanip>
cout<< "value of c is " << setw(4) << c << endl;  

//assiging 4 characters space
``` 

## inline functions 
C++ provides inline functions to reduce the function call overhead. An inline function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of the inline function call. This substitution is performed by the C++ compiler at compile time. An inline function may increase efficiency if it is small.

it is used to reduce the function call overhead.
it is request to a compiler and use only for few lines of code.
it helps us to fasten our execution if one function is called many times
            
### Sentex:
```cpp
inline int product (int,int);
```

### Cones:
1. Not racommended for larger functions because it will fillup cash memory very fasten
2. dont use it for recersive functions
3. dont use inline with static Variables


## Static 
static Variable are initialized once but will hold his value till program termination

### Sentex:
```cpp
static int num = 0;
```

## Function overloading
If multiple functions having `same Name` but different parameters then the function is called overloaded function
### For example:
```cpp
int volume (int a)
int volume (double a)
int volume (int a, int b)
```

## Classes 
Classes are user defined data types, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class.

### important points:

1. memory are allocated only when objects are created.
2.  C++ compiler only allocate new memory blocks for that object parts which are different from other,
            for same properties they allocate same or common mem blocks. 
           
### Static Data Members in Class: 

Also known as class Variables or Class property.
#### syntex:
```cpp
class Employee{
    static int count; // dont initialize it , as by defult it is initialized with zero
}; 

int Employee :: count = 1000; // init here, if required 
```
### Static Member Function:
Functions which only access static data members of class

#### syntex:
```cpp
static getData(void){
    cout << "count is  : "<<count<<end;
}

Employee :: getData(); // for result
```

### Array of objects:
if we need 1000 objects for Employee class, instead of making one by one making array is more fesible option

#### Sentex:
```cpp
Employee person[1000];
for (int i =0; i < 10000; i++)
{
    person[i].functions();
}
```

### Protected members:
They can be inherited.They can't be accessed directly (As like private members).
They can be accessed by any subclass (derived class) of that class.


### Inheritance:
It is a process of aquiring properties of one class to another class.

* Provide Reusability.
* Existing is called Base Class.
* New class is Derived Class.

#### Forms:
* Single Inheritance            : A -> B
* Multiple Inheritance          : A,B -> C
* Hierarachical Inheritance     : A -> B , C
* Multilevel Inheritance        : A -> B -> C
* Hybrid Inheritance            : A -> (A,B) -> D

### Constuctors in Derived Class: 
Constuctors are initaized accourding to the order of respactive classes declatation.

Constuctors of virutal class will be called first.

Constuctors of Multiple class will be called accourding to their level
For example:
```
    To call constructors in this order
    A -> B -> C
    class C : public A, public B
```
            
### Initialization list in Constructor:
If constructor takes an arguments then it will be initaized accourding to order of arguments.
#### For example:
```cpp
Class test{
    private:
            int a;
            int b;
    public:
            test(int value1 , int value2 ): a(value1), b(value2){

                //code
            } 

            test(int value1 , int value2 ): b(value1), A(value2){

            //code
            //This will give error as order is not same as declartion
        } 
};

```
#### Note:
pointer of base class can point to derived class, but we can only access base class elements

For example:
```
    BaseClass *Bptr;

    DerivedClass Dobj;
    Bptr = &Dobj;
```

*Now: `Bptr` -> only access BaseClass elements, and will through error when accessing DerivedClass elements*

***
Note: when function overloading occures in above case, then by adding *`virtual`* keyWord to BaseClass function
    compiler will call derived class function. 

    Rules for virtual functions:
    1. They can not br static
    2. They are accessed by object pointers
    3. Virtual function can be a friend of another class
    4. A virtual function of base class might not be used.
***

### Abstract Base Class:
That class which are only ment for Derived Class,we can not use to make objects of that class, but only use by other classes to derive itself.

It has at lest one pure virtual functions(or do-nothing functions)
#### For example:

```cpp
    virtual void display()=0;
```

This display function will required to define in derived class, otherwise it will through error

## Polymorphism: 

## Templates

Templates are used to create a generic function or class. The idea is to pass data type as a parameter so that we don’t need to write the same code for different data types.

##### Syntex

```cpp
    template <class T>
```

#### Template with multiple Parameters

If we want to handle multiple Parameters use below 

##### syntex

```cpp
    template <class T1, class T2>

    // Passing parameters

    myClass<char,float> obj('C',1.8);
```

#### Template with default Parameters

When no Paramters are passed to template default will execute

##### Syntex

```cpp
        template <class T1=int , class T2=char, class T3=float>
        
        // Passing Parameters

        myClass<> obj(5, 'A' , 7.8 );
```

# STL (Standard Template Library)

STL is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized. A working knowledge of template classes is a prerequisite for working with STL.

## Containers

Containers or container classes store objects and data. There are in total seven standard "first-class" container classes and three container adaptor classes and only seven header files that provide access to these containers or container adaptors.

### Types of Containers

1. **Sequence Containers:** implement data structures which can be accessed in a sequential manner. (linear Fashion).
 `eg: vector, list, deque, arrays.`
2. **Associative Containers:**(Direct Access, Fast Assess) implement sorted data structures that can be quickly searched (O(log n) complexity).
`eg: set, multiset, map, multimap.`
3. **Unordered Associative Containers:** (Derived Containers) implement unordered data structures that can be quickly searched
`eg: Queue, Stack, Priiority Queue, unordered_set, unordered_multiset, unordered_map, unordered_multimap.`



## Algorithms

Algorithms act on containers. They provide the means by which you will perform initialization, sorting, searching, and transforming of the contents of containers.

## Iterators

Iterators are used to step through the elements of collections of objects. These collections may be containers or subsets of containers.
