select count(id_abo) as "nbr abo", ceiling(avg(prix)) as "c abo"
from abonnement;