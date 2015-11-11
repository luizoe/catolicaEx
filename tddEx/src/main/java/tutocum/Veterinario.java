/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tutocum;

/**
 *
 * @author luiz.costa
 */
public class Veterinario {
    private String name;
    public Veterinario(String nome){
        this.name = nome;
    }

    public String getName() {
        return name;
    }
    public Double getValor(){
        return 15.99;
    }
}
