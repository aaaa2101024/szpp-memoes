import { Alert, Box, CssBaseline, Typography } from "@mui/material"
import type { WeatherInfo } from "./types/WeatherInfo.types"
import { useEffect, useState } from "react"
import { fetchWeatherInfo } from "./divs/fetchWeatherInfo"
import taigaku from './asset/ChatGPT_Image_2025526_19_51_34.png'
import rain from './asset/mood-sad.gif'
import clear from './asset/taiyou.png'
import cloud from './asset/atamagaitai.jpg'

interface Emoji {
  name: string,
  value: string
}

interface Weather_png {
  name: string,
  path: string
}
const emoji: Emoji[] =
  [
    { name: "雨", value: "☔" },
    { name: "晴れ", value: "🌤" },
    { name: "曇のち晴", value: "⛅" }
  ]

 const weather_png: Weather_png[] =
 [
  {name: "雨", path: rain},
  {name: "晴れ", path: clear},
  {name: "曇のち晴", path: cloud}
 ]
function App() {

  // const [ weatherInfo,setWeatherInfo ] = useState<WeatherInfo | null>(null);
  const [weatherInfo, setWeatherInfo] = useState<WeatherInfo | null>(null);
  // useEffect(() => {
  //   /*更新したい処理 */
  //   const handleSetWeatherInfo = async() => {
  //     const wData: WeatherInfo = await fetchWeatherInfo();
  //     setWeatherInfo(wData);
  //   }
  //   handleSetWeatherInfo();
  // },[/*監視する値 */])
  // console.log(weatherInfo);
  useEffect(() => {
    // 更新したい処理
    const handleSetWeatherInfo = async () => {
      const wData: WeatherInfo = await fetchWeatherInfo();
      setWeatherInfo(wData);
    }
    handleSetWeatherInfo();
  }, [/* 監視する値 */]);
  const getWeatherEmoji = (weatherCondition: string | undefined): string => {
    if (!weatherCondition) {
      return ""; // 天気情報がない場合は空文字
    }
    const foundEmoji = emoji.find(e => e.name === weatherCondition);
    return foundEmoji ? foundEmoji.value : ""; // 見つかれば絵文字を、見つからなければ空文字
  };
  const getWeather_png = (weatherCondition: string | undefined): string => {
    if (!weatherCondition) {
      return ""; // 天気情報がない場合は空文字
    }
    const found_Weather_png = weather_png.find(e => e.name === weatherCondition);
    return found_Weather_png ? found_Weather_png.path : ""; // 見つかれば絵文字を、見つからなければ空文字
  };
  console.log(weatherInfo);
  return (
    <>
      <Box>
        {/*   CSSを殺す */}
        <CssBaseline />
        <Box>
          <Typography variant="h1"> 静岡市の天気 </Typography>
          <Box>
            <Typography variant="body1">天気：{weatherInfo?.weather} {getWeatherEmoji(weatherInfo?.weather)}</Typography>
            <Box component="img" sx={{
              height: 200,
          width: 200,
          maxWidth: '100%',
          objectFit: 'contain',
          my: 2,
            }} src={getWeather_png(weatherInfo?.weather)}></Box>
            <Alert severity="warning">気温：{weatherInfo?.tempature}℃</Alert>
            <Typography
            variant="body1"
                sx={{
                  mt: 2, // 上に少しマージンを追加
                  textAlign: 'left', // 左寄せにする場合（中央寄せのままでも可）
                  whiteSpace: 'pre-line', // 改行とスペースを適切に処理
                  paddingX: 2, // 左右にパディングを追加して読みやすくする
                }}>天気情報:{weatherInfo?.description}</Typography>
          </Box>
        </Box>
        <Box component="img" sx={{
          height: 200,
          width: 200,
          maxWidth: '100%',
          objectFit: 'contain',
          my: 2,
        }} src={taigaku}></Box>
      </Box>
    </>
  )
}

export default App
// 