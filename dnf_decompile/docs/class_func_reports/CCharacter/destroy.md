# destroy

`_ZN10CCharacter7destroyEv`

`CCharacter::destroy()`

| 类 | 地址 |
|---|---|
| `CCharacter` | `0x083485c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083485c4  _ZN10CCharacter7destroyEv
#           CCharacter::destroy()
# range [0x083485c4, 0x083485d7]
083485c4 +0x00:  push   %ebp
083485c5 +0x01:  mov    %esp,%ebp
083485c7 +0x03:  sub    $0x18,%esp
083485ca +0x06:  mov    0x8(%ebp),%eax
083485cd +0x09:  mov    %eax,(%esp)
083485d0 +0x0c:  call   0834852e <_ZN10CCharacter5clearEv>  ; CCharacter::clear()
083485d5 +0x11:  leave
083485d6 +0x12:  ret
083485d7 +0x13:  nop
```

## 反编译 C

```c
// CCharacter::destroy @ 0x83485c4

/* CCharacter::destroy() */

void __thiscall CCharacter::destroy(CCharacter *this)

{
  clear(this);
  return;
}
```
