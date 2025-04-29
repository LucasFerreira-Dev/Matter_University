using UnityEngine;

public class Apple : MonoBehaviour
{   
    
    // variaveis
    int numero;
    float tempo;

    void Start()
    {
    
    }

    
    void Update()
    {
        tempo = tempo + Time.deltaTime;
        Debug.Log(tempo);    
    }

    
}
