// read-only || optional || combine
type Userr = {
  readonly _id: string;
  name: string;
  email: string;
  isActive: boolean;
  cardDetails?: number; // '?' optional property
};

let myUser: Userr = {
  _id: '123',
  name: 'Aditya',
  email: 'abc@gmail.com',
  isActive: true,
};
// myUser.email = 'abcd@gmail.com';
// we cannot change readonly variables like
// myUser._id = '123456';

// define 'cardDetails' type based on other defined types
type cardNumber = {
  cardnumber: string;
};

type cardDate = {
  carddate: string;
};

type cadrcvv = {
  cardcvv: string;
};

type cardDetails = cardNumber & cardDate & cadrcvv;
