/**
 * pizza.h  2014-05-08
 * anonymouse(anonymouse@email)
 *
 * Copyright (C) 2000-2014 All Right Reserved
 * 
 * THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 * Auto generate for Design Patterns in C *
 * 
 * Consider a case of a pizza shop.
 In the pizza shop they will sale few pizza varieties and they will also provide toppings in the menu.
 Now imagine a situation wherein if the pizza shop has to provide prices for each combination of pizza and topping.
 Even if there are four basic pizzas and 8 different toppings,
 the application would go crazy maintaining all these concrete combination of pizzas and toppings.
 Here comes the decorator pattern.
 As per the decorator pattern,
 you will implement toppings as decorators and pizzas will be decorated by those toppings' decorators.
 Practically each customer would want toppings of his desire and final bill-amount will be composed of the base pizzas and additionally ordered toppings.
 Each topping decorator would know about the pizzas that it is decorating and it's price.
 GetPrice() method of Topping object would return cumulative price of both pizza and the topping.
 */
#ifndef __PIZZA_H__
#define __PIZZA_H__

#include <mycommon.h>
#include <mytrace.h>

struct pizza_ops;
/** Consider a case of a pizza shop.
 In the pizza shop they will sale few pizza varieties and they will also provide toppings in the menu.
 Now imagine a situation wherein if the pizza shop has to provide prices for each combination of pizza and topping.
 Even if there are four basic pizzas and 8 different toppings,
 the application would go crazy maintaining all these concrete combination of pizzas and toppings.
 Here comes the decorator pattern.
 As per the decorator pattern,
 you will implement toppings as decorators and pizzas will be decorated by those toppings' decorators.
 Practically each customer would want toppings of his desire and final bill-amount will be composed of the base pizzas and additionally ordered toppings.
 Each topping decorator would know about the pizzas that it is decorating and it's price.
 GetPrice() method of Topping object would return cumulative price of both pizza and the topping. */
struct pizza {
	struct pizza_ops *ops;
	int _pizza_price;
};
struct pizza_ops {
	int (*price)(struct pizza *);
	struct pizza_ops *__super;
};

/** constructor(). */
void pizza_init(struct pizza *pizza);

static inline int pizza_price(struct pizza *pizza)
{
	return pizza->ops->price(pizza);
}

#endif /* __PIZZA_H__ */
