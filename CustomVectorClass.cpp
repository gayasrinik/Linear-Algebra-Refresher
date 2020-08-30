// Self implementation of the Vector Class in C++ 

#include <stdio.h> 
#include <iostream>
using namespace std; 

class Vector { 

	// arr is the integer pointer which stores the address of our vector 
	int* arr; 

	// capacity is the total storage capacity of the vector 
	int capacity; 

	// current is the number of elements currently present in the vector 
	int current; 

public: 
	// Default constructor to initialise the vector value 
	Vector(int size, int* a) 
	{ 
		capacity = size;
        arr = new int[capacity]; 
		current = 0; 
		for (int i = 0; i < capacity; i++) { 
				arr[current] = a[i];
				current++; 
			} 
	} 

	// function to print array elements 
	void print() 
	{ 
		cout << "{"; 
		for (int i = 0; i < current; i++) { 
			cout << arr[i] << " "; 
		} 
		cout << "}"; 
		cout << endl; 
	}
    
    // function to compare 2 vector objects for equality
	void equals(Vector v)
	{
		int flag = 0; 
        if (v.capacity != capacity)
        	flag = 1;
        else {
	      	for (int i = 0; i < capacity; i++) {
	            
	             if (arr[i] != v.arr[i])
	             {
	                flag = 1;
	                break; 
	             }       
			}
		}

		if (flag == 1)
			cout << "False" << endl;
		else
			cout << "True" << endl;

	}
}; 

// Driver code 
int main() 
{ 	
    int a[3] = {1,2,3};
    int b[4] = {1,2,3,6};

	Vector firstarr(3,a);
	Vector secondarr(3,a);
	Vector thirdarr(4,b);
	
    firstarr.print();
    firstarr.equals (secondarr);
    firstarr.equals (thirdarr);

	return 0;  
} 

/* 

# Sample class implementation from the coursework : <Python>

class Vector(object):
    def __init__(self, coordinates):
        try:
            if not coordinates:
                raise ValueError
            self.coordinates = tuple(coordinates)
            self.dimension = len(coordinates)

        except ValueError:
            raise ValueError('The coordinates must be nonempty')

        except TypeError:
            raise TypeError('The coordinates must be an iterable')


    def __str__(self):
        return 'Vector: {}'.format(self.coordinates)


    def __eq__(self, v):
        return self.coordinates == v.coordinates
"""
Execution: 
my_vector = Vector([1,2,3])
print my_vector --> should yield Vector: {1,2,3}
my_vector2 = Vector([1,2,3])
my_vector3 = Vector([-1,2,3])
print my_vector == my_vector2 --> should yield "True"
print my_vector == my_vector3 --> should yield "False"
"""
*/

