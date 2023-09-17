console.log(2 ** 3); //power of 2
console.log(typeof 5); //typeof variable

  console.log(5 == '5');  // true because ignoring data type
  console.log(5 === '5'); // false because check data type also 
  console.log(5 !== '5'); //  true because check data type also
  console.log(5 != '5');  // false because ignoring data type 


var value = 5 + ""; //convert number into string
var value = +"5"; //convert string into number
let user; console.log(user ?? "Guest  user"); //(nullish coalescing operator is used if variable value is undefined or null

// In switch statement only strict comparison operator works (===)
// alert(), prompt(), confirm()
// String(), Number(), Boolean()  functions are used for TYPE CONVERSION(explicit)

// COMPUTED PROPERTIES 
const key1 = "objkey1";
const key2 = "objkey2";

const val1 = "myvalue1";
const val2 = "myvalue2";

let myobj = {
  [key1]: val1,
  [key2]: val2,
};
console.log(myobj);


// DEFAULT PROPERTIES
addTwoNumber = (num1, num2 = 0) => {
  return num1 + num2;
};
console.log(addTwoNumber(4));


// REST PARAMETERS
addAll = (...numbers) => {
  let total = 0;
  for(let number of numbers){
    total += number;
  }
  console.log(total);
};

addAll(3,4,5,6,7,8,9)