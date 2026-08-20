# GetOppositeUser

`_ZN11CTradeSpace15GetOppositeUserEP5CUser`

`CTradeSpace::GetOppositeUser(CUser*)`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x08529a72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08529a72  _ZN11CTradeSpace15GetOppositeUserEP5CUser
#           CTradeSpace::GetOppositeUser(CUser*)
# range [0x08529a72, 0x08529aa1]
08529a72 +0x00:  push   %ebp
08529a73 +0x01:  mov    %esp,%ebp
08529a75 +0x03:  mov    0x8(%ebp),%eax
08529a78 +0x06:  movzbl 0x1c(%eax),%eax
08529a7c +0x0a:  test   %al,%al
08529a7e +0x0c:  je     08529a9b <+0x29>
08529a80 +0x0e:  mov    0x8(%ebp),%eax
08529a83 +0x11:  mov    0x20(%eax),%eax
08529a86 +0x14:  cmp    0xc(%ebp),%eax
08529a89 +0x17:  jne    08529a93 <+0x21>
08529a8b +0x19:  mov    0x8(%ebp),%eax
08529a8e +0x1c:  mov    0x24(%eax),%eax
08529a91 +0x1f:  jmp    08529aa0 <+0x2e>
08529a93 +0x21:  mov    0x8(%ebp),%eax
08529a96 +0x24:  mov    0x20(%eax),%eax
08529a99 +0x27:  jmp    08529aa0 <+0x2e>
08529a9b +0x29:  mov    $0x0,%eax
08529aa0 +0x2e:  pop    %ebp
08529aa1 +0x2f:  ret
```

## 反编译 C

```c
// CTradeSpace::GetOppositeUser @ 0x8529a72

/* CTradeSpace::GetOppositeUser(CUser*) */

undefined4 __thiscall CTradeSpace::GetOppositeUser(CTradeSpace *this,CUser *param_1)

{
  undefined4 uVar1;
  
  if (this[0x1c] == (CTradeSpace)0x0) {
    uVar1 = 0;
  }
  else if (*(CUser **)(this + 0x20) == param_1) {
    uVar1 = *(undefined4 *)(this + 0x24);
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x20);
  }
  return uVar1;
}
```
