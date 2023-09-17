class person {
  constructor(firstName, lastName, age) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.age = age;
  }
userInfo(){
console.log(this.firstName,this.lastName,this.age);
}

}

export default person;
