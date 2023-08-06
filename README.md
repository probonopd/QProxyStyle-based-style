# QProxyStyle-based-style

Not working yet. Objective is to make a QProxyStyle based style, a "subclass" of the default Qt Fusion style

```
git clone https://github.com/probonopd/QProxyStyle-based-style
cd QProxyStyle-based-style
mkdir build
cd build
cmake ..
make -j $(nproc)
sudo make install
```

The issue is:

```
export QT_STYLE_OVERRIDE=hello

featherpad

QApplication: invalid style override 'hello' passed, ignoring it.
        Available styles: Breeze, kvantum-dark, kvantum, panda, qt5ct-style, QtCurve, Windows, Fusion
```

Does anyone have an idea on how to fix this?
