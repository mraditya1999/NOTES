const user = {
  name: 'Aditya',
  email: 'abc@gmail.com',
  isActive: true,
};

function createUser({ name: string, isPaid: boolean }) {
  // function take object with property 'name and isPaid' which will be string and boolean
  return 2;
}

createUser({ name: 'Aditya', isPaid: false }); 
//  OR
// let newUser = { name: 'Aditya', isPaid: false, email: 'abc@gmail.com' };
// createUser(newUser); In this we  can also take extra properties othetr than`name and isPaid`

function createCourse(): { name: string; price: number } {
  // always return object with property 'name and price'
  return { name: 'Reactjs', price: 799 };
}
