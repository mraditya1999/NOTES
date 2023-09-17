// Rest parameter (...)
// gathers/collects the items

// function addAll(...numbers){
//     let total = 0;
//     for(let number of numbers){
//         total = total + number;
//     }
//     return total;
// }
// console.log(addAll(4,5,4,2,10));

// Difference b/w REST parameter and SPREAD operator
const numbers = [12, 32, 3, 43, 63, 32];

addAll(...numbers); //spread o[perator]
function addAll(...numbers) {
  // rest parameter
  for (const number of numbers) {
    console.log(number);
  }
}
