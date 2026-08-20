# clear

`_ZN20BlueMarbleTileScript5clearEv`

`BlueMarbleTileScript::clear()`

| 类 | 地址 |
|---|---|
| `BlueMarbleTileScript` | `0x088d507c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d507c  _ZN20BlueMarbleTileScript5clearEv
#           BlueMarbleTileScript::clear()
# range [0x088d507c, 0x088d509b]
088d507c +0x00:  push   %ebp
088d507d +0x01:  mov    %esp,%ebp
088d507f +0x03:  mov    0x8(%ebp),%eax
088d5082 +0x06:  movl   $0x0,(%eax)
088d5088 +0x0c:  mov    0x8(%ebp),%eax
088d508b +0x0f:  movb   $0x0,0x4(%eax)
088d508f +0x13:  mov    0x8(%ebp),%eax
088d5092 +0x16:  movl   $0x0,0x8(%eax)
088d5099 +0x1d:  pop    %ebp
088d509a +0x1e:  ret
088d509b +0x1f:  nop
```

## 反编译 C

```c
// BlueMarbleTileScript::clear @ 0x88d507c

/* BlueMarbleTileScript::clear() */

void __thiscall BlueMarbleTileScript::clear(BlueMarbleTileScript *this)

{
  *(undefined4 *)this = 0;
  this[4] = (BlueMarbleTileScript)0x0;
  *(undefined4 *)(this + 8) = 0;
  return;
}
```
