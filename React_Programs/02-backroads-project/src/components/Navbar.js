import logo from '../images/logo.svg';
import SocialLinks from './SocialLinks';
import PageLinks from './PageLinks';

const Navbar = () => {
  return (
    <nav className='navbar'>
      <div className='nav-center'>
        <div className='nav-header'>
          <img src={logo} className='nav-logo' alt='backroads' />
          <button type='button' className='nav-toggle' id='nav-toggle'>
            <i className='fas fa-bars'></i>
          </button>
        </div>

        <PageLinks parentClass='nav-links' itemClass='nav-link' />
        <SocialLinks parentClass='nav-icons' itemClass='nav-icon' />
      </div>
    </nav>
  );
};

export default Navbar;
