//find average student 
function average(array){
    let sum = 0;
for(let i = 0; i < array.length; i++){
    sum += array[i];
}
const average = sum / array.length;
return average;
}
const number = [10, 20, 30];
console.log(average(number));

