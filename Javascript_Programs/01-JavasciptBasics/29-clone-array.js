// CLONE ARRAY(3 ways)
// let array1 = ["item1", "item2", "item3"];
// let array2 = array1.slice(0);
// let array3 = [].concat(array1);
// let array4 = [...array1];

// how to concatenate two arrays

let array1 = ["item1", "item2"];
// let array2 = ["item1", "item2"];
// let array2 = array1.slice(0).concat(["item3", "item4"]);
// let array2 = [].concat(array1,["item3", "item4"]);
// new way 
// spread operator
let oneMoreArray = ["item3", "item4"]
let array2 = [...array1, ...oneMoreArray];

array1.push("item3");

console.log(array1===array2);
console.log(array1)
console.log(array2)
