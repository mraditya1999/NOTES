// param destructuring 

// object 
// react 
const person = {
  fname: 'aditya',
  lname: 'yadav',
  age: 23,
  friends: ['anna', 'John', 'bob'],
  siblings: {
    sister: 'janet',
    brother: 'harry',
  },
};

function printPerson({
  fname: firstName,
  lname: lastName,
  age,
  friends: [anna, john],
  siblings: { sister, brother },
}) {
  console.log(firstName, lastName, age, anna, john, sister, brother);
}

printPerson(person);
