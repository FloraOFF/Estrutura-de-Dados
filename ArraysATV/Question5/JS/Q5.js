const myArray = []
    let random
    let res = document.getElementById('resposta');
    let arr = document.getElementById('Array');
        
    for (let i = 0; i < 50; i++) {
        random = Math.floor(Math.random()*100); 
        myArray.push(random);
    }

    let current = null;
    let count = 0;
    let maxRepeated = 0;

    res.innerHTML = `Array completo:<br><br> ${myArray}`

    myArray.sort() //Ordenar o Array

    console.log(myArray.sort()) //Mostrar no console

    for (let j = 0; j <= myArray.length; j++) { 
        if (myArray[j] != current) { 
            if (count > 0) {
                res.innerHTML += `<br><br>${current} apareceu ${count} vezes`
            }
            current = myArray[j]; //Atribuir e voltar no loop
            count = 1;
        } else {
            count++;
        }

    }