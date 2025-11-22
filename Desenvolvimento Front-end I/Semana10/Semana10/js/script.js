document.addEventListener("DOMContentLoaded", function () {
  const listaStartups = document.getElementById("lista-startups");

  if (listaStartups) {
    listaStartups.addEventListener("click", function (e) {
      const elementoClicado = e.target;

      const liClicado = elementoClicado.closest("li");

      if (liClicado) {
        liClicado.classList.toggle("sucesso");
      }
    });
  } else {
    console.error("Erro: A lista de startups não foi encontrada!");
  }
});
