// - built in
// - promise based
// - same as XMLHttpRequest,slightly better than than

// response - object
// useful properties and methods
// convert response into JSON data
// returns promise

const url = 'https://jsonplaceholder.typicode.com/posts';
const btn = document.querySelector('.btn');

btn.addEventListener('click', () => {
  fetch(url, { method: 'GET', headers: { 'Content-type': 'application/json; charset=UTF-8' } })
    .then((response) => response.json())
    .then((data) => displayItems(data))
    .catch((error) => console.log(error));
});

// OR we can also use async/await

// btn.addEventListener('click', async () => {
//   try {
//     const response = await fetch(url);
//     const data = await response.json();
//     displayItems(data);
//   } catch (error) {
//     console.log(error);
//   }
// });

const displayItems = (items) => {
  const displayData = items
    .map((item) => {
      const { userId, id, title, body } = item;
      return `<p><strong>${id}.<strong/> ${body}</p>`;
    })
    .join('');
  const element = document.createElement('div');
  element.innerHTML = displayData;
  document.body.appendChild(element);
};
