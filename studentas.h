#ifndef STUDENTAS_H
#define STUDENTAS_H

#include "zmogus.h"
#include <vector>
#include <iostream>

class Studentas : public Human {
public:
    Studentas();
    Studentas(const std::string &vardas, const std::string &pavarde);

    // Rule of Five
    Studentas(const Studentas &other);                // Copy constructor
    Studentas &operator=(const Studentas &other);     // Assignment operator
    Studentas(Studentas &&other) noexcept;            // Move constructor
    Studentas &operator=(Studentas &&other) noexcept; // Move assignment operator

    // Destructor
    ~Studentas() override;

    // Abstract class functions implementation
    void setVardas(const std::string &vardas) override;
    std::string getVardas() const override;

    void setPavarde(const std::string &pavarde) override;
    std::string getPavarde() const override;

    void setNamuDarbai(const std::vector<int> &nd) override;
    std::vector<int> getNamuDarbai() const override;
    void addNamuDarbas(int pazymys) override;

    void setEgzaminas(int egzaminas) override;
    int getEgzaminas() const override;

    double skaiciuotiVidurki() const override;
    double skaiciuotiMediana() const override;
    double skaiciuotiGalutini(bool naudotiVidurki) const override;
    void atsitiktiniai() override;
    void atsitiktiniaiStudentai() override;

    friend std::ostream &operator<<(std::ostream &os, const Studentas &student);
    friend std::istream &operator>>(std::istream &is, Studentas &student);

private:
    std::string vardas;
    std::string pavarde;
    std::vector<int> nd_rezultatai;
    int egzaminas;
};

#endif
