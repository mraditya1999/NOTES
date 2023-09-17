// In Tuples, if we want in value to be in particular order like first string then  number then booleans
// const user: (string | number|boolean)[] = [1, 'Aditya'];

let user: [string, number, boolean];
user = ['Aditya', 1, true];
// user = [true,1,'Aditya']; // This is error,We cannot change order

// color
let rgb: [number, number, number] = [255, 223, 123];

// we can also implement array method on this
type loginCredentials = [number, string];
const user1 = [1, 'Aditya@gmail.com'];
