#include<iostream>
int main()
{
    float pesoenkilos;
    float estaturaenmetros;
    float estaturaT;
    float BMI;

    std::cout <<"Bienvenido a tu calculadora de 'indice de masa corporal'. A continuacion, ingresa tu peso en Kilos: ";
    std::cin >> pesoenkilos;
    std::cout <<"A continuacion, pon tu estatura en metros: ";
    std::cin >> estaturaenmetros;

    estaturaT = estaturaenmetros * estaturaenmetros;
    BMI = pesoenkilos / estaturaT;

    std::cout <<"Su BMI total es de= "<< BMI << std::endl;
    
    if (BMI<=18.5>0)
    {
        std::cout <<"Su BMI es bajo."<< std::endl;
    }
    else
    {
        if (BMI<25)
        {
            std::cout <<"Su BMI esta dentro de lo normal."<<std::endl;
        }
        else
        {
            if (BMI<30)
            {
                std::cout <<"Su BMI indica sobrepeso."<<std::endl;
            }
            else
            {
                if (BMI>29.9)
                {
                    std::cout <<"Su BMI indica obesidad."<<std::endl;
                }                
            }
            
        }
        
    }

    return 0;

}