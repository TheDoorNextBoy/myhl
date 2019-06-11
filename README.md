# myhl
Simple demo for linking a C++ library in Armory3d with webidl.
Just drop this into your Armory projects Library folder and use like:

```haxe
var result = 0;
var test = new MyClass();
result = test.testFunction();
trace('Result: '+result);
```

The expected output in the dev environment (JS) is "__Result: 2__" and in an Android project "__Result: 6__".



Using:
https://github.com/ncannasse/webidl

Related to:
- Bullet integration in Armory https://github.com/armory3d/haxebullet
- Armory Forum thread about using native c in Armory3d http://forums.armory3d.org/t/using-native-c-c-code/1377/
