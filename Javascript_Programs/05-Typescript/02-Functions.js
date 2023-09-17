function getUpper(val) {
    // the function should be taking a string and return anything
    return val.toUpperCase();
}
function addTwoNum(num) {
    // the function should be taking a number and return a number
    return num * 2;
}
var getHello = function (name) {
    // the function should be taking a string and return a string  in arrow functoin syntax
    return 'Hello World';
};
function signUpUser(name, email, isPaid) {
    return "".concat(name, " | ").concat(email, " | ").concat(isPaid);
}
var loginUser = function (name, email, isPaid) {
    if (isPaid === void 0) { isPaid = false; }
    // If not passed, isPaid value will be false by default
    return "".concat(name, " | ").concat(email, " | ").concat(isPaid);
};
// function getVal(myVal: number): boolean {
//   if (myVal > 5) {
//     return true;
//   }
//   return '200 OK';
// }
var heroes = ['thor', 'spiderman', 'ironman', , 4, 5, true];
var herorStatement = heroes.map(function (hero) {
    return "hero is ".concat(hero);
});
function consoleError(errormsg) {
    console.log(errormsg);
}
function handleError(errormsg) {
    throw new Error(errormsg);
}
console.log(getUpper('hello'));
console.log(addTwoNum(5));
console.log(getHello('hello'));
console.log(signUpUser('Aditya', 'abc@gmail.com', true));
console.log(loginUser('Aditya', 'abc@gmail.com'));
console.log(herorStatement);
