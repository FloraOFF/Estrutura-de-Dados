const myArray = [];
let soma = 0, media = 0;
let random;
let maior = 0;
let res = document.getElementById('resposta');

    for (let i = 0; i < 50; i++) {
        random = Math.floor(Math.random()*100);
        myArray.push(random);
        soma += myArray[i];
    }

    media = soma/myArray.length;

console.log(soma);
console.log(media);

console.log(random, myArray[random]);
console.log(myArray);
res.innerHTML = `Array completo: <br><br>${myArray}<br><br> <strong>Média dos elementos no Array ${media}<strong>`;