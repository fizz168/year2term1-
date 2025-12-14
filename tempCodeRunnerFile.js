   function countNumberOfWord(str){
        const trimmedStr = str.trim();
        if(trimmedStr === ""){
            return 0;
        }
        return trimmedStr.split(/\s+/).length;
    }
    console.log(countNumberOfWord("hello "));
