const http = require('http');
const { readFileSync } = require('fs');

const HomePage = readFileSync('./navbar-app/index.html');
const HomeStyles = readFileSync('./navbar-app/styles.css');
const HomeLogo = readFileSync('./navbar-app/logo.svg');
const HomeScript = readFileSync('./navbar-app/browser-app.js');

const server = http.createServer((req, res) => {
  const url = req.url;
  console.log(url);

  //   Home Page
  if (url === '/') {
    res.writeHead(200, { 'content-type': 'text/html' });
    res.write(HomePage);
    res.end();
  }
  //   Home styles
  else if (url === '/styles.css') {
    res.writeHead(200, { 'content-type': 'text/css' });
    res.write(HomeStyles);
    res.end();
  }
  //   Home Script
  else if (url === '/browser-app.js') {
    res.writeHead(200, { 'content-type': 'text/javascript' });
    res.write(HomeScript);
    res.end();
  }
  //   Home logo
  else if (url === '/logo.svg') {
    res.writeHead(200, { 'content-type': 'image/svg+xml' });
    res.write(HomeLogo);
    res.end();
  }

  //   About Page
  else if (url === '/about') {
    res.writeHead(200, { 'content-type': 'text/html' });
    res.write('<h1>About Page</h1>');
    res.end();
  }
  //   Not Found Page
  else {
    res.writeHead(404, { 'content-type': 'text/html' });
    res.write('<h1>Page Not Found</h1>');
    res.end();
  }
});

server.listen(3000, () => {
  console.log(`Listening on port http://localhost:${3000}`);
});
s;
