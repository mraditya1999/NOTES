// Spread operator (...)
// Allows an iterable to spread individually inside receiver
// split into single items and copy them

const array1 = [1, 2, 3];
const array2 = [5, 6, 7];
const newArray = [...array1, ...array2, 89, 69];

const newArray1 = [...'123456789'];
const newArray2 = [...'abcdefghijklmnopqrstuvwxyz'];
console.log(newArray1);
console.log(newArray2);

// spread operator in function as arguments
const numbers = [23, 45, 66, 88, 32];
console.log(Math.max(...numbers));

const john = ['john', 'sanders'];
const sayHello = (name, lastName) => {
  console.log(`Hello ${name} ${lastName}`);
};
sayHello(...john);

// spread operator in objects
// const obj1 = {
//   key1: "value1",
//   key2: "value2",
// };
// const obj2 = {
//   key1: "valueUnique",
//   key3: "value3",
//   key4: "value4",
// };

// const newObject = { ...obj2, ...obj1, key69: "value69" };
// const newObject = { ...["item1", "item2"] };
