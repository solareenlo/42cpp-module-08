# 42cpp-module-08

### ex02
- [C++テンプレートことはじめ::クラス外部にメソッドを書くとき](https://qiita.com/a-beco/items/7709ab80a05ea2d09ea8#%E3%82%AF%E3%83%A9%E3%82%B9%E5%A4%96%E9%83%A8%E3%81%AB%E3%83%A1%E3%82%BD%E3%83%83%E3%83%89%E3%82%92%E6%9B%B8%E3%81%8F%E3%81%A8%E3%81%8D)
  - 実装を含めたすべての情報が必要となるため、宣言と実装はすべてヘッダファイルに書く必要がある
- [std::stack](https://cpprefjp.github.io/reference/stack.html)
- [Programming Place Plus C++編::標準ライブラリ::stack](https://programming-place.net/ppp/contents/cpp/library/010.html)
  - stack はコンテナアダプタと言って，別に標準で実装されているコンテナを改良して作られるコンテナである
  - stack はデフォルトでは `deque` をもとに，`bakc()`, `push_back()`, `pop_back()`, `emplace_back()` が使えるようにされている．
  - stack が使用している元となるコンテナは `container_type` で定義されている
  - stack のソースコードを見てみると良い
    - mac の stack のソースコードでは
    ```c++
    protected:
    container_type c;
    ```
    と定義されているので，`std::stack::c.begin()` とか，`std::stack::c.end()` とすれば，stack の元となるコンテナの `begin()`, `end()` が使えて，先頭と最後にアクセスできる
  - ので，stack で iterator を無理やり使いたい場合は，元となるコンテナの iterator を使えば良い．

### ex01
- [std::vector::back](https://cpprefjp.github.io/reference/vector/vector/back.html)
- [std::vector::front](https://cpprefjp.github.io/reference/vector/vector/front.html)
- [std::vector::begin](https://cpprefjp.github.io/reference/vector/vector/begin.html)
- [std::sort](https://cpprefjp.github.io/reference/algorithm/sort.html)
- [std::vector](https://cpprefjp.github.io/reference/vector/vector.html)
- [std::runtime_error](https://cpprefjp.github.io/reference/stdexcept.html)
  - プログラム実行時にのみ検出可能なエラー（実行時エラー）を示す

### ex00
- [std::find](https://cpprefjp.github.io/reference/algorithm/find.html)
- [std::runtime_error](https://cpprefjp.github.io/reference/stdexcept.html)
  - プログラム実行時にのみ検出可能なエラー（実行時エラー）を示す
