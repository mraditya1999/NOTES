import { data } from '../../data';
import { useState } from 'react';

const UserChallenge = () => {
  const [name, setName] = useState('');
  const [users, setUsers] = useState(data);

  const handleSubmit = (e) => {
    e.preventDefault();
    if (!name) return;

    const newId = Date.now();
    const newUser = { id: newId, name: name };
    // const updatedUser = users.push(newUser);
    const updatedUser = [...users, newUser];
    setUsers(updatedUser);
    setName('');
  };

  const removeUser = (id) => {
    const updatedUser = users.filter((user) => user.id !== id);
    setUsers(updatedUser);
  };

  return (
    <div>
      <form className='form' onSubmit={handleSubmit}>
        <h4>Add User</h4>
        <div className='form-row'>
          <label htmlFor='name' className='form-label'>
            name
          </label>
          <input
            type='text'
            className='form-input'
            id='name'
            value={name}
            onChange={(e) => setName(e.target.value)}
          />
        </div>

        <button type='submit' className='btn btn-block'>
          submit
        </button>
      </form>
      {/* render users below */}
      <h2>users</h2>
      {users.map(({ name, id }) => {
        return (
          <div key={id}>
            <h4>{name}</h4>
            <button onClick={() => removeUser(id)} className='btn'>
              remove
            </button>
          </div>
        );
      })}
    </div>
  );
};
export default UserChallenge;
