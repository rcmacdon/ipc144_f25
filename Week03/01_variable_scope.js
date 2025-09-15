// ---------------------------------
// Title: Variable Scope in JavaScript
// Author: Clint MacDonald
// Date: Sept. 15, 2025
// Description: Demonstrates global, function, and block scope
// ---------------------------------

// Global Scope
let globalVar = "I am a global variable";

// Function Scope
function myFunction() {
    let functionVar = "I am a function variable";
    console.log(functionVar);
    console.log(globalVar);
}
myFunction();
console.log(globalVar);
console.log(functionVar);
// Uncaught ReferenceError: functionVar is not defined

// Block Scope
if (true) {
    let blockVar = "I am a block variable";
    console.log(blockVar);
}
console.log(blockVar);
// Uncaught ReferenceError: blockVar is not defined

// Demonstrating var (function scope)
function varFunction() {
    var varVar = "I am the outside variable!"

    if (true) {
        var varVar = "I am the inside variable";
        console.log(varVar);
    }

    console.log(varVar);
}
varFunction();

// but when using let or const, it respects block scope
function varFunction() {
    let varVar = "I am the outside variable!"

    if (true) {
        let varVar = "I am the inside variable";
        console.log(varVar);
    }

    console.log(varVar);
}
varFunction();


let x = 10;
// let x = "Clint"; // ERROR
x = "Clint";


var y = 11;
var y = "MacDonald";


// Closure
// Nested functions

function program(prog) {
    var p = prog;
    function student(name) {
        return ("Student name: %s, \nProgram: %s", name, p).toString();    }
    return student;
}

var bsd_student = program("BSD"); // returns the inner function with an initial program value for prog.
var cpa_student = program("CPA");

var john = bsd_student("John Doe");
var dave = cpa_student("Dave Smith");

console.log(john);
console.log(dave);