const score: Array<number> = [];
const names: Array<string> = [];

function identityOne(val: boolean | number): boolean | number {
  return val;
}

// 'any' is a type that allows any value in parameter and return
function identityTwo(val: any): any {
  return val;
}

// 'Type' is a generic type,which value it will take ,it also return of that type value
function identityThree<Type>(val: Type): Type {
  return val;
}

// shortcut
function identityFour<T>(val: T): T {
  return val;
}

// We can also define our own type and pass it as a generic type
interface Bottle {
  brand: string;
  price: number;
}

function identityFive<Bottle>(val: Bottle): Bottle {
  return val;
}
identityFive({ brand: 'Coca Cola', price: 20 });

// coder's gyan

interface HasAge {
  age: number;
}

interface Player {
  name: string;
  age: number;
}

const people = [{ age: 30 }, { age: 20 }, { age: 40 }];
const players: Player[] = [
  { name: 'john', age: 30 },
  { name: 'jane', age: 20 },
  { name: 'joe', age: 40 },
];

function getOldest<T extends HasAge>(people: T[]): T {
  return people.sort((a, b) => b.age - a.age)[0];
}
getOldest(people);
const person = getOldest(players);

// Assertion (not good option)
// const person = getOldest(players) as Player;

// Real world example

interface IPost {
  title: string;
  id: number;
  description: string;
}

interface IUser {
  id: number;
  name: string;
  age: number;
}

// Repetition of requests, so we can use generic
// const fetchPostdata = async (path: string): Promise<IPost[]> => {
//   const response = await fetch(`http://example.com/${path}`);
//   return response.json();
// };

// const fetchUserdata = async (path: string): Promise<IUser[]> => {
//   const response = await fetch(`http://example.com/${path}`);
//   return response.json();
// };

// (async () => {
//   const posts = await fetchPostdata('/posts');
//   const users = await fetchUserdata('/posts');
// })();

const fetchData = async <ResultType>(path: string): Promise<ResultType> => {
  const response = await fetch(`http://example.com/${path}`);
  return response.json();
};

(async () => {
  const data = await fetchData<IUser[]>('/users');
  const posts = await fetchData<IPost[]>('/posts');
})();
