// structural typing or Duck typing

// interface ICredentials {
//   username: string;
//   password: string;
//   isAdmin?: boolean;
// }

// function login(credentials: ICredentials): boolean {
//   console.log(credentials);
//   return true;
// }

// const user = {
//   username: 'codersgyan',
//   password: 'secret',
//   isAdmin: true,
// };
// login(user);

// if interface hava an function ,then we write like this
interface IAuth {
  username: string;
  password: string;
  login(username: string, password: string): boolean;
}

const auth: IAuth = {
  username: 'codersgyan',
  password: 'secret',
  login(username: string, password: string) {
    return true;
  },
};
