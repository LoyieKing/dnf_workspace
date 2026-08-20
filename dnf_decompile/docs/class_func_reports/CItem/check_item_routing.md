# check_item_routing

`_ZNK5CItem18check_item_routingEv`

`CItem::check_item_routing() const`

| 类 | 地址 |
|---|---|
| `CItem` | `0x0850d756` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850d756  _ZNK5CItem18check_item_routingEv
#           CItem::check_item_routing() const
# range [0x0850d756, 0x0850d77f]
0850d756 +0x00:  push   %ebp
0850d757 +0x01:  mov    %esp,%ebp
0850d759 +0x03:  sub    $0x18,%esp
0850d75c +0x06:  mov    0x8(%ebp),%eax
0850d75f +0x09:  mov    %eax,(%esp)
0850d762 +0x0c:  call   0846996a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x4d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x4d
0850d767 +0x11:  test   %al,%al
0850d769 +0x13:  je     0850d772 <+0x1c>
0850d76b +0x15:  mov    $0x1,%eax
0850d770 +0x1a:  jmp    0850d77d <+0x27>
0850d772 +0x1c:  mov    0x8(%ebp),%eax
0850d775 +0x1f:  mov    0x38(%eax),%eax
0850d778 +0x22:  test   %eax,%eax
0850d77a +0x24:  setg   %al
0850d77d +0x27:  leave
0850d77e +0x28:  ret
0850d77f +0x29:  nop
```

## 反编译 C

```c
// CItem::check_item_routing @ 0x850d756

/* CItem::check_item_routing() const */

undefined4 __thiscall CItem::check_item_routing(CItem *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = isEpicRoutingItem(this);
  if (cVar1 == '\0') {
    uVar2 = CONCAT31((int3)((uint)*(int *)(this + 0x38) >> 8),0 < *(int *)(this + 0x38));
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
