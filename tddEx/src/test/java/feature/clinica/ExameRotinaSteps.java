package feature.clinica;

import cucumber.api.java.en.Given;
import cucumber.api.java.en.Then;
import junit.framework.Assert;
import static org.hamcrest.MatcherAssert.assertThat;
import static org.hamcrest.core.IsEqual.equalTo;
import tutocum.Cliente;
import tutocum.Dog;
import tutocum.Recibo;
import tutocum.Veterinario;

public class ExameRotinaSteps {
        Cliente dave;
        Veterinario vet;
        Recibo rec;
	@Given("'(.+)' traz seu Doberman de estimacao chamado '(.+)' na clinica para exames de rotina")
	public void entrarClinica(final String nomeDave, final String nomeCao){
		dave = new Cliente(nomeDave,new Dog(nomeCao));
                //Trouxe os nego
                System.out.println(dave.getName());
                System.out.println(dave.getFofo().getSpecie());
	}
	
	@Then("O veterinario cobra dele a consulta de rotina e a '(.+)' Que custou cerca de '(\\d+)'")
	public void cobrarConsultaEVacina(final String servico, final double valor){
		vet = new Veterinario("Juan Carlos");
                rec = new Recibo(dave, vet);
                rec.adicionaServico(servico, valor);
	}
	
	@Then("Dave paga em dinheiro em um valor de '(\\d+)' antes de ele sair para o trabalho e lhe e fornecido um recibo de pagamento para os servicos.")
	public void pagaEmDinheiroERecebeRecibo(final double total){
                //Assert.assertTrue(rec.getTotal().equals(rec.getTotal()));
                System.out.println(rec.retornaRecibo());
                Assert.assertTrue("Ele nao pagou corretamente",rec.getTotal() > total);
	}
	
}
