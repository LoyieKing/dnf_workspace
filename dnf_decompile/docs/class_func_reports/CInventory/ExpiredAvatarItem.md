# ExpiredAvatarItem

`_ZN10CInventory17ExpiredAvatarItemEP11PacketGuard`

`CInventory::ExpiredAvatarItem(PacketGuard*)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08509466` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08509466  _ZN10CInventory17ExpiredAvatarItemEP11PacketGuard
#           CInventory::ExpiredAvatarItem(PacketGuard*)
# range [0x08509466, 0x0850960f]
08509466 +0x000:  push   %ebp
08509467 +0x001:  mov    %esp,%ebp
08509469 +0x003:  push   %ebx
0850946a +0x004:  sub    $0x34,%esp
0850946d +0x007:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
08509472 +0x00c:  mov    %eax,-0x14(%ebp)
08509475 +0x00f:  movl   $0x0,-0x10(%ebp)
0850947c +0x016:  jmp    08509529 <+0xc3>
08509481 +0x01b:  mov    -0x10(%ebp),%eax
08509484 +0x01e:  mov    0x8(%ebp),%edx
08509487 +0x021:  imul   $0x3d,%eax,%eax
0850948a +0x024:  lea    (%edx,%eax,1),%eax
0850948d +0x027:  add    $0x10,%eax
08509490 +0x02a:  mov    0xe(%eax),%eax
08509493 +0x02d:  test   %eax,%eax
08509495 +0x02f:  je     08509524 <+0xbe>
0850949b +0x035:  mov    -0x10(%ebp),%eax
0850949e +0x038:  mov    0x8(%ebp),%edx
085094a1 +0x03b:  imul   $0x3d,%eax,%eax
085094a4 +0x03e:  lea    (%edx,%eax,1),%eax
085094a7 +0x041:  add    $0x10,%eax
085094aa +0x044:  mov    0x13(%eax),%eax
085094ad +0x047:  test   %eax,%eax
085094af +0x049:  je     08509525 <+0xbf>
085094b1 +0x04b:  mov    -0x10(%ebp),%eax
085094b4 +0x04e:  mov    0x8(%ebp),%edx
085094b7 +0x051:  imul   $0x3d,%eax,%eax
085094ba +0x054:  lea    (%edx,%eax,1),%eax
085094bd +0x057:  add    $0x10,%eax
085094c0 +0x05a:  mov    0x13(%eax),%eax
085094c3 +0x05d:  cmp    -0x14(%ebp),%eax
085094c6 +0x060:  jge    08509525 <+0xbf>
085094c8 +0x062:  mov    0x8(%ebp),%eax
085094cb +0x065:  mov    (%eax),%eax
085094cd +0x067:  movl   $0xffffffff,0x4(%esp)
085094d5 +0x06f:  mov    %eax,(%esp)
085094d8 +0x072:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085094dd +0x077:  movl   $0x0,0x14(%esp)
085094e5 +0x07f:  movl   $0x0,0x10(%esp)
085094ed +0x087:  mov    -0x10(%ebp),%edx
085094f0 +0x08a:  mov    %edx,0xc(%esp)
085094f4 +0x08e:  mov    %eax,0x8(%esp)
085094f8 +0x092:  movl   $0x33,0x4(%esp)
08509500 +0x09a:  mov    0x8(%ebp),%eax
08509503 +0x09d:  mov    %eax,(%esp)
08509506 +0x0a0:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
0850950b +0x0a5:  mov    -0x10(%ebp),%eax
0850950e +0x0a8:  imul   $0x3d,%eax,%eax
08509511 +0x0ab:  add    $0x10,%eax
08509514 +0x0ae:  add    0x8(%ebp),%eax
08509517 +0x0b1:  add    $0xc,%eax
0850951a +0x0b4:  mov    %eax,(%esp)
0850951d +0x0b7:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08509522 +0x0bc:  jmp    08509525 <+0xbf>
08509524 +0x0be:  nop
08509525 +0x0bf:  addl   $0x1,-0x10(%ebp)
08509529 +0x0c3:  cmpl   $0x9,-0x10(%ebp)
0850952d +0x0c7:  setle  %al
08509530 +0x0ca:  test   %al,%al
08509532 +0x0cc:  jne    08509481 <+0x1b>
08509538 +0x0d2:  movl   $0x0,-0xc(%ebp)
0850953f +0x0d9:  jmp    085095fb <+0x195>
08509544 +0x0de:  mov    0x8(%ebp),%eax
08509547 +0x0e1:  mov    0x654(%eax),%edx
0850954d +0x0e7:  mov    -0xc(%ebp),%eax
08509550 +0x0ea:  imul   $0x3d,%eax,%eax
08509553 +0x0ed:  lea    (%edx,%eax,1),%eax
08509556 +0x0f0:  mov    0x2(%eax),%eax
08509559 +0x0f3:  test   %eax,%eax
0850955b +0x0f5:  je     085095f6 <+0x190>
08509561 +0x0fb:  mov    0x8(%ebp),%eax
08509564 +0x0fe:  mov    0x654(%eax),%edx
0850956a +0x104:  mov    -0xc(%ebp),%eax
0850956d +0x107:  imul   $0x3d,%eax,%eax
08509570 +0x10a:  lea    (%edx,%eax,1),%eax
08509573 +0x10d:  mov    0x7(%eax),%eax
08509576 +0x110:  test   %eax,%eax
08509578 +0x112:  je     085095f7 <+0x191>
0850957a +0x114:  mov    0x8(%ebp),%eax
0850957d +0x117:  mov    0x654(%eax),%edx
08509583 +0x11d:  mov    -0xc(%ebp),%eax
08509586 +0x120:  imul   $0x3d,%eax,%eax
08509589 +0x123:  lea    (%edx,%eax,1),%eax
0850958c +0x126:  mov    0x7(%eax),%eax
0850958f +0x129:  cmp    -0x14(%ebp),%eax
08509592 +0x12c:  jge    085095f7 <+0x191>
08509594 +0x12e:  mov    -0xc(%ebp),%eax
08509597 +0x131:  lea    0xa(%eax),%ebx
0850959a +0x134:  mov    0x8(%ebp),%eax
0850959d +0x137:  mov    (%eax),%eax
0850959f +0x139:  movl   $0xffffffff,0x4(%esp)
085095a7 +0x141:  mov    %eax,(%esp)
085095aa +0x144:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
085095af +0x149:  movl   $0x0,0x14(%esp)
085095b7 +0x151:  movl   $0x0,0x10(%esp)
085095bf +0x159:  mov    %ebx,0xc(%esp)
085095c3 +0x15d:  mov    %eax,0x8(%esp)
085095c7 +0x161:  movl   $0x33,0x4(%esp)
085095cf +0x169:  mov    0x8(%ebp),%eax
085095d2 +0x16c:  mov    %eax,(%esp)
085095d5 +0x16f:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
085095da +0x174:  mov    0x8(%ebp),%eax
085095dd +0x177:  mov    0x654(%eax),%edx
085095e3 +0x17d:  mov    -0xc(%ebp),%eax
085095e6 +0x180:  imul   $0x3d,%eax,%eax
085095e9 +0x183:  lea    (%edx,%eax,1),%eax
085095ec +0x186:  mov    %eax,(%esp)
085095ef +0x189:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
085095f4 +0x18e:  jmp    085095f7 <+0x191>
085095f6 +0x190:  nop
085095f7 +0x191:  addl   $0x1,-0xc(%ebp)
085095fb +0x195:  cmpl   $0x68,-0xc(%ebp)
085095ff +0x199:  setle  %al
08509602 +0x19c:  test   %al,%al
08509604 +0x19e:  jne    08509544 <+0xde>
0850960a +0x1a4:  add    $0x34,%esp
0850960d +0x1a7:  pop    %ebx
0850960e +0x1a8:  pop    %ebp
0850960f +0x1a9:  ret
```

## 反编译 C

```c
// CInventory::ExpiredAvatarItem @ 0x8509466

