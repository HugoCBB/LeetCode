#include<iostream>
#include <random>
#include <thread>
#include <chrono>
#include<string>
#include <unordered_map>
class Jokenpo {
    private:

    int getRandomNumber(int min, int max) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(min, max);
        return dis(gen);
    }

    void main_play(int escolha, int computador){
        if (escolha == computador) {
            std::cout<<"EMPATE!!\n";
        } else {
            if((escolha == 0 && computador == 2) || 
            (escolha == 1 && computador == 0) || 
            (escolha == 2 && computador ==1)) {
                std::cout<<"VOCE VENCEU!\n";
                std::cout<<"JOGADAS\n";
                std::cout<<"USUARIO: " << escolha << std::endl;
                std::cout<<"COMPUTADOR: " << computador << std::endl;
            } else {
                std::cout<<"VOCE PERDEU!\n";
                std::cout<<"JOGADAS\n";
                std::cout<<"USUARIO: " << escolha << std::endl;
                std::cout<<"COMPUTADOR: " << computador << std::endl;

            }
        }
        
    }
    

    void animate(){
        std::cout << "JO";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::cout << "KEN";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::cout << "PO\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    int hub(){
        int escolha;
        std::cout << "-------------------------------------\n";
        std::cout << "|                                   |\n";
        std::cout << "|           JOKEN-PO 2000           |\n";
        std::cout << "|                                   |\n";
        std::cout << "-------------------------------------\n";
        std::cout << "Escolha uma das opcoes a baixo:\n0 - Pedra\n1 - Papel\n2 - Tesoura\n";

        std::cin >> escolha;
        if(escolha > 2 || escolha < 0 ) {
            std::cout << "Opcao invalida, escolha novamente:\n"; 
            escolha = hub();
        }
        return escolha;
    }

    public:
        void play(){
            int escolha = hub();
            int computador = getRandomNumber(0, 2);
            animate();
            main_play(escolha, computador);
        }

};

int main(){
    Jokenpo game;
    game.play();

    return 0;
}
    