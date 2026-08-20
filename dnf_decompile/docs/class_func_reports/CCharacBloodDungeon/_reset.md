# _reset

`_ZN19CCharacBloodDungeon6_resetEv`

`CCharacBloodDungeon::_reset()`

| 类 | 地址 |
|---|---|
| `CCharacBloodDungeon` | `0x0832a2d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832a2d4  _ZN19CCharacBloodDungeon6_resetEv
#           CCharacBloodDungeon::_reset()
# range [0x0832a2d4, 0x0832a32f]
0832a2d4 +0x00:  push   %ebp
0832a2d5 +0x01:  mov    %esp,%ebp
0832a2d7 +0x03:  mov    0x8(%ebp),%eax
0832a2da +0x06:  movl   $0x0,0x8(%eax)
0832a2e1 +0x0d:  mov    0x8(%ebp),%eax
0832a2e4 +0x10:  movl   $0x0,0xc(%eax)
0832a2eb +0x17:  mov    0x8(%ebp),%eax
0832a2ee +0x1a:  movl   $0x0,0x10(%eax)
0832a2f5 +0x21:  mov    0x8(%ebp),%eax
0832a2f8 +0x24:  movl   $0x0,0x14(%eax)
0832a2ff +0x2b:  mov    0x8(%ebp),%eax
0832a302 +0x2e:  movl   $0x0,0x18(%eax)
0832a309 +0x35:  mov    0x8(%ebp),%eax
0832a30c +0x38:  movl   $0x0,0x1c(%eax)
0832a313 +0x3f:  mov    0x8(%ebp),%eax
0832a316 +0x42:  movb   $0x0,0x20(%eax)
0832a31a +0x46:  mov    0x8(%ebp),%eax
0832a31d +0x49:  movl   $0x0,0x24(%eax)
0832a324 +0x50:  mov    0x8(%ebp),%eax
0832a327 +0x53:  movl   $0x0,0x28(%eax)
0832a32e +0x5a:  pop    %ebp
0832a32f +0x5b:  ret
```

## 反编译 C

```c
// CCharacBloodDungeon::_reset @ 0x832a2d4

/* CCharacBloodDungeon::_reset() */

void __thiscall CCharacBloodDungeon::_reset(CCharacBloodDungeon *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (CCharacBloodDungeon)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}
```
