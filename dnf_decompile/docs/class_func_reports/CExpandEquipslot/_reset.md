# _reset

`_ZN16CExpandEquipslot6_resetEv`

`CExpandEquipslot::_reset()`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x0849a9e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849a9e2  _ZN16CExpandEquipslot6_resetEv
#           CExpandEquipslot::_reset()
# range [0x0849a9e2, 0x0849aa47]
0849a9e2 +0x00:  push   %ebp
0849a9e3 +0x01:  mov    %esp,%ebp
0849a9e5 +0x03:  sub    $0x28,%esp
0849a9e8 +0x06:  movl   $0x0,-0xc(%ebp)
0849a9ef +0x0d:  jmp    0849aa3b <+0x59>
0849a9f1 +0x0f:  mov    -0xc(%ebp),%eax
0849a9f4 +0x12:  imul   $0x3d,%eax,%eax
0849a9f7 +0x15:  add    0x8(%ebp),%eax
0849a9fa +0x18:  add    $0x5,%eax
0849a9fd +0x1b:  mov    %eax,(%esp)
0849aa00 +0x1e:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0849aa05 +0x23:  mov    -0xc(%ebp),%eax
0849aa08 +0x26:  imul   $0x3d,%eax,%eax
0849aa0b +0x29:  add    $0x2e0,%eax
0849aa10 +0x2e:  add    0x8(%ebp),%eax
0849aa13 +0x31:  add    $0x1,%eax
0849aa16 +0x34:  mov    %eax,(%esp)
0849aa19 +0x37:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0849aa1e +0x3c:  mov    -0xc(%ebp),%eax
0849aa21 +0x3f:  imul   $0x3d,%eax,%eax
0849aa24 +0x42:  add    $0x5b0,%eax
0849aa29 +0x47:  add    0x8(%ebp),%eax
0849aa2c +0x4a:  add    $0xd,%eax
0849aa2f +0x4d:  mov    %eax,(%esp)
0849aa32 +0x50:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0849aa37 +0x55:  addl   $0x1,-0xc(%ebp)
0849aa3b +0x59:  cmpl   $0xb,-0xc(%ebp)
0849aa3f +0x5d:  setle  %al
0849aa42 +0x60:  test   %al,%al
0849aa44 +0x62:  jne    0849a9f1 <+0xf>
0849aa46 +0x64:  leave
0849aa47 +0x65:  ret
```

## 反编译 C

```c
// CExpandEquipslot::_reset @ 0x849a9e2

/* CExpandEquipslot::_reset() */

void __thiscall CExpandEquipslot::_reset(CExpandEquipslot *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
    Inven_Item::reset((Inven_Item *)(this + local_10 * 0x3d + 5));
    Inven_Item::reset((Inven_Item *)(this + local_10 * 0x3d + 0x2e1));
    Inven_Item::reset((Inven_Item *)(this + local_10 * 0x3d + 0x5bd));
  }
  return;
}
```
