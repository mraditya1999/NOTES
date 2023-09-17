interface User {
  readonly dbId: number; //readonly field
  email: string;
  userId: number;
  secret_key?: string; //optional field
  startTrial1: () => string; //first way
  startTrial2(): string; //second way
  getCoupon(couponname: string, value: number): number;
}

const user: User = {
  dbId: 6123871,
  email: 'abc@gmail.com',
  userId: 1,
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
user.secret_key = 'hasdg3v2y4e3';

// coder's gyan
interface Transaction {
  payerAccNumber: number;
  payeeAccNumber: number;
}

const transaction1: Transaction = {
  payerAccNumber: 1234,
  payeeAccNumber: 5678,
};

const transaction2: Transaction = {
  payerAccNumber: 1234,
  payeeAccNumber: 56789,
};

interface BankAccount {
  accountNumber: number;
  accountHolderName: string;
  balance: number;
  isAccountActive: boolean;
  transactionHistory: Transaction[]; //use another interface in an interface
}

const bankAccount: BankAccount = {
  accountNumber: 1234,
  accountHolderName: 'John Doe',
  balance: 5000,
  isAccountActive: true,
  transactionHistory: [transaction1, transaction2],
};

// Extend interface
interface Book {
  name: string;
  price: number;
}

interface EBook extends Book {
  fileSize: number;
  format: string;
}

interface AudioBook extends EBook {
  duration: number;
}

const book: EBook = {
  name: 'Harry Potter',
  price: 350,
  fileSize: 100,
  format: 'pdf',
};

// merge two interface
interface Book {
  // suppose this interface importing from any library
  name: string;
  price: number;
}

interface Book {
  // make same name of interface and add property which ypu want to add
  fileSize: number;
}

const book1: Book = {
  name: 'Harry Potter',
  price: 350,
  fileSize: 100,
};
