// objects reference type
// arrays are good but not sufficient
// for real world data
// objects store key value pairs
// objects don't have index

let person = {
  firstName: "Aditya",
  lastName: "Yadav",
  age: 22,
  sayHello: function () {
    console.log("Hello!!");
  },
  sayGreet: () => {
    console.log("Have a good day");
  },
  sayBye() {
    console.log("Ciao");
  },
};

person.course = "MCA"; // add course  property
delete person.course; // delete course property
console.log(person["firstName"]);
console.log(person.firstName);
console.log("height" in person); // check property is present or not

// how to add key value pair to objects
person["person"] = "male";
console.log(person);

//   ITERATE ON OBJECT(for-in, Object.keys(return array, so we can use array methods on person))
for (let key in person) {
  console.log(key + " : " + person[key]);
}
console.log(Object.keys(person));
for (let key of Object.keys(person)) {
  console.log(person[key]);
}

//   METHOD (ways to implement methods on objects)

person.startFunction = function () {
  console.log("I am starting!!");
};
function wish() {
  console.log("Have a Happy day");
}
person.sayWish = wish;

person.startFunction();
person.sayWish();
person.sayHello();
person.sayGreet();
person.sayBye();

// CLONE OBJECT
let newPerson1 = { ...person }; //OR
let newPerson2 = Object.assign({}, person);
