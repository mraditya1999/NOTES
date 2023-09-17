const url = './api/sample.txt'; 
const xhr = new XMLHttpRequest();
console.log(xhr);

xhr.open('GET', url);
xhr.onreadystatechange = function () {
  if (xhr.readyState === 4 && xhr.status === 200) {
    const text = document.createElement('p');
    text.textContent = xhr.responseText;
    document.body.append(text);
    console.log(typeof text);
  } else {
    console.log({
      status: xhr.status,
      text: xhr.statusText,
      state: xhr.readyState,
    });
  }
};
xhr.send();

// const url = './api/sample.txt';
// const btn = document.querySelector('.btn');

// btn.addEventListener('click', getData);

// function getData() {
//   const xhr = new XMLHttpRequest();

//   xhr.open('GET', url);
//   xhr.onreadystatechange = function () {
//     if (xhr.readyState === 4 && xhr.status === 200) {
//       const text = document.createElement('p');
//       text.textContent = xhr.responseText;
//       document.body.append(text);
//       console.log(typeof text);
//     } else {
//       console.log({
//         status: xhr.status,
//         text: xhr.statusText,
//         state: xhr.readyState,
//       });
//     }
//   };
//   xhr.send();
// }

