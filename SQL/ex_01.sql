 select titre "titre film"
 from film
 where titre
 like "E%" and id_genre < 7 and id_genre != 4 and id_genre != 3 and id_genre != 2 and id_genre != 1;
