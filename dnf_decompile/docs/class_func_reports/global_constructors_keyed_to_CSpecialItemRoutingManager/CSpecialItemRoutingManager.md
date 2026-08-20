# CSpecialItemRoutingManager

`_GLOBAL__I__ZN26CSpecialItemRoutingManagerC2Ev`

`global constructors keyed to CSpecialItemRoutingManager::CSpecialItemRoutingManager()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CSpecialItemRoutingManager` | `0x0860b51d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b51d  _GLOBAL__I__ZN26CSpecialItemRoutingManagerC2Ev
#           global constructors keyed to CSpecialItemRoutingManager::CSpecialItemRoutingManager()
# range [0x0860b51d, 0x0860b64b]
0860b51d +0x000:  push   %ebp
0860b51e +0x001:  mov    %esp,%ebp
0860b520 +0x003:  sub    $0x18,%esp
0860b523 +0x006:  movl   $0xffff,0x4(%esp)
0860b52b +0x00e:  movl   $0x1,(%esp)
0860b532 +0x015:  call   0860b4dd <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0860b537 +0x01a:  leave
0860b538 +0x01b:  ret
0860b539 +0x01c:  nop
0860b53a +0x01d:  push   %ebp
0860b53b +0x01e:  mov    %esp,%ebp
0860b53d +0x020:  mov    0x8(%ebp),%eax
0860b540 +0x023:  mov    0x6(%eax),%eax
0860b543 +0x026:  pop    %ebp
0860b544 +0x027:  ret
0860b545 +0x028:  nop
0860b546 +0x029:  push   %ebp
0860b547 +0x02a:  mov    %esp,%ebp
0860b549 +0x02c:  mov    0x8(%ebp),%eax
0860b54c +0x02f:  add    $0x4,%eax
0860b54f +0x032:  pop    %ebp
0860b550 +0x033:  ret
0860b551 +0x034:  nop
0860b552 +0x035:  push   %ebp
0860b553 +0x036:  mov    %esp,%ebp
0860b555 +0x038:  mov    0x8(%ebp),%eax
0860b558 +0x03b:  mov    0x44(%eax),%eax
0860b55b +0x03e:  pop    %ebp
0860b55c +0x03f:  ret
0860b55d +0x040:  nop
0860b55e +0x041:  push   %ebp
0860b55f +0x042:  mov    %esp,%ebp
0860b561 +0x044:  sub    $0x4,%esp
0860b564 +0x047:  mov    0xc(%ebp),%eax
0860b567 +0x04a:  mov    %al,-0x4(%ebp)
0860b56a +0x04d:  movsbl -0x4(%ebp),%edx
0860b56e +0x051:  mov    0x8(%ebp),%eax
0860b571 +0x054:  mov    %edx,(%eax)
0860b573 +0x056:  leave
0860b574 +0x057:  ret
0860b575 +0x058:  nop
0860b576 +0x059:  push   %ebp
0860b577 +0x05a:  mov    %esp,%ebp
0860b579 +0x05c:  sub    $0x18,%esp
0860b57c +0x05f:  mov    0x8(%ebp),%eax
0860b57f +0x062:  lea    0x4(%eax),%edx
0860b582 +0x065:  mov    0xc(%ebp),%eax
0860b585 +0x068:  mov    %eax,0x4(%esp)
0860b589 +0x06c:  mov    %edx,(%esp)
0860b58c +0x06f:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0860b591 +0x074:  mov    0x8(%ebp),%eax
0860b594 +0x077:  mov    0x10(%ebp),%edx
0860b597 +0x07a:  mov    %edx,0x44(%eax)
0860b59a +0x07d:  leave
0860b59b +0x07e:  ret
0860b59c +0x07f:  push   %ebp
0860b59d +0x080:  mov    %esp,%ebp
0860b59f +0x082:  sub    $0x18,%esp
0860b5a2 +0x085:  mov    0x8(%ebp),%eax
0860b5a5 +0x088:  mov    %eax,(%esp)
0860b5a8 +0x08b:  call   0814575a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1dd>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1dd
0860b5ad +0x090:  cmp    $0x1,%al
0860b5af +0x092:  setne  %al
0860b5b2 +0x095:  test   %al,%al
0860b5b4 +0x097:  je     0860b5c9 <+0xac>
0860b5b6 +0x099:  mov    0x8(%ebp),%eax
0860b5b9 +0x09c:  movl   $0x1,0x4(%esp)
0860b5c1 +0x0a4:  mov    %eax,(%esp)
0860b5c4 +0x0a7:  call   0860b55e <+0x41>
0860b5c9 +0x0ac:  leave
0860b5ca +0x0ad:  ret
0860b5cb +0x0ae:  nop
0860b5cc +0x0af:  push   %ebp
0860b5cd +0x0b0:  mov    %esp,%ebp
0860b5cf +0x0b2:  sub    $0x18,%esp
0860b5d2 +0x0b5:  mov    0x8(%ebp),%eax
0860b5d5 +0x0b8:  mov    0x10(%ebp),%edx
0860b5d8 +0x0bb:  mov    %edx,0x8(%esp)
0860b5dc +0x0bf:  mov    0xc(%ebp),%edx
0860b5df +0x0c2:  mov    %edx,0x4(%esp)
0860b5e3 +0x0c6:  mov    %eax,(%esp)
0860b5e6 +0x0c9:  call   0860b576 <+0x59>
0860b5eb +0x0ce:  leave
0860b5ec +0x0cf:  ret
0860b5ed +0x0d0:  nop
0860b5ee +0x0d1:  push   %ebp
0860b5ef +0x0d2:  mov    %esp,%ebp
0860b5f1 +0x0d4:  sub    $0x18,%esp
0860b5f4 +0x0d7:  mov    0x8(%ebp),%eax
0860b5f7 +0x0da:  mov    %eax,(%esp)
0860b5fa +0x0dd:  call   0860b53a <+0x1d>
0860b5ff +0x0e2:  leave
0860b600 +0x0e3:  ret
0860b601 +0x0e4:  nop
0860b602 +0x0e5:  push   %ebp
0860b603 +0x0e6:  mov    %esp,%ebp
0860b605 +0x0e8:  sub    $0x18,%esp
0860b608 +0x0eb:  mov    0x8(%ebp),%eax
0860b60b +0x0ee:  mov    %eax,(%esp)
0860b60e +0x0f1:  call   0860b546 <+0x29>
0860b613 +0x0f6:  leave
0860b614 +0x0f7:  ret
0860b615 +0x0f8:  nop
0860b616 +0x0f9:  push   %ebp
0860b617 +0x0fa:  mov    %esp,%ebp
0860b619 +0x0fc:  sub    $0x18,%esp
0860b61c +0x0ff:  mov    0x8(%ebp),%eax
0860b61f +0x102:  mov    %eax,(%esp)
0860b622 +0x105:  call   0860b552 <+0x35>
0860b627 +0x10a:  leave
0860b628 +0x10b:  ret
0860b629 +0x10c:  nop
0860b62a +0x10d:  push   %ebp
0860b62b +0x10e:  mov    %esp,%ebp
0860b62d +0x110:  sub    $0x18,%esp
0860b630 +0x113:  mov    0x8(%ebp),%eax
0860b633 +0x116:  lea    0xb24(%eax),%edx
0860b639 +0x11c:  mov    0xc(%ebp),%eax
0860b63c +0x11f:  mov    %eax,0x4(%esp)
0860b640 +0x123:  mov    %edx,(%esp)
0860b643 +0x126:  call   0830daee <_ZN13CBattle_Field11pickup_itemEi>  ; CBattle_Field::pickup_item(int)
0860b648 +0x12b:  leave
0860b649 +0x12c:  ret
0860b64a +0x12d:  nop
0860b64b +0x12e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x860b51d

/* CSpecialItemRoutingManager::CSpecialItemRoutingManager() */

void CSpecialItemRoutingManager::_GLOBAL__I_CSpecialItemRoutingManager(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
