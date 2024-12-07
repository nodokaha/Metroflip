#ifndef METRO_LIST_H
#define METRO_LIST_H

typedef struct {
    const char* name;
    const char* stations[14];  
} MetroLine;

#ifndef NAVIGO_H
#define NAVIGO_H

// Service Providers
static const char* SERVICE_PROVIDERS[] = { 
    [2] = "SNCF",  
    [3] = "RATP"
};

// Transport Types
static const char* TRANSPORT_LIST[] = {  
    [1] = "Urban Bus",  
    [2] = "Interurban Bus",  
    [3] = "Metro",  
    [4] = "Tram",  
    [5] = "Train",  
    [8] = "Parking"
};

// Transition Types
static const char* TRANSITION_LIST[] = {  
    [1] = "Entry",  
    [2] = "Exit",  
    [4] = "Inspection",  
    [6] = "Interchange (entry)",  
    [7] = "Interchange (exit)"
};

#endif // NAVIGO_H


const MetroLine METRO_LIST[] = {
    [0] = {
        "Cite", {
            "Saint-Michel", "Odeon", "Cluny - La Sorbonne", "Maubert - Mutualite", "Luxembourg", 
            "Chatelet", "Les Halles", "Les Halles", "Louvre - Rivoli", "Pont Neuf", "Cite", "Hotel de Ville"
        }
    },
    [1] = {
        "Rennes", {
            "Cambronne", "Sevres - Lecourbe", "Segur", "Saint-Francois-Xavier", "Duroc", 
            "Vaneau", "Sevres - Babylone", "Rue du Bac", "Rennes", "Saint-Sulpice", "Mabillon", "Saint-Germain-des-Pres"
        }
    },
    [2] = {
        "Villette", {
            "Porte de la Villette", "Aubervilliers - Pantin - Quatre Chemins", "Fort d'Aubervilliers", 
            "La Courneuve - 8 Mai 1945", "Hoche", "Eglise de Pantin", "Bobigny - Pantin - Raymond Queneau", 
            "Bobigny - Pablo Picasso"
        }
    },
    [3] = {
        "Montparnasse", {
            "Pernety", "Plaisance", "Gaite", "Edgar Quinet", "Vavin", "Montparnasse - Bienvenue", 
            "Saint-Placide", "Notre-Dame-des-Champs"
        }
    },
    [4] = {
        "Nation", {
            "Robespierre", "Porte de Montreuil", "Maraichers", "Buzenval", "Rue des Boulets", "Porte de Vincennes", 
            "Picpus", "Nation", "Avron", "Alexandre Dumas"
        }
    },
    [5] = {
        "Saint-Lazare", {
            "Malesherbes", "Monceau", "Villiers", "Quatre-Septembre", "Opera", "Auber", 
            "Havre - Caumartin", "Saint-Lazare", "Saint-Lazare", "Saint-Augustin", "Europe", "Liege"
        }
    },
    [6] = {
        "Auteuil", {
            "Porte de Saint-Cloud", "Porte d'Auteuil", "Eglise d'Auteuil", "Michel-Ange - Auteuil", 
            "Michel-Ange - Molitor", "Chardon-Lagache", "Mirabeau", "Exelmans", "Jasmin"
        }
    },
    [7] = {
        "Republique", {
            "Rambuteau", "Arts et Metiers", "Jacques Bonsergent", "Goncourt", "Temple", "Republique", 
            "Oberkampf", "Parmentier", "Filles du Calvaire", "Saint-Sebastien - Froissart", "Richard-Lenoir", "Saint-Ambroise"
        }
    },
    [8] = {
        "Austerlitz", {
            "Quai de la Gare", "Chevaleret", "Saint-Marcel", "Gare d'Austerlitz", "Gare de Lyon", "Quai de la Rapee"
        }
    },
    [9] = {
        "Invalides", {
            "Champs-Elysees - Clemenceau", "Concorde", "Madeleine", "Bir-Hakeim", "Ecole Militaire", 
            "La Tour-Maubourg", "Invalides", "Saint-Denis - Universite", "Varenne", "Assemblee nationale", "Solferino"
        }
    },
    [10] = {
        "Sentier", {
            "Tuileries", "Palais Royal - Musee du Louvre", "Pyramides", "Bourse", "Grands Boulevards", 
            "Richelieu - Drouot", "Bonne Nouvelle", "Strasbourg - Saint-Denis", "Chateau d'Eau", "Sentier", 
            "Reaumur - Sebastopol", "Etienne Marcel"
        }
    },
    [11] = {
        "Ile Saint-Louis", {
            "Faidherbe - Chaligny", "Reuilly - Diderot", "Montgallet", "Censier - Daubenton", "Place Monge", 
            "Cardinal Lemoine", "Jussieu", "Sully - Morland", "Pont Marie", "Saint-Paul", "Bastille", "Chemin Vert", 
            "Breguet - Sabin", "Ledru-Rollin"
        }
    },
    [12] = {
        "Daumesnil", {
            "Porte Doree", "Porte de Charenton", "Bercy", "Dugommier", "Michel Bizot", "Daumesnil", "Bel-Air"
        }
    },
    [13] = {
        "Italie", {
            "Porte de Choisy", "Porte d'Italie", "Cite universitaire", "Maison Blanche", "Tolbiac", "Nationale", 
            "Campo-Formio", "Les Gobelins", "Place d'Italie", "Corvisart"
        }
    },
    [14] = {
        "Denfert", {
            "Cour Saint-Emilion", "Porte d'Orleans", "Bibliotheque Francois Mitterrand", "Mouton-Duvernet", "Alesia", 
            "Olympiades", "Glaciere", "Saint-Jacques", "Raspail", "Denfert-Rochereau"
        }
    },
    [15] = {
        "Felix Faure", {
            "Falguiere", "Pasteur", "Volontaires", "Vaugirard", "Convention", "Porte de Versailles", 
            "Balard", "Lourmel", "Boucicaut", "Felix Faure", "Charles Michels", "Javel - Andre Citroen"
        }
    },
    [16] = {
        "Passy", {
            "Porte Dauphine", "La Motte-Picquet - Grenelle", "Commerce", "Avenue Emile Zola", "Dupleix", 
            "Passy", "Ranelagh", "La Muette", "Rue de la Pompe", "Boissiere", "Trocadero"
        }
    },
    [17] = {
        "Etoile", {
            "Iena", "Alma - Marceau", "Miromesnil", "Saint-Philippe du Roule", "Franklin D. Roosevelt", 
            "George V", "Kleber", "Victor Hugo", "Argentine", "Charles de Gaulle - Etoile", "Ternes", "Courcelles"
        }
    },
    [18] = {
        "Clichy - Saint Ouen", {
            "Mairie de Clichy", "Gabriel Peri", "Les Agnettes", "Asnieres - Gennevilliers - Les Courtilles", 
            "La Chapelle", "Garibaldi", "Mairie de Saint-Ouen", "Carrefour Pleyel", "Saint-Denis - Porte de Paris", 
            "Basilique de Saint-Denis"
        }
    },
    [19] = {
        "Montmartre", {
            "Porte de Clignancourt", "Porte de la Chapelle", "Marx Dormoy", "Marcadet - Poissonniers", "Simplon", 
            "Jules Joffrin", "Lamarck - Caulaincourt"
        }
    },
    [20] = {
        "Lafayette", {
            "Chaussee d'Antin - La Fayette", "Le Peletier", "Cadet", "Chateau Rouge", "Barbes - Rochechouart", 
            "Gare du Nord", "Gare de l'Est", "Poissonniere", "Chateau-Landon"
        }
    },
    [21] = {
        "Buttes Chaumont", {
            "Porte de Pantin", "Ourcq", "Corentin Cariou", "Crimee", "Riquet", "La Chapelle", 
            "Belleville", "Botzaris", "Pelleport", "Place des Fetes", "Cimetiere du Pere Lachaise"
        }
    }
};

#endif // METRO_LIST_H