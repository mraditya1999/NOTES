// class User {
//     public name: string; //default: public
//    private email: string;
//   city: string = ''; // optional beacause it is not taken in constructror but we have to initialize it
//   constructor(name: string, email: string) {
//     this.name = name;
//     this.email = email;
//   }
// }
// OR
var User = /** @class */ (function () {
    function User(name, email) {
        this.name = name;
        this.email = email;
        this.city = ''; // optional beacause it is not taken in constructror but we have to initialize it
        this.name = name;
        this.email = email;
    }
    return User;
}());
var user1 = new User('Aditya', 'abc@gmail.com');
user1.city = 'Prayagraj';
console.log(user1);
