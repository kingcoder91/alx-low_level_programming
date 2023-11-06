#include <stdlib.h>
#include "dog.h"

	/**
	 * init_dog - a function that initializes a variable of type struct dog
	 * This function takes a pointer to a `struct dog` and initializes
	 * its `name` and `age`3 fields with the provided values.
	 * @name: name to initialize
	 * @age: age to initialize
	 * @owner: owner to initialize
	 */
	void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
