// for checkin typeof Array we have to check for object because Array is object in js
function detectType(val: string | number | number[]) {
  if (typeof val === 'string') {
    console.log('String');
  } else if (typeof val === 'number') {
    console.log('Number');
  }
}

function printAll(strs: string | string[] | null) {
  if (strs) {
    if (typeof strs === 'object') {
      for (const s of strs) {
        console.log(s);
      }
    } else if (typeof strs === 'string') {
      console.log(strs);
    }
  }
}

// 'in' operator in Type Narrowing

interface User {
  name: string;
  email: string;
}

interface Admin {
  name: string;
  email: string;
  isAdmin: boolean;
}

function isAdminAccount(account: User | Admin) {
  // return (user as Admin).isAdmin !== undefined;
  if ('isAdmin' in account) {
    return account.isAdmin;
  }
}

// 'instanceof' narrowing
function logValue(x: Date | string) {
  if (x instanceof Date) {
    console.log(x.toUTCString());
  } else {
    console.log(x.toUpperCase());
  }
}

// Type Predicate
type Fish = { swim: () => void };
type Bird = { fly: () => void };

function isFish(pet: Fish | Bird): pet is Fish {
  return (pet as Fish).swim !== undefined;
}

function getFood(pet: Fish | Bird) {
  if (isFish(pet)) {
    pet;
    return 'fish food';
  } else {
    pet;
    return 'bird food';
  }
}
