package tutocum;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author luiz.costa
 */
public class Cliente {
    private String name;
    private Dog fofo;
    
    public Cliente(String name,Dog dog){
        this.name = name;
        this.fofo = dog;        
    }

    public String getName() {
        return name;
    }

    public Dog getFofo() {
        return fofo;
    }
    
}
