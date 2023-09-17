// PROTOTYPE

// function Creature(lifespan) {
//   this.lifespan = lifespan;
// }

// Creature.prototype.breathe = function() { console.log("breathing...") }
// let creature1 = new Creature(100);

// function Person(firstName, lastName, age) {
//   this.firstName = firstName;
//   this.lastName = lastName;
//   this.age = age;
// }

// Person.prototype.fullName = function() { console.log(`${this.firstName} ${this.lastName}`)}
// Person.prototype.__proto__ =  Object.create(Creature.prototype)

// let person1 = new Person("Aditya","Yadav",22);
// let person2 = new Person("Rajat","Yadav",25);

// person1.fullName();
// person1.breathe();


// CLASS
// class Employee {
//   constructor(name) {
//     this.name = name;
//   }

//   msg() {
//     console.log("Hii...");
//   }
// }

// class Manager extends Employee {
//   constructor(name, department) {
//     super(name);
//     this.department = department;
//   }

//   info(){
//     super.msg()
//     console.log(this.name + " is manager of department " + this.department);
//   }

// }
// let manager1 = new Manager("Aditya", "MCA");
// manager1.info();


// PUBLIC/PRIVATE
// class Employee{
//   #name = ""; 
//   constructor(name){
//     this.#name = name;
//   }

//   getName(){
//     console.log(this.#name);
//   }
// }

// let employee1  = new Employee("aditya")
// employee1.getName();

// MIXIN
// let usefulMethod = {
//   sayHi(){console.log("Hii") },
//   sayBye(){console.log("Bye") }
// }

// class User{
//   constructor(){
//     this.name = "Aditya"
//   }
// }

// class Admin extends User{
  
// }

// let admin1 = new Admin();