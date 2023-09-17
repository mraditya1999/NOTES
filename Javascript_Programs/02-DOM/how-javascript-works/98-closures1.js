// // closures
// // closure gives you an access to an outer functions scope from an inner function
// // make private variables with closure

function outerFunction(firstName, lastName) {
  function innerFunction() {
    console.log(firstName, lastName);
  }
  return innerFunction;
}

// const ans = outerFunction('harshit', 'sharma');
// ans();
// OR
const ans = outerFunction('harshit', 'sharma')();
