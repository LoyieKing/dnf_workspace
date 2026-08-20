# GetRentInfo

`_ZN5CUser11GetRentInfoER18SIG_LOAD_INVENTORY`

`CUser::GetRentInfo(SIG_LOAD_INVENTORY&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086769b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086769b4  _ZN5CUser11GetRentInfoER18SIG_LOAD_INVENTORY
#           CUser::GetRentInfo(SIG_LOAD_INVENTORY&)
# range [0x086769b4, 0x086769e9]
086769b4 +0x00:  push   %ebp
086769b5 +0x01:  mov    %esp,%ebp
086769b7 +0x03:  sub    $0x18,%esp
086769ba +0x06:  mov    0xc(%ebp),%eax
086769bd +0x09:  add    $&_ZL14gUnicodeBuffer+0xaeb8,%eax
086769c2 +0x0e:  mov    %eax,0x4(%esp)
086769c6 +0x12:  mov    0x8(%ebp),%eax
086769c9 +0x15:  mov    %eax,(%esp)
086769cc +0x18:  call   086769ea <_ZN5CUser17GetPcRoomRentInfoEP26SIG_SAVE_PC_ROOM_RENT_ITEM>  ; CUser::GetPcRoomRentInfo(SIG_SAVE_PC_ROOM_RENT_ITEM*)
086769d1 +0x1d:  mov    0xc(%ebp),%eax
086769d4 +0x20:  add    $&_ZL14gUnicodeBuffer+0xaec4,%eax
086769d9 +0x25:  mov    %eax,0x4(%esp)
086769dd +0x29:  mov    0x8(%ebp),%eax
086769e0 +0x2c:  mov    %eax,(%esp)
086769e3 +0x2f:  call   08676bec <_ZN5CUser20GetDimensionRentInfoEP28SIG_SAVE_DIMENSION_RENT_ITEM>  ; CUser::GetDimensionRentInfo(SIG_SAVE_DIMENSION_RENT_ITEM*)
086769e8 +0x34:  leave
086769e9 +0x35:  ret
```

## 反编译 C

```c
// CUser::GetRentInfo @ 0x86769b4

/* CUser::GetRentInfo(SIG_LOAD_INVENTORY&) */

void __thiscall CUser::GetRentInfo(CUser *this,SIG_LOAD_INVENTORY *param_1)

{
  GetPcRoomRentInfo(this,(SIG_SAVE_PC_ROOM_RENT_ITEM *)(param_1 + 0x153e4));
  GetDimensionRentInfo(this,(SIG_SAVE_DIMENSION_RENT_ITEM *)(param_1 + 0x153f0));
  return;
}
```
