# GetUser

`_ZN12CLeagueMatch7GetUserEj`

`CLeagueMatch::GetUser(unsigned int)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855e5e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855e5e4  _ZN12CLeagueMatch7GetUserEj
#           CLeagueMatch::GetUser(unsigned int)
# range [0x0855e5e4, 0x0855e641]
0855e5e4 +0x00:  push   %ebp
0855e5e5 +0x01:  mov    %esp,%ebp
0855e5e7 +0x03:  cmpl   $0x3,0xc(%ebp)
0855e5eb +0x07:  jbe    0855e5f4 <+0x10>
0855e5ed +0x09:  mov    $0x0,%eax
0855e5f2 +0x0e:  jmp    0855e640 <+0x5c>
0855e5f4 +0x10:  mov    0xc(%ebp),%eax
0855e5f7 +0x13:  mov    0x8(%ebp),%ecx
0855e5fa +0x16:  lea    0x0(,%eax,4),%edx
0855e601 +0x1d:  lea    0x0(,%edx,8),%eax
0855e608 +0x24:  sub    %edx,%eax
0855e60a +0x26:  lea    (%ecx,%eax,1),%eax
0855e60d +0x29:  add    $0x10,%eax
0855e610 +0x2c:  movzbl 0x18(%eax),%eax
0855e614 +0x30:  xor    $0x1,%eax
0855e617 +0x33:  test   %al,%al
0855e619 +0x35:  je     0855e622 <+0x3e>
0855e61b +0x37:  mov    $0x0,%eax
0855e620 +0x3c:  jmp    0855e640 <+0x5c>
0855e622 +0x3e:  mov    0xc(%ebp),%eax
0855e625 +0x41:  mov    0x8(%ebp),%ecx
0855e628 +0x44:  lea    0x0(,%eax,4),%edx
0855e62f +0x4b:  lea    0x0(,%edx,8),%eax
0855e636 +0x52:  sub    %edx,%eax
0855e638 +0x54:  lea    (%ecx,%eax,1),%eax
0855e63b +0x57:  add    $0x24,%eax
0855e63e +0x5a:  mov    (%eax),%eax
0855e640 +0x5c:  pop    %ebp
0855e641 +0x5d:  ret
```

## 反编译 C

```c
// CLeagueMatch::GetUser @ 0x855e5e4

/* CLeagueMatch::GetUser(unsigned int) */

undefined4 __thiscall CLeagueMatch::GetUser(CLeagueMatch *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    if (this[param_1 * 0x1c + 0x28] == (CLeagueMatch)0x1) {
      uVar1 = *(undefined4 *)(this + param_1 * 0x1c + 0x24);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
