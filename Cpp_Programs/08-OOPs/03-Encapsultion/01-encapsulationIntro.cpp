// Encapsulation is one of the key features of object-oriented programming. It involves the bundling of data members and functions inside a single class.

// Bundling similar data members and functions inside a class together also helps in data hiding.

// Why Encapsulation?
// In C++, encapsulation helps us keep related data and functions together, which makes our code cleaner and easy to read.
// It helps to control the modification of our data members.

// Consider a situation where we want the length field in a class to be non-negative. Here we can make the length variable private and apply the logic inside the method setAge(). For example,

// class Rectangle {
//   private:
//     int age;

//   public:
//     void setLength(int len) {
//       if (len >= 0)
//         length = len;
//     }
// };
// The getter and setter functions provide read-only or write-only access to our class members. For example,

// getLength()  // provides read-only access
// setLength()  // provides write-only access
// It helps to decouple components of a system. For example, we can encapsulate code into multiple bundles.

// These decoupled components (bundles) can be developed, tested, and debugged independently and concurrently. And any changes in a particular component do not have any effect on other components.
// We can also achieve data hiding using encapsulation. In Example 1, if we change the length and breadth variables into private or protected, then the access to these fields is restricted.

// And, they are kept hidden from outer classes. This is called data hiding.
