SELECT titre, date_debut_affiche, date_fin_affiche, datediff(date_fin_affiche,date_debut_affiche) AS "temps_affiche"
FROM film
WHERE datediff(date_fin_affiche ,date_debut_affiche);