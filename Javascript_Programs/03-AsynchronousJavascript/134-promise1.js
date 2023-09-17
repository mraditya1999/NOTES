// Promise
// promises - Pending Resolved, Rejected
// then catch = pass another callback

console.log('script start');
const bucket = ['coffee', 'chips', 'vegetables', 'salt', 'rice'];

const friedRicePromise = new Promise((resolve, reject) => {
  if ( bucket.includes('vegetables') && bucket.includes('salt') && bucket.includes('rice')) {
    resolve({ value: 'friedrice' });
  } else {
    reject('could not do it');
  }
}).then((myfriedRice) => {
    console.log('lets eat', myfriedRice.value);
  }).catch((error) => {
    console.log(error);
  });

setTimeout(() => {
  console.log('hello from settimeout');
}, 0);

for (let i = 0; i <= 100; i++) {
  console.log(Math.random(), i);
}

console.log('script end!!!!');
