const superHeros: string[] = [];
const heroPower: number[] = [];
superHeros.push('Hulk');
superHeros.push('Ironman');
heroPower.push(3);
heroPower.push(8);

// We can also define an array like this
// const heroPower: Array<number> = [];

type User = {
  name: string;
  isActive: boolean;
};

// allUsers type should be User type Array
const allUsers: User[] = [];
allUsers.push({ name: 'John', isActive: true });

// Array of Arrays
const MLModels: number[][] = [
  [0, 0, 0],
  [255, 255, 255],
  [1, 2, 3],
];
