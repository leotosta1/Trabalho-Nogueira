#include <iostream>
#include <iomanip>
#include <cstdint> // Para int32_t, uint64_t estritos

int main() {
    std::cout << "=== ENGINE DE DADOS PRIMITIVOS E MEMÓRIA (C++) ===\n\n";

    // 1. Tipos Fundamentais do C++ (Modificadores Signed/Unsigned/Short/Long)
    unsigned char nivelLuminosidade = 255;  // 8 bits sem sinal (0 a 255)
    short int fpsFrame = 60;                // Mínimo 16 bits
    long long int verticesTotais = 8500000000LL; // Mínimo 64 bits

    // 2. Tipos com tamanho fixo (C++11 em diante)
    std::int32_t posicaoX = -1024;
    std::uint64_t bufferID = 0xFFFFAAAA11223344ULL;

    // 3. Ponto Flutuante de Alta Precisão
    float tempoRender = 0.0166f;            // 32 bits
    double cameraFOV = 90.0;                // 64 bits
    long double matrizTransformacao = 1.00000000000000049L; // 80 a 128 bits (Depende do compilador)

    // 4. Caracteres Estendidos e Bool
    wchar_t caractereNativo = L'Ω';         // Caractere largo (2 ou 4 bytes)
    bool colisaoAtiva = false;

    // EXCLUSIVO C++: Endereçamento de Memória de Tipos Primitivos (Ponteiros)
    std::cout << "[1] PONTEIROS E ENDEREÇOS DE MEMÓRIA REAL:\n";
    std::cout << "Valor 'posicaoX': " << posicaoX << "\n";
    std::cout << "Endereço Hexadecimal em RAM: " << &posicaoX << " (Tamanho: " << sizeof(posicaoX) << " bytes)\n\n";

    // EXCLUSIVO C++: Modificador Unsigned Roll-over (Underflow)
    std::cout << "[2] ESTOURO DE MEMÓRIA UNSIGNED (UNDERFLOW):\n";
    unsigned int contador = 0;
    std::cout << "Unsigned Int em Zero: " << contador << "\n";
    contador--; // Decrementar 0 em unsigned gera o maior valor possível da arquitetura
    std::cout << "Após subtracao (-1): " << contador << " (Max Uint32)\n\n";

    // Exibição de Precisão Long Double
    std::cout << "[3] DADOS DO FRAME:\n";
    std::cout << "FPS: " << fpsFrame << " | Tempo de Render: " << std::fixed << std::setprecision(4) << tempoRender << "s\n";
    std::cout << "Colisão Ativa: " << std::boolalpha << colisaoAtiva << "\n";

    return 0;
}