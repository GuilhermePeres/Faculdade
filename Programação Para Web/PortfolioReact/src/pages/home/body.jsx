import React from 'react';
import './body.css';
import Perfil1 from '../../images/Perfil1.jpeg'
import ImageCourse from '../../images/ImageCourse.png'
import LogoLinkedin from '../../images/LogoLinkedin.png'
import LogoGitHub from '../../images/LogoGitHub.png'

const Sections = () => {
    return (
        <div id="Sections">
            <div class="FirstSection">
                <div class="Box-Text-About">
                    <p class="About">
                        <img src={Perfil1} class="PictureLeft"></img>
                        Sobre mim:
                        <br></br>
                        <br></br>
                        Estudante de Análise e Desenvolvimento de Sistemas, cursando o 4° semestre na Fatec Sorocaba.
                        <br></br>
                        Tenho grande interesse pela área desenvolvimento web, atualmente estou estudando as tecnologias HTML5, CSS3, JavaScript, Bootstrap e React.
                        <br></br>
                        Gosto muito de me relacionar com as pessoas, tenho grande senso de trabalho em equipe e busco melhorar cada vez mais minhas competências profissionais.
                    </p>
                </div>
            </div>

            <div class="SecondSection">
                <div class="Box-Text-About">
                    <p class="Courses">
                        Certificados:
                        <br></br>
                        <br></br>
                        - Azure: Visão Geral e Primeiros Passos Na Nuvem Microsoft
                        <br></br>
                        <br></br>
                        - Empreenda Rápido
                        <br></br>
                        <br></br>
                        - Introdução à Programação Com Grafos em Linguagem C
                        <br></br>
                        <br></br>
                        - HTML5 Para Quem Não Sabe Nada De HTML5
                        <br></br>
                        <br></br>
                        - Fundamentos de Lógica de Programação
                        <br></br>
                        <br></br>
                        - Competência Transversal - Tecnologia Da Informação e Da Comunicação
                        <br></br>
                        <br></br>
                        - Competência Transversal - Lógica De Programação
                        <img src={ImageCourse} class="PictureRight"></img>
                    </p>
                </div>
            </div>

            <div class="Footer">
                <footer class="ContentFooter">
                    <img src={LogoLinkedin} class="LogoLinkedin"></img>
                    <a class="Linkedin" href="https://www.linkedin.com/in/guilhermeperesmoreno" target="_blank">Visualize Meu Linkedin</a>

                    <img src={LogoGitHub} class="LogoGitHub"></img>
                    <a class="GitHub" href="https://github.com/GuilhermePeres?tab=repositories" target="_blank">Visualize Meu GitHub</a>
                </footer>
            </div>
        </div>
    )
};

export default Sections;