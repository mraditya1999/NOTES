import { people } from '../../data';
import Person from './Person';

const List = () => {
  return (
    <>
      <h2>Leverage Javascript</h2>
      <div>
        {people.map((person) => {
          return <Person key={person.name} {...person} />;
        })}
      </div>
    </>
  );
};
export default List;
