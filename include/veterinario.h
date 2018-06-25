/**
 * @file veterinario.h
 * @brief Declaração da classe Veterinário.
 * @author Bryan Brito
 * @author Leonardo Matos
 */
#ifndef VETERINARIO_H
#define VETERINARIO_H


#include "funcionario.h"

namespace PetFera{

    /**
     * @brief Classe Veterinário.
     */
    class Veterinario: public Funcionario{
        public:

            /**
             * @brief Construtor da classe Veterinário.
             */
            Veterinario(int id_, std::string nome_, std::string cpf_, short idade_, short tipo_sanguineo_,
                    char fator_rh_, std::sting especialidade_);

            /**
             * @brief Destrutor da classe Veterinário.
             */
            ~Veterinario();
    }

}

#endif
