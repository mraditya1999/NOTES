// In union we can assign more than one type to a variable
var score = 33;
score = 'one';
score = true;
// it tell aditya can be either User type or Admin type
var aditya = {
    name: 'Aditya',
    id: 1
};
aditya = { username: 'Aditya', userid: 1 };
// Uniion in Function
function getDbId(id) {
    // id can be either string or number type
    if (typeof id === 'string') {
        return id.toUpperCase();
    }
    return id;
}
// Uniion in Array
var data1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
var data2 = ['1', '2', '3', '4', '5'];
// const data3: string[] | number[] = [1, '2', 3, 4, '5',]; // This is error, it interprets it as either whole array is string array or whole array is number array
var data3 = [1, '2', 3, true, '5', 6];
// for making constant numbers
var pi = 3.14;
var seatAllotment;
