# execute

`_ZN11game_master18CTestTradeRestrict7executeEv`

`game_master::CTestTradeRestrict::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CTestTradeRestrict` | `0x084b2640` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b2640  _ZN11game_master18CTestTradeRestrict7executeEv
#           game_master::CTestTradeRestrict::execute()
# range [0x084b2640, 0x084b28d5]
084b2640 +0x000:  push   %ebp
084b2641 +0x001:  mov    %esp,%ebp
084b2643 +0x003:  sub    $0x38,%esp
084b2646 +0x006:  mov    0x8(%ebp),%eax
084b2649 +0x009:  mov    %eax,(%esp)
084b264c +0x00c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b2651 +0x011:  mov    %eax,-0x28(%ebp)
084b2654 +0x014:  cmpl   $0x0,-0x28(%ebp)
084b2658 +0x018:  je     084b28d2 <+0x292>
084b265e +0x01e:  movl   $0x0,-0x20(%ebp)
084b2665 +0x025:  jmp    084b26e2 <+0xa2>
084b2667 +0x027:  mov    -0x28(%ebp),%eax
084b266a +0x02a:  mov    %eax,(%esp)
084b266d +0x02d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084b2672 +0x032:  mov    0x650(%eax),%edx
084b2678 +0x038:  mov    -0x20(%ebp),%eax
084b267b +0x03b:  imul   $0x3d,%eax,%eax
084b267e +0x03e:  lea    (%edx,%eax,1),%eax
084b2681 +0x041:  mov    0x2(%eax),%eax
084b2684 +0x044:  test   %eax,%eax
084b2686 +0x046:  sete   %al
084b2689 +0x049:  test   %al,%al
084b268b +0x04b:  jne    084b26da <+0x9a>
084b268d +0x04d:  mov    -0x28(%ebp),%eax
084b2690 +0x050:  mov    %eax,(%esp)
084b2693 +0x053:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084b2698 +0x058:  mov    0x650(%eax),%edx
084b269e +0x05e:  mov    -0x20(%ebp),%eax
084b26a1 +0x061:  imul   $0x3d,%eax,%eax
084b26a4 +0x064:  lea    (%edx,%eax,1),%eax
084b26a7 +0x067:  movzbl 0x1(%eax),%eax
084b26ab +0x06b:  cmp    $0x1,%al
084b26ad +0x06d:  setne  %al
084b26b0 +0x070:  test   %al,%al
084b26b2 +0x072:  jne    084b26dd <+0x9d>
084b26b4 +0x074:  mov    -0x28(%ebp),%eax
084b26b7 +0x077:  mov    %eax,(%esp)
084b26ba +0x07a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084b26bf +0x07f:  mov    0x650(%eax),%edx
084b26c5 +0x085:  mov    -0x20(%ebp),%eax
084b26c8 +0x088:  imul   $0x3d,%eax,%eax
084b26cb +0x08b:  lea    (%edx,%eax,1),%eax
084b26ce +0x08e:  movzbl 0x33(%eax),%edx
084b26d2 +0x092:  or     $0x20,%edx
084b26d5 +0x095:  mov    %dl,0x33(%eax)
084b26d8 +0x098:  jmp    084b26de <+0x9e>
084b26da +0x09a:  nop
084b26db +0x09b:  jmp    084b26de <+0x9e>
084b26dd +0x09d:  nop
084b26de +0x09e:  addl   $0x1,-0x20(%ebp)
084b26e2 +0x0a2:  cmpl   $0x38,-0x20(%ebp)
084b26e6 +0x0a6:  setle  %al
084b26e9 +0x0a9:  test   %al,%al
084b26eb +0x0ab:  jne    084b2667 <+0x27>
084b26f1 +0x0b1:  movl   $0x0,-0x1c(%ebp)
084b26f8 +0x0b8:  jmp    084b2769 <+0x129>
084b26fa +0x0ba:  mov    -0x28(%ebp),%eax
084b26fd +0x0bd:  mov    %eax,(%esp)
084b2700 +0x0c0:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084b2705 +0x0c5:  mov    -0x1c(%ebp),%edx
084b2708 +0x0c8:  imul   $0x3d,%edx,%edx
084b270b +0x0cb:  add    %edx,%eax
084b270d +0x0cd:  add    $0x10,%eax
084b2710 +0x0d0:  mov    0xe(%eax),%eax
084b2713 +0x0d3:  test   %eax,%eax
084b2715 +0x0d5:  sete   %al
084b2718 +0x0d8:  test   %al,%al
084b271a +0x0da:  jne    084b2761 <+0x121>
084b271c +0x0dc:  mov    -0x28(%ebp),%eax
084b271f +0x0df:  mov    %eax,(%esp)
084b2722 +0x0e2:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084b2727 +0x0e7:  mov    -0x1c(%ebp),%edx
084b272a +0x0ea:  imul   $0x3d,%edx,%edx
084b272d +0x0ed:  add    %edx,%eax
084b272f +0x0ef:  add    $0x10,%eax
084b2732 +0x0f2:  movzbl 0xd(%eax),%eax
084b2736 +0x0f6:  cmp    $0x1,%al
084b2738 +0x0f8:  setne  %al
084b273b +0x0fb:  test   %al,%al
084b273d +0x0fd:  jne    084b2764 <+0x124>
084b273f +0x0ff:  mov    -0x28(%ebp),%eax
084b2742 +0x102:  mov    %eax,(%esp)
084b2745 +0x105:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084b274a +0x10a:  mov    -0x1c(%ebp),%edx
084b274d +0x10d:  imul   $0x3d,%edx,%edx
084b2750 +0x110:  add    %edx,%eax
084b2752 +0x112:  add    $0x40,%eax
084b2755 +0x115:  movzbl 0xf(%eax),%edx
084b2759 +0x119:  or     $0x20,%edx
084b275c +0x11c:  mov    %dl,0xf(%eax)
084b275f +0x11f:  jmp    084b2765 <+0x125>
084b2761 +0x121:  nop
084b2762 +0x122:  jmp    084b2765 <+0x125>
084b2764 +0x124:  nop
084b2765 +0x125:  addl   $0x1,-0x1c(%ebp)
084b2769 +0x129:  cmpl   $0x19,-0x1c(%ebp)
084b276d +0x12d:  setle  %al
084b2770 +0x130:  test   %al,%al
084b2772 +0x132:  jne    084b26fa <+0xba>
084b2774 +0x134:  movl   $0x0,-0x18(%ebp)
084b277b +0x13b:  jmp    084b27ce <+0x18e>
084b277d +0x13d:  mov    -0x28(%ebp),%eax
084b2780 +0x140:  mov    %eax,(%esp)
084b2783 +0x143:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084b2788 +0x148:  mov    0x654(%eax),%edx
084b278e +0x14e:  mov    -0x18(%ebp),%eax
084b2791 +0x151:  imul   $0x3d,%eax,%eax
084b2794 +0x154:  lea    (%edx,%eax,1),%eax
084b2797 +0x157:  mov    0x2(%eax),%eax
084b279a +0x15a:  test   %eax,%eax
084b279c +0x15c:  sete   %al
084b279f +0x15f:  test   %al,%al
084b27a1 +0x161:  jne    084b27c9 <+0x189>
084b27a3 +0x163:  mov    -0x28(%ebp),%eax
084b27a6 +0x166:  mov    %eax,(%esp)
084b27a9 +0x169:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084b27ae +0x16e:  mov    0x654(%eax),%edx
084b27b4 +0x174:  mov    -0x18(%ebp),%eax
084b27b7 +0x177:  imul   $0x3d,%eax,%eax
084b27ba +0x17a:  lea    (%edx,%eax,1),%eax
084b27bd +0x17d:  movzbl 0x33(%eax),%edx
084b27c1 +0x181:  or     $0x20,%edx
084b27c4 +0x184:  mov    %dl,0x33(%eax)
084b27c7 +0x187:  jmp    084b27ca <+0x18a>
084b27c9 +0x189:  nop
084b27ca +0x18a:  addl   $0x1,-0x18(%ebp)
084b27ce +0x18e:  cmpl   $0x68,-0x18(%ebp)
084b27d2 +0x192:  setle  %al
084b27d5 +0x195:  test   %al,%al
084b27d7 +0x197:  jne    084b277d <+0x13d>
084b27d9 +0x199:  movl   $0x0,-0x14(%ebp)
084b27e0 +0x1a0:  jmp    084b2836 <+0x1f6>
084b27e2 +0x1a2:  mov    -0x28(%ebp),%eax
084b27e5 +0x1a5:  mov    %eax,(%esp)
084b27e8 +0x1a8:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
084b27ed +0x1ad:  mov    %eax,(%esp)
084b27f0 +0x1b0:  call   084b4262 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x315>  ; global constructors keyed to game_master::CMacro::Reset()+0x315
084b27f5 +0x1b5:  mov    %eax,-0x10(%ebp)
084b27f8 +0x1b8:  mov    -0x14(%ebp),%eax
084b27fb +0x1bb:  imul   $0x3d,%eax,%eax
084b27fe +0x1be:  add    -0x10(%ebp),%eax
084b2801 +0x1c1:  mov    0x2(%eax),%eax
084b2804 +0x1c4:  test   %eax,%eax
084b2806 +0x1c6:  je     084b282e <+0x1ee>
084b2808 +0x1c8:  mov    -0x14(%ebp),%eax
084b280b +0x1cb:  imul   $0x3d,%eax,%eax
084b280e +0x1ce:  add    -0x10(%ebp),%eax
084b2811 +0x1d1:  movzbl 0x1(%eax),%eax
084b2815 +0x1d5:  cmp    $0x1,%al
084b2817 +0x1d7:  jne    084b2831 <+0x1f1>
084b2819 +0x1d9:  mov    -0x14(%ebp),%eax
084b281c +0x1dc:  imul   $0x3d,%eax,%eax
084b281f +0x1df:  add    -0x10(%ebp),%eax
084b2822 +0x1e2:  movzbl 0x33(%eax),%edx
084b2826 +0x1e6:  or     $0x20,%edx
084b2829 +0x1e9:  mov    %dl,0x33(%eax)
084b282c +0x1ec:  jmp    084b2832 <+0x1f2>
084b282e +0x1ee:  nop
084b282f +0x1ef:  jmp    084b2832 <+0x1f2>
084b2831 +0x1f1:  nop
084b2832 +0x1f2:  addl   $0x1,-0x14(%ebp)
084b2836 +0x1f6:  cmpl   $0x97,-0x14(%ebp)
084b283d +0x1fd:  setle  %al
084b2840 +0x200:  test   %al,%al
084b2842 +0x202:  jne    084b27e2 <+0x1a2>
084b2844 +0x204:  mov    -0x28(%ebp),%eax
084b2847 +0x207:  mov    %eax,(%esp)
084b284a +0x20a:  call   0822fc22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52cc
084b284f +0x20f:  movl   $0x0,0x4(%esp)
084b2857 +0x217:  mov    %eax,(%esp)
084b285a +0x21a:  call   08289a0c <_ZN13CAccountCargo10GetSlotRefEi>  ; CAccountCargo::GetSlotRef(int)
084b285f +0x21f:  mov    %eax,-0x24(%ebp)
084b2862 +0x222:  movl   $0x0,-0xc(%ebp)
084b2869 +0x229:  jmp    084b28af <+0x26f>
084b286b +0x22b:  cmpl   $0x0,-0x24(%ebp)
084b286f +0x22f:  je     084b28bc <+0x27c>
084b2871 +0x231:  mov    -0xc(%ebp),%eax
084b2874 +0x234:  imul   $0x3d,%eax,%eax
084b2877 +0x237:  add    -0x24(%ebp),%eax
084b287a +0x23a:  mov    0x2(%eax),%eax
084b287d +0x23d:  test   %eax,%eax
084b287f +0x23f:  je     084b28a7 <+0x267>
084b2881 +0x241:  mov    -0xc(%ebp),%eax
084b2884 +0x244:  imul   $0x3d,%eax,%eax
084b2887 +0x247:  add    -0x24(%ebp),%eax
084b288a +0x24a:  movzbl 0x1(%eax),%eax
084b288e +0x24e:  cmp    $0x1,%al
084b2890 +0x250:  jne    084b28aa <+0x26a>
084b2892 +0x252:  mov    -0xc(%ebp),%eax
084b2895 +0x255:  imul   $0x3d,%eax,%eax
084b2898 +0x258:  add    -0x24(%ebp),%eax
084b289b +0x25b:  movzbl 0x33(%eax),%edx
084b289f +0x25f:  or     $0x20,%edx
084b28a2 +0x262:  mov    %dl,0x33(%eax)
084b28a5 +0x265:  jmp    084b28ab <+0x26b>
084b28a7 +0x267:  nop
084b28a8 +0x268:  jmp    084b28ab <+0x26b>
084b28aa +0x26a:  nop
084b28ab +0x26b:  addl   $0x1,-0xc(%ebp)
084b28af +0x26f:  cmpl   $0x37,-0xc(%ebp)
084b28b3 +0x273:  setle  %al
084b28b6 +0x276:  test   %al,%al
084b28b8 +0x278:  jne    084b286b <+0x22b>
084b28ba +0x27a:  jmp    084b28bd <+0x27d>
084b28bc +0x27c:  nop
084b28bd +0x27d:  mov    -0x28(%ebp),%eax
084b28c0 +0x280:  mov    %eax,(%esp)
084b28c3 +0x283:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084b28c8 +0x288:  mov    %eax,(%esp)
084b28cb +0x28b:  call   0844a132 <_ZN20DB_TestTradeRestrict11makeRequestEj>  ; DB_TestTradeRestrict::makeRequest(unsigned int)
084b28d0 +0x290:  jmp    084b28d3 <+0x293>
084b28d2 +0x292:  nop
084b28d3 +0x293:  leave
084b28d4 +0x294:  ret
084b28d5 +0x295:  nop
```

## 反编译 C

```c
// game_master::CTestTradeRestrict::execute @ 0x84b2640

