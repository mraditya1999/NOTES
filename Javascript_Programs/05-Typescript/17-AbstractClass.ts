// Interface vs Abstract
// interface implements whereas abstract class extends
// interface is a protocol whereas abstract is a class blueprint
// we can do multiple interface implementation whereas we can only extend one abstract class
// In abstract class we can have abstract methods and concrete methods whereas in interface we can only have abstract methods
// We cannot create object for anstract class but we can create of class which is extending abstract class

abstract class TakePhoto {
  constructor(
    public cameraMode: string,
    public filter: string,
    public burst: number
  ) {}

  abstract getSepia(): void;
  getReelTime(): number {
    return 5;
  }
}

class Instagram extends TakePhoto {
  constructor(
    public cameraMode: string,
    public filter: string,
    public burst: number
  ) {
    super(cameraMode, filter, burst);
  }

  getSepia(): void {
    console.log('Sepia filter applied');
  }
}

const aditya = new Instagram('portrait', 'black and white', 5);
aditya.getReelTime();
