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

class User {
  city: string = ''; // optional beacause it is not taken in constructror but we have to initialize it
  constructor(public name: string, private email: string) {
    this.name = name;
    this.email = email;
  }
}

const user1 = new User('Aditya', 'abc@gmail.com');
user1.city = 'Prayagraj';
console.log(user1);
