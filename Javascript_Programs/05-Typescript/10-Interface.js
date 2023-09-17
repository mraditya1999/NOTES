var user = {
    dbId: 6123871,
    email: 'abc@gmail.com',
    userId: 1,
    startTrial1: function () {
        return 'trial started';
    },
    startTrial2: function () {
        return 'trial started';
    },
    getCoupon: function (cname, val) {
        return 10;
    }
};
// user1.dbId = 6123872; //error
user.secret_key = 'hasdg3v2y4e3';
var transaction1 = {
    payerAccNumber: 1234,
    payeeAccNumber: 5678
};
var transaction2 = {
    payerAccNumber: 1234,
    payeeAccNumber: 56789
};
var bankAccount = {
    accountNumber: 1234,
    accountHolderName: 'John Doe',
    balance: 5000,
    isAccountActive: true,
    transactionHistory: [transaction1, transaction2]
};
var book = {
    name: 'Harry Potter',
    price: 350,
    fileSize: 100,
    format: 'pdf'
};
var book1 = {
    name: 'Harry Potter',
    price: 350,
    fileSize: 100
};
