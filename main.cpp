#include <windows.h>
#include "menu.h"

const void imprimeLinhas_m(int a) {
}

const void imprimeCondutores_m(int a) {
}

const void removerCondutor_m(int a) {
}
const void removerLinha_m(int a) {

}

const void adicionarCondutor_m(int a) {

}

const void adicionarLinha_m(int a) {

}

const void gravarTudo_m(int a) {

}


const void lerTudo_m(int a) {

}

int main() {

	
	Menu menu("Semprarrolar", NULL, NULL, 0);
	Menu* menu_gerirlinhas =		menu.addOption("Gerir Linhas",			'1', NULL);
	Menu* menu_gerircondutores =	menu.addOption("Gerir Condutores",		'2', NULL);

									menu.addOption("Gravar Alteracoes",		's', gravarTudo_m);
									menu.addOption("Recarregar do disco",	'r', lerTudo_m);


	menu_gerirlinhas		->		addOption("Mostrar Linha",				'm', imprimeLinhas_m);
	menu_gerirlinhas		->		addOption("Adicionar Linha",			'a', adicionarLinha_m);
	menu_gerirlinhas		->		addOption("Remover Linha",				'r', removerLinha_m);


	menu_gerircondutores	->		addOption("Mostrar Condutor",			'm', imprimeCondutores_m);
	menu_gerircondutores	->		addOption("Adicionar Condutor",			'a', adicionarCondutor_m);
	menu_gerircondutores	->		addOption("Remover Condutor",			'r', removerCondutor_m);




	while (1) {
		menu.print();
		menu.waitAndRun();
	}

	return 0;
}