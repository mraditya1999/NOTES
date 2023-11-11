import { useState } from 'react';

const UseStateGotcha = () => {
  const [count, setCount] = useState(0);

  const handleClick = () => {
    // setCount((currentState) => currentState + 1);
    setTimeout(() => setCount((currentState) => currentState + 1), 3000);
  };

  return (
    <>
      <h1>{count}</h1>
      <button type='button' className='btn' onClick={handleClick}>
        increase
      </button>
    </>
  );
};

export default UseStateGotcha;
