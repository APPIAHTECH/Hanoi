/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HanoiList.h
 * Author: Salchipapa
 *
 * Created on 24 de febrero de 2018, 19:31
 * 
 * This file contains all definitions and data structure of Hanoi List
 * The module defines the functionality of the list of moves
 * It uses a single linked list to store the list of moves 
 */

#ifndef HANOILIST_H
#define HANOILIST_H


// -------------------- Hanoi List Structure ----------------------------------

typedef struct list_node {
    struct list_node *next; // the next item
} list_node;

typedef struct {
    list_node *head; //the head of the linked list
} Llist;

// -------------------- Hanoi List Header Methods----------------------------------



#endif /* HANOILIST_H */

