using UnityEngine;

public class Apple : MonoBehaviour
{   
    
    // variavel 
    int vidaPlayer = 100, atackEnemy = 10, vidaAtual;

    void Start()
    {
        vidaAtual = vidaPlayer;
        
    }

    // Update is called once per frame
    void Update()
    {
        if (vidaAtual > 0)
        {
            vidaAtual -= atackEnemy; // Reduz a vida com base no ataque do inimigo
            if (vidaAtual < 0) vidaAtual = 0;
        }

        if(vidaAtual == 100) {
            Debug.Log("Vida completa");
        } else if(vidaAtual == 90){
            Debug.Log("Levou 1 ataque");
        } else if(vidaAtual == 80){
            Debug.Log("Levou 2 ataque");
        } else if(vidaAtual == 70){
            Debug.Log("Levou 3 ataque");
        } else if(vidaAtual == 60){
            Debug.Log("Levou 4 ataque");
        } else if(vidaAtual == 50){
            Debug.Log("Levou 5 ataque");
        } else if(vidaAtual == 40){
            Debug.Log("Levou 6 ataque");
        } else if(vidaAtual == 30){
            Debug.Log("Levou 7 ataque");
        } else if(vidaAtual == 20){
            Debug.Log("Levou 8 ataque");
        } else if(vidaAtual == 10){
            Debug.Log("Levou 9 ataque");
        } else if(vidaAtual == 00){
            Debug.Log("Sem vida");
        }
    }
}
