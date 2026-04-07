#include <stdio.h>
#include <ctype.h>

int main() {
    int pontuacao = 0, total_perguntas = 15;
    char resposta;

    #define PERGUNTA(texto, correta, letra) \
        printf(texto); \
        printf("Sua resposta: "); \
        scanf(" %c", &resposta); \
        resposta = tolower(resposta); \
        while (resposta!='a' && resposta!='b' && resposta!='c' && resposta!='d') { \
            printf("Digite apenas a, b, c ou d: "); \
            scanf(" %c", &resposta); \
            resposta = tolower(resposta); \
        } \
        if (resposta == correta) { \
            pontuacao++; \
            printf("✅ CORRETO!\n\n"); \
        } else { \
            printf("❌ Errado! Resposta: %s\n\n", letra); \
        }

    printf("\n🖥️  QUIZ - COMANDOS LINUX BÁSICOS 🖥️\n");
    printf("=====================================\n\n");

    PERGUNTA("1) Qual comando lista os arquivos no diretório atual?\na) dir  b) list  c) ls  d) show\n", 'c', "ls");
    PERGUNTA("2) Qual comando mostra o manual de um comando?\na) help  b) man  c) info  d) doc\n", 'b', "man");
    PERGUNTA("3) Qual comando cria uma pasta?\na) create  b) mkdir  c) newdir  d) folder\n", 'b', "mkdir");
    PERGUNTA("4) Qual comando muda de diretório?\na) change  b) go  c) move  d) cd\n", 'd', "cd");
    PERGUNTA("5) Qual comando cria um arquivo vazio?\na) touch  b) new  c) create  d) file\n", 'a', "touch");
    PERGUNTA("6) Qual comando mostra o conteúdo de um arquivo?\na) read  b) open  c) show  d) cat\n", 'd', "cat");
    PERGUNTA("7) Qual comando move/renomeia arquivos?\na) move  b) rename  c) mv  d) shift\n", 'c', "mv");
    PERGUNTA("8) Qual comando copia arquivos?\na) copy  b) clone  c) duplicate  d) cp\n", 'd', "cp");
    PERGUNTA("9) Qual comando remove arquivos?\na) delete  b) rm  c) remove  d) clear\n", 'b', "rm");
    PERGUNTA("10) Qual comando busca texto em arquivos?\na) grep  b) find  c) search  d) scan\n", 'a', "grep");
    PERGUNTA("11) Qual comando limpa o terminal?\na) clr  b) wipe  c) clear  d) clean\n", 'c', "clear");
    PERGUNTA("12) Qual desses comandos edita um arquivo de texto?\na) nano  b) edt  c) nona  d) nantxt\n", 'a', "nano");
    PERGUNTA("13) Qual desses comandos mostra o IP da máquina?\na) hostnameIP  b) hostI  c) -IP  d) hostname -I\n", 'd', "hostname - I");
    PERGUNTA("14) Qual comando busca um arquivo dentro de um diretório?\na) find  b) cat  c) search  d) scan\n", 'a', "find");
    PERGUNTA("15) Qual comando remove forçadamente um arquivo?\na) rm  b) rm -rf  c) rmdim  d) rmall\n", 'b', "rm -rf");

    printf("\n🎉 RESULTADO FINAL 🎉\n");
    printf("====================\n");
    printf("Pontuação: %d/%d (%.0f%%)\n", pontuacao, total_perguntas,
           (float)pontuacao/total_perguntas*100);

    if (pontuacao == total_perguntas)
        printf("🏆 EXCELENTE! Você é um mestre do Linux! 🏆\n");
    else if (pontuacao >= 11)
        printf("👍 ÓTIMO! Muito bom conhecimento! 👍\n");
    else if (pontuacao >= 7)
        printf("📚 BOM! Continue estudando! 📚\n");
    else
        printf("🔄 Estude mais e tente novamente! 🔄\n");

    printf("\nObrigado por fazer o quiz! 🚀\n");
    return 0;
}
