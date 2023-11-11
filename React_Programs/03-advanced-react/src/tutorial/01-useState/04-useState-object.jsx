import { useState } from 'react';

const UseStateObject = () => {
  // const [name, setName] = useState('peter');
  // const [age, setAge] = useState(24);
  // const [hobby, setHobby] = useState('Read Books');

  // const displayPerson = () => {
  //   setName('John');
  //   setAge(22);
  //   setHobby('Gaming');
  // };

  const [person, setPerson] = useState({
    name: 'Peter',
    age: 24,
    hobby: 'Read Books',
  });

  const displayPerson = () => {
    setPerson({
      name: 'John',
      age: 22,
      hobby: 'Gaming',
    });
  };

  const { name, age, hobby } = person;
  return (
    <>
      <h3>{name}</h3>
      <h3>{age}</h3>
      <h4>Enjoys To: {hobby}</h4>
      <button className='btn' onClick={displayPerson}>
        show john
      </button>
    </>
  );
};

export default UseStateObject;
