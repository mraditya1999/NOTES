// hoisting
// function and var declarations are hoisted
// safer to access only after initialized

hello();
function hello() {
  console.log('hello world');
}

// console.log(hello2);
const hello2 = 'hello world';
console.log(hello2);
