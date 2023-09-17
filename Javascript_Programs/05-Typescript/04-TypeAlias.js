function printName(name) {
    console.log(name);
}
printName('Aditya');
function createUser(user) {
    // the passed argument will be of 'User' type just like number, string
    //   and its return type value should also be USer
    return user;
}
console.log(createUser({ name: 'Aditya', age: 23, isActive: true }));
