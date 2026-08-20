# getExpandEquipslotR

`_ZNK16CExpandEquipslot19getExpandEquipslotRE14ENUM_EQUIPSLOT`

`CExpandEquipslot::getExpandEquipslotR(ENUM_EQUIPSLOT) const`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x084993aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084993aa  _ZNK16CExpandEquipslot19getExpandEquipslotRE14ENUM_EQUIPSLOT
#           CExpandEquipslot::getExpandEquipslotR(ENUM_EQUIPSLOT) const
# range [0x084993aa, 0x084993e1]
084993aa +0x00:  push   %ebp
084993ab +0x01:  mov    %esp,%ebp
084993ad +0x03:  cmpl   $0x1,0xc(%ebp)
084993b1 +0x07:  jne    084993bb <+0x11>
084993b3 +0x09:  mov    0x8(%ebp),%eax
084993b6 +0x0c:  add    $0x5,%eax
084993b9 +0x0f:  jmp    084993e0 <+0x36>
084993bb +0x11:  cmpl   $0x2,0xc(%ebp)
084993bf +0x15:  jne    084993cb <+0x21>
084993c1 +0x17:  mov    0x8(%ebp),%eax
084993c4 +0x1a:  add    $0x2e1,%eax
084993c9 +0x1f:  jmp    084993e0 <+0x36>
084993cb +0x21:  cmpl   $0x3,0xc(%ebp)
084993cf +0x25:  jne    084993db <+0x31>
084993d1 +0x27:  mov    0x8(%ebp),%eax
084993d4 +0x2a:  add    $0x5bd,%eax
084993d9 +0x2f:  jmp    084993e0 <+0x36>
084993db +0x31:  mov    $0x0,%eax
084993e0 +0x36:  pop    %ebp
084993e1 +0x37:  ret
```

## 反编译 C

```c
// CExpandEquipslot::getExpandEquipslotR @ 0x84993aa

/* CExpandEquipslot::getExpandEquipslotR(ENUM_EQUIPSLOT) const */

CExpandEquipslot * __thiscall
CExpandEquipslot::getExpandEquipslotR(CExpandEquipslot *this,int param_2)

{
  if (param_2 == 1) {
    this = this + 5;
  }
  else if (param_2 == 2) {
    this = this + 0x2e1;
  }
  else if (param_2 == 3) {
    this = this + 0x5bd;
  }
  else {
    this = (CExpandEquipslot *)0x0;
  }
  return this;
}
```
