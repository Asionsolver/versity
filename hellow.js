var age = 18;

var name = "Ashis";


var templateString = `My name is ${name} and I am ${age} years old. I am ${age >= 18 ? 'an adult' : 'not an adult'}`;

console.log(templateString);
