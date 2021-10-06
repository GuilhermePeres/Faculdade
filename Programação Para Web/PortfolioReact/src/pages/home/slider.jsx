import React from 'react';
import './slider.css';
import Capa1 from '../../images/Capa1.png'
import Capa2 from '../../images/Capa2.png'

/*const SecondBanner = (props) => {
    return (
        <h2>Segundo banner{props.descricao}</h2>
    )
};*/

const SliderApresentation = () => {
    return (
        <ul class="slider">
            <li class="slide1">
                <input type="radio" name="radio-btn" id="slide1"></input>
                <label for="slide1" class="radio1"></label>
                <img src={Capa1} class="Capa1"></img>
            </li>
            <li>
                <input type="radio" name="radio-btn" id="slide2"></input>
                <label for="slide2" class="radio2"></label>
                <img src={Capa2} class="Capa2"></img>
            </li>
        </ul>
    )
};

/*const Separator = () => {
    return (
        <div class="Linha-Vertical">
        </div>
    )
};*/

/*export default SliderApresentation;*/
export default SliderApresentation;