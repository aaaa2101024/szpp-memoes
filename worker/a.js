fetch('https://jsonplaceholder.typicode.com/users') // テスト用の無料API
  .then(res => res.json())
  .then(users => {
    users.forEach(user => {
      console.log(`${user.name} (${user.email})`);
    });
  })
  .catch(err => console.error('データ取得に失敗しました:', err));