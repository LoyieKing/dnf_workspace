# CExpandEquipslot

`_ZN16CExpandEquipslotC1Ev`

`CExpandEquipslot::CExpandEquipslot()`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x084992c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084992c0  _ZN16CExpandEquipslotC1Ev
#           CExpandEquipslot::CExpandEquipslot()
# range [0x084992c0, 0x0849935b]
084992c0 +0x00:  push   %ebp
084992c1 +0x01:  mov    %esp,%ebp
084992c3 +0x03:  push   %esi
084992c4 +0x04:  push   %ebx
084992c5 +0x05:  sub    $0x10,%esp
084992c8 +0x08:  mov    0x8(%ebp),%eax
084992cb +0x0b:  mov    %eax,(%esp)
084992ce +0x0e:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
084992d3 +0x13:  mov    0x8(%ebp),%eax
084992d6 +0x16:  movl   $&_ZTV16CExpandEquipslot+0x8,(%eax)
084992dc +0x1c:  mov    0x8(%ebp),%eax
084992df +0x1f:  add    $0x5,%eax
084992e2 +0x22:  mov    %eax,%ebx
084992e4 +0x24:  mov    $0xb,%esi
084992e9 +0x29:  jmp    084992f9 <+0x39>
084992eb +0x2b:  mov    %ebx,(%esp)
084992ee +0x2e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084992f3 +0x33:  add    $0x3d,%ebx
084992f6 +0x36:  sub    $0x1,%esi
084992f9 +0x39:  cmp    $0xffffffff,%esi
084992fc +0x3c:  setne  %al
084992ff +0x3f:  test   %al,%al
08499301 +0x41:  jne    084992eb <+0x2b>
08499303 +0x43:  mov    0x8(%ebp),%eax
08499306 +0x46:  add    $0x2e1,%eax
0849930b +0x4b:  mov    %eax,%ebx
0849930d +0x4d:  mov    $0xb,%esi
08499312 +0x52:  jmp    08499322 <+0x62>
08499314 +0x54:  mov    %ebx,(%esp)
08499317 +0x57:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0849931c +0x5c:  add    $0x3d,%ebx
0849931f +0x5f:  sub    $0x1,%esi
08499322 +0x62:  cmp    $0xffffffff,%esi
08499325 +0x65:  setne  %al
08499328 +0x68:  test   %al,%al
0849932a +0x6a:  jne    08499314 <+0x54>
0849932c +0x6c:  mov    0x8(%ebp),%eax
0849932f +0x6f:  add    $0x5bd,%eax
08499334 +0x74:  mov    %eax,%ebx
08499336 +0x76:  mov    $0xb,%esi
0849933b +0x7b:  jmp    0849934b <+0x8b>
0849933d +0x7d:  mov    %ebx,(%esp)
08499340 +0x80:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08499345 +0x85:  add    $0x3d,%ebx
08499348 +0x88:  sub    $0x1,%esi
0849934b +0x8b:  cmp    $0xffffffff,%esi
0849934e +0x8e:  setne  %al
08499351 +0x91:  test   %al,%al
08499353 +0x93:  jne    0849933d <+0x7d>
08499355 +0x95:  add    $0x10,%esp
08499358 +0x98:  pop    %ebx
08499359 +0x99:  pop    %esi
0849935a +0x9a:  pop    %ebp
0849935b +0x9b:  ret
```

## 反编译 C

```c
// CExpandEquipslot::CExpandEquipslot @ 0x84992c0

/* CExpandEquipslot::CExpandEquipslot() */

void __thiscall CExpandEquipslot::CExpandEquipslot(CExpandEquipslot *this)

{
  Inven_Item *pIVar1;
  int iVar2;
  
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c7b208;
  pIVar1 = (Inven_Item *)(this + 5);
  for (iVar2 = 0xb; iVar2 != -1; iVar2 = iVar2 + -1) {
    Inven_Item::Inven_Item(pIVar1);
    pIVar1 = pIVar1 + 0x3d;
  }
  pIVar1 = (Inven_Item *)(this + 0x2e1);
  for (iVar2 = 0xb; iVar2 != -1; iVar2 = iVar2 + -1) {
    Inven_Item::Inven_Item(pIVar1);
    pIVar1 = pIVar1 + 0x3d;
  }
  pIVar1 = (Inven_Item *)(this + 0x5bd);
  for (iVar2 = 0xb; iVar2 != -1; iVar2 = iVar2 + -1) {
    Inven_Item::Inven_Item(pIVar1);
    pIVar1 = pIVar1 + 0x3d;
  }
  return;
}
```
