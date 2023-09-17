type str = string; // we can use str as a type to define variable of type 'string'
function printName(name: str) {
  console.log(name);
}
printName('Aditya');

// custom type first character should br CAPITAL LETTERS
type User = {
  name: string;
  age: number;
  isActive: boolean;
};

function createUser(user: User): User {
  // the passed argument will be of 'User' type just like number, string
  //   and its return type value should also be USer
  return user;
}
console.log(createUser({ name: 'Aditya', age: 23, isActive: true }));
