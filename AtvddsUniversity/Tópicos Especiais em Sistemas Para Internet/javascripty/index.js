// Exemplo em JavaScript
fetch("https://economia.awesomeapi.com.br/last/USD-BRL,EUR-BRL,BTC-BRL")
    .then(response => response.json())
    .then(data => {
        // Obtém a cotação do dólar
        let resultado = parseFloat(data.USDBRL.bid);
        
        // Exibe a cotação com duas casas decimais
        document.write(`Cotação do dólar hoje: ${resultado.toFixed(2)}`);
    })
    .catch(error => {
        document.write("Erro ao buscar a cotação:", error);
    });