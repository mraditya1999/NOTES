let person1 = {
    firstName: "Aditya",
    lastName: "Yadav",
  };
  
  let person2 = {
    firstName: "Rajat",
    lastName: "Yadav",
  };
  
  function about(hobby, favMusician) {
    console.log(this.firstName, this.lastName, hobby, favMusician);
  }
  
  // Call method
  about.call(person1, "gaming", "mozart");
  
  // apply method
  about.apply(person1, ["gaming", "mozart"]);
  
  // bind  method
  const  func = about.bind(person1, "gaming", "mozart"); //return funtion
  func();
  
  