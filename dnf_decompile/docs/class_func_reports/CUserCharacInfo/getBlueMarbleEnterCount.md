# getBlueMarbleEnterCount

`_ZNK15CUserCharacInfo23getBlueMarbleEnterCountEv`

`CUserCharacInfo::getBlueMarbleEnterCount() const`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08690f42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690f42  _ZNK15CUserCharacInfo23getBlueMarbleEnterCountEv
#           CUserCharacInfo::getBlueMarbleEnterCount() const
# range [0x08690f42, 0x08690f65]
08690f42 +0x00:  push   %ebp
08690f43 +0x01:  mov    %esp,%ebp
08690f45 +0x03:  mov    0x8(%ebp),%eax
08690f48 +0x06:  mov    0x10(%eax),%eax
08690f4b +0x09:  test   %eax,%eax
08690f4d +0x0b:  je     08690f5e <+0x1c>
08690f4f +0x0d:  mov    0x8(%ebp),%eax
08690f52 +0x10:  mov    0x10(%eax),%eax
08690f55 +0x13:  movzbl 0x14bd(%eax),%eax
08690f5c +0x1a:  jmp    08690f63 <+0x21>
08690f5e +0x1c:  mov    $0x0,%eax
08690f63 +0x21:  pop    %ebp
08690f64 +0x22:  ret
08690f65 +0x23:  nop
```

## 反编译 C

```c
// CUserCharacInfo::getBlueMarbleEnterCount @ 0x8690f42

/* CUserCharacInfo::getBlueMarbleEnterCount() const */

undefined1 __thiscall CUserCharacInfo::getBlueMarbleEnterCount(CUserCharacInfo *this)

{
  undefined1 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(int *)(this + 0x10) + 0x14bd);
  }
  return uVar1;
}
```
