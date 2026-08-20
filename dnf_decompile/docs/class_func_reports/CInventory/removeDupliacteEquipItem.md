# removeDupliacteEquipItem

`_ZN10CInventory24removeDupliacteEquipItemEv`

`CInventory::removeDupliacteEquipItem()`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x085034ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085034ae  _ZN10CInventory24removeDupliacteEquipItemEv
#           CInventory::removeDupliacteEquipItem()
# range [0x085034ae, 0x085035f3]
085034ae +0x000:  push   %ebp
085034af +0x001:  mov    %esp,%ebp
085034b1 +0x003:  push   %ebx
085034b2 +0x004:  sub    $0x44,%esp
085034b5 +0x007:  movl   $0x3,-0x14(%ebp)
085034bc +0x00e:  jmp    085035d6 <+0x128>
085034c1 +0x013:  mov    0x8(%ebp),%eax
085034c4 +0x016:  mov    0x650(%eax),%edx
085034ca +0x01c:  mov    -0x14(%ebp),%eax
085034cd +0x01f:  imul   $0x3d,%eax,%eax
085034d0 +0x022:  lea    (%edx,%eax,1),%eax
085034d3 +0x025:  movzbl 0x1(%eax),%eax
085034d7 +0x029:  cmp    $0x1,%al
085034d9 +0x02b:  jne    085035ce <+0x120>
085034df +0x031:  mov    0x8(%ebp),%eax
085034e2 +0x034:  mov    0x650(%eax),%edx
085034e8 +0x03a:  mov    -0x14(%ebp),%eax
085034eb +0x03d:  imul   $0x3d,%eax,%eax
085034ee +0x040:  lea    (%edx,%eax,1),%eax
085034f1 +0x043:  mov    0x7(%eax),%edx
085034f4 +0x046:  mov    0x8(%ebp),%eax
085034f7 +0x049:  mov    0x650(%eax),%ecx
085034fd +0x04f:  mov    -0x14(%ebp),%eax
08503500 +0x052:  imul   $0x3d,%eax,%eax
08503503 +0x055:  lea    (%ecx,%eax,1),%eax
08503506 +0x058:  mov    0x2(%eax),%eax
08503509 +0x05b:  mov    -0x14(%ebp),%ecx
0850350c +0x05e:  mov    %ecx,0xc(%esp)
08503510 +0x062:  mov    %edx,0x8(%esp)
08503514 +0x066:  mov    %eax,0x4(%esp)
08503518 +0x06a:  mov    0x8(%ebp),%eax
0850351b +0x06d:  mov    %eax,(%esp)
0850351e +0x070:  call   08503418 <_ZN10CInventory17getExistEquipItemEiii>  ; CInventory::getExistEquipItem(int, int, int)
08503523 +0x075:  mov    %eax,-0x10(%ebp)
08503526 +0x078:  cmpl   $0xffffffff,-0x10(%ebp)
0850352a +0x07c:  je     085035d1 <+0x123>
08503530 +0x082:  mov    0x8(%ebp),%eax
08503533 +0x085:  mov    (%eax),%eax
08503535 +0x087:  test   %eax,%eax
08503537 +0x089:  je     08503548 <+0x9a>
08503539 +0x08b:  mov    0x8(%ebp),%eax
0850353c +0x08e:  mov    (%eax),%eax
0850353e +0x090:  mov    %eax,(%esp)
08503541 +0x093:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08503546 +0x098:  jmp    0850354d <+0x9f>
08503548 +0x09a:  mov    $0x0,%eax
0850354d +0x09f:  mov    %eax,-0xc(%ebp)
08503550 +0x0a2:  mov    0x8(%ebp),%eax
08503553 +0x0a5:  mov    0x650(%eax),%edx
08503559 +0x0ab:  mov    -0x14(%ebp),%eax
0850355c +0x0ae:  imul   $0x3d,%eax,%eax
0850355f +0x0b1:  lea    (%edx,%eax,1),%eax
08503562 +0x0b4:  mov    0x2(%eax),%ebx
08503565 +0x0b7:  movl   $0x5,0xc(%esp)
0850356d +0x0bf:  movl   $0x16d2,0x8(%esp)
08503575 +0x0c7:  movl   $&_ZZN10CInventory24removeDupliacteEquipItemEvE19__PRETTY_FUNCTION__,0x4(%esp)
0850357d +0x0cf:  lea    -0x24(%ebp),%eax
08503580 +0x0d2:  mov    %eax,(%esp)
08503583 +0x0d5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08503588 +0x0da:  mov    -0xc(%ebp),%eax
0850358b +0x0dd:  mov    %eax,0x10(%esp)
0850358f +0x0e1:  mov    -0x14(%ebp),%eax
08503592 +0x0e4:  mov    %eax,0xc(%esp)
08503596 +0x0e8:  mov    %ebx,0x8(%esp)
0850359a +0x0ec:  movl   $"DUPLICATE ITEM REMOVED %d at %d of %d",0x4(%esp)
085035a2 +0x0f4:  lea    -0x24(%ebp),%eax
085035a5 +0x0f7:  mov    %eax,(%esp)
085035a8 +0x0fa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085035ad +0x0ff:  mov    0x8(%ebp),%eax
085035b0 +0x102:  mov    0x650(%eax),%edx
085035b6 +0x108:  mov    -0x14(%ebp),%eax
085035b9 +0x10b:  imul   $0x3d,%eax,%eax
085035bc +0x10e:  lea    (%edx,%eax,1),%eax
085035bf +0x111:  mov    %eax,(%esp)
085035c2 +0x114:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
085035c7 +0x119:  mov    $0x1,%eax
085035cc +0x11e:  jmp    085035ed <+0x13f>
085035ce +0x120:  nop
085035cf +0x121:  jmp    085035d2 <+0x124>
085035d1 +0x123:  nop
085035d2 +0x124:  addl   $0x1,-0x14(%ebp)
085035d6 +0x128:  cmpl   $0xc8,-0x14(%ebp)
085035dd +0x12f:  setle  %al
085035e0 +0x132:  test   %al,%al
085035e2 +0x134:  jne    085034c1 <+0x13>
085035e8 +0x13a:  mov    $0x0,%eax
085035ed +0x13f:  add    $0x44,%esp
085035f0 +0x142:  pop    %ebx
085035f1 +0x143:  pop    %ebp
085035f2 +0x144:  ret
085035f3 +0x145:  nop
```

## 反编译 C

```c
// CInventory::removeDupliacteEquipItem @ 0x85034ae