/* game_master::CTestTradeRestrict::execute() */

void __thiscall game_master::CTestTradeRestrict::execute(CTestTradeRestrict *this)

{
  CUserCharacInfo *this_00;
  CCargo *this_01;
  CAccountCargo *this_02;
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  if (this_00 != (CUserCharacInfo *)0x0) {
    for (local_24 = 0; local_24 < 0x39; local_24 = local_24 + 1) {
      iVar1 = CUserCharacInfo::getCurCharacInvenR(this_00);
      if ((*(int *)(*(int *)(iVar1 + 0x650) + local_24 * 0x3d + 2) != 0) &&
         (iVar1 = CUserCharacInfo::getCurCharacInvenR(this_00),
         *(char *)(*(int *)(iVar1 + 0x650) + local_24 * 0x3d + 1) == '\x01')) {
        iVar1 = CUserCharacInfo::getCurCharacInvenW(this_00);
        iVar1 = *(int *)(iVar1 + 0x650) + local_24 * 0x3d;
        *(byte *)(iVar1 + 0x33) = *(byte *)(iVar1 + 0x33) | 0x20;
      }
    }
    for (local_20 = 0; local_20 < 0x1a; local_20 = local_20 + 1) {
      iVar1 = CUserCharacInfo::getCurCharacInvenR(this_00);
      if ((*(int *)(iVar1 + local_20 * 0x3d + 0x1e) != 0) &&
         (iVar1 = CUserCharacInfo::getCurCharacInvenR(this_00),
         *(char *)(iVar1 + local_20 * 0x3d + 0x1d) == '\x01')) {
        iVar1 = CUserCharacInfo::getCurCharacInvenW(this_00);
        iVar1 = iVar1 + local_20 * 0x3d;
        *(byte *)(iVar1 + 0x4f) = *(byte *)(iVar1 + 0x4f) | 0x20;
      }
    }
    for (local_1c = 0; local_1c < 0x69; local_1c = local_1c + 1) {
      iVar1 = CUserCharacInfo::getCurCharacInvenR(this_00);
      if (*(int *)(*(int *)(iVar1 + 0x654) + local_1c * 0x3d + 2) != 0) {
        iVar1 = CUserCharacInfo::getCurCharacInvenW(this_00);
        iVar1 = *(int *)(iVar1 + 0x654) + local_1c * 0x3d;
        *(byte *)(iVar1 + 0x33) = *(byte *)(iVar1 + 0x33) | 0x20;
      }
    }
    for (local_18 = 0; local_18 < 0x98; local_18 = local_18 + 1) {
      this_01 = (CCargo *)CUserCharacInfo::getCurCharacCargoW(this_00);
      iVar1 = CCargo::get_cargo_start(this_01);
      if ((*(int *)(local_18 * 0x3d + iVar1 + 2) != 0) &&
         (*(char *)(local_18 * 0x3d + iVar1 + 1) == '\x01')) {
        iVar1 = local_18 * 0x3d + iVar1;
        *(byte *)(iVar1 + 0x33) = *(byte *)(iVar1 + 0x33) | 0x20;
      }
    }
    this_02 = (CAccountCargo *)CUser::GetAccountCargo((CUser *)this_00);
    iVar1 = CAccountCargo::GetSlotRef(this_02,0);
    local_10 = 0;
    while ((local_10 < 0x38 && (iVar1 != 0))) {
      if ((*(int *)(local_10 * 0x3d + iVar1 + 2) != 0) &&
         (*(char *)(local_10 * 0x3d + iVar1 + 1) == '\x01')) {
        iVar2 = local_10 * 0x3d + iVar1;
        *(byte *)(iVar2 + 0x33) = *(byte *)(iVar2 + 0x33) | 0x20;
      }
      local_10 = local_10 + 1;
    }
    uVar3 = CUserCharacInfo::getCurCharacNo(this_00);
    DB_TestTradeRestrict::makeRequest(uVar3);
  }
  return;
}
```
