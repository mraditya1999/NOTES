// public will be accessible in whole program
// private will be only accessible in which it is defined
// protected will be accessible in which it is defined and in its child class

class Userr {
  protected _courseCount = 1;

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

class SubUserr extends Userr {
  isFamily: boolean = true;
  changeCourseCount() {
    this._courseCount = 5;
  }
}

const user12 = new Userr('Aditya', 'abc@gmail.com');
