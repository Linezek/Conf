select max(id_film) "max id film"
from film, genre
where film.id_genre = genre.id_genre and genre.nom like "action";