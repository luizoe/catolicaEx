/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.br.prog.exandre;

/**
 *
 * @author First Place
 */
public class Dave implements GenericM{
    private Cachorro dog;
    
    public Dave(){
        this.dog = new Cachorro();
    }
    @Override
    public String getNome() {
        return "Dave Atkins";
    }
    
    public Cachorro getDog(){
        return this.dog;
    }
}
