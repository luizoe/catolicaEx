/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.br.prog.exandre;
public class Cachorro implements GenericM{
    public String getEspecie(){
        return "Doberman";
    }
    
    @Override
    public String getNome(){
        return "Fofo";
    }
}
