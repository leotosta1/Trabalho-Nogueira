public class Main {

    public static void main(String[] args) {
        System.out.println("=== SISTEMA DE AUDITORIA DE TIPOS PRIMITIVOS (JAVA) ===");

        // 1. Tipos Inteiros
        byte codigoStatus = 127;             // 8 bits (-128 a 127)
        short agencia = 32000;               // 16 bits (-32.768 a 32.767)
        int idTransacao = 2_147_483_640;     // 32 bits (-2^31 a 2^31-1)
        long timestampEpoca = 1711920000000L;// 64 bits (-2^63 a 2^63-1)

        // 2. Tipos de Ponto Flutuante
        float taxaDeProcessamento = 0.005f;  // 32 bits (precisão simples)
        double saldoConta = 1548200.45;      // 64 bits (precisão dupla)

        // 3. Tipos Textual e Lógico
        char flagOperacao = 'C';             // 16 bits (UTF-16 Unicode character)
        boolean transacaoAprovada = true;    // Tipo lógico (true/false)

        // EXCLUSIVO JAVA: Demonstração de Overflow Controlado
        System.out.println("\n[1] TESTE DE OVERFLOW DE MEMÓRIA:");
        System.out.println("Valor byte original: " + codigoStatus);
        codigoStatus++; // Estoura o limite do byte (127 + 1)
        System.out.println("Valor byte após incrementação (+1): " + codigoStatus + " (Rolou para o menor valor!)");

        // EXCLUSIVO JAVA: Casting Explícito
        System.out.println("\n[2] CASTING EXPLÍCITO (Perda de Precisão):");
        double valorDolar = 199.99;
        int valorInteiroArredondado = (int) valorDolar;
        System.out.println("Double Original: " + valorDolar);
        System.out.println("Convertido para INT (Truncado): " + valorInteiroArredondado);

        // Imprimindo Resumo
        System.out.println("\n[3] RELATÓRIO DA TRANSAÇÃO:");
        System.out.printf("ID: %d | Tipo: %c | Aprovada: %b\n", idTransacao, flagOperacao, transacaoAprovada);
        System.out.printf("Saldo Atualizado: R$ %.2f (Taxa: %.3f%%)\n", saldoConta, taxaDeProcessamento);
    }
}