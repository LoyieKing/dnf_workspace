# verifyStackableItemProcess

`_ZN5CUser26verifyStackableItemProcessEN15StackableAction4TypeEPK5CItem`

`CUser::verifyStackableItemProcess(StackableAction::Type, CItem const*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f60e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f60e  _ZN5CUser26verifyStackableItemProcessEN15StackableAction4TypeEPK5CItem
#           CUser::verifyStackableItemProcess(StackableAction::Type, CItem const*)
# range [0x0868f60e, 0x0868f699]
0868f60e +0x00:  push   %ebp
0868f60f +0x01:  mov    %esp,%ebp
0868f611 +0x03:  sub    $0x18,%esp
0868f614 +0x06:  cmpl   $0x0,0x10(%ebp)
0868f618 +0x0a:  jne    0868f621 <+0x13>
0868f61a +0x0c:  mov    $0x0,%eax
0868f61f +0x11:  jmp    0868f698 <+0x8a>
0868f621 +0x13:  mov    0x10(%ebp),%eax
0868f624 +0x16:  mov    %eax,(%esp)
0868f627 +0x19:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0868f62c +0x1e:  xor    $0x1,%eax
0868f62f +0x21:  test   %al,%al
0868f631 +0x23:  je     0868f63a <+0x2c>
0868f633 +0x25:  mov    $0x0,%eax
0868f638 +0x2a:  jmp    0868f698 <+0x8a>
0868f63a +0x2c:  mov    0x10(%ebp),%eax
0868f63d +0x2f:  mov    0xc(%ebp),%edx
0868f640 +0x32:  mov    %edx,0x4(%esp)
0868f644 +0x36:  mov    %eax,(%esp)
0868f647 +0x39:  call   0822ca58 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2102>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2102
0868f64c +0x3e:  xor    $0x1,%eax
0868f64f +0x41:  test   %al,%al
0868f651 +0x43:  je     0868f65a <+0x4c>
0868f653 +0x45:  mov    $0x0,%eax
0868f658 +0x4a:  jmp    0868f698 <+0x8a>
0868f65a +0x4c:  mov    0x10(%ebp),%eax
0868f65d +0x4f:  mov    0x8(%ebp),%edx
0868f660 +0x52:  mov    %edx,0x4(%esp)
0868f664 +0x56:  mov    %eax,(%esp)
0868f667 +0x59:  call   0850e9f4 <_ZN14CStackableItem17verifyUsablePlaceEP5CUser>  ; CStackableItem::verifyUsablePlace(CUser*)
0868f66c +0x5e:  xor    $0x1,%eax
0868f66f +0x61:  test   %al,%al
0868f671 +0x63:  je     0868f67a <+0x6c>
0868f673 +0x65:  mov    $0x0,%eax
0868f678 +0x6a:  jmp    0868f698 <+0x8a>
0868f67a +0x6c:  mov    0x10(%ebp),%eax
0868f67d +0x6f:  mov    %eax,(%esp)
0868f680 +0x72:  call   0850e8de <_ZN14CStackableItem22verifyUsableServerTypeEv>  ; CStackableItem::verifyUsableServerType()
0868f685 +0x77:  xor    $0x1,%eax
0868f688 +0x7a:  test   %al,%al
0868f68a +0x7c:  je     0868f693 <+0x85>
0868f68c +0x7e:  mov    $0x0,%eax
0868f691 +0x83:  jmp    0868f698 <+0x8a>
0868f693 +0x85:  mov    $0x1,%eax
0868f698 +0x8a:  leave
0868f699 +0x8b:  ret
```

## 反编译 C

```c
// CUser::verifyStackableItemProcess @ 0x868f60e

/* CUser::verifyStackableItemProcess(StackableAction::Type, CItem const*) */

undefined4 __thiscall
CUser::verifyStackableItemProcess(CUser *this,undefined4 param_2,CStackableItem *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_3 == (CStackableItem *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CItem::is_stackable((CItem *)param_3);
    if (cVar1 == '\x01') {
      cVar1 = CStackableItem::verifyStackableAction(param_3,param_2);
      if (cVar1 == '\x01') {
        cVar1 = CStackableItem::verifyUsablePlace(param_3,this);
        if (cVar1 == '\x01') {
          cVar1 = CStackableItem::verifyUsableServerType();
          if (cVar1 == '\x01') {
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
