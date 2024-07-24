body {
    margin: auto;
    background-color: rgb(255, 194, 137);
}

header .logo img {
    border-radius: 10px;
    height: 170px;
    width: 170px;
    margin-top: 4px;
    margin-left: 4px;
}

header .Shop {
    font-size: 60px;
    font-family: 'Courier New', Courier, monospace;
    position: absolute;
    margin-left: 218px;
    bottom: 396px;
    display: flex;
}

header .Agro {
    font-size: 60px;
    font-family: 'Courier New', Courier, monospace;
    position: absolute;
    margin-left: 180px;
    bottom: 450px;
    display: flex;
}

.folha {
    display: flex;
    position: absolute;
    top: 30px;
    left: 330px;
}

.search_bar {
    display: flex;
    position: absolute;
    margin-left: 500px;
    bottom: 480px;
}

header .input {
    padding: 10px;
    border: none;
    border-radius: 20px;
    margin-right: 10px;
    width: 500px;
    height: 15px;
    background-color: white;
}

header .botao {
    padding: 10px;
    border: none;
    border-radius: 80px;
    background-color: rgb(212, 124, 41);
    cursor: pointer;
    display: flex;
    position: relative;
    bottom: 10px;
    left: 0px;
    height: 60px;
    width: 60px;
}

header .button_img {
    width: 65px;
    height: 65px;
    position: relative;
    display: flex;
    bottom: 16px;
    right: 22px;
}

.user_actions {
    display: flex;
    position: absolute;
    margin-left: 1215px;
    bottom: 525px;
}

header .conta {
    padding: 10px;
    border: none;
    border-radius: 80px;
    cursor: pointer;
    height: 90px;
    width: 90px;
    display: flex;
    position: absolute;
    left: 0px;
    bottom: 1px;
    background-color: rgb(212, 124, 41);
}

.img_conta {
    height: 60px;
    width: 60px;
    display: flex;
    position: absolute;
    right: 9px;
    bottom: 0px;
}

.product-card {
    background-color: white;
    border-radius: 10px;
    box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);
    overflow: hidden;
    width: 300px;
    text-align: center;
    transition: transform 0.2s;
    margin: 20px;
}

.product-card:hover {
    transform: scale(1.05);
}

.product-info img {
    width: 100%;
    height: 200px;
    object-fit: cover;
}

.product-info h3 {
    font-size: 1.5em;
    margin: 10px 0;
}

.product-info p {
    padding: 0 10px;
    font-size: 1em;
    color: #555;
}

.product-info button {
    margin: 10px;
    padding: 10px 20px;
    border: none;
    border-radius: 5px;
    background-color: rgb(212, 124, 41);
    color: white;
    cursor: pointer;
    transition: background-color 0.3s;
}

.product-info button:hover {
    background-color: rgb(180, 90, 20);
}

footer .Informacoes {
    display: flex;
    position: relative;
    left: 20px;
    bottom: 10px;
    color: rgb(0, 0, 0);
}

footer .Suporte {
    display: flex;
    position: relative;
    left: 250px;
    bottom: 72px;
}

footer .Atendimento {
    display: flex;
    position: relative;
    left: 430px;
    bottom: 132px;
}

footer .foot {
    display: flex;
    position: absolute;
    top: 30px;
    text-align: left;
}

footer .foot1 {
    display: flex;
    position: absolute;
    top: 75px;
    text-align: left;
}

footer .copy {
    display: flex;
    position: relative;
    left: 980px;
    bottom: 5px;
}

.product-grid {
    display: flex;
    flex-wrap: wrap;
    gap: 20px;
    justify-content: center;
    padding: 20px;
}
