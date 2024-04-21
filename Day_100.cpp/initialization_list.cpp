class MyClass {
public:
    // Constructor with initialization list
    MyClass(int param1, int param2)
        : member1(param1), member2(param2) {
        // Constructor body
        // Additional initialization or operations
    }

private:
    // Data members
    int member1;
    int member2;
};

// Initialization lists in C++ are used in constructors to initialize class data members before the body of the constructor executes. They are specified after the constructor's parameter list and before the opening curly brace of the constructor body. Initialization lists are particularly useful for initializing const members, reference members, and members of classes without default constructors.

// In the above example, member1 and member2 are initialized using the initialization list. This approach is often preferred over assigning values inside the constructor body because it allows for more efficient initialization, especially for complex types, and ensures that the members are initialized before the constructor body executes.

// Benefits of Initialization Lists:
// Efficiency: Initialization lists can be more efficient than assignment in the constructor body, especially for complex objects. This is because they allow members to be constructed directly with their desired values.

// Initialization of Constants and References: Initialization lists are essential for initializing const members and reference members, as these cannot be assigned values after they are declared.

// Order of Initialization: Initialization lists allow you to specify the order in which class members are initialized. This can be crucial for cases where one member depends on the initialization of another member.

// Avoid Default Construction: For members that don't have default constructors, initialization lists allow you to pass arguments directly to their constructors.

// Avoid Undefined Behavior: Using initialization lists ensures that all members are initialized before the constructor body begins executing, helping to avoid potential undefined behavior.

// Initialization lists provide a clean and efficient way to initialize class members, contributing to better code readability, maintainability, and performance.*/
