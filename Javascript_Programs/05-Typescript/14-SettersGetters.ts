class User {
  private _courseCount = 1;

  city: string = ''; // optional beacause it is not taken in constructror but we have to initialize it
  constructor(public name: string, private email: string) {
    this.name = name;
    this.email = email;
  }

  get getMacEmail(): string {
    return `Your email is ${this.email}`;
  }

  get getcourseCount(): number {
    return this._courseCount;
  }

  set setCourseCount(courseNum) {
    this._courseCount = 2;
  }

  set setMacEmail(email: string) {
    this.email = email;
  }
}

const user1 = new User('Aditya', 'abc@gmail.com');
user1.city = 'Prayagraj';
console.log(user1);
