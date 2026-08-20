# CheckNFix

`_ZN10CInventory9CheckNFixEv`

`CInventory::CheckNFix()`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08509738` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08509738  _ZN10CInventory9CheckNFixEv
#           CInventory::CheckNFix()
# range [0x08509738, 0x0850987f]
08509738 +0x000:  push   %ebp
08509739 +0x001:  mov    %esp,%ebp
0850973b +0x003:  sub    $0x28,%esp
0850973e +0x006:  movl   $0x3,-0xc(%ebp)
08509745 +0x00d:  jmp    085097dc <+0xa4>
0850974a +0x012:  mov    0x8(%ebp),%eax
0850974d +0x015:  mov    0x650(%eax),%edx
08509753 +0x01b:  mov    -0xc(%ebp),%eax
08509756 +0x01e:  imul   $0x3d,%eax,%eax
08509759 +0x021:  lea    (%edx,%eax,1),%eax
0850975c +0x024:  mov    0x2(%eax),%eax
0850975f +0x027:  test   %eax,%eax
08509761 +0x029:  je     085097d8 <+0xa0>
08509763 +0x02b:  mov    0x8(%ebp),%eax
08509766 +0x02e:  mov    0x650(%eax),%edx
0850976c +0x034:  mov    -0xc(%ebp),%eax
0850976f +0x037:  imul   $0x3d,%eax,%eax
08509772 +0x03a:  lea    (%edx,%eax,1),%eax
08509775 +0x03d:  movzbl 0x1(%eax),%eax
08509779 +0x041:  cmp    $0x1,%al
0850977b +0x043:  je     085097d8 <+0xa0>
0850977d +0x045:  mov    0x8(%ebp),%eax
08509780 +0x048:  mov    0x650(%eax),%edx
08509786 +0x04e:  mov    -0xc(%ebp),%eax
08509789 +0x051:  imul   $0x3d,%eax,%eax
0850978c +0x054:  lea    (%edx,%eax,1),%eax
0850978f +0x057:  mov    %eax,(%esp)
08509792 +0x05a:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08509797 +0x05f:  mov    0x8(%ebp),%edx
0850979a +0x062:  mov    0x650(%edx),%ecx
085097a0 +0x068:  mov    -0xc(%ebp),%edx
085097a3 +0x06b:  imul   $0x3d,%edx,%edx
085097a6 +0x06e:  lea    (%ecx,%edx,1),%edx
085097a9 +0x071:  mov    0x2(%edx),%edx
085097ac +0x074:  mov    %eax,0x4(%esp)
085097b0 +0x078:  mov    %edx,(%esp)
085097b3 +0x07b:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
085097b8 +0x080:  xor    $0x1,%eax
085097bb +0x083:  test   %al,%al
085097bd +0x085:  je     085097d8 <+0xa0>
085097bf +0x087:  mov    0x8(%ebp),%eax
085097c2 +0x08a:  mov    0x650(%eax),%edx
085097c8 +0x090:  mov    -0xc(%ebp),%eax
085097cb +0x093:  imul   $0x3d,%eax,%eax
085097ce +0x096:  lea    (%edx,%eax,1),%eax
085097d1 +0x099:  movl   $0x1,0x7(%eax)
085097d8 +0x0a0:  addl   $0x1,-0xc(%ebp)
085097dc +0x0a4:  cmpl   $0x8,-0xc(%ebp)
085097e0 +0x0a8:  setle  %al
085097e3 +0x0ab:  test   %al,%al
085097e5 +0x0ad:  jne    0850974a <+0x12>
085097eb +0x0b3:  movl   $0x39,-0xc(%ebp)
085097f2 +0x0ba:  jmp    0850986c <+0x134>
085097f4 +0x0bc:  mov    0x8(%ebp),%eax
085097f7 +0x0bf:  mov    0x650(%eax),%edx
085097fd +0x0c5:  mov    -0xc(%ebp),%eax
08509800 +0x0c8:  imul   $0x3d,%eax,%eax
08509803 +0x0cb:  lea    (%edx,%eax,1),%eax
08509806 +0x0ce:  mov    0x2(%eax),%eax
08509809 +0x0d1:  test   %eax,%eax
0850980b +0x0d3:  je     08509868 <+0x130>
0850980d +0x0d5:  mov    0x8(%ebp),%eax
08509810 +0x0d8:  mov    0x650(%eax),%edx
08509816 +0x0de:  mov    -0xc(%ebp),%eax
08509819 +0x0e1:  imul   $0x3d,%eax,%eax
0850981c +0x0e4:  lea    (%edx,%eax,1),%eax
0850981f +0x0e7:  mov    %eax,(%esp)
08509822 +0x0ea:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08509827 +0x0ef:  mov    0x8(%ebp),%edx
0850982a +0x0f2:  mov    0x650(%edx),%ecx
08509830 +0x0f8:  mov    -0xc(%ebp),%edx
08509833 +0x0fb:  imul   $0x3d,%edx,%edx
08509836 +0x0fe:  lea    (%ecx,%edx,1),%edx
08509839 +0x101:  mov    0x2(%edx),%edx
0850983c +0x104:  mov    %eax,0x4(%esp)
08509840 +0x108:  mov    %edx,(%esp)
08509843 +0x10b:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
08509848 +0x110:  xor    $0x1,%eax
0850984b +0x113:  test   %al,%al
0850984d +0x115:  je     08509868 <+0x130>
0850984f +0x117:  mov    0x8(%ebp),%eax
08509852 +0x11a:  mov    0x650(%eax),%edx
08509858 +0x120:  mov    -0xc(%ebp),%eax
0850985b +0x123:  imul   $0x3d,%eax,%eax
0850985e +0x126:  lea    (%edx,%eax,1),%eax
08509861 +0x129:  movl   $0x1,0x7(%eax)
08509868 +0x130:  addl   $0x1,-0xc(%ebp)
0850986c +0x134:  cmpl   $0xc8,-0xc(%ebp)
08509873 +0x13b:  setle  %al
08509876 +0x13e:  test   %al,%al
08509878 +0x140:  jne    085097f4 <+0xbc>
0850987e +0x146:  leave
0850987f +0x147:  ret
```

## 反编译 C

```c
// CInventory::CheckNFix @ 0x8509738

/* CInventory::CheckNFix() */

void __thiscall CInventory::CheckNFix(CInventory *this)

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
        *(undefined4 *)(*(int *)(this + 0x650) + local_10 * 0x3d + 7) = 1;
      }
    }
  }
  for (local_10 = 0x39; local_10 < 0xc9; local_10 = local_10 + 1) {
    if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) != 0) {
      iVar2 = Inven_Item::get_add_info((Inven_Item *)(*(int *)(this + 0x650) + local_10 * 0x3d));
      cVar1 = checkStackableLimit(*(ulong *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2),iVar2);
      if (cVar1 != '\x01') {
        *(undefined4 *)(*(int *)(this + 0x650) + local_10 * 0x3d + 7) = 1;
      }
    }
  }
  return;
}
```
