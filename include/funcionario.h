/**
 * @file funcionario.h
 * @brief Declaração da classe Funcionário e seus métodos.
 * @author Bryan Brito
 * @author Leonardo Matos
 */

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H


namespace PetFera{

    /**
     * @brief Classe Funcionário.
     */
    class Funcionario{
        protected:
            int m_id;
            std::string m_nome;
            std::string m_cpf;
            short m_idade;
            short m_tipo_sanguineo; // A, B, AB, O
            char m_fator_rh; // +, -
            std::string m_especialidade;

        public:
  
            /**
             * @brief Contrutor da classe Funcionário.
             */
            Funcionario(int id_, std::string nome_, std::string cpf_, short idade_, short tipo_sanguineo_,
                    char fator_rh_, std::sting especialidade_);

            /**
             * @brief Destrutor da classe Funcionário.
             */
            ~Funcionario();

            /**
             * @brief Método get do atributo m_id.
             * @return m_id.
             */
            int getId();

            /**
             * @brief Método get do atributo m_nome.
             * @return m_nome.
             */
            std::string getNome();

            /**
             * @brief Método get do atributo m_cpf.
             * @return m_cpf.
             */
            std::string getCpf();

            /**
             * @brief Método get do atributo m_idade.
             * @return m_idade.
             */
            short getIdade();

            /**
             * @brief Método get do atributo m_tipo_sanguineo.
             * @return m_tipo_sanguineo.
             */
            short getTipoSanguineo();

            /**
             * @brief Método get do atributo m_fator_rh.
             * @return m_fator_rh.
             */
            char getFatorRH();
 
            /**
             * @brief Método get do atributo m_especialidade.
             * @return m_especialidade.
             */
            std::string getEspecialidade();
    }

}