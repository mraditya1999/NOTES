// for in loop - iterate over objects properties
// not advised to use it on arrays, especially if the order is important
// on arrays usr "for-of" loop instead

const person = {
  name: 'john',
  age: 23,
  status: 'student',
};

for (const propertyName in person) {
  console.log(` ${propertyName} : ${person[property]}`);
}
