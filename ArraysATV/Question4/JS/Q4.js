let res = document.getElementById('resposta');
let array = document.getElementById('Array');

const myArray = [];
for (let i = 0; i < 50; i++) {
  myArray.push(Math.floor(Math.random() * 101));  
}

array.innerHTML = `Array completo:<br><br>${myArray}`

let freq = {};
myArray.forEach(num => {
  freq[num] = freq[num] ? freq[num] + 1 : 1;
});

let maior_freq = 0;
let maior_num = 0;

for (let num in freq) {
  if (freq[num] > maior_freq) {
    maior_freq = freq[num];
    maior_num = num;
  }
}

res.innerHTML = `O número que mais se repetiu foi o ${maior_num}, que apareceu ${maior_freq} vezes.`;
