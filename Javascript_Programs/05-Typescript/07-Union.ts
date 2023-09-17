// In union we can assign more than one type to a variable
let score: number | string | boolean = 33;
score = 'one';
score = true;

type User = {
  name: string;
  id: number;
};

type Admin = {
  username: string;
  userid: number;
};

// it tell aditya can be either User type or Admin type
let aditya: User | Admin = {
  name: 'Aditya',
  id: 1,
};
aditya = { username: 'Aditya', userid: 1 };

// Uniion in Function
function getDbId(id: number | string) {
  // id can be either string or number type
  if (typeof id === 'string') {
    return id.toUpperCase();
  }
  return id;
}

// Uniion in Array
const data1: number[] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const data2: string[] = ['1', '2', '3', '4', '5'];
// const data3: string[] | number[] = [1, '2', 3, 4, '5',]; // This is error, it interprets it as either whole array is string array or whole array is number array
const data3: (string | number | boolean)[] = [1, '2', 3, true, '5', 6];

// for making constant numbers
let pi: 3.14 = 3.14;

let seatAllotment: 'aisle' | 'middle' | 'window';
seatAllotment = 'aisle';
// seatAllotment = "crew"; // This is error
