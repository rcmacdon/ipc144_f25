/* 
Web 222 - Week 3 Lecture Notes
Sept. 15, 2025
Clint MacDonald
*/

/*******************************************************************
	JavaScript Objects (Strings, Arrays, and Regex)
*******************************************************************/

/* 	In JavaScript, you can create an object outside of a class.
	These objects are comprised of properties (variables) and methods (functions)
	
	There are 3 Categories of Objects
	1) Built-in Objects		(natively built into the javascript language)
							 examples: String, Date, Math, JSON, etc....
	2) Host Objects			(supplied to JavaScript by the browser environment
							 examples: 	DOM (Document Object Model)
										BOM (Browser Object Model)
										window, document, form, etc....
	3) Custom Objects		(user-defined functions)
*/

// String Objects
let str1 = "Hello World";	// primitive string
console.log(str1[4]);	// index of an array starts at 0
console.log(str1[8]);

// length of string
console.log(str1.length);

/*******************************************************************
	String Objects
*******************************************************************/

// Yes a string is not just a datatype, but also an Object.  
// It has built-in properties and methods
// Listed on PPT3-slide 9

// EXAMPLE
var strName = "Seneca College";
console.log(strName + " is " + strName.length + " characters long");
	//	length is a property of string and stores the number of 
	//	characters in the string


console.log(strName.toUpperCase());
	// 	toUpperCase() is a method because it performs an action.  
		//	NOTE: 	methods are executed and therefore require the () to be
		//			present.  The brackets presence forces the execution to
		//			occur immediately.
		//	NOTE 2:	this does not permanently change the variable, it only
		//			changes it for this particular output.
		//			strName = strName.toUpperCase  would permanently change it
	
// split() method and our first array
var myStrArray = strName.split(" ");
for (var i = 0; i < myStrArray.length; i++) {
	console.log(myStrArray[i] + " - " + i);
}
// for clarity only
console.log("1 - " + myStrArray[0]);
console.log("1 - " + myStrArray[1]);
console.log("1 - " + myStrArray[2]);

	// split divides the original string into parts delineated by the 
	// provided string.  This is most often a "," or " "
	// each part is then placed in an element of an array in the same order
	// myStrArray[0] = "Seneca"
	// myStrArray[1] = "College"
	// NOTE: the original " "'s are eliminated in this case

/* 	IN FACT, without using the split method, a string is already setup as
	an array with each character being an element in a string array
	Let us look further---- */
	
// substr()
console.log(strName.substr(3,6));  
// outputs starting at the 4th character and proceeds for 6 characters total

//  indexOf()
console.log(strName.indexOf('C'));
	// returns the character index number of the string input
	// returns 7
console.log(strName.indexOf('COL'));
	// it is case sensitive and returns -1 if not found
	// returns -1
console.log(strName.indexOf('e'));
	// only returns the index number for the first instance of the input string
	// returns 1
console.log(strName.indexOf('e', 6));
	// option, indicate where in the string the search should start
	// returns 11
	
//	charAt()
console.log(strName.charAt(8));
	// returns the character found at the index provided
	// returns "o"	
console.log(strName.charAt(19));
	//	returns an empty string if the index supplied is out of range
	// returns ""

// similarily, note that a string can be treated like an array
console.log(strName[8]);
	// returns "o"

// Unicode charCodeAt()
console.log(strName.charCodeAt(4));
	// returns 99 - the char code for the letter 'c'
    
// trim() - getting rid of the fat.
var inputString = prompt("Enter a string");
console.log("|" + inputString + "|");
console.log("|" + inputString.trim() + "|");
	// trim() removes all leading and trailing spaces, important when accepting
	// input from users
	// imagine having spaces in front of some names and then sorting them

	// there are also 2 varieties   trimLeft() and trimRight() 
	//		BUT, these are not universal and some browsers won't except them
