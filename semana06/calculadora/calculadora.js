var valor;
var resultado;
var buffer=0;
var history;
function botao(num){
    valor = document.calc.visor.value += num;
}
function reseta(){
    document.calc.visor.value = '';
}
function calcula(){
    resultado = eval(valor);
    document.calc.history.value = valor+"=";
    document.calc.visor.value = resultado.toLocaleString('pt-BR');
}
function backspace(){
    document.calc.visor.value = valor.substr(0,valor.length - 1);
    valor=valor.substr(0,valor.length - 1);
}
function memoryStore(){
    buffer=document.calc.visor.value;
}
function memoryRead(){
    document.calc.visor.value = buffer;    
}
function memoryCal(cal){
    if(eval(document.calc.visor.value)){
        buffer += cal.substr(1,1) + document.calc.visor.value;
    buffer = eval(buffer).toLocaleString('pt-BR');
    }
    
}