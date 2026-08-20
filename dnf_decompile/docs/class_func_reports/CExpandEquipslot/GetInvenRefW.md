# GetInvenRefW

`_ZN16CExpandEquipslot12GetInvenRefWE10INVEN_TYPEi`

`CExpandEquipslot::GetInvenRefW(INVEN_TYPE, int)`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x08499ec6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08499ec6  _ZN16CExpandEquipslot12GetInvenRefWE10INVEN_TYPEi
#           CExpandEquipslot::GetInvenRefW(INVEN_TYPE, int)
# range [0x08499ec6, 0x08499f09]
08499ec6 +0x00:  push   %ebp
08499ec7 +0x01:  mov    %esp,%ebp
08499ec9 +0x03:  sub    $0x18,%esp
08499ecc +0x06:  cmpl   $0x9,0x10(%ebp)
08499ed0 +0x0a:  jle    08499ed8 <+0x12>
08499ed2 +0x0c:  cmpl   $0x16,0x10(%ebp)
08499ed6 +0x10:  jle    08499edf <+0x19>
08499ed8 +0x12:  mov    $0x0,%eax
08499edd +0x17:  jmp    08499f08 <+0x42>
08499edf +0x19:  mov    0xc(%ebp),%eax
08499ee2 +0x1c:  cmp    $0x5,%eax
08499ee5 +0x1f:  jne    08499f03 <+0x3d>
08499ee7 +0x21:  mov    0x8(%ebp),%eax
08499eea +0x24:  mov    %eax,(%esp)
08499eed +0x27:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08499ef2 +0x2c:  mov    0x10(%ebp),%eax
08499ef5 +0x2f:  sub    $0xa,%eax
08499ef8 +0x32:  imul   $0x3d,%eax,%eax
08499efb +0x35:  add    0x8(%ebp),%eax
08499efe +0x38:  add    $0x5,%eax
08499f01 +0x3b:  jmp    08499f08 <+0x42>
08499f03 +0x3d:  mov    $0x0,%eax
08499f08 +0x42:  leave
08499f09 +0x43:  ret
```

## 反编译 C

```c
// CExpandEquipslot::GetInvenRefW @ 0x8499ec6

/* CExpandEquipslot::GetInvenRefW(INVEN_TYPE, int) */

CExpandEquipslot * __thiscall
CExpandEquipslot::GetInvenRefW(CExpandEquipslot *this,int param_2,int param_3)

{
  if ((param_3 < 10) || (0x16 < param_3)) {
    this = (CExpandEquipslot *)0x0;
  }
  else if (param_2 == 5) {
    charac_expand::CData::alter((CData *)this);
    this = this + (param_3 + -10) * 0x3d + 5;
  }
  else {
    this = (CExpandEquipslot *)0x0;
  }
  return this;
}
```
