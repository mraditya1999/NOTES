// public will be accessible in whole program
// private will be only accessible in which it is defined
// protected will be accessible in which it is defined and in its child class
var __extends = (this && this.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (Object.prototype.hasOwnProperty.call(b, p)) d[p] = b[p]; };
        return extendStatics(d, b);
    };
    return function (d, b) {
        if (typeof b !== "function" && b !== null)
            throw new TypeError("Class extends value " + String(b) + " is not a constructor or null");
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
var Userr = /** @class */ (function () {
    function Userr(name, email) {
        this.name = name;
        this.email = email;
        this._courseCount = 1;
        this.city = ''; // optional beacause it is not taken in constructror but we have to initialize it
        this.name = name;
        this.email = email;
    }
    Object.defineProperty(Userr.prototype, "getMacEmail", {
        get: function () {
            return "Your email is ".concat(this.email);
        },
        enumerable: false,
        configurable: true
    });
    Object.defineProperty(Userr.prototype, "getcourseCount", {
        get: function () {
            return this._courseCount;
        },
        enumerable: false,
        configurable: true
    });
    Object.defineProperty(Userr.prototype, "setCourseCount", {
        set: function (courseNum) {
            this._courseCount = 2;
        },
        enumerable: false,
        configurable: true
    });
    Object.defineProperty(Userr.prototype, "setMacEmail", {
        set: function (email) {
            this.email = email;
        },
        enumerable: false,
        configurable: true
    });
    return Userr;
}());
var SubUserr = /** @class */ (function (_super) {
    __extends(SubUserr, _super);
    function SubUserr() {
        var _this = _super !== null && _super.apply(this, arguments) || this;
        _this.isFamily = true;
        return _this;
    }
    SubUserr.prototype.changeCourseCount = function () {
        this._courseCount = 5;
    };
    return SubUserr;
}(Userr));
var user12 = new Userr('Aditya', 'abc@gmail.com');
