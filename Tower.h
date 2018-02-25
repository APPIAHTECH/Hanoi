/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tower.h
 * Author: Salchipapa
 *
 * Created on 25 de febrero de 2018, 12:24
 * 
 * This file contains all definitions and data structure of tower
 */

#ifndef TOWER_H
#define TOWER_H

// -------------------- Tower Structure ----------------------------------

typedef struct {
    int ID; // the id of tower 
} Tower;


// -------------------- Tower Header Methods----------------------------------

void set_tower_id(int id);
int get_tower_id(Tower tower);


#endif /* TOWER_H */