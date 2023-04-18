const myArray = [];
const res = document.getElementById('resposta');
const arr = document.getElementById('Array');

for (let i = 0; i < 50; i++) {
const newNumber = Math.floor(Math.random() * 100);
    if (!myArray.includes(newNumber)) {
        myArray.push(newNumber);
    }
}

res.innerHTML = `Array completo sem repetições:<br><br>${myArray}` 
console.log(myArray);