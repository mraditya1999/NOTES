// can loop on iterable objects
// String,Arrays,Set,Map etc - NOT OBJECT
// unlike forEach - we can use break,continue

const longName = 'John Smith Pepper III';
const fruits = ['apple', 'orange', 'banana'];
let shortName = '';

for (const letter of longName) {
  if (letter === ' ') continue;
  else shortName += letter;
}
console.log(shortName);

for (const fruit of fruits) {
  if (fruit === 'banana') break;
  console.log(fruit);
}
