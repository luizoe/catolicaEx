package feature.clinica;

import cucumber.api.java.en.Given;
import cucumber.api.java.en.Then;
import junit.framework.Assert;
import static org.hamcrest.MatcherAssert.assertThat;
import static org.hamcrest.core.IsEqual.equalTo;
import tutocum.Cat;
import tutocum.Cliente;
import tutocum.Dog;
import tutocum.Recibo;
import tutocum.Veterinario;

public class ExameRotinaSteps {
        Cliente dave;
        Veterinario vet;
        Recibo rec;
	@Given("'(.+)' traz seus dois gatos, '(.+)' e '(.+)', para serem castrados")
	public void entrarClinica(final String nomeTraci, final String nomeGato,final String nomeGato2){
		dave = new Cliente(nomeTraci,new Cat(nomeGato),new Cat(nomeGato2));
	}
	
	@Then("'(.+)' realiza as '(.+)' (que tem uma taxa normal de '(\\d+)' reais). ")
	public void cobrarCastra(final String nomeVet,final String servico, final double valor){
		vet = new Veterinario(nomeVet);
                rec = new Recibo(dave, vet);
                rec.adicionaServico(servico, valor);
	}
        
        @Then("Traci pega seus gatos naquela noite, mas deseja pagar pelo servico ao final do mes.")
	public void pegaGatos(){
	}
        
        @Then("Naquele dia, ela recebe uma única fatura com os procedimentos detalhadas.")
	public void recebeFatura(){
	}
	
	@Then("Dave paga em dinheiro em um valor de '(\\d+)' antes de ele sair para o trabalho e lhe e fornecido um recibo de pagamento para os servicos.")
	public void pagaEmDinheiroERecebeRecibo(final double total){
                //Assert.assertTrue(rec.getTotal().equals(rec.getTotal()));
                System.out.println(rec.retornaRecibo());
                Assert.assertTrue("Ele nao pagou corretamente",rec.getTotal() > total);
	}
	
}
