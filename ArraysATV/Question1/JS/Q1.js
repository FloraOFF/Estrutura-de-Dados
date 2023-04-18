const myArray = [];
let random;
let maior = 0;
let res = document.getElementById('resposta');

for (let i = 0; i < 50; i++) {
    random = Math.floor(Math.random()*100);
    myArray.push(random);
    
    if (maior == 0) {
        maior = myArray[i];
    } else if (myArray[i] > maior) {
        maior = myArray[i];
    }
}

console.log(random, myArray[random])
console.log(myArray)
res.innerHTML = `Array completo: <br><br>${myArray}<br><br> <strong>Maior número no Array ${maior}<strong>`;