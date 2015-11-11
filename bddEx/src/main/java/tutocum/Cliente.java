package tutocum;

import java.util.ArrayList;

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
    private ArrayList<Animal> anm;
    
    public Cliente(String name,Animal anm,Animal anm2){
        this.name = name;
        this.anm = new ArrayList<Animal>();
        this.anm.add(anm);
        this.anm.add(anm2);
    }

    public String getName() {
        return name;
    }

    public Animal getAnim(int Idx) {
        return this.anm.get(Idx);
    }
    
}
