//count every number of word in sentence
function countNumberOfCharacters(str){
    const trimmedStr = str.trim();
    // This returns the number of letters (5 for "hello")
    return trimmedStr.length; 
}

console.log(countNumberOfCharacters("hello ")); // Output: 5