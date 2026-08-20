# check_winner

`_ZN8PvP_Room12check_winnerEv`

`PvP_Room::check_winner()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d96ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d96ec  _ZN8PvP_Room12check_winnerEv
#           PvP_Room::check_winner()
# range [0x085d96ec, 0x085d9b0d]
085d96ec +0x000:  push   %ebp
085d96ed +0x001:  mov    %esp,%ebp
085d96ef +0x003:  push   %esi
085d96f0 +0x004:  push   %ebx
085d96f1 +0x005:  add    $0xffffff80,%esp
085d96f4 +0x008:  mov    0x8(%ebp),%eax
085d96f7 +0x00b:  movzbl 0xc0(%eax),%eax
085d96fe +0x012:  test   %al,%al
085d9700 +0x014:  je     085d970c <+0x20>
085d9702 +0x016:  mov    $0x0,%eax
085d9707 +0x01b:  jmp    085d9b06 <+0x41a>
085d970c +0x020:  mov    0x8(%ebp),%eax
085d970f +0x023:  mov    0x4(%eax),%eax
085d9712 +0x026:  cmp    $0x2,%eax
085d9715 +0x029:  je     085d9726 <+0x3a>
085d9717 +0x02b:  mov    0x8(%ebp),%eax
085d971a +0x02e:  mov    0x4(%eax),%eax
085d971d +0x031:  cmp    $0x3,%eax
085d9720 +0x034:  jne    085d98a5 <+0x1b9>
085d9726 +0x03a:  mov    0x8(%ebp),%eax
085d9729 +0x03d:  mov    %eax,(%esp)
085d972c +0x040:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d9731 +0x045:  movl   $0x0,-0x5c(%ebp)
085d9738 +0x04c:  movl   $0x0,-0x58(%ebp)
085d973f +0x053:  movl   $0x0,-0x54(%ebp)
085d9746 +0x05a:  movl   $0x0,-0x68(%ebp)
085d974d +0x061:  movl   $0x0,-0x64(%ebp)
085d9754 +0x068:  movl   $0x0,-0x60(%ebp)
085d975b +0x06f:  movl   $0x0,-0x28(%ebp)
085d9762 +0x076:  jmp    085d97d6 <+0xea>
085d9764 +0x078:  mov    -0x28(%ebp),%eax
085d9767 +0x07b:  mov    0x8(%ebp),%edx
085d976a +0x07e:  movzbl 0x5d0(%edx,%eax,1),%eax
085d9772 +0x086:  test   %al,%al
085d9774 +0x088:  je     085d97d2 <+0xe6>
085d9776 +0x08a:  mov    -0x28(%ebp),%eax
085d9779 +0x08d:  mov    0x8(%ebp),%edx
085d977c +0x090:  movzbl 0x5d0(%edx,%eax,1),%eax
085d9784 +0x098:  cmp    $0xfd,%al
085d9786 +0x09a:  ja     085d97d2 <+0xe6>
085d9788 +0x09c:  mov    -0x28(%ebp),%eax
085d978b +0x09f:  mov    0x8(%ebp),%edx
085d978e +0x0a2:  movzbl 0x5d0(%edx,%eax,1),%eax
085d9796 +0x0aa:  movzbl %al,%eax
085d9799 +0x0ad:  mov    -0x5c(%ebp,%eax,4),%edx
085d979d +0x0b1:  add    $0x1,%edx
085d97a0 +0x0b4:  mov    %edx,-0x5c(%ebp,%eax,4)
085d97a4 +0x0b8:  mov    -0x28(%ebp),%eax
085d97a7 +0x0bb:  mov    0x8(%ebp),%edx
085d97aa +0x0be:  movzbl 0x5c8(%edx,%eax,1),%eax
085d97b2 +0x0c6:  test   %al,%al
085d97b4 +0x0c8:  je     085d97d2 <+0xe6>
085d97b6 +0x0ca:  mov    -0x28(%ebp),%eax
085d97b9 +0x0cd:  mov    0x8(%ebp),%edx
085d97bc +0x0d0:  movzbl 0x5d0(%edx,%eax,1),%eax
085d97c4 +0x0d8:  movzbl %al,%eax
085d97c7 +0x0db:  mov    -0x68(%ebp,%eax,4),%edx
085d97cb +0x0df:  add    $0x1,%edx
085d97ce +0x0e2:  mov    %edx,-0x68(%ebp,%eax,4)
085d97d2 +0x0e6:  addl   $0x1,-0x28(%ebp)
085d97d6 +0x0ea:  cmpl   $0x7,-0x28(%ebp)
085d97da +0x0ee:  setle  %al
085d97dd +0x0f1:  test   %al,%al
085d97df +0x0f3:  jne    085d9764 <+0x78>
085d97e1 +0x0f5:  movl   $0x0,-0x30(%ebp)
085d97e8 +0x0fc:  movl   $0x0,-0x2c(%ebp)
085d97ef +0x103:  movl   $0x1,-0x24(%ebp)
085d97f6 +0x10a:  jmp    085d9811 <+0x125>
085d97f8 +0x10c:  mov    -0x24(%ebp),%eax
085d97fb +0x10f:  mov    -0x68(%ebp,%eax,4),%eax
085d97ff +0x113:  test   %eax,%eax
085d9801 +0x115:  jle    085d980d <+0x121>
085d9803 +0x117:  addl   $0x1,-0x30(%ebp)
085d9807 +0x11b:  mov    -0x24(%ebp),%eax
085d980a +0x11e:  mov    %eax,-0x2c(%ebp)
085d980d +0x121:  addl   $0x1,-0x24(%ebp)
085d9811 +0x125:  cmpl   $0x2,-0x24(%ebp)
085d9815 +0x129:  setle  %al
085d9818 +0x12c:  test   %al,%al
085d981a +0x12e:  jne    085d97f8 <+0x10c>
085d981c +0x130:  cmpl   $0x1,-0x30(%ebp)
085d9820 +0x134:  jne    085d986e <+0x182>
085d9822 +0x136:  movl   $0x0,-0x20(%ebp)
085d9829 +0x13d:  jmp    085d9863 <+0x177>
085d982b +0x13f:  mov    -0x20(%ebp),%eax
085d982e +0x142:  mov    0x8(%ebp),%edx
085d9831 +0x145:  movzbl 0x5d0(%edx,%eax,1),%eax
085d9839 +0x14d:  movzbl %al,%eax
085d983c +0x150:  cmp    -0x2c(%ebp),%eax
085d983f +0x153:  jne    085d9851 <+0x165>
085d9841 +0x155:  mov    -0x20(%ebp),%eax
085d9844 +0x158:  mov    0x8(%ebp),%edx
085d9847 +0x15b:  movb   $0x1,0x5c8(%edx,%eax,1)
085d984f +0x163:  jmp    085d985f <+0x173>
085d9851 +0x165:  mov    -0x20(%ebp),%eax
085d9854 +0x168:  mov    0x8(%ebp),%edx
085d9857 +0x16b:  movb   $0x0,0x5c8(%edx,%eax,1)
085d985f +0x173:  addl   $0x1,-0x20(%ebp)
085d9863 +0x177:  cmpl   $0x7,-0x20(%ebp)
085d9867 +0x17b:  setle  %al
085d986a +0x17e:  test   %al,%al
085d986c +0x180:  jne    085d982b <+0x13f>
085d986e +0x182:  mov    0x8(%ebp),%eax
085d9871 +0x185:  mov    %eax,(%esp)
085d9874 +0x188:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d9879 +0x18d:  cmpl   $0x1,-0x30(%ebp)
085d987d +0x191:  jne    085d9b00 <+0x414>
085d9883 +0x197:  mov    0x8(%ebp),%eax
085d9886 +0x19a:  lea    0x268(%eax),%edx
085d988c +0x1a0:  mov    -0x2c(%ebp),%eax
085d988f +0x1a3:  mov    %eax,0x4(%esp)
085d9893 +0x1a7:  mov    %edx,(%esp)
085d9896 +0x1aa:  call   085d585e <_ZN12PvpUserTable10SetWinTeamEi>  ; PvpUserTable::SetWinTeam(int)
085d989b +0x1af:  mov    $0x1,%eax
085d98a0 +0x1b4:  jmp    085d9b06 <+0x41a>
085d98a5 +0x1b9:  mov    0x8(%ebp),%eax
085d98a8 +0x1bc:  mov    0x4(%eax),%eax
085d98ab +0x1bf:  cmp    $0x4,%eax
085d98ae +0x1c2:  jne    085d9996 <+0x2aa>
085d98b4 +0x1c8:  movl   $0x0,-0x1c(%ebp)
085d98bb +0x1cf:  movl   $0x0,-0x18(%ebp)
085d98c2 +0x1d6:  jmp    085d98f0 <+0x204>
085d98c4 +0x1d8:  mov    -0x18(%ebp),%edx
085d98c7 +0x1db:  mov    0x8(%ebp),%eax
085d98ca +0x1de:  add    $0xc,%edx
085d98cd +0x1e1:  mov    (%eax,%edx,4),%eax
085d98d0 +0x1e4:  test   %eax,%eax
085d98d2 +0x1e6:  je     085d98ec <+0x200>
085d98d4 +0x1e8:  mov    -0x18(%ebp),%edx
085d98d7 +0x1eb:  mov    0x8(%ebp),%eax
085d98da +0x1ee:  add    $0x14,%edx
085d98dd +0x1f1:  mov    (%eax,%edx,4),%eax
085d98e0 +0x1f4:  cmp    $0x4,%eax
085d98e3 +0x1f7:  je     085d98eb <+0x1ff>
085d98e5 +0x1f9:  addl   $0x1,-0x1c(%ebp)
085d98e9 +0x1fd:  jmp    085d98ec <+0x200>
085d98eb +0x1ff:  nop
085d98ec +0x200:  addl   $0x1,-0x18(%ebp)
085d98f0 +0x204:  cmpl   $0x7,-0x18(%ebp)
085d98f4 +0x208:  setle  %al
085d98f7 +0x20b:  test   %al,%al
085d98f9 +0x20d:  jne    085d98c4 <+0x1d8>
085d98fb +0x20f:  movl   $0x0,0xc(%esp)
085d9903 +0x217:  movl   $0xa3c,0x8(%esp)
085d990b +0x21f:  movl   $&_ZZN8PvP_Room12check_winnerEvE19__PRETTY_FUNCTION__,0x4(%esp)
085d9913 +0x227:  lea    -0x50(%ebp),%eax
085d9916 +0x22a:  mov    %eax,(%esp)
085d9919 +0x22d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085d991e +0x232:  mov    -0x1c(%ebp),%eax
085d9921 +0x235:  mov    %eax,0x8(%esp)
085d9925 +0x239:  movl   $"PvP_Room::check_winner single : %d",0x4(%esp)
085d992d +0x241:  lea    -0x50(%ebp),%eax
085d9930 +0x244:  mov    %eax,(%esp)
085d9933 +0x247:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085d9938 +0x24c:  mov    0x8(%ebp),%eax
085d993b +0x24f:  lea    0x69c(%eax),%edx
085d9941 +0x255:  mov    -0x1c(%ebp),%eax
085d9944 +0x258:  mov    %eax,0x4(%esp)
085d9948 +0x25c:  mov    %edx,(%esp)
085d994b +0x25f:  call   085df012 <_ZN20CDeathMatchBattleMgr26checkGameOverForSinglePlayEi>  ; CDeathMatchBattleMgr::checkGameOverForSinglePlay(int)
085d9950 +0x264:  test   %al,%al
085d9952 +0x266:  je     085d9b01 <+0x415>
085d9958 +0x26c:  mov    0x8(%ebp),%eax
085d995b +0x26f:  lea    0x268(%eax),%ebx
085d9961 +0x275:  mov    0x8(%ebp),%eax
085d9964 +0x278:  lea    0x5c8(%eax),%ecx
085d996a +0x27e:  mov    0x8(%ebp),%eax
085d996d +0x281:  lea    0x30(%eax),%edx
085d9970 +0x284:  mov    0x8(%ebp),%eax
085d9973 +0x287:  add    $0x69c,%eax
085d9978 +0x28c:  mov    %ebx,0xc(%esp)
085d997c +0x290:  mov    %ecx,0x8(%esp)
085d9980 +0x294:  mov    %edx,0x4(%esp)
085d9984 +0x298:  mov    %eax,(%esp)
085d9987 +0x29b:  call   085df48a <_ZN20CDeathMatchBattleMgr24checkWinnerForSinglePlayEPP5CUserPbR12PvpUserTable>  ; CDeathMatchBattleMgr::checkWinnerForSinglePlay(CUser**, bool*, PvpUserTable&)
085d998c +0x2a0:  mov    $0x1,%eax
085d9991 +0x2a5:  jmp    085d9b06 <+0x41a>
085d9996 +0x2aa:  mov    0x8(%ebp),%eax
085d9999 +0x2ad:  mov    0x4(%eax),%eax
085d999c +0x2b0:  cmp    $0x5,%eax
085d999f +0x2b3:  jne    085d9a76 <+0x38a>
085d99a5 +0x2b9:  mov    0x8(%ebp),%eax
085d99a8 +0x2bc:  mov    %eax,(%esp)
085d99ab +0x2bf:  call   085d6774 <_ZN8PvP_Room16get_pvp_team_cntEv>  ; PvP_Room::get_pvp_team_cnt()
085d99b0 +0x2c4:  mov    %eax,%ebx
085d99b2 +0x2c6:  movl   $0x0,0xc(%esp)
085d99ba +0x2ce:  movl   $0xa46,0x8(%esp)
085d99c2 +0x2d6:  movl   $&_ZZN8PvP_Room12check_winnerEvE19__PRETTY_FUNCTION__,0x4(%esp)
085d99ca +0x2de:  lea    -0x40(%ebp),%eax
085d99cd +0x2e1:  mov    %eax,(%esp)
085d99d0 +0x2e4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085d99d5 +0x2e9:  mov    %ebx,0x8(%esp)
085d99d9 +0x2ed:  movl   $"PvP_Room::check_winner team  : %d",0x4(%esp)
085d99e1 +0x2f5:  lea    -0x40(%ebp),%eax
085d99e4 +0x2f8:  mov    %eax,(%esp)
085d99e7 +0x2fb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085d99ec +0x300:  mov    0x8(%ebp),%eax
085d99ef +0x303:  lea    0x5d0(%eax),%ebx
085d99f5 +0x309:  mov    0x8(%ebp),%eax
085d99f8 +0x30c:  mov    %eax,(%esp)
085d99fb +0x30f:  call   085d6774 <_ZN8PvP_Room16get_pvp_team_cntEv>  ; PvP_Room::get_pvp_team_cnt()
085d9a00 +0x314:  mov    0x8(%ebp),%edx
085d9a03 +0x317:  lea    0x30(%edx),%ecx
085d9a06 +0x31a:  mov    0x8(%ebp),%edx
085d9a09 +0x31d:  add    $0x69c,%edx
085d9a0f +0x323:  mov    %ebx,0xc(%esp)
085d9a13 +0x327:  mov    %eax,0x8(%esp)
085d9a17 +0x32b:  mov    %ecx,0x4(%esp)
085d9a1b +0x32f:  mov    %edx,(%esp)
085d9a1e +0x332:  call   085df126 <_ZN20CDeathMatchBattleMgr24checkGameOverForTeamPlayEPP5CUseriPh>  ; CDeathMatchBattleMgr::checkGameOverForTeamPlay(CUser**, int, unsigned char*)
085d9a23 +0x337:  test   %al,%al
085d9a25 +0x339:  je     085d9b01 <+0x415>
085d9a2b +0x33f:  mov    0x8(%ebp),%eax
085d9a2e +0x342:  lea    0x268(%eax),%esi
085d9a34 +0x348:  mov    0x8(%ebp),%eax
085d9a37 +0x34b:  lea    0x5d0(%eax),%ebx
085d9a3d +0x351:  mov    0x8(%ebp),%eax
085d9a40 +0x354:  lea    0x5c8(%eax),%ecx
085d9a46 +0x35a:  mov    0x8(%ebp),%eax
085d9a49 +0x35d:  lea    0x30(%eax),%edx
085d9a4c +0x360:  mov    0x8(%ebp),%eax
085d9a4f +0x363:  add    $0x69c,%eax
085d9a54 +0x368:  mov    %esi,0x10(%esp)
085d9a58 +0x36c:  mov    %ebx,0xc(%esp)
085d9a5c +0x370:  mov    %ecx,0x8(%esp)
085d9a60 +0x374:  mov    %edx,0x4(%esp)
085d9a64 +0x378:  mov    %eax,(%esp)
085d9a67 +0x37b:  call   085df296 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable>  ; CDeathMatchBattleMgr::checkWinnerForTeamPlay(CUser**, bool*, unsigned char*, PvpUserTable&)
085d9a6c +0x380:  mov    $0x1,%eax
085d9a71 +0x385:  jmp    085d9b06 <+0x41a>
085d9a76 +0x38a:  mov    0x8(%ebp),%eax
085d9a79 +0x38d:  mov    %eax,(%esp)
085d9a7c +0x390:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d9a81 +0x395:  movl   $0x0,-0x14(%ebp)
085d9a88 +0x39c:  movl   $0x0,-0xc(%ebp)
085d9a8f +0x3a3:  jmp    085d9ac5 <+0x3d9>
085d9a91 +0x3a5:  mov    -0xc(%ebp),%eax
085d9a94 +0x3a8:  mov    0x8(%ebp),%edx
085d9a97 +0x3ab:  movzbl 0x5c8(%edx,%eax,1),%eax
085d9a9f +0x3b3:  test   %al,%al
085d9aa1 +0x3b5:  je     085d9ac1 <+0x3d5>
085d9aa3 +0x3b7:  mov    -0xc(%ebp),%edx
085d9aa6 +0x3ba:  mov    0x8(%ebp),%eax
085d9aa9 +0x3bd:  add    $0x14,%edx
085d9aac +0x3c0:  mov    (%eax,%edx,4),%eax
085d9aaf +0x3c3:  cmp    $0x4,%eax
085d9ab2 +0x3c6:  je     085d9ac0 <+0x3d4>
085d9ab4 +0x3c8:  addl   $0x1,-0x14(%ebp)
085d9ab8 +0x3cc:  mov    -0xc(%ebp),%eax
085d9abb +0x3cf:  mov    %eax,-0x10(%ebp)
085d9abe +0x3d2:  jmp    085d9ac1 <+0x3d5>
085d9ac0 +0x3d4:  nop
085d9ac1 +0x3d5:  addl   $0x1,-0xc(%ebp)
085d9ac5 +0x3d9:  cmpl   $0x7,-0xc(%ebp)
085d9ac9 +0x3dd:  setle  %al
085d9acc +0x3e0:  test   %al,%al
085d9ace +0x3e2:  jne    085d9a91 <+0x3a5>
085d9ad0 +0x3e4:  mov    0x8(%ebp),%eax
085d9ad3 +0x3e7:  mov    %eax,(%esp)
085d9ad6 +0x3ea:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d9adb +0x3ef:  cmpl   $0x1,-0x14(%ebp)
085d9adf +0x3f3:  jne    085d9b01 <+0x415>
085d9ae1 +0x3f5:  mov    0x8(%ebp),%eax
085d9ae4 +0x3f8:  lea    0x268(%eax),%edx
085d9aea +0x3fe:  mov    -0x10(%ebp),%eax
085d9aed +0x401:  mov    %eax,0x4(%esp)
085d9af1 +0x405:  mov    %edx,(%esp)
085d9af4 +0x408:  call   085d585e <_ZN12PvpUserTable10SetWinTeamEi>  ; PvpUserTable::SetWinTeam(int)
085d9af9 +0x40d:  mov    $0x1,%eax
085d9afe +0x412:  jmp    085d9b06 <+0x41a>
085d9b00 +0x414:  nop
085d9b01 +0x415:  mov    $0x0,%eax
085d9b06 +0x41a:  sub    $0xffffff80,%esp
085d9b09 +0x41d:  pop    %ebx
085d9b0a +0x41e:  pop    %esi
085d9b0b +0x41f:  pop    %ebp
085d9b0c +0x420:  ret
085d9b0d +0x421:  nop
```

