/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tutocum;

import java.util.HashMap;
import java.util.Map;

/**
 *
 * @author luiz.costa
 */
public class Recibo {
    private Cliente dave;
    private Veterinario vet;
    private HashMap<String,Double> servicos;

    public Recibo(Cliente cli, Veterinario vet){
        this.dave = cli;
        this.vet = vet;
        this.servicos = new HashMap<String, Double>();
    }
    
    public Cliente getDave() {
        return dave;
    }

    public Veterinario getVet() {
        return vet;
    }

    public Double getTotal() {
        double total = 0;
        for(Map.Entry<String,Double> entrada: servicos.entrySet()){
            total += entrada.getValue();
        }
        return total;
    }
    
    public void adicionaServico(String titulo,Double valor){
        this.servicos.put(titulo, valor);
    }
    
    public String retornaRecibo(){
        String retorno ="";
        for(Map.Entry<String,Double> entrada: servicos.entrySet()){
            retorno+= "Servico:"+entrada.getKey()+"\nValor:"+entrada.getValue();
        }
        return retorno;
    }
    
}
