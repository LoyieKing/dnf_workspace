# _AddStackItem

`_ZN6CCargo13_AddStackItemERK10Inven_Itemi`

`CCargo::_AddStackItem(Inven_Item const&, int)`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850c546` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850c546  _ZN6CCargo13_AddStackItemERK10Inven_Itemi
#           CCargo::_AddStackItem(Inven_Item const&, int)
# range [0x0850c546, 0x0850c655]
0850c546 +0x000:  push   %ebp
0850c547 +0x001:  mov    %esp,%ebp
0850c549 +0x003:  push   %esi
0850c54a +0x004:  push   %ebx
0850c54b +0x005:  sub    $0x10,%esp
0850c54e +0x008:  mov    0x8(%ebp),%eax
0850c551 +0x00b:  mov    0x4(%eax),%edx
0850c554 +0x00e:  mov    0x10(%ebp),%eax
0850c557 +0x011:  imul   $0x3d,%eax,%eax
0850c55a +0x014:  lea    (%edx,%eax,1),%eax
0850c55d +0x017:  mov    0x2(%eax),%edx
0850c560 +0x01a:  mov    0xc(%ebp),%eax
0850c563 +0x01d:  mov    0x2(%eax),%eax
0850c566 +0x020:  cmp    %eax,%edx
0850c568 +0x022:  jne    0850c649 <+0x103>
0850c56e +0x028:  mov    0x8(%ebp),%eax
0850c571 +0x02b:  movb   $0x0,0x10(%eax)
0850c575 +0x02f:  mov    0xc(%ebp),%eax
0850c578 +0x032:  mov    %eax,(%esp)
0850c57b +0x035:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850c580 +0x03a:  mov    $0x7fffffff,%edx
0850c585 +0x03f:  mov    %edx,%ecx
0850c587 +0x041:  sub    %eax,%ecx
0850c589 +0x043:  mov    0x8(%ebp),%eax
0850c58c +0x046:  mov    0x4(%eax),%edx
0850c58f +0x049:  mov    0x10(%ebp),%eax
0850c592 +0x04c:  imul   $0x3d,%eax,%eax
0850c595 +0x04f:  lea    (%edx,%eax,1),%eax
0850c598 +0x052:  mov    0x7(%eax),%eax
0850c59b +0x055:  cmp    %eax,%ecx
0850c59d +0x057:  setl   %al
0850c5a0 +0x05a:  test   %al,%al
0850c5a2 +0x05c:  je     0850c5bf <+0x79>
0850c5a4 +0x05e:  mov    0x8(%ebp),%eax
0850c5a7 +0x061:  mov    0x4(%eax),%edx
0850c5aa +0x064:  mov    0x10(%ebp),%eax
0850c5ad +0x067:  imul   $0x3d,%eax,%eax
0850c5b0 +0x06a:  lea    (%edx,%eax,1),%eax
0850c5b3 +0x06d:  movl   $0x0,0x7(%eax)
0850c5ba +0x074:  jmp    0850c644 <+0xfe>
0850c5bf +0x079:  mov    0x8(%ebp),%eax
0850c5c2 +0x07c:  mov    0x4(%eax),%edx
0850c5c5 +0x07f:  mov    0x10(%ebp),%eax
0850c5c8 +0x082:  imul   $0x3d,%eax,%eax
0850c5cb +0x085:  lea    (%edx,%eax,1),%eax
0850c5ce +0x088:  mov    %eax,(%esp)
0850c5d1 +0x08b:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850c5d6 +0x090:  mov    %eax,%ebx
0850c5d8 +0x092:  mov    0xc(%ebp),%eax
0850c5db +0x095:  mov    %eax,(%esp)
0850c5de +0x098:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850c5e3 +0x09d:  lea    (%ebx,%eax,1),%edx
0850c5e6 +0x0a0:  mov    0x8(%ebp),%eax
0850c5e9 +0x0a3:  mov    0x4(%eax),%ecx
0850c5ec +0x0a6:  mov    0x10(%ebp),%eax
0850c5ef +0x0a9:  imul   $0x3d,%eax,%eax
0850c5f2 +0x0ac:  lea    (%ecx,%eax,1),%eax
0850c5f5 +0x0af:  mov    0x2(%eax),%eax
0850c5f8 +0x0b2:  mov    %edx,0x4(%esp)
0850c5fc +0x0b6:  mov    %eax,(%esp)
0850c5ff +0x0b9:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
0850c604 +0x0be:  xor    $0x1,%eax
0850c607 +0x0c1:  test   %al,%al
0850c609 +0x0c3:  je     0850c612 <+0xcc>
0850c60b +0x0c5:  mov    $0xfffffff6,%eax
0850c610 +0x0ca:  jmp    0850c64e <+0x108>
0850c612 +0x0cc:  mov    0x8(%ebp),%eax
0850c615 +0x0cf:  mov    0x4(%eax),%edx
0850c618 +0x0d2:  mov    0x10(%ebp),%eax
0850c61b +0x0d5:  imul   $0x3d,%eax,%eax
0850c61e +0x0d8:  lea    (%edx,%eax,1),%ebx
0850c621 +0x0db:  mov    0x8(%ebp),%eax
0850c624 +0x0de:  mov    0x4(%eax),%edx
0850c627 +0x0e1:  mov    0x10(%ebp),%eax
0850c62a +0x0e4:  imul   $0x3d,%eax,%eax
0850c62d +0x0e7:  lea    (%edx,%eax,1),%eax
0850c630 +0x0ea:  mov    0x7(%eax),%esi
0850c633 +0x0ed:  mov    0xc(%ebp),%eax
0850c636 +0x0f0:  mov    %eax,(%esp)
0850c639 +0x0f3:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850c63e +0x0f8:  lea    (%esi,%eax,1),%eax
0850c641 +0x0fb:  mov    %eax,0x7(%ebx)
0850c644 +0x0fe:  mov    0x10(%ebp),%eax
0850c647 +0x101:  jmp    0850c64e <+0x108>
0850c649 +0x103:  mov    $0xffffffff,%eax
0850c64e +0x108:  add    $0x10,%esp
0850c651 +0x10b:  pop    %ebx
0850c652 +0x10c:  pop    %esi
0850c653 +0x10d:  pop    %ebp
0850c654 +0x10e:  ret
0850c655 +0x10f:  nop
```

