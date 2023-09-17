function anotherFunction(valOne, valTwo) {
    return {
        valOne: valOne,
        valTwo: valTwo
    };
}
anotherFunction(3, {
    connection: 'string',
    username: 'string',
    password: 'string'
});
var Sellable = /** @class */ (function () {
    function Sellable() {
        this.cart = [];
    }
    Sellable.prototype.addToCart = function (product) {
        this.cart.push(product);
    };
    return Sellable;
}());
