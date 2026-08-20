# getData

`_ZNK16CExpandEquipslot7getDataEPc`

`CExpandEquipslot::getData(char*) const`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x0849a436` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849a436  _ZNK16CExpandEquipslot7getDataEPc
#           CExpandEquipslot::getData(char*) const
# range [0x0849a436, 0x0849a57b]
0849a436 +0x000:  push   %ebp
0849a437 +0x001:  mov    %esp,%ebp
0849a439 +0x003:  sub    $0x38,%esp
0849a43c +0x006:  mov    0xc(%ebp),%eax
0849a43f +0x009:  mov    %eax,-0x1c(%ebp)
0849a442 +0x00c:  movl   $0xc,-0x18(%ebp)
0849a449 +0x013:  movl   $0x24,-0x14(%ebp)
0849a450 +0x01a:  movl   $0x1,-0x10(%ebp)
0849a457 +0x021:  movl   $0x0,-0xc(%ebp)
0849a45e +0x028:  jmp    0849a56a <+0x134>
0849a463 +0x02d:  cmpl   $0x0,-0xc(%ebp)
0849a467 +0x031:  je     0849a4a5 <+0x6f>
0849a469 +0x033:  mov    -0xc(%ebp),%ecx
0849a46c +0x036:  mov    $0xaaaaaaab,%edx
0849a471 +0x03b:  mov    %ecx,%eax
0849a473 +0x03d:  mul    %edx
0849a475 +0x03f:  shr    $0x3,%edx
0849a478 +0x042:  mov    %edx,%eax
0849a47a +0x044:  add    %eax,%eax
0849a47c +0x046:  add    %edx,%eax
0849a47e +0x048:  shl    $0x2,%eax
0849a481 +0x04b:  mov    %ecx,%edx
0849a483 +0x04d:  sub    %eax,%edx
0849a485 +0x04f:  test   %edx,%edx
0849a487 +0x051:  jne    0849a4a5 <+0x6f>
0849a489 +0x053:  cmpl   $0xc,-0xc(%ebp)
0849a48d +0x057:  jne    0849a498 <+0x62>
0849a48f +0x059:  movl   $0x2,-0x10(%ebp)
0849a496 +0x060:  jmp    0849a4a5 <+0x6f>
0849a498 +0x062:  cmpl   $0xc,-0xc(%ebp)
0849a49c +0x066:  jbe    0849a4a5 <+0x6f>
0849a49e +0x068:  movl   $0x3,-0x10(%ebp)
0849a4a5 +0x06f:  cmpl   $0x1,-0x10(%ebp)
0849a4a9 +0x073:  jne    0849a4d4 <+0x9e>
0849a4ab +0x075:  mov    -0xc(%ebp),%eax
0849a4ae +0x078:  imul   $0x3d,%eax,%eax
0849a4b1 +0x07b:  add    0x8(%ebp),%eax
0849a4b4 +0x07e:  lea    0x5(%eax),%edx
0849a4b7 +0x081:  mov    -0xc(%ebp),%eax
0849a4ba +0x084:  imul   $0x3d,%eax,%eax
0849a4bd +0x087:  add    -0x1c(%ebp),%eax
0849a4c0 +0x08a:  add    $0x4,%eax
0849a4c3 +0x08d:  mov    %edx,0x4(%esp)
0849a4c7 +0x091:  mov    %eax,(%esp)
0849a4ca +0x094:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0849a4cf +0x099:  jmp    0849a566 <+0x130>
0849a4d4 +0x09e:  cmpl   $0x2,-0x10(%ebp)
0849a4d8 +0x0a2:  jne    0849a51e <+0xe8>
0849a4da +0x0a4:  mov    -0xc(%ebp),%ecx
0849a4dd +0x0a7:  mov    $0xaaaaaaab,%edx
0849a4e2 +0x0ac:  mov    %ecx,%eax
0849a4e4 +0x0ae:  mul    %edx
0849a4e6 +0x0b0:  shr    $0x3,%edx
0849a4e9 +0x0b3:  mov    %edx,%eax
0849a4eb +0x0b5:  add    %eax,%eax
0849a4ed +0x0b7:  add    %edx,%eax
0849a4ef +0x0b9:  shl    $0x2,%eax
0849a4f2 +0x0bc:  mov    %ecx,%edx
0849a4f4 +0x0be:  sub    %eax,%edx
0849a4f6 +0x0c0:  imul   $0x3d,%edx,%eax
0849a4f9 +0x0c3:  add    $0x2e0,%eax
0849a4fe +0x0c8:  add    0x8(%ebp),%eax
0849a501 +0x0cb:  lea    0x1(%eax),%edx
0849a504 +0x0ce:  mov    -0xc(%ebp),%eax
0849a507 +0x0d1:  imul   $0x3d,%eax,%eax
0849a50a +0x0d4:  add    -0x1c(%ebp),%eax
0849a50d +0x0d7:  add    $0x4,%eax
0849a510 +0x0da:  mov    %edx,0x4(%esp)
0849a514 +0x0de:  mov    %eax,(%esp)
0849a517 +0x0e1:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0849a51c +0x0e6:  jmp    0849a566 <+0x130>
0849a51e +0x0e8:  cmpl   $0x3,-0x10(%ebp)
0849a522 +0x0ec:  jne    0849a566 <+0x130>
0849a524 +0x0ee:  mov    -0xc(%ebp),%ecx
0849a527 +0x0f1:  mov    $0xaaaaaaab,%edx
0849a52c +0x0f6:  mov    %ecx,%eax
0849a52e +0x0f8:  mul    %edx
0849a530 +0x0fa:  shr    $0x3,%edx
0849a533 +0x0fd:  mov    %edx,%eax
0849a535 +0x0ff:  add    %eax,%eax
0849a537 +0x101:  add    %edx,%eax
0849a539 +0x103:  shl    $0x2,%eax
0849a53c +0x106:  mov    %ecx,%edx
0849a53e +0x108:  sub    %eax,%edx
0849a540 +0x10a:  imul   $0x3d,%edx,%eax
0849a543 +0x10d:  add    $0x5b0,%eax
0849a548 +0x112:  add    0x8(%ebp),%eax
0849a54b +0x115:  lea    0xd(%eax),%edx
0849a54e +0x118:  mov    -0xc(%ebp),%eax
0849a551 +0x11b:  imul   $0x3d,%eax,%eax
0849a554 +0x11e:  add    -0x1c(%ebp),%eax
0849a557 +0x121:  add    $0x4,%eax
0849a55a +0x124:  mov    %edx,0x4(%esp)
0849a55e +0x128:  mov    %eax,(%esp)
0849a561 +0x12b:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0849a566 +0x130:  addl   $0x1,-0xc(%ebp)
0849a56a +0x134:  cmpl   $0x23,-0xc(%ebp)
0849a56e +0x138:  setbe  %al
0849a571 +0x13b:  test   %al,%al
0849a573 +0x13d:  jne    0849a463 <+0x2d>
0849a579 +0x143:  leave
0849a57a +0x144:  ret
0849a57b +0x145:  nop
```

