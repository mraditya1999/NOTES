import { useState, useEffect } from 'react';

const CleanupFunction = () => {
  const [toggle, setToggle] = useState(false);
  const handleClick = () => setToggle(!toggle);

  return (
    <>
      <button className='btn' onClick={handleClick}>
        Toggle
      </button>
      {toggle && <SecondComponent />}
    </>
  );
};

const SecondComponent = () => {
  // useEffect(() => {
  //   console.log('hmm, this is interesting');
  //   const intID = setInterval(() => {
  //     console.log('hello from interval');
  //   }, 1000);
  //   // does not stop, keeps going
  //   // every time we render component new interval gets created
  //   return () => clearInterval(id);
  // }, []);

  useEffect(() => {
    const someFunc = () => {
      // some logic here
    };
    window.addEventListener('scroll', someFunc);
    return () => window.removeEventListener('scroll', someFunc);
  }, []);

  return <h1>Hello world</h1>;
};

export default CleanupFunction;
