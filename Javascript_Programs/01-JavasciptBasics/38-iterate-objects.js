// Three methods to convert object into arrays
// Object.keys() - converts property names into array
// Object.values() - converts property values into array
// Object.entries() - converts both

const person = {
  name: 'harshit',
  age: 22,
  'person hobbies': ['guitar', 'sleeping', 'listening music'],
};

const keys = Object.keys(person);
console.log(keys);

const values = Object.values(person);
console.log(values);

const entries = Object.entries(person);
console.log(entries);

// map method
entries.map((item) => {
  console.log(([property, value] = item));
});

// for-of loop
for (const [property, value] of entries) {
  console.log(property, ':', value);
}
