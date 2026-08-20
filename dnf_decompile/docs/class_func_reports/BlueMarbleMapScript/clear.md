# clear

`_ZN19BlueMarbleMapScript5clearEv`

`BlueMarbleMapScript::clear()`

| 类 | 地址 |
|---|---|
| `BlueMarbleMapScript` | `0x088d54ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d54ce  _ZN19BlueMarbleMapScript5clearEv
#           BlueMarbleMapScript::clear()
# range [0x088d54ce, 0x088d54e1]
088d54ce +0x00:  push   %ebp
088d54cf +0x01:  mov    %esp,%ebp
088d54d1 +0x03:  sub    $0x18,%esp
088d54d4 +0x06:  mov    0x8(%ebp),%eax
088d54d7 +0x09:  mov    %eax,(%esp)
088d54da +0x0c:  call   088d681e <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0xa0>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0xa0
088d54df +0x11:  leave
088d54e0 +0x12:  ret
088d54e1 +0x13:  nop
```

## 反编译 C

```c
// BlueMarbleMapScript::clear @ 0x88d54ce

/* BlueMarbleMapScript::clear() */

void __thiscall BlueMarbleMapScript::clear(BlueMarbleMapScript *this)

{
  std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::clear
            ((vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)this);
  return;
}
```
