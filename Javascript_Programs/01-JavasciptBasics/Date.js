let date = new Date();

// let date = new Date(2018,11,13,10,33,56,7);
// let date = new Date("October 13,2018 11:12:22") 

console.log(date.getTime());
console.log(date.getFullYear());
console.log(date.getMonth());
console.log(date.getDate());
console.log(date.getDay());
console.log(date.getHours());
console.log(date.getMinutes());
console.log(date.getSeconds());

// Need to pass arguments
// console.log(date.setTime());
// console.log(date.setFullYear());
// console.log(date.setMonth(0));
// console.log(date.setDate());
// console.log(date.setHours());
// console.log(date.setMinutes());
// console.log(date.setSeconds());

console.log(date.setDate(date.getDate() + 50));
console.log(date);
