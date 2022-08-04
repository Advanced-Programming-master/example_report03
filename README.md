# アドバンストプログラミング 第3回課題

本リポジトリをクローンして，以下のように修正したコードを作成せよ．

- func1.cの関数calcEuclideanDistanceに，原点からのユークリッド距離を求める処理を実装
- func2.cの関数calcManhattanDistanceに，原点からのマンハッタン距離を求める処理を実装
- func1.ｃから，静的ライブラリー（libcalcEuclideanDistance.a）を生成
- func2.cから，動的（共有）ライブラリー（libcalcManhattanDistance.so or libcalcManhattanDistance.dylib）を生成
- libcalcEuclideanDistance.aとlibcalcManhattanDistance.soをリンクして，実行ファイルを生成
- ビルドはcmakeを利用
- main関数のあるreport03.cの先頭に，コメント文で名前と学籍番号を記入すること

- （windowsで）関数sqrtを使うときは，数学ライブラリー(libm.so)をリンクして下さい．CMakeLists.txtのtarget_link_librariesのところに，　m を付け加えて下さい．
