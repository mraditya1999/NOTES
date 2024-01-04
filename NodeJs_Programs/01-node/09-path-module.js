const path = require('path');

console.log(path.sep);

const filePath = path.join('/content/', 'subfolder', 'test.txt');
console.log(filePath);

const dirName = path.dirname(filePath);
console.log(dirName);

const base = path.basename(filePath);
console.log(base);

const extname = path.extname(filePath);
console.log(extname);

const absolute = path.resolve(__dirname, 'content', 'subfolder', 'test.txt');
console.log(absolute);
