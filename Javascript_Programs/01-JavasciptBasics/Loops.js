let books = ["MATH", "PHYSICS", "HINDI", "ENGLISH"];


// for-loop
for(i =0;i<books.length;i++){ console.log(books[i])} 

// while-loop
var i = 0; while(i < books.length) { console.log(books[i++])}

// do-while
var i = 0; do{ console.log(books[i++]) }while(i<books.length)

// for-of loop
for(let book of books){ console.log(book) }

// for-in loop
for(let index in books){ console.log(books[index]) }

// for-each loop
books.forEach((book,index) => { console.log(`Index ${index}:  ${book}`) });
