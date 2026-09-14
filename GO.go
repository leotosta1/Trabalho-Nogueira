package main

import (
	"fmt"
	"math"
	"unsafe"
)

func main() {
	fmt.Println("=== SISTEMA DE TELEMETRIA IOT E TIPOS PRIMITIVOS (GO) ===")

	// 1. Inteiros com tamanho exato e Unsigned (Sem sinal)
	var sensorID uint16 = 65535             // 16 bits sem sinal (0 a 65535)
	var leituraAdc int32 = -2147483648       // 32 bits com sinal
	var contadorPulsos uint64 = 18446744073709551615 // Max 64-bit uint

	// Inteiro com tamanho dependente da arquitetura (32 ou 64 bits)
	var indiceLeitura int = 100 

	// 2. Pontos Flutuantes
	var temperatura float32 = 36.6          // 32 bits
	var pressaoAtmosferica float64 = 1013.25 // 64 bits

	// 3. Tipos Textuais Nativos (Rune e Byte)
	var categoriaSensor byte = 'A'          // Alias para uint8 (ASCII)
	var simboloStatus rune = '✓'             // Alias para int32 (Unicode Code Point)

	// 4. Tipo Booleano
	var ativo bool = true

	// 5. Números Complexos (Nativo do Go)
	var sinalOnda complex64 = 3 + 4i

	// EXCLUSIVO GO: Inspeção de Alocação de Memória
	fmt.Println("\n[1] INSPEÇÃO DE MEMÓRIA EM TIPO REAL:")
	fmt.Printf("Tipo 'uint16' (SensorID)  -> Tamanho: %d bytes\n", unsafe.Sizeof(sensorID))
	fmt.Printf("Tipo 'int' (Arquitetura)  -> Tamanho: %d bytes\n", unsafe.Sizeof(indiceLeitura))
	fmt.Printf("Tipo 'rune' (Unicode '✓') -> Tamanho: %d bytes\n", unsafe.Sizeof(simboloStatus))

	// EXCLUSIVO GO: Conversão Estrita (Go não faz coerção implícita)
	fmt.Println("\n[2] CONVERSÃO EXPLÍCITA RÍGIDA:")
	var calculoPrecisao float64 = float64(temperatura) + pressaoAtmosferica
	fmt.Printf("Soma Float32 + Float64 convertida: %.2f\n", calculoPrecisao)

	// Exibindo número complexo
	fmt.Printf("\n[3] LEITURA DE SINAL DE ONDA COMPLEXO: %v (Magnitude: %.2f)\n", 
		sinalOnda, math.Hypot(float64(real(sinalOnda)), float64(imag(sinalOnda))))
}