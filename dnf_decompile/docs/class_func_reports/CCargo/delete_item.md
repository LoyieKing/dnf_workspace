# delete_item

`_ZN6CCargo11delete_itemEii14eItemDelReason`

`CCargo::delete_item(int, int, eItemDelReason)`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850b794` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850b794  _ZN6CCargo11delete_itemEii14eItemDelReason
#           CCargo::delete_item(int, int, eItemDelReason)
# range [0x0850b794, 0x0850b903]
0850b794 +0x000:  push   %ebp
0850b795 +0x001:  mov    %esp,%ebp
0850b797 +0x003:  push   %ebx
0850b798 +0x004:  sub    $0x24,%esp
0850b79b +0x007:  mov    0xc(%ebp),%eax
0850b79e +0x00a:  mov    %eax,0x4(%esp)
0850b7a2 +0x00e:  mov    0x8(%ebp),%eax
0850b7a5 +0x011:  mov    %eax,(%esp)
0850b7a8 +0x014:  call   0850d39c <_GLOBAL__I_g_emptySlot+0x2d1>  ; global constructors keyed to g_emptySlot+0x2d1
0850b7ad +0x019:  xor    $0x1,%eax
0850b7b0 +0x01c:  test   %al,%al
0850b7b2 +0x01e:  je     0850b7be <+0x2a>
0850b7b4 +0x020:  mov    $0x0,%eax
0850b7b9 +0x025:  jmp    0850b8fd <+0x169>
0850b7be +0x02a:  mov    0x8(%ebp),%eax
0850b7c1 +0x02d:  mov    0x4(%eax),%edx
0850b7c4 +0x030:  mov    0xc(%ebp),%eax
0850b7c7 +0x033:  imul   $0x3d,%eax,%eax
0850b7ca +0x036:  lea    (%edx,%eax,1),%eax
0850b7cd +0x039:  mov    0x2(%eax),%eax
0850b7d0 +0x03c:  test   %eax,%eax
0850b7d2 +0x03e:  jne    0850b7de <+0x4a>
0850b7d4 +0x040:  mov    $0x0,%eax
0850b7d9 +0x045:  jmp    0850b8fd <+0x169>
0850b7de +0x04a:  cmpl   $0x0,0x10(%ebp)
0850b7e2 +0x04e:  jg     0850b7ee <+0x5a>
0850b7e4 +0x050:  mov    $0x0,%eax
0850b7e9 +0x055:  jmp    0850b8fd <+0x169>
0850b7ee +0x05a:  mov    0x8(%ebp),%eax
0850b7f1 +0x05d:  movb   $0x0,0x10(%eax)
0850b7f5 +0x061:  mov    0x8(%ebp),%eax
0850b7f8 +0x064:  mov    0x4(%eax),%edx
0850b7fb +0x067:  mov    0xc(%ebp),%eax
0850b7fe +0x06a:  imul   $0x3d,%eax,%eax
0850b801 +0x06d:  lea    (%edx,%eax,1),%eax
0850b804 +0x070:  mov    %eax,(%esp)
0850b807 +0x073:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0850b80c +0x078:  test   %al,%al
0850b80e +0x07a:  je     0850b82e <+0x9a>
0850b810 +0x07c:  mov    0x14(%ebp),%eax
0850b813 +0x07f:  mov    %eax,0x8(%esp)
0850b817 +0x083:  mov    0xc(%ebp),%eax
0850b81a +0x086:  mov    %eax,0x4(%esp)
0850b81e +0x08a:  mov    0x8(%ebp),%eax
0850b821 +0x08d:  mov    %eax,(%esp)
0850b824 +0x090:  call   0850b1a0 <_ZN6CCargo10_ResetSlotEi14eItemDelReason>  ; CCargo::_ResetSlot(int, eItemDelReason)
0850b829 +0x095:  jmp    0850b8f8 <+0x164>
0850b82e +0x09a:  mov    0x8(%ebp),%eax
0850b831 +0x09d:  mov    0x4(%eax),%edx
0850b834 +0x0a0:  mov    0xc(%ebp),%eax
0850b837 +0x0a3:  imul   $0x3d,%eax,%eax
0850b83a +0x0a6:  lea    (%edx,%eax,1),%eax
0850b83d +0x0a9:  mov    0x7(%eax),%eax
0850b840 +0x0ac:  cmp    0x10(%ebp),%eax
0850b843 +0x0af:  jne    0850b863 <+0xcf>
0850b845 +0x0b1:  mov    0x14(%ebp),%eax
0850b848 +0x0b4:  mov    %eax,0x8(%esp)
0850b84c +0x0b8:  mov    0xc(%ebp),%eax
0850b84f +0x0bb:  mov    %eax,0x4(%esp)
0850b853 +0x0bf:  mov    0x8(%ebp),%eax
0850b856 +0x0c2:  mov    %eax,(%esp)
0850b859 +0x0c5:  call   0850b1a0 <_ZN6CCargo10_ResetSlotEi14eItemDelReason>  ; CCargo::_ResetSlot(int, eItemDelReason)
0850b85e +0x0ca:  jmp    0850b8f8 <+0x164>
0850b863 +0x0cf:  mov    0x8(%ebp),%eax
0850b866 +0x0d2:  mov    0x4(%eax),%edx
0850b869 +0x0d5:  mov    0xc(%ebp),%eax
0850b86c +0x0d8:  imul   $0x3d,%eax,%eax
0850b86f +0x0db:  lea    (%edx,%eax,1),%eax
0850b872 +0x0de:  mov    0x7(%eax),%eax
0850b875 +0x0e1:  sub    0x10(%ebp),%eax
0850b878 +0x0e4:  test   %eax,%eax
0850b87a +0x0e6:  jle    0850b8f1 <+0x15d>
0850b87c +0x0e8:  mov    0x8(%ebp),%eax
0850b87f +0x0eb:  mov    0x4(%eax),%edx
0850b882 +0x0ee:  mov    0xc(%ebp),%eax
0850b885 +0x0f1:  imul   $0x3d,%eax,%eax
0850b888 +0x0f4:  add    %eax,%edx
0850b88a +0x0f6:  mov    0x8(%ebp),%eax
0850b88d +0x0f9:  mov    0x4(%eax),%ecx
0850b890 +0x0fc:  mov    0xc(%ebp),%eax
0850b893 +0x0ff:  imul   $0x3d,%eax,%eax
0850b896 +0x102:  lea    (%ecx,%eax,1),%eax
0850b899 +0x105:  mov    0x7(%eax),%eax
0850b89c +0x108:  sub    0x10(%ebp),%eax
0850b89f +0x10b:  mov    %eax,0x7(%edx)
0850b8a2 +0x10e:  mov    0x8(%ebp),%eax
0850b8a5 +0x111:  mov    0x4(%eax),%edx
0850b8a8 +0x114:  mov    0xc(%ebp),%eax
0850b8ab +0x117:  imul   $0x3d,%eax,%eax
0850b8ae +0x11a:  lea    (%edx,%eax,1),%eax
0850b8b1 +0x11d:  mov    0x7(%eax),%edx
0850b8b4 +0x120:  mov    0x8(%ebp),%eax
0850b8b7 +0x123:  mov    0x4(%eax),%ecx
0850b8ba +0x126:  mov    0xc(%ebp),%eax
0850b8bd +0x129:  imul   $0x3d,%eax,%eax
0850b8c0 +0x12c:  lea    (%ecx,%eax,1),%eax
0850b8c3 +0x12f:  mov    0x2(%eax),%eax
0850b8c6 +0x132:  mov    0x8(%ebp),%ecx
0850b8c9 +0x135:  mov    (%ecx),%ecx
0850b8cb +0x137:  lea    0x79700(%ecx),%ebx
0850b8d1 +0x13d:  mov    0x14(%ebp),%ecx
0850b8d4 +0x140:  mov    %ecx,0x10(%esp)
0850b8d8 +0x144:  mov    %edx,0xc(%esp)
0850b8dc +0x148:  mov    0x10(%ebp),%edx
0850b8df +0x14b:  mov    %edx,0x8(%esp)
0850b8e3 +0x14f:  mov    %eax,0x4(%esp)
0850b8e7 +0x153:  mov    %ebx,(%esp)
0850b8ea +0x156:  call   08683d20 <_ZN15cUserHistoryLog12ItemDelCargoEiii14eItemDelReason>  ; cUserHistoryLog::ItemDelCargo(int, int, int, eItemDelReason)
0850b8ef +0x15b:  jmp    0850b8f8 <+0x164>
0850b8f1 +0x15d:  mov    $0x0,%eax
0850b8f6 +0x162:  jmp    0850b8fd <+0x169>
0850b8f8 +0x164:  mov    $0x1,%eax
0850b8fd +0x169:  add    $0x24,%esp
0850b900 +0x16c:  pop    %ebx
0850b901 +0x16d:  pop    %ebp
0850b902 +0x16e:  ret
0850b903 +0x16f:  nop
```

