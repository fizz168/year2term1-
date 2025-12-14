//count character in string 
function characterInString(str, char){
    let count = 0;
    for(const character of str){
        if(character == char){
            count ++;
        }
    }
    return count;


}
const sentence = "hello";
const targetchar = "o";
console.log(characterInString(sentence, targetchar));

