function getShape(shape) {
    if (shape.kind === 'circle') {
        return Math.PI * Math.pow(shape.radius, 2);
    }
    return shape.side * shape.side;
}
function getArea(shape) {
    switch (shape.kind) {
        case 'circle':
            return Math.PI * Math.pow(shape.radius, 2);
        case 'square':
            return shape.side * shape.side;
        default:
            var _defaultforshape = shape;
            return _defaultforshape;
    }
}
