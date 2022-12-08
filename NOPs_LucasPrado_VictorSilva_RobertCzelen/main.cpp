#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int TAM = 150;

struct OPcode{
    char formato;
    string nome;
    string code;
};

struct Instrucao{
    string instrucao;
    string nome;
    char formato;
    string regDestino;
};

void inicializarOPcode(OPcode listaOPcode[100]){
listaOPcode[0].formato='r';
listaOPcode[1].formato='r';
listaOPcode[2].formato='i';
listaOPcode[3].formato='i';
listaOPcode[4].formato='i';
listaOPcode[5].formato='r';
listaOPcode[6].formato='r';
listaOPcode[7].formato='r';
listaOPcode[8].formato='r';
listaOPcode[9].formato='r';
listaOPcode[10].formato='r';
listaOPcode[11].formato='i';
listaOPcode[12].formato='r';
listaOPcode[13].formato='r';
listaOPcode[14].formato='r';
listaOPcode[15].formato='r';
listaOPcode[16].formato='r';
listaOPcode[17].formato='r';
listaOPcode[18].formato='r';
listaOPcode[19].formato='r';
listaOPcode[20].formato='r';
listaOPcode[21].formato='i';
listaOPcode[22].formato='r';
listaOPcode[23].formato='r';
listaOPcode[24].formato='r';
listaOPcode[25].formato='i';
listaOPcode[26].formato='i';
listaOPcode[27].formato='r';
listaOPcode[28].formato='r';
listaOPcode[29].formato='i';
listaOPcode[30].formato='i';
listaOPcode[31].formato='i';
listaOPcode[32].formato='i';
listaOPcode[33].formato='i';
listaOPcode[34].formato='i';
listaOPcode[35].formato='i';
listaOPcode[36].formato='j';
listaOPcode[37].formato='j';
listaOPcode[38].formato='r';
listaOPcode[39].formato='r';
listaOPcode[40].formato='i';
listaOPcode[41].formato='i';
listaOPcode[42].formato='i';
listaOPcode[43].formato='r';
listaOPcode[44].formato='r';
listaOPcode[45].formato='r';
listaOPcode[46].formato='i';


listaOPcode[0].nome="addu";
listaOPcode[1].nome="add";
listaOPcode[2].nome="addiu";
listaOPcode[3].nome="addi";
listaOPcode[4].nome="andi";
listaOPcode[5].nome="div";
listaOPcode[6].nome="and";
listaOPcode[7].nome="mult";
listaOPcode[8].nome="divu";
listaOPcode[9].nome="nor";
listaOPcode[10].nome="multu";
listaOPcode[11].nome="ori";
listaOPcode[12].nome="or";
listaOPcode[13].nome="sllv";
listaOPcode[14].nome="sll";
listaOPcode[15].nome="srav";
listaOPcode[16].nome="sra";
listaOPcode[17].nome="srlv";
listaOPcode[18].nome="srl";
listaOPcode[19].nome="subu";
listaOPcode[20].nome="sub";
listaOPcode[21].nome="xori";
listaOPcode[22].nome="xor";
listaOPcode[23].nome="uslt";
listaOPcode[24].nome="slt";
listaOPcode[25].nome="sltiu";
listaOPcode[26].nome="slti";
listaOPcode[27].nome="llo";
listaOPcode[28].nome="lhi";
listaOPcode[29].nome="beq";
listaOPcode[30].nome="bne";
listaOPcode[31].nome="lbu";
listaOPcode[32].nome="lb";
listaOPcode[33].nome="lhu";
listaOPcode[34].nome="lh";
listaOPcode[35].nome="lw";
listaOPcode[36].nome="jal";
listaOPcode[37].nome='j';
listaOPcode[38].nome="jr";
listaOPcode[39].nome="jalr";
listaOPcode[40].nome="sh";
listaOPcode[41].nome="sb";
listaOPcode[42].nome="sw";
listaOPcode[43].nome="mflo";
listaOPcode[44].nome="mfhi";
listaOPcode[45].nome="mtlo";
listaOPcode[46].nome="mthi";


listaOPcode[0].code="100001";
listaOPcode[1].code="100000";
listaOPcode[2].code="001001";
listaOPcode[3].code="001000";
listaOPcode[4].code="001100";
listaOPcode[5].code="011010";
listaOPcode[6].code="100100";
listaOPcode[7].code="011000";
listaOPcode[8].code="011011";
listaOPcode[9].code="100111";
listaOPcode[10].code="011001";
listaOPcode[11].code="001101";
listaOPcode[12].code="100101";
listaOPcode[13].code="000100";
listaOPcode[14].code="000000";
listaOPcode[15].code="000111";
listaOPcode[16].code="000011";
listaOPcode[17].code="000110";
listaOPcode[18].code="000010";
listaOPcode[19].code="100011";
listaOPcode[20].code="100010";
listaOPcode[21].code="001110";
listaOPcode[22].code="100110";
listaOPcode[23].code="101010";
listaOPcode[24].code="101001";
listaOPcode[25].code="001001";
listaOPcode[26].code="001010";
listaOPcode[27].code="011000";
listaOPcode[28].code="011001";
listaOPcode[29].code="000100";
listaOPcode[30].code="000101";
listaOPcode[31].code="100100";
listaOPcode[32].code="100000";
listaOPcode[33].code="100101";
listaOPcode[34].code="100001";
listaOPcode[35].code="100011";
listaOPcode[36].code="000011";
listaOPcode[37].code="000010";
listaOPcode[38].code="001000";
listaOPcode[39].code="001001";
listaOPcode[40].code="101001";
listaOPcode[41].code="101000";
listaOPcode[42].code="101011";
listaOPcode[43].code="010010";
listaOPcode[44].code="010000";
listaOPcode[45].code="010011";
listaOPcode[46].code="010001";

}
  
