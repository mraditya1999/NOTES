// function scope(local scope) vs block scope(global scope)

// if forget to use keyword at the time of inialization of a variable then javascript automatically creates that variable in a global scope

// function fun() {
//   becomesGlobal = 'global variable';
// }

// fun();
// console.log(becomesGlobal);

// let and const are block scope
// var is function scope 

// if(true){
//     var firstName = "harshit";
//     console.log(firstName);
// }

// console.log(firstName);

function myApp(){
    if(true){
        var firstName = "harshit";
        console.log(firstName);
    }

    if(true){
        console.log(firstName);
    }
    console.log(firstName);
}

myApp();
