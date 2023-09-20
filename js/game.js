var elementos = document.querySelectorAll('.player-options div > img');
var playerOpt = "";
var inimigoOpt = "";

function validateWin() {

    let vencedor = document.querySelector('.winner');
    if (playerOpt == "papel") {
        if (inimigoOpt == "papel") {
            vencedor.innerHTML = "O jogo foi empatado";
        } else if (inimigoOpt == "tesoura") {
            vencedor.innerHTML = "O inimigo ganhou";
        } else if (inimigoOpt == "pedra") {
            vencedor.innerHTML = "Você ganhou!";
        }
    }

    if (playerOpt == "tesoura") {
        if (inimigoOpt == "papel") {
            vencedor.innerHTML = "Você ganhou!";
        } else if (inimigoOpt == "tesoura") {
            vencedor.innerHTML = "O jogo foi empatado";
        } else if (inimigoOpt == "pedra") {
            vencedor.innerHTML = "O inimigo ganhou";
        }
    }

    if (playerOpt == "pedra") {
        if (inimigoOpt == "papel") {
            vencedor.innerHTML = "O inimigo ganhou";
        } else if (inimigoOpt == "tesoura") {
            vencedor.innerHTML = "Você ganhou!";
        } else if (inimigoOpt == "pedra") {
            vencedor.innerHTML = "O jogo foi empatado";
        }
    }
}

function resetEnemy() {
    const enemyOptions = document.querySelectorAll('.enemy-options div');
    for (var i = 0; i < enemyOptions.length; i++) {
        enemyOptions[i].childNodes[0].style.opacity = 0.3;
    }
}

function enemyPlay() {
    let rand = Math.floor(Math.random() * 3);
    const enemyOptions = document.querySelectorAll('.enemy-options div');
    resetEnemy();
    for (var i = 0; i < enemyOptions.length; i++) {
        if (i == rand) {
            enemyOptions[i].childNodes[0].style.opacity = 1;
            inimigoOpt = enemyOptions[i].childNodes[0].getAttribute('opt');
        }
    }

    validateWin();

}

function resetOpacityPlayer() {
    for (var i = 0; i < elementos.length; i++) {
        elementos[i].style.opacity = 0.3;
    }
}

for (var i = 0; i < elementos.length; i++) {
    elementos[i].addEventListener('click', function (t) {
        resetOpacityPlayer();
        t.target.style.opacity = 1;
        playerOpt = t.target.getAttribute('opt');
        enemyPlay();
    });
}
