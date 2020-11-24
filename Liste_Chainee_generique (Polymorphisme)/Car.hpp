#ifndef CAR_HPP_INCLUDED
#define CAR_HPP_INCLUDED

class Vehicule
{
    public:
    Vehicule(const int prix);
    Vehicule(const Vehicule&);
    virtual void afficher(void) const = 0;
    int get_prix(void) const;
    virtual int get_nb_roues(void) const = 0;
    void set_prix(const int _prix);
    virtual ~Vehicule();

    private:
    int _prix;
};

class Voiture : public Vehicule
{
    public:
    Voiture(const int prix, const int nb_portes, const int nb_roues, const std::string name);
    Voiture(const Voiture&);
    int get_nb_portes(void) const;
    void set_nb_portes(const int nb_portes);
    int get_nb_roues(void) const;
    void set_nb_roues(const int nb_roues);
    std::string get_name(void) const;
    void set_name(const int name);
    void afficher(void) const;
    ~Voiture();

    private:
    int _nb_portes;
    int _nb_roues;
    std::string _name;
};

class Moto : public Vehicule
{
    public:
    Moto(const int prix, const int nb_roues, const std::string name);
    Moto(const Moto&);
    int get_nb_roues(void) const;
    void set_nb_roues(const int nb_roues);
    std::string get_name(void) const;
    void set_name(const int name);
    void afficher(void) const;
    ~Moto();

    private:
    int _nb_roues;
    std::string _name;
};

#endif //CAR_HPP_INCLUDED