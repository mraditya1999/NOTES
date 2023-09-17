// function returning promise
// Reject() example
// create headings,btn,img-container(div)

const btn = document.querySelector('.btn');
const heading1 = document.querySelector('.one');
const heading2 = document.querySelector('.two');
const heading3 = document.querySelector('.three');
const url = 'https://source.unsplash.com/random';
const imgContainer = document.querySelector('.img-container');

btn.addEventListener('click', () => {
  loadImage(url)
  .then((image) => imgContainer.appendChild(image))
  .catch((error) => { console.log(error)});
});

function loadImage(url) {
  return new Promise((resolve, reject) => {
    let img = new Image();
    img.addEventListener('load', () => { resolve(img) });

    img.addEventListener('error', () => { reject(new Error(`failed load img from the source : ${url}`))});
    img.src = url;
  });
}
