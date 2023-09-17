// Set Object - stores a collection of unique values (no duplicates allowed) of any object
// iterable
// have its own methods
// No index-based access
// Order is not guaranteed
// new Set(), add(value), delete(value), clear(), has(value)

// iterators
// entries(),keys(),values(),forEach()

const uniqueValue = new Set();
uniqueValue.add(1);
uniqueValue.add('two');
uniqueValue.add(true);
uniqueValue.add([4, 'five', { six: 6 }]);
uniqueValue.add({ number: 'seven', eight: 8 });

console.log(uniqueValue);
console.log(uniqueValue.delete(1));
console.log(uniqueValue.has('two'));
uniqueValue.clear();
console.log(uniqueValue);

// new Set() - use Case

const products = [
  {
    title: 'high-back bench',
    company: 'ikea',
  },
  {
    title: 'albany table',
    company: 'marcos',
  },
  {
    title: 'accent chair',
    company: 'caressa',
  },
  {
    title: 'wooden table',
    company: 'ikea',
  },
];

// const companies = products.map((item) => item.company);
// console.log(companies);

// const uniqueCompanies = new Set(companies);
// console.log(uniqueCompanies);

// const finalCompanies = ['all', ...uniqueCompanies];
// console.log(finalCompanies);

const result = ['all', ...new Set(products.map((item) => item.company))];
console.log(result);
