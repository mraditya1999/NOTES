class User {
    constructor(name, email) {
        this.name = name;
        this.email = email;
        this._courseCount = 1;
        this.city = ''; // optional beacause it is not taken in constructror but we have to initialize it
        this.name = name;
        this.email = email;
    }
    get getMacEmail() {
        return `Your email is ${this.email}`;
    }
    get getcourseCount() {
        return this._courseCount;
    }
    set setCourseCount(courseNum) {
        this._courseCount = 2;
    }
    set setMacEmail(email) {
        this.email = email;
    }
}
const user1 = new User('Aditya', 'abc@gmail.com');
user1.city = 'Prayagraj';
console.log(user1);
