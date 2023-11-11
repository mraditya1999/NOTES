import { useState } from 'react';

const UseStateBasics = () => {
  const [count, setCount] = useState(0);

  const handleClick = () => {
    setCount(count + 1);
  };

  return (
    <>
      <div>
        <h4>Youn clicked {count} times</h4>
        <button type='button' className='btn' onClick={handleClick}>
          Increase
        </button>
      </div>
    </>
  );
};

export default UseStateBasics;
