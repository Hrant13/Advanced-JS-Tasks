function reverseStr(word) {
  let count = '\0';
    for(let i = word.length-1; i >= 0; --i) {
        count+=word[i]
    }
return count;
}

let expression = reverseStr("Brandan Eich");
console.log(expression)