OPcode pegarCodInstrucao(string code){
    OPcode OPcode;
    OPcode.code = "";
    OPcode.formato = ' ';
    for(int i=0; i<31; i++){
        OPcode.code += code.at(i);
        if(i==5){
            if(OPcode.code=="000000"){//caso formatoo r
                code.erase(0, 26);
                OPcode.code = code;
                OPcode.formato = 'r'; 
                return OPcode;
            }
            else{
                code.erase(6, 31);
                OPcode.code = code;
                return OPcode;
            }
        }
    }
    return OPcode;
}

string corrigirConflito(Instrucao instrucoes[TAM]){
    string codigoCorrigido = "";
    bool nops = false;
    for(int i=0; i<TAM; i++){
        if(instrucoes[i].instrucao!=""){
            codigoCorrigido = codigoCorrigido + instrucoes[i].instrucao + "\n";
            bool nops = false;
            for(int j=1; j<=5; j++){
                if(instrucoes[i].regDestino==instrucoes[i+j].regDestino){
                    nops = true;
                    break;
                }
            }
            if(nops==true){
                for(int k=0; k<5; k++){
                    codigoCorrigido = codigoCorrigido + "00000000000000000000000000100000" + "\n";
                }
            }
        }
    }
    return codigoCorrigido;
}

void buscarInstrucao(OPcode opcode, OPcode listaOPcode[100], Instrucao instrucoes[TAM], int contInstrucao, string instrucao){
    for(int i=0; i<46; i++){
        if(opcode.formato=='r'){
            if(opcode.code==listaOPcode[i].code && listaOPcode[i].formato=='r'){ 
                instrucoes[contInstrucao].formato = listaOPcode[i].formato;
                instrucoes[contInstrucao].nome = listaOPcode[i].nome;
                instrucoes[contInstrucao].instrucao = instrucao;
                instrucao.erase(0, 16);
                instrucao.erase(5);
                instrucoes[contInstrucao].regDestino = instrucao;
                return;
            }
        }else{
            if(opcode.code==listaOPcode[i].code && listaOPcode[i].formato=='i'){
                instrucoes[contInstrucao].formato = listaOPcode[i].formato;
                instrucoes[contInstrucao].nome = listaOPcode[i].nome;
                instrucoes[contInstrucao].instrucao = instrucao;
                instrucao.erase(0, 11);
                instrucao.erase(5);
                instrucoes[contInstrucao].regDestino = instrucao;
                return;
            }
            else{
                instrucoes[contInstrucao].formato = listaOPcode[i].formato;
                instrucoes[contInstrucao].nome = listaOPcode[i].nome;
            }
        }
    }

}

void imprimiInstrucoes(Instrucao instrucoes[TAM]){
    for(int i=0; i<TAM; i++){
        if (instrucoes[i].nome!= ""){
            cout<<"Instrucao: "<<i+1<<endl;
            cout<<"Comando: "<<instrucoes[i].nome<<endl;
            cout<<"RegDestino: "<<instrucoes[i].regDestino<<endl;
            cout<<"Formato: "<<instrucoes[i].formato<<endl;
            cout<<"Instrucao: "<<instrucoes[i].instrucao<<endl;
            cout<<endl;
        }
    }
}

void lerArquivo(){
    ifstream arquivoLer;
    string linha = "";
    OPcode listaOPcode[100];
    Instrucao instrucoes[TAM];
    int contInstrucao = 0;
    inicializarOPcode(listaOPcode);
    char letra;
    arquivoLer.open("texto.txt");
    while(!arquivoLer.eof()){
        arquivoLer.get(letra);
        if(letra=='\n' || arquivoLer.eof()){
            if(linha.size()<1){
                break;
            }
            buscarInstrucao(pegarCodInstrucao(linha), listaOPcode, instrucoes, contInstrucao, linha);
            contInstrucao++;
            linha = "";
        }else{
            linha += letra;
        }
    }
    arquivoLer.close();
    imprimiInstrucoes(instrucoes);
    cout<<endl<<"Codigo Corrigido: "<<endl<<endl;
    cout<<corrigirConflito(instrucoes);
    
}

int main() {
   lerArquivo();
}


