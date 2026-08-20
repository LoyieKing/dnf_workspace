# StartEndPos

`_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_`

`CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08501886` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08501886  _ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_
#           CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
# range [0x08501886, 0x085018d1]
08501886 +0x00:  push   %ebp
08501887 +0x01:  mov    %esp,%ebp
08501889 +0x03:  sub    $0x28,%esp
0850188c +0x06:  mov    0x8(%ebp),%eax
0850188f +0x09:  mov    0x18(%eax),%eax
08501892 +0x0c:  mov    0x14(%ebp),%edx
08501895 +0x0f:  mov    %edx,0x10(%esp)
08501899 +0x13:  mov    0x10(%ebp),%edx
0850189c +0x16:  mov    %edx,0xc(%esp)
085018a0 +0x1a:  mov    %eax,0x8(%esp)
085018a4 +0x1e:  mov    0xc(%ebp),%eax
085018a7 +0x21:  mov    %eax,0x4(%esp)
085018ab +0x25:  movl   $&g_slotBoundChecker,(%esp)
085018b2 +0x2c:  call   080f1096 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x118>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x118
085018b7 +0x31:  xor    $0x1,%eax
085018ba +0x34:  test   %al,%al
085018bc +0x36:  je     085018d0 <+0x4a>
085018be +0x38:  mov    0x10(%ebp),%eax
085018c1 +0x3b:  movl   $0x0,(%eax)
085018c7 +0x41:  mov    0x14(%ebp),%eax
085018ca +0x44:  movl   $0x0,(%eax)
085018d0 +0x4a:  leave
085018d1 +0x4b:  ret
```

## 反编译 C

```c
// CInventory::StartEndPos @ 0x8501886

/* CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const */

void __thiscall
CInventory::StartEndPos(CInventory *this,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = CSlotBoundChecker::get_slot_bound
                    ((CSlotBoundChecker *)g_slotBoundChecker,param_2,*(undefined4 *)(this + 0x18),
                     param_3,param_4);
  if (cVar1 != '\x01') {
    *param_3 = 0;
    *param_4 = 0;
  }
  return;
}
```
