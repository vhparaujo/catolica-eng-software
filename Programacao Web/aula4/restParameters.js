// Rest Parameters
function incluir(...numeros){
    numeros.forEach(element => {
        console.log(element);
    });
}

incluir("1",2,3,4,5,false);
