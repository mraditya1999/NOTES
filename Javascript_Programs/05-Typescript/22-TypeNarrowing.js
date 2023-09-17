// for checkin typeof Array we have to check for object because Array is object in js
function detectType(val) {
    if (typeof val === 'string') {
        console.log('String');
    }
    else if (typeof val === 'number') {
        console.log('Number');
    }
}
function printAll(strs) {
    if (strs) {
        if (typeof strs === 'object') {
            for (var _i = 0, strs_1 = strs; _i < strs_1.length; _i++) {
                var s = strs_1[_i];
                console.log(s);
            }
        }
        else if (typeof strs === 'string') {
            console.log(strs);
        }
    }
}
function isAdminAccount(account) {
    // return (user as Admin).isAdmin !== undefined;
    if ('isAdmin' in account) {
        return account.isAdmin;
    }
}
// 'instanceof' narrowing
function logValue(x) {
    if (x instanceof Date) {
        console.log(x.toUTCString());
    }
    else {
        console.log(x.toUpperCase());
    }
}
function isFish(pet) {
    return pet.swim !== undefined;
}
function getFood(pet) {
    if (isFish(pet)) {
        pet;
        return 'fish food';
    }
    else {
        pet;
        return 'bird food';
    }
}
