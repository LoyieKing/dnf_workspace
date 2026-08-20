# GetSlotItemType

`_ZNK10CInventory15GetSlotItemTypeEi`

`CInventory::GetSlotItemType(int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08500384` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08500384  _ZNK10CInventory15GetSlotItemTypeEi
#           CInventory::GetSlotItemType(int) const
# range [0x08500384, 0x085003bd]
08500384 +0x00:  push   %ebp
08500385 +0x01:  mov    %esp,%ebp
08500387 +0x03:  sub    $0x28,%esp
0850038a +0x06:  mov    0x8(%ebp),%eax
0850038d +0x09:  mov    0x18(%eax),%eax
08500390 +0x0c:  lea    -0xc(%ebp),%edx
08500393 +0x0f:  mov    %edx,0xc(%esp)
08500397 +0x13:  mov    %eax,0x8(%esp)
0850039b +0x17:  mov    0xc(%ebp),%eax
0850039e +0x1a:  mov    %eax,0x4(%esp)
085003a2 +0x1e:  movl   $&g_slotBoundChecker,(%esp)
085003a9 +0x25:  call   0850d1a0 <_GLOBAL__I_g_emptySlot+0xd5>  ; global constructors keyed to g_emptySlot+0xd5
085003ae +0x2a:  test   %al,%al
085003b0 +0x2c:  je     085003b7 <+0x33>
085003b2 +0x2e:  mov    -0xc(%ebp),%eax
085003b5 +0x31:  jmp    085003bc <+0x38>
085003b7 +0x33:  mov    $0xb,%eax
085003bc +0x38:  leave
085003bd +0x39:  ret
```

## 反编译 C

```c
// CInventory::GetSlotItemType @ 0x8500384

/* CInventory::GetSlotItemType(int) const */

undefined4 __thiscall CInventory::GetSlotItemType(CInventory *this,int param_1)

{
  char cVar1;
  undefined4 local_10 [3];
  
  cVar1 = CSlotBoundChecker::get_item_type
                    ((CSlotBoundChecker *)g_slotBoundChecker,param_1,*(int *)(this + 0x18),
                     (ITEM_TYPE *)local_10);
  if (cVar1 == '\0') {
    local_10[0] = 0xb;
  }
  return local_10[0];
}
```
