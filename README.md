# Dynamic Array for Arduino
## Introduction
This is simple generic Link list for Arduino in C++, without need any requirements.

## How to make object?
Since this is generic class you can set type of array in initialization. type must be defined in `<>`
```c++
list<int> obj;
```

## Methods
* [append](#append)
* [display](#display)
* [insertStart](#insertStart)
* [addNewValueAtIndex](#addNewValueAtIndex)
* [setValueForIndex](#setValueForIndex)
* [valueForIndex](#valueForIndex)
* [deleteFirst](#deleteFirst)
* [deleteLast](#deleteLast)
* [deleteValueAtIndex](#deleteValueAtIndex)
* [length](#length)

### append
append method will add new given element to the end of array.
```c++
obj.append(23);
```

**See Also:** [insertStart](#) and [addNewValueAtIndex](#)

### display
this method **only** works on default c++ iostream, If you wants to use it in Arduino you should change it in your way.

### insertStart
adding new element to top of list, You can’t use it while the list is empty.
```c++
obj.insertStart(50);
```
**See Also:** [append](#append)  to add first element.

### addNewValueAtIndex
inserting new element to the specific position, the position must be zero index.
```c++
obj.addNewValueAtIndex(5, 60);		// adding 60 into the positon of 5
```
**See Also:** [setValueForIndex](#setValueForIndex) 

### setValueForIndex
changing value of element at specific position, the position must be zero index.
```c++
obj.setValueForIndex(5, 60);		// changeing value of element at index 5 to 60
```
**See Also:** [addNewValueAtIndex](#addNewValueAtIndex) 

### valueForIndex
Returning value of element at specific position, the position must be zero index.
```c++
int foo;
foo = obj.valueForIndex(3);
```
**See Also:** [setValueForIndex](#setValueForIndex) 

### deleteFirst
Deleting top of list element
```c++
obj.deleteFirst();
```
**See Also:** [deleteLast](#deleteLast) and [deleteValueAtIndex](#deleteValueAtIndex)

### deleteLast
Deleting end of list element
```c++
obj.deleteLast();
```
**See Also:** [deleteFirst](#deleteFirst) and [deleteValueAtIndex](#deleteValueAtIndex)

### deleteValueAtIndex
Deleting element at specific position, position must be zero index.
```c++
obj.deleteValueAtIndex(4);
```
**See Also:** [deleteLast](#deleteLast) and [deleteFirst](#deleteFirst)

### length
Return number of element exist in the list.
```c++
int numberOfElements;
numberOfElements = obj.length();
```

