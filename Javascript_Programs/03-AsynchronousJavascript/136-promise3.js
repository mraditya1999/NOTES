// promise && setTimeout
// what if no resolve, one is rejected

const heading1 = document.querySelector('.heading1');
const heading2 = document.querySelector('.heading2');
const heading3 = document.querySelector('.heading3');
const heading4 = document.querySelector('.heading4');
const heading5 = document.querySelector('.heading5');
const heading6 = document.querySelector('.heading6');
const heading7 = document.querySelector('.heading7');
const heading8 = document.querySelector('.heading8');
const heading9 = document.querySelector('.heading');
const heading10 = document.querySelector('.heading10');
const btn = document.querySelector('.btn');

function changeText(element, text, color, time) {
  return new Promise((resolve, reject) => {
    if (element) {
      setTimeout(() => {
        element.textContent = text;
        element.style.color = color;
        resolve();
      }, time);
    } else {
      reject(new Error(`There is no such error ${element}`));
    }
  });
}

btn.addEventListener('click', () => {
  changeText(heading1, 'one', 'red', 1000)
    .then(() => changeText(heading2, 'two', 'purple', 1000))
    .then(() => changeText(heading3, 'three', 'green', 1000))
    .then(() => changeText(heading4, 'four', 'orange', 1000))
    .then(() => changeText(heading5, 'five', 'red', 1000))
    .then(() => changeText(heading6, 'six', 'yellow', 1000))
    .then(() => changeText(heading7, 'seven', 'violet', 1000))
    .then(() => changeText(heading8, 'eight', 'pink', 1000))
    .then(() => changeText(heading9, 'nine', 'blue', 1000))
    .then(() => changeText(heading10, 'ten', 'orange', 1000))
    .catch((error) => {
      console.log(error);
    });
});
