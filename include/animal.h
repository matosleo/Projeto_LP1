/**
 * @file animal.h
 * @brief Declaração da classe Animal e seus métodos.
 * @author Bryan Brito
 * @author Leonardo Matos
 */

#ifndef ANIMAL_H
#define ANIMAL_H


#include <memory>
#include "funcionario.h"

namespace PetFera{

    /**
     * @brief Classe Animal.
     */
    class Animal{
        protected:
            int m_id;
            string m_classe;
            string m_nome;
            string m_cientifico;
            char m_sexo;
            float m_tamanho;
            string m_dieta;
            share_ptr<PetFera::Veterinario> m_veterinario;
            share_ptr<PetFera::Tratador> m_tratador;
            string m_batismo;

        public:

            /**
             * @brief Construtor da classe Animal.
             */
            Animal(int id_, string classe_, string nome_, string cientifico_, char sexo_,
                    float tamanho_, string dieta_, share_ptr<PetFera::Veterinario> veterinario_,
                    share_ptr<PetFera::Tratador> tratador_, string batismo_);

            /**
             * @brief Destrutor da classe Funcionário.
             */
            ~Animal();

            /**
             * @brief Método get do atributo m_id.
             * @return m_id.
             */
            int getId();

            /**
             * @brief Método get do atributo m_classe.
             * @return m_classe.
             */
            string getClasse();

            /**
             * @brief Método get do atributo m_nome.
             * @return m_nome.
             */
            string getNome();

            /**
             * @brief Método get do atributo m_cientifico.
             * @return m_cientifico.
             */
            string getCientifico();

            /**
             * @brief Método get do atributo m_sexo.
             * @return m_sexo.
             */
            char getSexo();

            /**
             * @brief Método get do atributo m_tamanho.
             * @return m_tamanho.
             */
            float getTamanho();

            /**
             * @brief Método get do atributo m_dieta.
             * @return m_dieta.
             */
            string dieta();

            /**
             * @brief Método get do ponteiro m_veterinario.
             * @return ponteiro m_veterinario.
             */
            share_ptr<PetFera::Veterinario> getVeterinario();

            /**
             * @brief Método get do ponteiro m_tratador.
             * @return ponteiro m_tratador.
             */
            share_ptr<PetFera::Tratador> getTratador();

            /**
             * @brief Método get do atributo m_batismo.
             * @return m_batismo.
             */
            string getBatismo();
    };
}

#endif
