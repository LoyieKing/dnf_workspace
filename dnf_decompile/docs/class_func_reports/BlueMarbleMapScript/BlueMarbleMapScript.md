# BlueMarbleMapScript

`_ZN19BlueMarbleMapScriptC1Ev`

`BlueMarbleMapScript::BlueMarbleMapScript()`

| 类 | 地址 |
|---|---|
| `BlueMarbleMapScript` | `0x088d53d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d53d6  _ZN19BlueMarbleMapScriptC1Ev
#           BlueMarbleMapScript::BlueMarbleMapScript()
# range [0x088d53d6, 0x088d5417]
088d53d6 +0x00:  push   %ebp
088d53d7 +0x01:  mov    %esp,%ebp
088d53d9 +0x03:  push   %esi
088d53da +0x04:  push   %ebx
088d53db +0x05:  sub    $0x10,%esp
088d53de +0x08:  mov    0x8(%ebp),%eax
088d53e1 +0x0b:  mov    %eax,(%esp)
088d53e4 +0x0e:  call   088d679a <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x1c>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x1c
088d53e9 +0x13:  mov    0x8(%ebp),%eax
088d53ec +0x16:  mov    %eax,(%esp)
088d53ef +0x19:  call   088d54ce <_ZN19BlueMarbleMapScript5clearEv>  ; BlueMarbleMapScript::clear()
088d53f4 +0x1e:  jmp    088d5411 <+0x3b>
088d53f6 +0x20:  mov    %edx,%ebx
088d53f8 +0x22:  mov    %eax,%esi
088d53fa +0x24:  mov    0x8(%ebp),%eax
088d53fd +0x27:  mov    %eax,(%esp)
088d5400 +0x2a:  call   088d67ae <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x30>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x30
088d5405 +0x2f:  mov    %esi,%eax
088d5407 +0x31:  mov    %ebx,%edx
088d5409 +0x33:  mov    %eax,(%esp)
088d540c +0x36:  call   08ae3750 <_Unwind_Resume>
088d5411 +0x3b:  add    $0x10,%esp
088d5414 +0x3e:  pop    %ebx
088d5415 +0x3f:  pop    %esi
088d5416 +0x40:  pop    %ebp
088d5417 +0x41:  ret
```

## 反编译 C

```c
// BlueMarbleMapScript::BlueMarbleMapScript @ 0x88d53d6

/* BlueMarbleMapScript::BlueMarbleMapScript() */

void __thiscall BlueMarbleMapScript::BlueMarbleMapScript(BlueMarbleMapScript *this)

{
  std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::vector
            ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this);
                    /* try { // try from 088d53ef to 088d53f3 has its CatchHandler @ 088d53f6 */
  clear(this);
  return;
}
```
