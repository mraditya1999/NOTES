// value can be of any type(array) but return type will be uf that type but onli single value not array

// Generic In Array
function getSearchProducts<T>(products: T[]): T {
  return products[0];
}
