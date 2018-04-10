// TP2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <Windows.h>	
#include <iostream>  //entrada e saida 
#include <string>	//cadeia


using namespace std;
void inicializarJogo();

int main()
{
	inicializarJogo();

    return 0;
}

void inicializarJogo() {

													/*  1 (2,3)
	E = escudo											2 (2,5)			(E)
	M = Monstro											3 (5,6)			(M)	+ XP	sl_3 * sl_3 
	S = Espada											4 (5,6)			(S)
														5 (6,7)			(M)	+ XP	sl_5 * sl_5
														6 (7,8)
														7 (9,10)		(M)	+ XP	sl_7 * sl_7		 (key)
														8 (10,11)
														9 (10,11)
														10 (11,12)
														11 (12,13)		(M)	+ XP	sl_11 * sl_11
														12 (4,13)
														13 (?) locked		*/
	//2 percentuais luta e fuga

		/*Seu personagem iniciará na Sala 1 e tem por objetivo chegar até a Sala 13.
		• Nas Salas 3, 5, 7 e 11 existem monstros.
		• Nas Sala 2 existe um escudo, Na Sala 4 existe uma Espada.
		• O seu personagem inicia com 0 de experiência e cada monstro derrotado aumenta a experiência equivalente ao número da Sala elevado ao quadrado e extraia a raiz cúbica
		(Considere o valor Inteiro)
		• As setas(nas bolinhas do mapa abaixo) indicam para quais salas e possível ir de uma sala de origem.Para passar da Sala 11 ou 12  é obrigatório derrotar o monstro da Sala 7 (que possui
			uma chave, que abrirá a sala 13).
		• O personagem deve poder : se mover para direita e para esquerda.Pegar um item, abrir uma porta, batalhar com o monstro e fugir de um monstro.
		o Sem escudo e sem espada ele tem 25 % de chance de fugir e 25 % de chance de derrotar o monstro
		o Com escudo o personagem tem 40 % de chance de fuga mas não pode derrotar o monstro
		o Com espada o personagem tem 60 % de chance de vitória mas não pode fugir do monstro
		o Com espada e escudo o personagem tem 70 % de chance de vencer o monstro e de fugir, no entanto, para cada monstro derrotado esse percentual incremente no equivalente
		ao número da sala do monstro que foi derrotado.Dica : utilize random.
		• Toda vez que o personagem chegar em uma sala ele deve ser questionado sobre sua ação : se existir um item, questione primeiro se quer ou não pegar o item, caso não pegue ele só
		pode tentar pegar caso saia e entre na sala.Se for um monstro pergunte se quer batalhar ou fugir.Se for a sala 13, só questione sobre abrir a porta após fugir ou derrotar o monstro
		com sucesso.Uma vez derrotado, um monstro não aparece novamente.
		• Quando o personagem chegar na casa 13 deve ser demonstrado na tela : A experiência adquirida, quantos monstros foram derrotados, se possui espada, escudo e quantas vezes fugiu
		de uma luta.Não é necessário iniciar um novo jogo.*/


}