## 反编译 C

```c
// CExpandEquipslot::getData @ 0x849a436

/* CExpandEquipslot::getData(char*) const */

void __thiscall CExpandEquipslot::getData(CExpandEquipslot *this,char *param_1)

{
  int local_14;
  uint local_10;
  
  local_14 = 1;
  for (local_10 = 0; local_10 < 0x24; local_10 = local_10 + 1) {
    if ((local_10 != 0) && (local_10 == (local_10 / 0xc) * 0xc)) {
      if (local_10 == 0xc) {
        local_14 = 2;
      }
      else if (0xc < local_10) {
        local_14 = 3;
      }
    }
    if (local_14 == 1) {
      Inven_Item::setCopy((Inven_Item *)(param_1 + local_10 * 0x3d + 4),
                          (Inven_Item *)(this + local_10 * 0x3d + 5));
    }
    else if (local_14 == 2) {
      Inven_Item::setCopy((Inven_Item *)(param_1 + local_10 * 0x3d + 4),
                          (Inven_Item *)(this + (local_10 % 0xc) * 0x3d + 0x2e1));
    }
    else if (local_14 == 3) {
      Inven_Item::setCopy((Inven_Item *)(param_1 + local_10 * 0x3d + 4),
                          (Inven_Item *)(this + (local_10 % 0xc) * 0x3d + 0x5bd));
    }
  }
  return;
}
```
