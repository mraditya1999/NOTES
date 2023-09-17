// cannot merge two types like interface
// interface are for objects not for primitive types
// for primitive types we have to use typeAlias

interface Userr {
  readonly dbId: number; //readonly field
  email: string;
  userId: number;
  secret_key?: string; //optional field
  startTrial1: () => string; //first way
  startTrial2(): string; //second way
  getCoupon(couponname: string, value: number): number;
}

interface Userr {
  githubToken: string;
}

// inheritance is available in interface
interface Admin extends Userr {
  role: 'admin' | 'ta' | 'learner';
}

const user2: Userr = {
  dbId: 6123871,
  email: 'abc@gmail.com',
  userId: 1,
  // role: 'admin',
  githubToken: '1234567890',
  startTrial1: () => {
    return 'trial started';
  },
  startTrial2: () => {
    return 'trial started';
  },
  getCoupon: (cname: 'GET10', val: 10) => {
    return 10;
  },
};
// user1.dbId = 6123872; //error
user2.secret_key = 'hasdg3v2y4e3';
