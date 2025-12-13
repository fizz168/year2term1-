//drawing the star base on input height and width 
function rec(width, height){
    for(let i = 0; i < height; i++){
        for(let j = 0; j < width; j++){
            process.stdout.write("* ");
        }
        console.log("");
    }
}
rec(5, 2);