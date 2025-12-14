function challenge1(width, height){
    for(let i = 0; i < height; i++){
        for( let j = 0; j < width; j++){
      process.stdout.write("* ");
        }
        console.log("");

    }
}
challenge1(5, 2);


// let arr = [1, 2, 3, 4, 5];
// arr.reverse();
// console.log(arr);



//challenge 3 average student 
function average(array){
let sum = 0;
for(let i = 0; i < number.length; i++){
        sum += array[i];
}
    const average = sum / number.length;
    return average; 

}

// const number = [10, 20, 30];
// console.log(average(number));

// challenge 4 :
// function countCharInString(str, char){
//     let count = 0;
//     for(const character of str){
//     if(character == char){
//         count++;
//     }
//     }
//     return count;

// }
// const sentence = "hello world";
// const targetchar = 'o';
// const occurrences = countCharInString(sentence, targetchar);
// console.log(`The character "${targetchar}" appears ${occurrences} times.`); 

//challenge 5 : count every number of word in a sentence 
    function countNumberOfWord(str){
        const trimmedStr = str.trim();
        if(trimmedStr === ""){
            return 0;
        }
        return trimmedStr.split(/\s+/).length;
    }
    console.log(countNumberOfWord("hello "));

// function simulateVote(voteArray){
//     const count = {
//         'A' : 0,
//         'B' : 0,
//         'C' : 0
//     };

// }