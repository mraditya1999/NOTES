// Interface vs Abstract
// interface implements whereas abstract class extends
// interface is a protocol whereas abstract is a class blueprint
// we can do multiple interface implementation whereas we can only extend one abstract class
// In abstract class we can have abstract methods and concrete methods whereas in interface we can only have abstract methods
// We cannot create object for anstract class but we can create of class which is extending abstract class
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
var TakePhoto = /** @class */ (function () {
    function TakePhoto(cameraMode, filter, burst) {
        this.cameraMode = cameraMode;
        this.filter = filter;
        this.burst = burst;
    }
    TakePhoto.prototype.getReelTime = function () {
        return 5;
    };
    return TakePhoto;
}());
var Instagram = /** @class */ (function (_super) {
    __extends(Instagram, _super);
    function Instagram(cameraMode, filter, burst) {
        var _this = _super.call(this, cameraMode, filter, burst) || this;
        _this.cameraMode = cameraMode;
        _this.filter = filter;
        _this.burst = burst;
        return _this;
    }
    Instagram.prototype.getSepia = function () {
        console.log('Sepia filter applied');
    };
    return Instagram;
}(TakePhoto));
var aditya = new Instagram('portrait', 'black and white', 5);
aditya.getReelTime();
