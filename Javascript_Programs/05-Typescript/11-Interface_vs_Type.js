// cannot merge two types like interface
// interface are for objects not for primitive types
// for primitive types we have to use typeAlias
var user2 = {
    dbId: 6123871,
    email: 'abc@gmail.com',
    userId: 1,
    // role: 'admin',
    githubToken: '1234567890',
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
user2.secret_key = 'hasdg3v2y4e3';
