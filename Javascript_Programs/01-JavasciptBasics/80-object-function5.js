// Use Prototype
function createUser(firstName,lastName,email,age,address){
    const user = Object.create(createUser.prototype);
    user.firstName = firstName;
    user.lastName = lastName;
    user.email = email;
    user.age = age;
    user.address = address;
    return user;
}
createUser.prototype.about = function(){ return `${this.firstName} is ${this.age} years old` };
createUser.prototype.is18  = function(){ return  this.age>=18 };
createUser.prototype.sing  = function(){ return "la la ala l la a" }

const user1 = createUser("Aditya","Yadav","ay5480620@gmail.com",22,"my_Address")
const user2 = createUser("harshit","vashisht","ay@gmail.com",20,"my_Address2")
const user3 = createUser("Amit","vashisht","abc@gmail.com",12,"my_Address3")
console.log(user1);
console.log(user1.sing());