## 反编译 C

```c
// CCargo::_AddStackItem @ 0x850c546

/* CCargo::_AddStackItem(Inven_Item const&, int) */

int __thiscall CCargo::_AddStackItem(CCargo *this,Inven_Item *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) == *(int *)(param_1 + 2)) {
    this[0x10] = (CCargo)0x0;
    iVar2 = Inven_Item::get_add_info(param_1);
    if (0x7fffffff - iVar2 < *(int *)(*(int *)(this + 4) + param_2 * 0x3d + 7)) {
      *(undefined4 *)(*(int *)(this + 4) + param_2 * 0x3d + 7) = 0;
    }
    else {
      iVar2 = Inven_Item::get_add_info((Inven_Item *)(*(int *)(this + 4) + param_2 * 0x3d));
      iVar3 = Inven_Item::get_add_info(param_1);
      cVar1 = checkStackableLimit(*(ulong *)(*(int *)(this + 4) + param_2 * 0x3d + 2),iVar2 + iVar3)
      ;
      if (cVar1 == '\x01') {
        iVar2 = *(int *)(this + 4);
        iVar3 = *(int *)(*(int *)(this + 4) + param_2 * 0x3d + 7);
        iVar4 = Inven_Item::get_add_info(param_1);
        *(int *)(iVar2 + param_2 * 0x3d + 7) = iVar3 + iVar4;
      }
      else {
        param_2 = -10;
      }
    }
  }
  else {
    param_2 = -1;
  }
  return param_2;
}
```
