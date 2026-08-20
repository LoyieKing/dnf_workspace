# resetSaveFlags

`_ZN15CUserCharacInfo14resetSaveFlagsEv`

`CUserCharacInfo::resetSaveFlags()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864e1f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864e1f2  _ZN15CUserCharacInfo14resetSaveFlagsEv
#           CUserCharacInfo::resetSaveFlags()
# range [0x0864e1f2, 0x0864e25b]
0864e1f2 +0x00:  push   %ebp
0864e1f3 +0x01:  mov    %esp,%ebp
0864e1f5 +0x03:  mov    0x8(%ebp),%eax
0864e1f8 +0x06:  movb   $0x0,(%eax)
0864e1fb +0x09:  mov    0x8(%ebp),%eax
0864e1fe +0x0c:  movb   $0x0,0x1(%eax)
0864e202 +0x10:  mov    0x8(%ebp),%eax
0864e205 +0x13:  movb   $0x0,0x2(%eax)
0864e209 +0x17:  mov    0x8(%ebp),%eax
0864e20c +0x1a:  movb   $0x0,0x3(%eax)
0864e210 +0x1e:  mov    0x8(%ebp),%eax
0864e213 +0x21:  movb   $0x0,0x4(%eax)
0864e217 +0x25:  mov    0x8(%ebp),%eax
0864e21a +0x28:  movb   $0x0,0x5(%eax)
0864e21e +0x2c:  mov    0x8(%ebp),%eax
0864e221 +0x2f:  movb   $0x0,0x6(%eax)
0864e225 +0x33:  mov    0x8(%ebp),%eax
0864e228 +0x36:  movb   $0x0,0x7(%eax)
0864e22c +0x3a:  mov    0x8(%ebp),%eax
0864e22f +0x3d:  movb   $0x0,0x8(%eax)
0864e233 +0x41:  mov    0x8(%ebp),%eax
0864e236 +0x44:  movb   $0x0,0x9(%eax)
0864e23a +0x48:  mov    0x8(%ebp),%eax
0864e23d +0x4b:  movb   $0x0,0xa(%eax)
0864e241 +0x4f:  mov    0x8(%ebp),%eax
0864e244 +0x52:  movb   $0x0,0xb(%eax)
0864e248 +0x56:  mov    0x8(%ebp),%eax
0864e24b +0x59:  movb   $0x0,0xc(%eax)
0864e24f +0x5d:  mov    0x8(%ebp),%eax
0864e252 +0x60:  movb   $0x0,0xd4(%eax)
0864e259 +0x67:  pop    %ebp
0864e25a +0x68:  ret
0864e25b +0x69:  nop
```

## 反编译 C

```c
// CUserCharacInfo::resetSaveFlags @ 0x864e1f2

/* CUserCharacInfo::resetSaveFlags() */

void __thiscall CUserCharacInfo::resetSaveFlags(CUserCharacInfo *this)

{
  *this = (CUserCharacInfo)0x0;
  this[1] = (CUserCharacInfo)0x0;
  this[2] = (CUserCharacInfo)0x0;
  this[3] = (CUserCharacInfo)0x0;
  this[4] = (CUserCharacInfo)0x0;
  this[5] = (CUserCharacInfo)0x0;
  this[6] = (CUserCharacInfo)0x0;
  this[7] = (CUserCharacInfo)0x0;
  this[8] = (CUserCharacInfo)0x0;
  this[9] = (CUserCharacInfo)0x0;
  this[10] = (CUserCharacInfo)0x0;
  this[0xb] = (CUserCharacInfo)0x0;
  this[0xc] = (CUserCharacInfo)0x0;
  this[0xd4] = (CUserCharacInfo)0x0;
  return;
}
```
