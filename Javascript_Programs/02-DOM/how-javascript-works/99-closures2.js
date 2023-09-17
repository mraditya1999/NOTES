function newAccount(name, initialBalance) {
  let balance = initialBalance;
  function showBalance() {
    console.log(`hey ${name}, your balance is ${balance}`);
  }
  return showBalance;
}

newAccount('susan', 500);
const john = newAccount('john', 300);
const bob = newAccount('bob', 500);

john();
bob();