/* CInventory::removeDupliacteEquipItem() */

undefined4 __thiscall CInventory::removeDupliacteEquipItem(CInventory *this)

{
  undefined4 uVar1;
  cMyTrace local_28 [16];
  int local_18;
  int local_14;
  undefined4 local_10;
  
  local_18 = 3;
  while( true ) {
    if (200 < local_18) {
      return 0;
    }
    if ((*(char *)(*(int *)(this + 0x650) + local_18 * 0x3d + 1) == '\x01') &&
       (local_14 = getExistEquipItem(this,*(int *)(*(int *)(this + 0x650) + local_18 * 0x3d + 2),
                                     *(int *)(*(int *)(this + 0x650) + local_18 * 0x3d + 7),local_18
                                    ), local_14 != -1)) break;
    local_18 = local_18 + 1;
  }
  if (*(int *)this == 0) {
    local_10 = 0;
  }
  else {
    local_10 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)this);
  }
  uVar1 = *(undefined4 *)(*(int *)(this + 0x650) + local_18 * 0x3d + 2);
  cMyTrace::cMyTrace(local_28,"bool CInventory::removeDupliacteEquipItem()",0x16d2,5);
  cMyTrace::operator()(local_28,"DUPLICATE ITEM REMOVED %d at %d of %d",uVar1,local_18,local_10);
  Inven_Item::reset((Inven_Item *)(*(int *)(this + 0x650) + local_18 * 0x3d));
  return 1;
}
```
