fetch('https://map.yahooapis.jp/weather/V1/place?coordinates=139.732293,35.663613&output=json&appid=dj00aiZpPUZsT1pEZWpQMEJZQiZzPWNvbnN1bWVyc2VjcmV0Jng9YTE-') // APIのURL
  .then(response => {
    if (!response.ok) {
      throw new Error(`HTTP error! status: ${response.status}`);
    }
    return response.json(); // JSON形式に変換
  })
  .then(data => {
    console.log('取得したデータ:', JSON.stringify(data, null, 2)); // データ処理
    // console.log(`${data.Feature.Weather.Date},${data.Feature.Weather.Rainfall}`)
    // console.log(`${data.Weather}`)
    // console.log(typeof data);
    // for (const element in data)
    // {
    //     console.log(element);
    //     if(element === 'Feature')
    //     {
    //         const values = data[element];
    //         console.log(values);
    //         for(const value in values)
    //         {
    //             console.log(value);
    //             if(value === 'WeatherList')
    //             {
    //                 const ans = values[value];
    //                 console.log(ans);
    //             }
    //         }
    //     }
    // }
    // ここでJSONデータを使った処理を記述
    console.log(data['Feature']['Id']);
  })
  .catch(error => {
    console.error('エラー:', error); // エラーハンドリング
  });