// -----------------------------
// Arrays Review
// Author: Clint MacDonald
// Date: Sept. 15, 2025
// Description: Demonstrates arrays in JavaScript
// -----------------------------

/*******************************************************************
	ARRAYS
*******************************************************************/

/*
the ability to store multiple values in a single variable.
JavaScript arrays are different from arrays in C or Java as each element
in an array does NOT have to be of the same type.  They are more like a list data structure
*/

// Creating an array
var myArray = [11, 15, 13, "blue", 24, 35.05, Date("2019-05-22")];
var myArray2 = []; 		// zero length array
var myString = "";

for (var i = 0; i < myArray.length; i++) {
  console.log(myArray[i] + " - " + i + ' - ' + typeof(myArray[i]));
}

// length - already covered above (Property)

// METHODS
// push(), unshift(), pop(), and shift()
//		push() adds an element to the end of the array
//		unshift() adds an element to the beginning of the array
//		pop() removes last element of the array and returns removed element
//		shift() removes first element of the array and returns removed element

var myArray = [11, 15, 13, "blue", 24, 35.05, Date("2019-05-22")];
console.log(myArray);   // NOTE: look how the console presents this :)

myArray.push("LAST");
console.log(myArray);

myArray.unshift("FIRST");
console.log(myArray);

var lastElement = myArray.pop();
console.log(myArray);
console.log(lastElement);

var firstElement = myArray.shift();
console.log(myArray);
console.log(firstElement);

// Array Concatenation (wow)
var array1 = [1, 2, 3, 'blue'];
var array2 = [23, 'pink', 45.23];
var array3 = array1.concat(array2);
console.log(array1);
console.log(array2);
console.log(array3);
	// NOTE the + operator does not work with arrays

myArray = [11, 15, 13, "blue", 24, 35.05, Date("2019-05-22")];
myArray.push("New Value").sort();
myValue = myArray.pop();
myArray.pop();

// join()
	// an easy way to create CSV files (Comma Separated Values)
var csvString = array3.join(",")
console.log(array3.join(","));
console.log(csvString);

// sort()
var array1 = ["Red", 2, "Green", "15", "Blue", 101, "Yellow"];
var array2 = [99, 2, 38, 15, 66, 101, 200];
console.log( array1 );
console.log( array1.sort() );  // 101,15,2,Blue,Green,Red,Yellow
console.log( array2 );
console.log( array2.sort() );  // 101,15,2,200,38,66,99
	// NOTE the sorting is alphabetical, not numeric (Gotcha!!!!)
	

/*****************************************************
	Types of Lists - LIFO, FIFO
*****************************************************/

/*
	In programming lists are a type of object that can store many items and can be manipulated in different ways.  There are a few basic concepts to be aware of and this is relevent in JavaScript because arrays are basically treated like lists.
		- Stacks - 	image a stack of books, you pile the latest book on top, when you grab the 
					books back, you have to take the top one off first
				 - 	this is known as LIFO (Last In First Out)
		- Queues -	image a lineup at the movies to get in.  the first person in line will be 
					the first let into the show.  As new people arrive they go to the end of the line.
				 -	this is known as FIFO (First In First Out)
		- Generic Lists - do not have any particular order, but are like putting a bunch of 
					people in a room and then choosing which one leaves first.  These are less
					relevent to JavaScript as they are not used often.
	*/	

/*****************************************************
	Practice Question
*****************************************************/

/*  Create an array of a few peoples name in order to simulate a lineup at a store.  Create 2 functions that will be used as needed.  1) addPerson() new person arrives and joins the end of the line 2) removePerson() a spot becomes available and the first person in line is admitted to the show.  */

var lineUp = ["Bob", "John", "Jennifer", "Surbhi", "Raj", "Melissa"];








































function addPerson(personName){
	lineUp.push(personName);
	console.log(personName + " was added to the end of the line.")
}

function removePerson() {
	var removedName = lineUp.shift();
	console.log(removedName + " was let into the store and is no longer in line!  " + lineUp[0] + " is next");
}

//timeline store opens in 5 minutes
// Justin arrives and joins the line
addPerson("Justin");
console.log(lineUp);
// Ali arrives and joins the line
addPerson("Ali");
console.log(lineUp);
// Sonakshi arrives and joins the line
addPerson("Sonakshi");
console.log(lineUp);
//timeline store opens, first 5 people are let in
removePerson() 			// 1
console.log(lineUp); 
removePerson() 			// 2
console.log(lineUp);
removePerson() 			// 3
console.log(lineUp);
removePerson() 			// 4
console.log(lineUp);
removePerson() 			// 5
console.log(lineUp);
//timeline, the store is full, waiting for someone to leave.
// Clint arrives and joins the line
addPerson("Clint");
console.log(lineUp);
// Ruba arrives and joins the line
addPerson("Ruba");
console.log(lineUp);
//timeline, one person leaves, one can be let in
removePerson();
console.log(lineUp);
//timeline, one person leaves, one can be let in
removePerson();
console.log(lineUp);
// Angela arrives and joins the line
addPerson("Angela");
console.log(lineUp);
//timeline, no one else is coming, let everyone in
var numPeopleLeft = lineUp.length
for (var i=0; i < numPeopleLeft; i++) {
	removePerson();
	console.log(lineUp);
}


















