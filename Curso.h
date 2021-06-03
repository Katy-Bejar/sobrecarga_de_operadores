#ifndef __CURSO_H__
#define __CURSO_H__

#include <string>

class Curso {
    private:
        std::string nombre;
        double notaFinal;
        int totalEstudiantes;
        std::string codigo;
    public:

        Curso(std::string _nombre = "", double _notaFinal = 0, int _totalEstudiantes = 0, std::string _codigo = ""): nombre(_nombre), notaFinal(_notaFinal), totalEstudiantes(_totalEstudiantes), codigo(_codigo){}
        //Setter
        void setNombre(std::string nombre){
            this->nombre=nombre;
        }
        void setNotaFinal(double notaFinal){
            this->notaFinal=notaFinal;
        }
        void setTotalEstudiantes(int totalEstudiantes){
            this->totalEstudiantes = totalEstudiantes;
        }
        void setCodigo(std::string codigo){
            this->codigo=codigo;
        }

        //Getter
        std::string getNombre();
        double getNotaFinal();
        int getTotalEstudiantes();
        std::string getCodigo();
        
        // Sobrecarga del operador <<
        friend ostream& operator<<(ostream &out, Curso &p){
            out << p.getNombre << endl;
            out << p.getNotaFinal << endl;
            out << p.getTotalEstudiantes << endl;
            out << p.getCodigo << endl;
            return out;
        }
};

double Curso::getNotaFinal(){
    return notaFinal;
}

int Curso::getTotalEstudiantes(){
    return totalEstudiantes;   
}

std::string Curso::getNombre(){
    return nombre;
}

std::string Curso::getCodigo(){
    return codigo;
}

#endif
