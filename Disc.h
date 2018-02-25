/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Disc.h
 * Author: Salchipapa
 *
 * Created on 25 de febrero de 2018, 12:23
 * 
 * This file contains all definitions and data structure of Disc
 */

#ifndef DISC_H
#define DISC_H


// -------------------- Disc Structure ----------------------------------

typedef struct {
    int ID; // the id of disc 
} Disc;


// -------------------- Disc Header Methods----------------------------------

void set_disc_id(int id);
int get_disc_id(Disc disc);

#endif /* DISC_H */

