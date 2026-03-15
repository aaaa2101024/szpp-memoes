import type { WeatherInfo } from "../types/WeatherInfo.types"

export const fetchWeatherInfo = async(): Promise<WeatherInfo> => {
    const URL:string = 'https://weather.tsukumijima.net/api/forecast/city/220010';
    const res = await fetch(URL);
    if(!res)
    {
        throw new Error("40440440404");
    }
    const data = await res.json();
    const weatherInfo:WeatherInfo = {
        weather:data.forecasts[2].telop,
        tempature:data.forecasts[1].temperature.min.fahrenheit,
        description:data.description.bodyText
    };
    return weatherInfo;
};