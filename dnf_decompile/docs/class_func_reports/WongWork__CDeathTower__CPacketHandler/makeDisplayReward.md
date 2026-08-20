# makeDisplayReward

`_ZN8WongWork11CDeathTower14CPacketHandler17makeDisplayRewardEiiPK10Inven_ItemiS4_iS4_iS4_`

`WongWork::CDeathTower::CPacketHandler::makeDisplayReward(int, int, Inven_Item const*, int, Inven_Item const*, int, Inven_Item const*, int, Inven_Item const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPacketHandler` | `0x084602c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084602c4  _ZN8WongWork11CDeathTower14CPacketHandler17makeDisplayRewardEiiPK10Inven_ItemiS4_iS4_iS4_
#           WongWork::CDeathTower::CPacketHandler::makeDisplayReward(int, int, Inven_Item const*, int, Inven_Item const*, int, Inven_Item const*, int, Inven_Item const*)
# range [0x084602c4, 0x084604af]
084602c4 +0x000:  push   %ebp
084602c5 +0x001:  mov    %esp,%ebp
084602c7 +0x003:  sub    $0x28,%esp
084602ca +0x006:  mov    0x8(%ebp),%eax
084602cd +0x009:  movl   $0x91,0x8(%esp)
084602d5 +0x011:  movl   $0x0,0x4(%esp)
084602dd +0x019:  mov    %eax,(%esp)
084602e0 +0x01c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084602e5 +0x021:  mov    0x8(%ebp),%eax
084602e8 +0x024:  mov    0xc(%ebp),%edx
084602eb +0x027:  mov    %edx,0x4(%esp)
084602ef +0x02b:  mov    %eax,(%esp)
084602f2 +0x02e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084602f7 +0x033:  mov    0x8(%ebp),%eax
084602fa +0x036:  mov    0x10(%ebp),%edx
084602fd +0x039:  mov    %edx,0x4(%esp)
08460301 +0x03d:  mov    %eax,(%esp)
08460304 +0x040:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08460309 +0x045:  movl   $0x0,-0x18(%ebp)
08460310 +0x04c:  jmp    08460353 <+0x8f>
08460312 +0x04e:  mov    -0x18(%ebp),%eax
08460315 +0x051:  imul   $0x3d,%eax,%eax
08460318 +0x054:  add    0x14(%ebp),%eax
0846031b +0x057:  mov    0x2(%eax),%eax
0846031e +0x05a:  mov    %eax,%edx
08460320 +0x05c:  mov    0x8(%ebp),%eax
08460323 +0x05f:  mov    %edx,0x4(%esp)
08460327 +0x063:  mov    %eax,(%esp)
0846032a +0x066:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0846032f +0x06b:  mov    -0x18(%ebp),%eax
08460332 +0x06e:  imul   $0x3d,%eax,%eax
08460335 +0x071:  add    0x14(%ebp),%eax
08460338 +0x074:  mov    %eax,(%esp)
0846033b +0x077:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08460340 +0x07c:  mov    0x8(%ebp),%edx
08460343 +0x07f:  mov    %eax,0x4(%esp)
08460347 +0x083:  mov    %edx,(%esp)
0846034a +0x086:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0846034f +0x08b:  addl   $0x1,-0x18(%ebp)
08460353 +0x08f:  mov    -0x18(%ebp),%eax
08460356 +0x092:  cmp    0x10(%ebp),%eax
08460359 +0x095:  setl   %al
0846035c +0x098:  test   %al,%al
0846035e +0x09a:  jne    08460312 <+0x4e>
08460360 +0x09c:  mov    0x8(%ebp),%eax
08460363 +0x09f:  mov    0x18(%ebp),%edx
08460366 +0x0a2:  mov    %edx,0x4(%esp)
0846036a +0x0a6:  mov    %eax,(%esp)
0846036d +0x0a9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08460372 +0x0ae:  movl   $0x0,-0x14(%ebp)
08460379 +0x0b5:  jmp    084603bc <+0xf8>
0846037b +0x0b7:  mov    -0x14(%ebp),%eax
0846037e +0x0ba:  imul   $0x3d,%eax,%eax
08460381 +0x0bd:  add    0x1c(%ebp),%eax
08460384 +0x0c0:  mov    0x2(%eax),%eax
08460387 +0x0c3:  mov    %eax,%edx
08460389 +0x0c5:  mov    0x8(%ebp),%eax
0846038c +0x0c8:  mov    %edx,0x4(%esp)
08460390 +0x0cc:  mov    %eax,(%esp)
08460393 +0x0cf:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08460398 +0x0d4:  mov    -0x14(%ebp),%eax
0846039b +0x0d7:  imul   $0x3d,%eax,%eax
0846039e +0x0da:  add    0x1c(%ebp),%eax
084603a1 +0x0dd:  mov    %eax,(%esp)
084603a4 +0x0e0:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
084603a9 +0x0e5:  mov    0x8(%ebp),%edx
084603ac +0x0e8:  mov    %eax,0x4(%esp)
084603b0 +0x0ec:  mov    %edx,(%esp)
084603b3 +0x0ef:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084603b8 +0x0f4:  addl   $0x1,-0x14(%ebp)
084603bc +0x0f8:  mov    -0x14(%ebp),%eax
084603bf +0x0fb:  cmp    0x18(%ebp),%eax
084603c2 +0x0fe:  setl   %al
084603c5 +0x101:  test   %al,%al
084603c7 +0x103:  jne    0846037b <+0xb7>
084603c9 +0x105:  mov    0x8(%ebp),%eax
084603cc +0x108:  mov    0x20(%ebp),%edx
084603cf +0x10b:  mov    %edx,0x4(%esp)
084603d3 +0x10f:  mov    %eax,(%esp)
084603d6 +0x112:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084603db +0x117:  movl   $0x0,-0x10(%ebp)
084603e2 +0x11e:  jmp    08460425 <+0x161>
084603e4 +0x120:  mov    -0x10(%ebp),%eax
084603e7 +0x123:  imul   $0x3d,%eax,%eax
084603ea +0x126:  add    0x24(%ebp),%eax
084603ed +0x129:  mov    0x2(%eax),%eax
084603f0 +0x12c:  mov    %eax,%edx
084603f2 +0x12e:  mov    0x8(%ebp),%eax
084603f5 +0x131:  mov    %edx,0x4(%esp)
084603f9 +0x135:  mov    %eax,(%esp)
084603fc +0x138:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08460401 +0x13d:  mov    -0x10(%ebp),%eax
08460404 +0x140:  imul   $0x3d,%eax,%eax
08460407 +0x143:  add    0x24(%ebp),%eax
0846040a +0x146:  mov    %eax,(%esp)
0846040d +0x149:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08460412 +0x14e:  mov    0x8(%ebp),%edx
08460415 +0x151:  mov    %eax,0x4(%esp)
08460419 +0x155:  mov    %edx,(%esp)
0846041c +0x158:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08460421 +0x15d:  addl   $0x1,-0x10(%ebp)
08460425 +0x161:  mov    -0x10(%ebp),%eax
08460428 +0x164:  cmp    0x20(%ebp),%eax
0846042b +0x167:  setl   %al
0846042e +0x16a:  test   %al,%al
08460430 +0x16c:  jne    084603e4 <+0x120>
08460432 +0x16e:  mov    0x8(%ebp),%eax
08460435 +0x171:  mov    0x28(%ebp),%edx
08460438 +0x174:  mov    %edx,0x4(%esp)
0846043c +0x178:  mov    %eax,(%esp)
0846043f +0x17b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08460444 +0x180:  movl   $0x0,-0xc(%ebp)
0846044b +0x187:  jmp    0846048e <+0x1ca>
0846044d +0x189:  mov    -0xc(%ebp),%eax
08460450 +0x18c:  imul   $0x3d,%eax,%eax
08460453 +0x18f:  add    0x2c(%ebp),%eax
08460456 +0x192:  mov    0x2(%eax),%eax
08460459 +0x195:  mov    %eax,%edx
0846045b +0x197:  mov    0x8(%ebp),%eax
0846045e +0x19a:  mov    %edx,0x4(%esp)
08460462 +0x19e:  mov    %eax,(%esp)
08460465 +0x1a1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0846046a +0x1a6:  mov    -0xc(%ebp),%eax
0846046d +0x1a9:  imul   $0x3d,%eax,%eax
08460470 +0x1ac:  add    0x2c(%ebp),%eax
08460473 +0x1af:  mov    %eax,(%esp)
08460476 +0x1b2:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0846047b +0x1b7:  mov    0x8(%ebp),%edx
0846047e +0x1ba:  mov    %eax,0x4(%esp)
08460482 +0x1be:  mov    %edx,(%esp)
08460485 +0x1c1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0846048a +0x1c6:  addl   $0x1,-0xc(%ebp)
0846048e +0x1ca:  mov    -0xc(%ebp),%eax
08460491 +0x1cd:  cmp    0x28(%ebp),%eax
08460494 +0x1d0:  setl   %al
08460497 +0x1d3:  test   %al,%al
08460499 +0x1d5:  jne    0846044d <+0x189>
0846049b +0x1d7:  mov    0x8(%ebp),%eax
0846049e +0x1da:  movl   $0x1,0x4(%esp)
084604a6 +0x1e2:  mov    %eax,(%esp)
084604a9 +0x1e5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084604ae +0x1ea:  leave
084604af +0x1eb:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CPacketHandler::makeDisplayReward @ 0x84602c4

/* WongWork::CDeathTower::CPacketHandler::makeDisplayReward(int, int, Inven_Item const*, int,
   Inven_Item const*, int, Inven_Item const*, int, Inven_Item const*) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeDisplayReward
          (CPacketHandler *this,int param_1,int param_2,Inven_Item *param_3,int param_4,
          Inven_Item *param_5,int param_6,Inven_Item *param_7,int param_8,Inven_Item *param_9)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0x91);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_2);
  for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,*(int *)(param_3 + local_1c * 0x3d + 2));
    iVar1 = Inven_Item::get_add_info(param_3 + local_1c * 0x3d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,iVar1);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_4);
  for (local_18 = 0; local_18 < param_4; local_18 = local_18 + 1) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,*(int *)(param_5 + local_18 * 0x3d + 2));
    iVar1 = Inven_Item::get_add_info(param_5 + local_18 * 0x3d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,iVar1);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_6);
  for (local_14 = 0; local_14 < param_6; local_14 = local_14 + 1) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,*(int *)(param_7 + local_14 * 0x3d + 2));
    iVar1 = Inven_Item::get_add_info(param_7 + local_14 * 0x3d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,iVar1);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,param_8);
  for (local_10 = 0; local_10 < param_8; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,*(int *)(param_9 + local_10 * 0x3d + 2));
    iVar1 = Inven_Item::get_add_info(param_9 + local_10 * 0x3d);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)this,iVar1);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}
```
