# GetSecretShopData

`_ZN5CUser17GetSecretShopDataEv`

`CUser::GetSecretShopData()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086885a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086885a6  _ZN5CUser17GetSecretShopDataEv
#           CUser::GetSecretShopData()
# range [0x086885a6, 0x086885d3]
086885a6 +0x00:  push   %ebp
086885a7 +0x01:  mov    %esp,%ebp
086885a9 +0x03:  sub    $0x28,%esp
086885ac +0x06:  mov    0x8(%ebp),%eax
086885af +0x09:  mov    %eax,(%esp)
086885b2 +0x0c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
086885b7 +0x11:  mov    %eax,-0xc(%ebp)
086885ba +0x14:  cmpl   $0x0,-0xc(%ebp)
086885be +0x18:  je     086885cd <+0x27>
086885c0 +0x1a:  mov    -0xc(%ebp),%eax
086885c3 +0x1d:  mov    %eax,(%esp)
086885c6 +0x20:  call   08694a1a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x126f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x126f
086885cb +0x25:  jmp    086885d2 <+0x2c>
086885cd +0x27:  mov    $0x0,%eax
086885d2 +0x2c:  leave
086885d3 +0x2d:  ret
```

## 反编译 C

```c
// CUser::GetSecretShopData @ 0x86885a6

/* CUser::GetSecretShopData() */

undefined4 __thiscall CUser::GetSecretShopData(CUser *this)

{
  CParty *this_00;
  undefined4 uVar1;
  
  this_00 = (CParty *)GetParty(this);
  if (this_00 == (CParty *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CParty::GetSecretShopData(this_00);
  }
  return uVar1;
}
```
