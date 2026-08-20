# ~CExpandEquipslot

`_ZN16CExpandEquipslotD0Ev`

`CExpandEquipslot::~CExpandEquipslot()`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x0849938c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849938c  _ZN16CExpandEquipslotD0Ev
#           CExpandEquipslot::~CExpandEquipslot()
# range [0x0849938c, 0x084993a9]
0849938c +0x00:  push   %ebp
0849938d +0x01:  mov    %esp,%ebp
0849938f +0x03:  sub    $0x18,%esp
08499392 +0x06:  mov    0x8(%ebp),%eax
08499395 +0x09:  mov    %eax,(%esp)
08499398 +0x0c:  call   0849935c <_ZN16CExpandEquipslotD1Ev>  ; CExpandEquipslot::~CExpandEquipslot()
0849939d +0x11:  mov    0x8(%ebp),%eax
084993a0 +0x14:  mov    %eax,(%esp)
084993a3 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084993a8 +0x1c:  leave
084993a9 +0x1d:  ret
```

## 反编译 C

```c
// CExpandEquipslot::~CExpandEquipslot @ 0x849938c

/* CExpandEquipslot::~CExpandEquipslot() */

void __thiscall CExpandEquipslot::~CExpandEquipslot(CExpandEquipslot *this)

{
  ~CExpandEquipslot(this);
  operator_delete(this);
  return;
}
```
