# getExpandEquipslotW

`_ZN16CExpandEquipslot19getExpandEquipslotWE14ENUM_EQUIPSLOT`

`CExpandEquipslot::getExpandEquipslotW(ENUM_EQUIPSLOT)`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x084993e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084993e2  _ZN16CExpandEquipslot19getExpandEquipslotWE14ENUM_EQUIPSLOT
#           CExpandEquipslot::getExpandEquipslotW(ENUM_EQUIPSLOT)
# range [0x084993e2, 0x0849943d]
084993e2 +0x00:  push   %ebp
084993e3 +0x01:  mov    %esp,%ebp
084993e5 +0x03:  sub    $0x18,%esp
084993e8 +0x06:  cmpl   $0x1,0xc(%ebp)
084993ec +0x0a:  jne    08499401 <+0x1f>
084993ee +0x0c:  mov    0x8(%ebp),%eax
084993f1 +0x0f:  mov    %eax,(%esp)
084993f4 +0x12:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
084993f9 +0x17:  mov    0x8(%ebp),%eax
084993fc +0x1a:  add    $0x5,%eax
084993ff +0x1d:  jmp    0849943c <+0x5a>
08499401 +0x1f:  cmpl   $0x2,0xc(%ebp)
08499405 +0x23:  jne    0849941c <+0x3a>
08499407 +0x25:  mov    0x8(%ebp),%eax
0849940a +0x28:  mov    %eax,(%esp)
0849940d +0x2b:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08499412 +0x30:  mov    0x8(%ebp),%eax
08499415 +0x33:  add    $0x2e1,%eax
0849941a +0x38:  jmp    0849943c <+0x5a>
0849941c +0x3a:  cmpl   $0x3,0xc(%ebp)
08499420 +0x3e:  jne    08499437 <+0x55>
08499422 +0x40:  mov    0x8(%ebp),%eax
08499425 +0x43:  mov    %eax,(%esp)
08499428 +0x46:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0849942d +0x4b:  mov    0x8(%ebp),%eax
08499430 +0x4e:  add    $0x5bd,%eax
08499435 +0x53:  jmp    0849943c <+0x5a>
08499437 +0x55:  mov    $0x0,%eax
0849943c +0x5a:  leave
0849943d +0x5b:  ret
```

## 反编译 C

```c
// CExpandEquipslot::getExpandEquipslotW @ 0x84993e2

/* CExpandEquipslot::getExpandEquipslotW(ENUM_EQUIPSLOT) */

CExpandEquipslot * __thiscall
CExpandEquipslot::getExpandEquipslotW(CExpandEquipslot *this,int param_2)

{
  if (param_2 == 1) {
    charac_expand::CData::alter((CData *)this);
    this = this + 5;
  }
  else if (param_2 == 2) {
    charac_expand::CData::alter((CData *)this);
    this = this + 0x2e1;
  }
  else if (param_2 == 3) {
    charac_expand::CData::alter((CData *)this);
    this = this + 0x5bd;
  }
  else {
    this = (CExpandEquipslot *)0x0;
  }
  return this;
}
```
