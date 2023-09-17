import {withdraw as wd, deposit, withdraw} from './account.js'

export let name = "Aditya";
 let age = 23;

export function code(){
    console.log("Coding...");
    withdraw();
    deposit();
}

function cook(){
    console.log("cooking....");
}