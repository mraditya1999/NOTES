// Function expression
let  show = function show() { console.log("Function Expression!!") }
show();

// Arrow function
const arrowFunction = () => { console.log("Arrow function!!") }
arrowFunction()

// Anonymous  function
setTimeout(function () { console.log("Anonymous Function!!") },3000) ;

// Immediately invoked function
(function(){ console.log('Immediate Invoked Function') }());
(function (num1, num2) { console.log(num1 + num2) })(5, 5);
const result = (function (num1, num2) { return num1 + num2 })(5, 5);
console.log(result);


    
