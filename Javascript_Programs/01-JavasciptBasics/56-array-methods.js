// Powerfull Array Methods
// forEach, map, filter, find, reduce
// Iterate over array - no for loop required
// Accept CALLBACK function as an argument, calls Callback against each item in a array. Reference Item in the Callback Paramater.

// forEach does not return new array

//  const numbers = [4,2,5,8];
// numbers.forEach(function(number,index){
//     console.log(`index is ${index} number is ${number}`);
// });


const people = [
  { name: 'bob', age: 20, position: 'developer' },
  { name: 'peter', age: 25, position: 'designer' },
  { name: 'susy', age: 30, position: 'the boss' },
];

function showPerson(person) {
  console.log(person.position.toUpperCase());
}
people.forEach(showPerson);

// people.forEach(function (item) {
//   console.log(item.position.toUpperCase());
// });

