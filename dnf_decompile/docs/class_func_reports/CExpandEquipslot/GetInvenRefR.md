# GetInvenRefR

`_ZNK16CExpandEquipslot12GetInvenRefRE10INVEN_TYPEi`

`CExpandEquipslot::GetInvenRefR(INVEN_TYPE, int) const`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x08499e90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08499e90  _ZNK16CExpandEquipslot12GetInvenRefRE10INVEN_TYPEi
#           CExpandEquipslot::GetInvenRefR(INVEN_TYPE, int) const
# range [0x08499e90, 0x08499ec5]
08499e90 +0x00:  push   %ebp
08499e91 +0x01:  mov    %esp,%ebp
08499e93 +0x03:  cmpl   $0x9,0x10(%ebp)
08499e97 +0x07:  jle    08499e9f <+0xf>
08499e99 +0x09:  cmpl   $0x16,0x10(%ebp)
08499e9d +0x0d:  jle    08499ea6 <+0x16>
08499e9f +0x0f:  mov    $0x0,%eax
08499ea4 +0x14:  jmp    08499ec4 <+0x34>
08499ea6 +0x16:  mov    0xc(%ebp),%eax
08499ea9 +0x19:  cmp    $0x5,%eax
08499eac +0x1c:  jne    08499ebf <+0x2f>
08499eae +0x1e:  mov    0x10(%ebp),%eax
08499eb1 +0x21:  sub    $0xa,%eax
08499eb4 +0x24:  imul   $0x3d,%eax,%eax
08499eb7 +0x27:  add    0x8(%ebp),%eax
08499eba +0x2a:  add    $0x5,%eax
08499ebd +0x2d:  jmp    08499ec4 <+0x34>
08499ebf +0x2f:  mov    $0x0,%eax
08499ec4 +0x34:  pop    %ebp
08499ec5 +0x35:  ret
```

## 反编译 C

```c
// CExpandEquipslot::GetInvenRefR @ 0x8499e90

/* CExpandEquipslot::GetInvenRefR(INVEN_TYPE, int) const */

CExpandEquipslot * __thiscall
CExpandEquipslot::GetInvenRefR(CExpandEquipslot *this,int param_2,int param_3)

{
  if ((param_3 < 10) || (0x16 < param_3)) {
    this = (CExpandEquipslot *)0x0;
  }
  else if (param_2 == 5) {
    this = this + (param_3 + -10) * 0x3d + 5;
  }
  else {
    this = (CExpandEquipslot *)0x0;
  }
  return this;
}
```
