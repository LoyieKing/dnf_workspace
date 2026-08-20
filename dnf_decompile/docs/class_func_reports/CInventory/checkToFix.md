# checkToFix

`_ZNK10CInventory10checkToFixEv`

`CInventory::checkToFix() const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08509610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08509610  _ZNK10CInventory10checkToFixEv
#           CInventory::checkToFix() const
# range [0x08509610, 0x08509737]
08509610 +0x000:  push   %ebp
08509611 +0x001:  mov    %esp,%ebp
08509613 +0x003:  sub    $0x28,%esp
08509616 +0x006:  movl   $0x3,-0xc(%ebp)
0850961d +0x00d:  jmp    085096a5 <+0x95>
08509622 +0x012:  mov    0x8(%ebp),%eax
08509625 +0x015:  mov    0x650(%eax),%edx
0850962b +0x01b:  mov    -0xc(%ebp),%eax
0850962e +0x01e:  imul   $0x3d,%eax,%eax
08509631 +0x021:  lea    (%edx,%eax,1),%eax
08509634 +0x024:  mov    0x2(%eax),%eax
08509637 +0x027:  test   %eax,%eax
08509639 +0x029:  je     085096a1 <+0x91>
0850963b +0x02b:  mov    0x8(%ebp),%eax
0850963e +0x02e:  mov    0x650(%eax),%edx
08509644 +0x034:  mov    -0xc(%ebp),%eax
08509647 +0x037:  imul   $0x3d,%eax,%eax
0850964a +0x03a:  lea    (%edx,%eax,1),%eax
0850964d +0x03d:  movzbl 0x1(%eax),%eax
08509651 +0x041:  cmp    $0x1,%al
08509653 +0x043:  je     085096a1 <+0x91>
08509655 +0x045:  mov    0x8(%ebp),%eax
08509658 +0x048:  mov    0x650(%eax),%edx
0850965e +0x04e:  mov    -0xc(%ebp),%eax
08509661 +0x051:  imul   $0x3d,%eax,%eax
08509664 +0x054:  lea    (%edx,%eax,1),%eax
08509667 +0x057:  mov    %eax,(%esp)
0850966a +0x05a:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850966f +0x05f:  mov    0x8(%ebp),%edx
08509672 +0x062:  mov    0x650(%edx),%ecx
08509678 +0x068:  mov    -0xc(%ebp),%edx
0850967b +0x06b:  imul   $0x3d,%edx,%edx
0850967e +0x06e:  lea    (%ecx,%edx,1),%edx
08509681 +0x071:  mov    0x2(%edx),%edx
08509684 +0x074:  mov    %eax,0x4(%esp)
08509688 +0x078:  mov    %edx,(%esp)
0850968b +0x07b:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
08509690 +0x080:  xor    $0x1,%eax
08509693 +0x083:  test   %al,%al
08509695 +0x085:  je     085096a1 <+0x91>
08509697 +0x087:  mov    $0x1,%eax
0850969c +0x08c:  jmp    08509736 <+0x126>
085096a1 +0x091:  addl   $0x1,-0xc(%ebp)
085096a5 +0x095:  cmpl   $0x8,-0xc(%ebp)
085096a9 +0x099:  setle  %al
085096ac +0x09c:  test   %al,%al
085096ae +0x09e:  jne    08509622 <+0x12>
085096b4 +0x0a4:  movl   $0x39,-0xc(%ebp)
085096bb +0x0ab:  jmp    08509723 <+0x113>
085096bd +0x0ad:  mov    0x8(%ebp),%eax
085096c0 +0x0b0:  mov    0x650(%eax),%edx
085096c6 +0x0b6:  mov    -0xc(%ebp),%eax
085096c9 +0x0b9:  imul   $0x3d,%eax,%eax
085096cc +0x0bc:  lea    (%edx,%eax,1),%eax
085096cf +0x0bf:  mov    0x2(%eax),%eax
085096d2 +0x0c2:  test   %eax,%eax
085096d4 +0x0c4:  je     0850971f <+0x10f>
085096d6 +0x0c6:  mov    0x8(%ebp),%eax
085096d9 +0x0c9:  mov    0x650(%eax),%edx
085096df +0x0cf:  mov    -0xc(%ebp),%eax
085096e2 +0x0d2:  imul   $0x3d,%eax,%eax
085096e5 +0x0d5:  lea    (%edx,%eax,1),%eax
085096e8 +0x0d8:  mov    %eax,(%esp)
085096eb +0x0db:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085096f0 +0x0e0:  mov    0x8(%ebp),%edx
085096f3 +0x0e3:  mov    0x650(%edx),%ecx
085096f9 +0x0e9:  mov    -0xc(%ebp),%edx
085096fc +0x0ec:  imul   $0x3d,%edx,%edx
085096ff +0x0ef:  lea    (%ecx,%edx,1),%edx
08509702 +0x0f2:  mov    0x2(%edx),%edx
08509705 +0x0f5:  mov    %eax,0x4(%esp)
08509709 +0x0f9:  mov    %edx,(%esp)
0850970c +0x0fc:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
08509711 +0x101:  xor    $0x1,%eax
08509714 +0x104:  test   %al,%al
08509716 +0x106:  je     0850971f <+0x10f>
08509718 +0x108:  mov    $0x1,%eax
0850971d +0x10d:  jmp    08509736 <+0x126>
0850971f +0x10f:  addl   $0x1,-0xc(%ebp)
08509723 +0x113:  cmpl   $0xc8,-0xc(%ebp)
0850972a +0x11a:  setle  %al
0850972d +0x11d:  test   %al,%al
0850972f +0x11f:  jne    085096bd <+0xad>
08509731 +0x121:  mov    $0x0,%eax
08509736 +0x126:  leave
08509737 +0x127:  ret
```

## 反编译 C

```c
// CInventory::checkToFix @ 0x8509610

/* CInventory::checkToFix() const */

undefined4 __thiscall CInventory::checkToFix(CInventory *this)

{
  char cVar1;
  int iVar2;
  int local_10;
  
  for (local_10 = 3; local_10 < 9; local_10 = local_10 + 1) {
    if ((*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) != 0) &&
       (*(char *)(*(int *)(this + 0x650) + local_10 * 0x3d + 1) != '\x01')) {
      iVar2 = Inven_Item::get_add_info((Inven_Item *)(*(int *)(this + 0x650) + local_10 * 0x3d));
      cVar1 = checkStackableLimit(*(ulong *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2),iVar2);
      if (cVar1 != '\x01') {
        return 1;
      }
    }
  }
  local_10 = 0x39;
  do {
    if (200 < local_10) {
      return 0;
    }
    if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) != 0) {
      iVar2 = Inven_Item::get_add_info((Inven_Item *)(*(int *)(this + 0x650) + local_10 * 0x3d));
      cVar1 = checkStackableLimit(*(ulong *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2),iVar2);
      if (cVar1 != '\x01') {
        return 1;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
