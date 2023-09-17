// object destructuring
const band = {
  bandName: "led zepplin",
  famousSong: "stairway to heaven",
  year: 1968,
  anotherFamousSong: "kashmir",
};

let { bandName, famousSong, ...restProps } = band;
console.log(bandName);
console.log(restProps);

// const person = {
//   fname: 'aditya',
//   lname: 'yadav',
//   age: 23,
//   friends: ['anna', 'John', 'bob'],
//   siblings: {
//     sister: 'janet',
//     brother: 'harry',
//   },
// };

// let {
//   fname: firstName,
//   lname: lastName,
//   age,
//   friends: [anna, john],
//   siblings: { sister, brother },
// } = person;
// console.log(firstName, lastName, age, anna, john, sister, brother);
