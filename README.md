# WindowsのWSLでAtCoderの開発環境を構築する

　Windows10のWSL(Windows Subsystem for Linux)で、AtCoderの開発環境(C++)を構築する操作手順をまとめてみました。ここでは、WSLとUbuntuは、すでに導入済として解説します。

## 導入環境

- OS : Windows 10 Pro (20H2)
- WSL: WSL2 + Ubuntu (20.04)

## 開発環境の構築手順

1. 開発環境(C++)の導入
```
$ sudo apt install build-essential
```
2. pip3の導入
```
$ sudo apt install python3-pip
```
3. node.jsの導入
```
$ sudo apt-get install curl
$ curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.35.3/install.sh | bash
$ nvm install --lts
```
4. check-ojの導入とAtCoderへのログイン
```
$ pip3 install online-judge-tools
$ oj login https://atcoder.jp/
```
5. atcoder-cliの導入とAtCoderへのログイン
```
$ npm install -g atcoder-cli
$ acc check-oj
$ acc login
```

## atcoder-cliの設定

1. テストフォルダの変更
```
$ acc config default-test-dirname-format test
```
2. テンプレートの設定
```
$ cd ~/.config/atcoder-cli-nodejs
$ mkdir cpp
$ cd cpp
```
  - エディタで下記の内容を入力し main.cpp という名前で保存する
```
#include <bits/stdc++.h>
using namespace std;
int main() {
  return 0;
}
```
  - エディタで下記の内容を入力し template.json という名前で保存する
```
{
  "task":{
    "program": ["main.cpp"],
    "submit": "main.cpp"
  }
}
```
```
$ acc config default-template cpp
$ acc templates
```

## コンテスト時の操作手順

1. コンテスト用ディレクトリの作成
```
$ acc n {コンテストID 例:abc192}
$ cd {コンテストID 例:abc192}
```

2. 問題ディレクトリに移動
```
$ cd {問題番号 例:a}
```

3. 問題ファイルの作成とビルド
```
$ nano main.cpp
$ g++ main.cpp
```

4. テスト
```
$ oj t
```

5. 問題ファイルの送信
```
$ acc s
```

6. 問題の追加
```
$ cd ..
$ acc a
```
