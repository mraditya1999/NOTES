// Interpolation ${expression} - insert expression

// template string 
let age = 22;
let firstName = "harshit"

// "my name is harshit and my age is 22 "
// let aboutMe = "my name is " + firstName + " and my age is " + age; 

let aboutMe = `my name is ${firstName} and my age is ${age}`

console.log(aboutMe);

// Tagged Template Literals
const author = 'Some Author';
const statement = 'Some Statement';

const quote = highlight`Here is the ${statement} by ${author} and it could not be more true`;
console.log(quote);

function highlight(text, ...vars) {
  console.log({ text, vars });
}
