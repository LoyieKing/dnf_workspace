# reset

`_GLOBAL__I__ZN9UserQuest5resetEv`

`global constructors keyed to UserQuest::reset()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to UserQuest` | `0x086ad54f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ad54f  _GLOBAL__I__ZN9UserQuest5resetEv
#           global constructors keyed to UserQuest::reset()
# range [0x086ad54f, 0x086ad80b]
086ad54f +0x000:  push   %ebp
086ad550 +0x001:  mov    %esp,%ebp
086ad552 +0x003:  sub    $0x18,%esp
086ad555 +0x006:  movl   $0xffff,0x4(%esp)
086ad55d +0x00e:  movl   $0x1,(%esp)
086ad564 +0x015:  call   086ad50f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
086ad569 +0x01a:  leave
086ad56a +0x01b:  ret
086ad56b +0x01c:  nop
086ad56c +0x01d:  push   %ebp
086ad56d +0x01e:  mov    %esp,%ebp
086ad56f +0x020:  mov    0x8(%ebp),%eax
086ad572 +0x023:  movl   $0x0,(%eax)
086ad578 +0x029:  movl   $0x0,0x4(%eax)
086ad57f +0x030:  mov    0xc(%ebp),%eax
086ad582 +0x033:  mov    (%eax),%eax
086ad584 +0x035:  and    $0x1ff,%ax
086ad588 +0x039:  and    $0x1ff,%ax
086ad58c +0x03d:  and    $0x1ff,%ax
086ad590 +0x041:  mov    0x8(%ebp),%edx
086ad593 +0x044:  mov    %eax,%ecx
086ad595 +0x046:  and    $0x1ff,%cx
086ad59a +0x04b:  movzwl (%edx),%eax
086ad59d +0x04e:  and    $0xfe00,%ax
086ad5a1 +0x052:  or     %ecx,%eax
086ad5a3 +0x054:  mov    %ax,(%edx)
086ad5a6 +0x057:  mov    0xc(%ebp),%eax
086ad5a9 +0x05a:  mov    (%eax),%eax
086ad5ab +0x05c:  and    $0x3fe00,%eax
086ad5b0 +0x061:  sar    $0x9,%eax
086ad5b3 +0x064:  mov    %eax,%edx
086ad5b5 +0x066:  and    $0x1ff,%dx
086ad5ba +0x06b:  mov    0x8(%ebp),%eax
086ad5bd +0x06e:  mov    %edx,%ecx
086ad5bf +0x070:  and    $0x1ff,%cx
086ad5c4 +0x075:  movzwl 0x2(%eax),%edx
086ad5c8 +0x079:  and    $0xfe00,%dx
086ad5cd +0x07e:  or     %ecx,%edx
086ad5cf +0x080:  mov    %dx,0x2(%eax)
086ad5d3 +0x084:  mov    0xc(%ebp),%eax
086ad5d6 +0x087:  mov    (%eax),%eax
086ad5d8 +0x089:  and    $0x7fc0000,%eax
086ad5dd +0x08e:  sar    $0x12,%eax
086ad5e0 +0x091:  mov    %eax,%edx
086ad5e2 +0x093:  and    $0x1ff,%dx
086ad5e7 +0x098:  mov    0x8(%ebp),%eax
086ad5ea +0x09b:  mov    %edx,%ecx
086ad5ec +0x09d:  and    $0x1ff,%cx
086ad5f1 +0x0a2:  movzwl 0x4(%eax),%edx
086ad5f5 +0x0a6:  and    $0xfe00,%dx
086ad5fa +0x0ab:  or     %ecx,%edx
086ad5fc +0x0ad:  mov    %dx,0x4(%eax)
086ad600 +0x0b1:  pop    %ebp
086ad601 +0x0b2:  ret
086ad602 +0x0b3:  push   %ebp
086ad603 +0x0b4:  mov    %esp,%ebp
086ad605 +0x0b6:  sub    $0x4,%esp
086ad608 +0x0b9:  mov    0xc(%ebp),%eax
086ad60b +0x0bc:  mov    %al,-0x4(%ebp)
086ad60e +0x0bf:  movsbl -0x4(%ebp),%eax
086ad612 +0x0c3:  and    $0x10,%eax
086ad615 +0x0c6:  test   %eax,%eax
086ad617 +0x0c8:  je     086ad654 <+0x105>
086ad619 +0x0ca:  mov    0x8(%ebp),%eax
086ad61c +0x0cd:  movzwl (%eax),%eax
086ad61f +0x0d0:  and    $0x1ff,%ax
086ad623 +0x0d4:  movzwl %ax,%eax
086ad626 +0x0d7:  cmp    $0x3fe,%eax
086ad62b +0x0dc:  jg     086ad654 <+0x105>
086ad62d +0x0de:  mov    0x8(%ebp),%eax
086ad630 +0x0e1:  movzwl (%eax),%eax
086ad633 +0x0e4:  and    $0x1ff,%ax
086ad637 +0x0e8:  add    $0x1,%eax
086ad63a +0x0eb:  and    $0x1ff,%ax
086ad63e +0x0ef:  mov    0x8(%ebp),%edx
086ad641 +0x0f2:  mov    %eax,%ecx
086ad643 +0x0f4:  and    $0x1ff,%cx
086ad648 +0x0f9:  movzwl (%edx),%eax
086ad64b +0x0fc:  and    $0xfe00,%ax
086ad64f +0x100:  or     %ecx,%eax
086ad651 +0x102:  mov    %ax,(%edx)
086ad654 +0x105:  movsbl -0x4(%ebp),%eax
086ad658 +0x109:  and    $0x20,%eax
086ad65b +0x10c:  test   %eax,%eax
086ad65d +0x10e:  je     086ad69e <+0x14f>
086ad65f +0x110:  mov    0x8(%ebp),%eax
086ad662 +0x113:  movzwl 0x2(%eax),%eax
086ad666 +0x117:  and    $0x1ff,%ax
086ad66a +0x11b:  movzwl %ax,%eax
086ad66d +0x11e:  cmp    $0x3fe,%eax
086ad672 +0x123:  jg     086ad69e <+0x14f>
086ad674 +0x125:  mov    0x8(%ebp),%eax
086ad677 +0x128:  movzwl 0x2(%eax),%eax
086ad67b +0x12c:  and    $0x1ff,%ax
086ad67f +0x130:  add    $0x1,%eax
086ad682 +0x133:  and    $0x1ff,%ax
086ad686 +0x137:  mov    0x8(%ebp),%edx
086ad689 +0x13a:  mov    %eax,%ecx
086ad68b +0x13c:  and    $0x1ff,%cx
086ad690 +0x141:  movzwl 0x2(%edx),%eax
086ad694 +0x145:  and    $0xfe00,%ax
086ad698 +0x149:  or     %ecx,%eax
086ad69a +0x14b:  mov    %ax,0x2(%edx)
086ad69e +0x14f:  movsbl -0x4(%ebp),%eax
086ad6a2 +0x153:  and    $0x40,%eax
086ad6a5 +0x156:  test   %eax,%eax
086ad6a7 +0x158:  je     086ad6e8 <+0x199>
086ad6a9 +0x15a:  mov    0x8(%ebp),%eax
086ad6ac +0x15d:  movzwl 0x4(%eax),%eax
086ad6b0 +0x161:  and    $0x1ff,%ax
086ad6b4 +0x165:  movzwl %ax,%eax
086ad6b7 +0x168:  cmp    $0x3fe,%eax
086ad6bc +0x16d:  jg     086ad6e8 <+0x199>
086ad6be +0x16f:  mov    0x8(%ebp),%eax
086ad6c1 +0x172:  movzwl 0x4(%eax),%eax
086ad6c5 +0x176:  and    $0x1ff,%ax
086ad6c9 +0x17a:  add    $0x1,%eax
086ad6cc +0x17d:  and    $0x1ff,%ax
086ad6d0 +0x181:  mov    0x8(%ebp),%edx
086ad6d3 +0x184:  mov    %eax,%ecx
086ad6d5 +0x186:  and    $0x1ff,%cx
086ad6da +0x18b:  movzwl 0x4(%edx),%eax
086ad6de +0x18f:  and    $0xfe00,%ax
086ad6e2 +0x193:  or     %ecx,%eax
086ad6e4 +0x195:  mov    %ax,0x4(%edx)
086ad6e8 +0x199:  leave
086ad6e9 +0x19a:  ret
086ad6ea +0x19b:  push   %ebp
086ad6eb +0x19c:  mov    %esp,%ebp
086ad6ed +0x19e:  sub    $0x4,%esp
086ad6f0 +0x1a1:  mov    0xc(%ebp),%eax
086ad6f3 +0x1a4:  mov    %al,-0x4(%ebp)
086ad6f6 +0x1a7:  cmpb   $0x0,-0x4(%ebp)
086ad6fa +0x1ab:  jne    086ad70e <+0x1bf>
086ad6fc +0x1ad:  mov    0x8(%ebp),%eax
086ad6ff +0x1b0:  mov    (%eax),%eax
086ad701 +0x1b2:  lea    -0x1(%eax),%edx
086ad704 +0x1b5:  mov    0x8(%ebp),%eax
086ad707 +0x1b8:  mov    %edx,(%eax)
086ad709 +0x1ba:  jmp    086ad7e2 <+0x293>
086ad70e +0x1bf:  movsbl -0x4(%ebp),%eax
086ad712 +0x1c3:  and    $0x10,%eax
086ad715 +0x1c6:  test   %eax,%eax
086ad717 +0x1c8:  je     086ad752 <+0x203>
086ad719 +0x1ca:  mov    0x8(%ebp),%eax
086ad71c +0x1cd:  movzwl (%eax),%eax
086ad71f +0x1d0:  and    $0x1ff,%ax
086ad723 +0x1d4:  movzwl %ax,%eax
086ad726 +0x1d7:  test   %eax,%eax
086ad728 +0x1d9:  jle    086ad752 <+0x203>
086ad72a +0x1db:  mov    0x8(%ebp),%eax
086ad72d +0x1de:  movzwl (%eax),%eax
086ad730 +0x1e1:  and    $0x1ff,%ax
086ad734 +0x1e5:  add    $0x1ff,%ax
086ad738 +0x1e9:  and    $0x1ff,%ax
086ad73c +0x1ed:  mov    0x8(%ebp),%edx
086ad73f +0x1f0:  mov    %eax,%ecx
086ad741 +0x1f2:  and    $0x1ff,%cx
086ad746 +0x1f7:  movzwl (%edx),%eax
086ad749 +0x1fa:  and    $0xfe00,%ax
086ad74d +0x1fe:  or     %ecx,%eax
086ad74f +0x200:  mov    %ax,(%edx)
086ad752 +0x203:  movsbl -0x4(%ebp),%eax
086ad756 +0x207:  and    $0x20,%eax
086ad759 +0x20a:  test   %eax,%eax
086ad75b +0x20c:  je     086ad79a <+0x24b>
086ad75d +0x20e:  mov    0x8(%ebp),%eax
086ad760 +0x211:  movzwl 0x2(%eax),%eax
086ad764 +0x215:  and    $0x1ff,%ax
086ad768 +0x219:  movzwl %ax,%eax
086ad76b +0x21c:  test   %eax,%eax
086ad76d +0x21e:  jle    086ad79a <+0x24b>
086ad76f +0x220:  mov    0x8(%ebp),%eax
086ad772 +0x223:  movzwl 0x2(%eax),%eax
086ad776 +0x227:  and    $0x1ff,%ax
086ad77a +0x22b:  add    $0x1ff,%ax
086ad77e +0x22f:  and    $0x1ff,%ax
086ad782 +0x233:  mov    0x8(%ebp),%edx
086ad785 +0x236:  mov    %eax,%ecx
086ad787 +0x238:  and    $0x1ff,%cx
086ad78c +0x23d:  movzwl 0x2(%edx),%eax
086ad790 +0x241:  and    $0xfe00,%ax
086ad794 +0x245:  or     %ecx,%eax
086ad796 +0x247:  mov    %ax,0x2(%edx)
086ad79a +0x24b:  movsbl -0x4(%ebp),%eax
086ad79e +0x24f:  and    $0x40,%eax
086ad7a1 +0x252:  test   %eax,%eax
086ad7a3 +0x254:  je     086ad7e2 <+0x293>
086ad7a5 +0x256:  mov    0x8(%ebp),%eax
086ad7a8 +0x259:  movzwl 0x4(%eax),%eax
086ad7ac +0x25d:  and    $0x1ff,%ax
086ad7b0 +0x261:  movzwl %ax,%eax
086ad7b3 +0x264:  test   %eax,%eax
086ad7b5 +0x266:  jle    086ad7e2 <+0x293>
086ad7b7 +0x268:  mov    0x8(%ebp),%eax
086ad7ba +0x26b:  movzwl 0x4(%eax),%eax
086ad7be +0x26f:  and    $0x1ff,%ax
086ad7c2 +0x273:  add    $0x1ff,%ax
086ad7c6 +0x277:  and    $0x1ff,%ax
086ad7ca +0x27b:  mov    0x8(%ebp),%edx
086ad7cd +0x27e:  mov    %eax,%ecx
086ad7cf +0x280:  and    $0x1ff,%cx
086ad7d4 +0x285:  movzwl 0x4(%edx),%eax
086ad7d8 +0x289:  and    $0xfe00,%ax
086ad7dc +0x28d:  or     %ecx,%eax
086ad7de +0x28f:  mov    %ax,0x4(%edx)
086ad7e2 +0x293:  leave
086ad7e3 +0x294:  ret
086ad7e4 +0x295:  push   %ebp
086ad7e5 +0x296:  mov    %esp,%ebp
086ad7e7 +0x298:  mov    0x8(%ebp),%eax
086ad7ea +0x29b:  mov    (%eax),%edx
086ad7ec +0x29d:  mov    0xc(%ebp),%eax
086ad7ef +0x2a0:  imul   $0x54,%eax,%eax
086ad7f2 +0x2a3:  lea    (%edx,%eax,1),%eax
086ad7f5 +0x2a6:  pop    %ebp
086ad7f6 +0x2a7:  ret
086ad7f7 +0x2a8:  nop
086ad7f8 +0x2a9:  push   %ebp
086ad7f9 +0x2aa:  mov    %esp,%ebp
086ad7fb +0x2ac:  mov    0x8(%ebp),%eax
086ad7fe +0x2af:  mov    (%eax),%eax
086ad800 +0x2b1:  mov    0xc(%ebp),%edx
086ad803 +0x2b4:  shl    $0x2,%edx
086ad806 +0x2b7:  add    %edx,%eax
086ad808 +0x2b9:  pop    %ebp
086ad809 +0x2ba:  ret
086ad80a +0x2bb:  nop
086ad80b +0x2bc:  nop
```

## 反编译 C

```c
// <global>::global @ 0x86ad54f

/* UserQuest::reset() */

void UserQuest::_GLOBAL__I_reset(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
