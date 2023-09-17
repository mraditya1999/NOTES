// We can return fuction & object in closures

function newAccount(name, initialBalance) {
  let balance = initialBalance;
  function showBalance() {
    console.log(`hey ${name}, your balance is ${balance}`);
  }

  function deposit(amount) {
    balance += amount;
    showBalance();
  }

  function withdraw(amount) {
    if (amount > balance) {
      console.log(`hey ${name}, sorry not enough funds`);
      return;
    }
    balance -= amount;
    showBalance();
  }
  return { showBalance: showBalance, deposit: deposit, withdraw: withdraw };
}

newAccount('susan', 500);
const john = newAccount('john', 300);
const bob = newAccount('bob', 500);

john.showBalance();
john.deposit(100);
john.withdraw(500);
bob.showBalance();
bob.deposit(300);
bob.withdraw(100);
