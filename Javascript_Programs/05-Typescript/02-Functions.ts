function getUpper(val: string) {
  // the function should be taking a string and return anything
  return val.toUpperCase();
}

function addTwoNum(num: number): number {
  // the function should be taking a number and return a number
  return num * 2;
}

const getHello = (name: string): string => {
  // the function should be taking a string and return a string  in arrow functoin syntax
  return 'Hello World';
};

function signUpUser(name: string, email: string, isPaid: boolean) {
  return `${name} | ${email} | ${isPaid}`;
}

let loginUser = (name: string, email: string, isPaid: boolean = false) => {
  // If not passed, isPaid value will be false by default
  return `${name} | ${email} | ${isPaid}`;
};

// function getVal(myVal: number): boolean {
//   if (myVal > 5) {
//     return true;
//   }
//   return '200 OK';
// }

const heroes = ['thor', 'spiderman', 'ironman', , 4, 5, true];
const herorStatement = heroes.map((hero) => {
  return `hero is ${hero}`;
});

function consoleError(errormsg: string): void {
  console.log(errormsg);
}

function handleError(errormsg: string): never {
  throw new Error(errormsg);
}

console.log(getUpper('hello'));
console.log(addTwoNum(5));
console.log(getHello('hello'));
console.log(signUpUser('Aditya', 'abc@gmail.com', true));
console.log(loginUser('Aditya', 'abc@gmail.com'));
console.log(herorStatement);