## 反编译 C

```c
// CCargo::delete_item @ 0x850b794

/* CCargo::delete_item(int, int, eItemDelReason) */

undefined4 __thiscall CCargo::delete_item(CCargo *this,int param_1,int param_2,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = IsOperatorable(this,param_1);
  if (cVar2 == '\x01') {
    if (*(int *)(*(int *)(this + 4) + param_1 * 0x3d + 2) == 0) {
      uVar3 = 0;
    }
    else if (param_2 < 1) {
      uVar3 = 0;
    }
    else {
      this[0x10] = (CCargo)0x0;
      cVar2 = Inven_Item::isEquipableItemType((Inven_Item *)(*(int *)(this + 4) + param_1 * 0x3d));
      if (cVar2 == '\0') {
        if (*(int *)(*(int *)(this + 4) + param_1 * 0x3d + 7) == param_2) {
          _ResetSlot(this,param_1,param_4);
        }
        else {
          iVar1 = *(int *)(*(int *)(this + 4) + param_1 * 0x3d + 7);
          if (iVar1 == param_2 || iVar1 - param_2 < 0) {
            return 0;
          }
          *(int *)(*(int *)(this + 4) + param_1 * 0x3d + 7) =
               *(int *)(*(int *)(this + 4) + param_1 * 0x3d + 7) - param_2;
          cUserHistoryLog::ItemDelCargo
                    ((cUserHistoryLog *)(*(int *)this + 0x79700),
                     *(undefined4 *)(*(int *)(this + 4) + param_1 * 0x3d + 2),param_2,
                     *(undefined4 *)(*(int *)(this + 4) + param_1 * 0x3d + 7),param_4);
        }
      }
      else {
        _ResetSlot(this,param_1,param_4);
      }
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