/* CInventory::ExpiredAvatarItem(PacketGuard*) */

void CInventory::ExpiredAvatarItem(PacketGuard *param_1)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  
  iVar1 = OS_API::GetDateTimeTick();
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    if (((*(int *)(param_1 + local_14 * 0x3d + 0x1e) != 0) &&
        (*(int *)(param_1 + local_14 * 0x3d + 0x23) != 0)) &&
       (*(int *)(param_1 + local_14 * 0x3d + 0x23) < iVar1)) {
      iVar2 = CUser::get_charac_no(*(CUser **)param_1,-1);
      SendAvatarEvent((CInventory *)param_1,0x33,iVar2,local_14,0,0);
      Inven_Item::reset((Inven_Item *)(param_1 + local_14 * 0x3d + 0x1c));
    }
  }
  for (local_10 = 0; local_10 < 0x69; local_10 = local_10 + 1) {
    if (((*(int *)(*(int *)(param_1 + 0x654) + local_10 * 0x3d + 2) != 0) &&
        (*(int *)(*(int *)(param_1 + 0x654) + local_10 * 0x3d + 7) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x654) + local_10 * 0x3d + 7) < iVar1)) {
      iVar2 = CUser::get_charac_no(*(CUser **)param_1,-1);
      SendAvatarEvent((CInventory *)param_1,0x33,iVar2,local_10 + 10,0,0);
      Inven_Item::reset((Inven_Item *)(*(int *)(param_1 + 0x654) + local_10 * 0x3d));
    }
  }
  return;
}
```
