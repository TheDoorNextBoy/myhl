package myhl;

#if hl

typedef MyHlClass = haxe.macro.MacroType<[webidl.Module.build({ idlFile : "Sources/myhl/MyClass.idl", autoGC : false, nativeLib : "myhl" })]>;

#else
class MyClass {
	public function new() {
	}

	public function testFunction():Int{
		trace("testFunction returning 2!");
		return 2;
	}
}
#end