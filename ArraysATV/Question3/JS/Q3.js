const myArray = [];
let random;
let res = document.getElementById('resposta');
        

    for (let i = 0; i < 50; i++) {
        random = Math.floor(Math.random()*100);
        myArray.push(random);
    }

    let newArray = myArray.filter(function(este, i) {
        return myArray.indexOf(este) === i;
    });

console.log(random, myArray[random]);
console.log(myArray);

console.log(newArray);
res.innerHTML = `Array completo: <br><br>${myArray}<br><br>Array sem repetições: <br><br>${newArray}`;