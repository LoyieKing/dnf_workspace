# BlueMarbleTileScript

`_ZN20BlueMarbleTileScriptC1Ev`

`BlueMarbleTileScript::BlueMarbleTileScript()`

| 类 | 地址 |
|---|---|
| `BlueMarbleTileScript` | `0x088d5068` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d5068  _ZN20BlueMarbleTileScriptC1Ev
#           BlueMarbleTileScript::BlueMarbleTileScript()
# range [0x088d5068, 0x088d507b]
088d5068 +0x00:  push   %ebp
088d5069 +0x01:  mov    %esp,%ebp
088d506b +0x03:  sub    $0x18,%esp
088d506e +0x06:  mov    0x8(%ebp),%eax
088d5071 +0x09:  mov    %eax,(%esp)
088d5074 +0x0c:  call   088d507c <_ZN20BlueMarbleTileScript5clearEv>  ; BlueMarbleTileScript::clear()
088d5079 +0x11:  leave
088d507a +0x12:  ret
088d507b +0x13:  nop
```

## 反编译 C

```c
// BlueMarbleTileScript::BlueMarbleTileScript @ 0x88d5068

/* BlueMarbleTileScript::BlueMarbleTileScript() */

void __thiscall BlueMarbleTileScript::BlueMarbleTileScript(BlueMarbleTileScript *this)

{
  clear(this);
  return;
}
```
