#include <iostream>
#include <string>
#include "ArrayQueue.hpp"

// Função auxiliar para imprimir separadores
void printSeparator(const std::string& title) {
    std::cout << "\n----------------------------------------\n";
    std::cout << "TESTE: " << title << "\n";
    std::cout << "----------------------------------------\n";
}

int main() {
    std::cout << "Iniciando testes da classe ArrayQueue...\n";

    ArrayQueue<int> queue(3);

    printSeparator("Método enqueue() - Casos simples e O(1)");
    std::cout << "Adicionando elementos: 10, 20, 30...\n";
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    std::cout << "Estado da fila após enfileirar os elementos: ";
    queue.print(); 

    printSeparator("Método enqueue() - Caso de redimensionamento O(n)");
    std::cout << "Adicionando o elemento 40 (deve causar redimensionamento da capacidade 3 para 6)...\n";
    queue.enqueue(40);
    std::cout << "Estado da fila após adicionar 40: ";
    queue.print(); 
    
    std::cout << "Adicionando mais elementos para testar a nova capacidade (50, 60)...\n";
    queue.enqueue(50);
    queue.enqueue(60);
    std::cout << "Estado da fila após mais inserções: ";
    queue.print(); 

    printSeparator("Método dequeue() - Casos normais e funcionamento circular");
    int removed1 = queue.dequeue();
    int removed2 = queue.dequeue();
    std::cout << "Elementos removidos: " << removed1 << " e " << removed2 << "\n";
    std::cout << "Estado da fila após duas remoções: ";
    queue.print(); 
    
    std::cout << "Enfileirando elementos para rotacionar/envolver (wrap around) no buffer circular (70, 80)...\n";
    queue.enqueue(70);
    queue.enqueue(80);
    std::cout << "Estado da fila após inserções: ";
    queue.print(); 

    printSeparator("Método empty()");
    std::cout << "Limpando todos os elementos da fila...\n";
    queue.empty();
    std::cout << "Estado da fila após o método empty(): ";
    queue.print();

    printSeparator("Método dequeue() - Caso de erro (Fila Vazia)");
    try {
        std::cout << "Tentando remover um elemento com a fila vazia...\n";
        queue.dequeue();
        std::cout << "Se isso for impresso, houve um erro na tratativa!\n";
    } catch (const std::out_of_range& e) {
        std::cout << "Erro esperado capturado com sucesso: " << e.what() << "\n";
    }

    printSeparator("Teste final com tipos diferentes (String)");
    ArrayQueue<std::string> stringQueue(2);
    stringQueue.enqueue("C++");
    stringQueue.enqueue("Estrutura");
    stringQueue.enqueue("de");
    stringQueue.enqueue("Dados");
    std::cout << "Estado da fila de strings: ";
    stringQueue.print();
    std::cout << "Removendo um elemento (" << stringQueue.dequeue() << ")...\n";
    std::cout << "Estado da fila de strings após remoção: ";
    stringQueue.print();

    std::cout << "\nTestes finalizados com sucesso!\n";
    return 0;
}