## 反编译 C

```c
// PvP_Room::check_winner @ 0x85d96ec

/* PvP_Room::check_winner() */

undefined4 __thiscall PvP_Room::check_winner(PvP_Room *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_6c [6];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (this[0xc0] == (PvP_Room)0x0) {
    if ((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) {
      lock();
      local_6c[3] = 0;
      local_6c[4] = 0;
      local_6c[5] = 0;
      local_6c[0] = 0;
      local_6c[1] = 0;
      local_6c[2] = 0;
      for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
        if (((this[local_2c + 0x5d0] != (PvP_Room)0x0) && ((byte)this[local_2c + 0x5d0] < 0xfe)) &&
           (local_6c[(byte)this[local_2c + 0x5d0] + 3] =
                 local_6c[(byte)this[local_2c + 0x5d0] + 3] + 1,
           this[local_2c + 0x5c8] != (PvP_Room)0x0)) {
          local_6c[(byte)this[local_2c + 0x5d0]] = local_6c[(byte)this[local_2c + 0x5d0]] + 1;
        }
      }
      local_34 = 0;
      local_30 = 0;
      for (local_28 = 1; (int)local_28 < 3; local_28 = local_28 + 1) {
        if (0 < local_6c[local_28]) {
          local_34 = local_34 + 1;
          local_30 = local_28;
        }
      }
      if (local_34 == 1) {
        for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
          if ((byte)this[local_24 + 0x5d0] == local_30) {
            this[local_24 + 0x5c8] = (PvP_Room)0x1;
          }
          else {
            this[local_24 + 0x5c8] = (PvP_Room)0x0;
          }
        }
      }
      unlock();
      if (local_34 == 1) {
        PvpUserTable::SetWinTeam((PvpUserTable *)(this + 0x268),local_30);
        return 1;
      }
    }
    else if (*(int *)(this + 4) == 4) {
      local_20 = 0;
      for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
        if ((*(int *)(this + (local_1c + 0xc) * 4) != 0) &&
           (*(int *)(this + (local_1c + 0x14) * 4) != 4)) {
          local_20 = local_20 + 1;
        }
      }
      cMyTrace::cMyTrace(local_54,"bool PvP_Room::check_winner()",0xa3c,0);
      cMyTrace::operator()(local_54,"PvP_Room::check_winner single : %d",local_20);
      cVar1 = CDeathMatchBattleMgr::checkGameOverForSinglePlay
                        ((CDeathMatchBattleMgr *)(this + 0x69c),local_20);
      if (cVar1 != '\0') {
        CDeathMatchBattleMgr::checkWinnerForSinglePlay
                  ((CDeathMatchBattleMgr *)(this + 0x69c),(CUser **)(this + 0x30),
                   (bool *)(this + 0x5c8),(PvpUserTable *)(this + 0x268));
        return 1;
      }
    }
    else if (*(int *)(this + 4) == 5) {
      uVar2 = get_pvp_team_cnt(this);
      cMyTrace::cMyTrace(local_44,"bool PvP_Room::check_winner()",0xa46,0);
      cMyTrace::operator()(local_44,"PvP_Room::check_winner team  : %d",uVar2);
      iVar3 = get_pvp_team_cnt(this);
      cVar1 = CDeathMatchBattleMgr::checkGameOverForTeamPlay
                        ((CDeathMatchBattleMgr *)(this + 0x69c),(CUser **)(this + 0x30),iVar3,
                         (uchar *)(this + 0x5d0));
      if (cVar1 != '\0') {
        CDeathMatchBattleMgr::checkWinnerForTeamPlay
                  ((CDeathMatchBattleMgr *)(this + 0x69c),(CUser **)(this + 0x30),
                   (bool *)(this + 0x5c8),(uchar *)(this + 0x5d0),(PvpUserTable *)(this + 0x268));
        return 1;
      }
    }
    else {
      lock();
      local_18 = 0;
      for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
        if ((this[local_10 + 0x5c8] != (PvP_Room)0x0) &&
           (*(int *)(this + (local_10 + 0x14) * 4) != 4)) {
          local_18 = local_18 + 1;
          local_14 = local_10;
        }
      }
      unlock();
      if (local_18 == 1) {
        PvpUserTable::SetWinTeam((PvpUserTable *)(this + 0x268),local_14);
        return 1;
      }
    }
  }
  return 0;
}
```
