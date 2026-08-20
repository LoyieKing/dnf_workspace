# isCardSelectComplete

`_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE`

`CTournamentDungeonReward::isCardSelectComplete(ENUM_TOURNAMENT_REWARD_CARD_TYPE, std::vector<int, std::allocator<int> > const&)`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x08284d08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284d08  _ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE
#           CTournamentDungeonReward::isCardSelectComplete(ENUM_TOURNAMENT_REWARD_CARD_TYPE, std::vector<int, std::allocator<int> > const&)
# range [0x08284d08, 0x08284ee3]
08284d08 +0x000:  push   %ebp
08284d09 +0x001:  mov    %esp,%ebp
08284d0b +0x003:  push   %ebx
08284d0c +0x004:  sub    $0x44,%esp
08284d0f +0x007:  mov    0x10(%ebp),%eax
08284d12 +0x00a:  mov    %eax,(%esp)
08284d15 +0x00d:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
08284d1a +0x012:  test   %al,%al
08284d1c +0x014:  je     08284d28 <+0x20>
08284d1e +0x016:  mov    $0x0,%eax
08284d23 +0x01b:  jmp    08284ede <+0x1d6>
08284d28 +0x020:  cmpl   $0x2,0xc(%ebp)
08284d2c +0x024:  jne    08284e19 <+0x111>
08284d32 +0x02a:  movl   $0x0,-0x14(%ebp)
08284d39 +0x031:  jmp    08284e05 <+0xfd>
08284d3e +0x036:  movl   $0x0,-0x10(%ebp)
08284d45 +0x03d:  jmp    08284df2 <+0xea>
08284d4a +0x042:  mov    -0x14(%ebp),%edx
08284d4d +0x045:  mov    -0x10(%ebp),%ecx
08284d50 +0x048:  mov    %ecx,%eax
08284d52 +0x04a:  add    %eax,%eax
08284d54 +0x04c:  add    %ecx,%eax
08284d56 +0x04e:  lea    0x0(,%eax,4),%ecx
08284d5d +0x055:  mov    %edx,%eax
08284d5f +0x057:  add    %eax,%eax
08284d61 +0x059:  add    %edx,%eax
08284d63 +0x05b:  shl    $0x3,%eax
08284d66 +0x05e:  lea    (%ecx,%eax,1),%eax
08284d69 +0x061:  add    0x8(%ebp),%eax
08284d6c +0x064:  lea    0x10(%eax),%ebx
08284d6f +0x067:  lea    -0x2c(%ebp),%eax
08284d72 +0x06a:  mov    0x10(%ebp),%edx
08284d75 +0x06d:  mov    %edx,0x4(%esp)
08284d79 +0x071:  mov    %eax,(%esp)
08284d7c +0x074:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08284d81 +0x079:  sub    $0x4,%esp
08284d84 +0x07c:  lea    -0x28(%ebp),%eax
08284d87 +0x07f:  mov    0x10(%ebp),%edx
08284d8a +0x082:  mov    %edx,0x4(%esp)
08284d8e +0x086:  mov    %eax,(%esp)
08284d91 +0x089:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
08284d96 +0x08e:  sub    $0x4,%esp
08284d99 +0x091:  lea    -0x30(%ebp),%eax
08284d9c +0x094:  mov    %ebx,0xc(%esp)
08284da0 +0x098:  mov    -0x2c(%ebp),%edx
08284da3 +0x09b:  mov    %edx,0x8(%esp)
08284da7 +0x09f:  mov    -0x28(%ebp),%edx
08284daa +0x0a2:  mov    %edx,0x4(%esp)
08284dae +0x0a6:  mov    %eax,(%esp)
08284db1 +0x0a9:  call   08285609 <_GLOBAL__I__ZN20TournamentRewardType5ClearEv+0xe0>  ; global constructors keyed to TournamentRewardType::Clear()+0xe0
08284db6 +0x0ae:  sub    $0x4,%esp
08284db9 +0x0b1:  lea    -0x24(%ebp),%eax
08284dbc +0x0b4:  mov    0x10(%ebp),%edx
08284dbf +0x0b7:  mov    %edx,0x4(%esp)
08284dc3 +0x0bb:  mov    %eax,(%esp)
08284dc6 +0x0be:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08284dcb +0x0c3:  sub    $0x4,%esp
08284dce +0x0c6:  lea    -0x24(%ebp),%eax
08284dd1 +0x0c9:  mov    %eax,0x4(%esp)
08284dd5 +0x0cd:  lea    -0x30(%ebp),%eax
08284dd8 +0x0d0:  mov    %eax,(%esp)
08284ddb +0x0d3:  call   080f9b9c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x3a8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x3a8
08284de0 +0x0d8:  test   %al,%al
08284de2 +0x0da:  je     08284dee <+0xe6>
08284de4 +0x0dc:  mov    $0x0,%eax
08284de9 +0x0e1:  jmp    08284ede <+0x1d6>
08284dee +0x0e6:  addl   $0x1,-0x10(%ebp)
08284df2 +0x0ea:  cmpl   $0x1,-0x10(%ebp)
08284df6 +0x0ee:  setle  %al
08284df9 +0x0f1:  test   %al,%al
08284dfb +0x0f3:  jne    08284d4a <+0x42>
08284e01 +0x0f9:  addl   $0x1,-0x14(%ebp)
08284e05 +0x0fd:  cmpl   $0x1,-0x14(%ebp)
08284e09 +0x101:  setle  %al
08284e0c +0x104:  test   %al,%al
08284e0e +0x106:  jne    08284d3e <+0x36>
08284e14 +0x10c:  jmp    08284ed9 <+0x1d1>
08284e19 +0x111:  movl   $0x0,-0xc(%ebp)
08284e20 +0x118:  jmp    08284eca <+0x1c2>
08284e25 +0x11d:  mov    0xc(%ebp),%edx
08284e28 +0x120:  mov    -0xc(%ebp),%ecx
08284e2b +0x123:  mov    %ecx,%eax
08284e2d +0x125:  add    %eax,%eax
08284e2f +0x127:  add    %ecx,%eax
08284e31 +0x129:  lea    0x0(,%eax,4),%ecx
08284e38 +0x130:  mov    %edx,%eax
08284e3a +0x132:  add    %eax,%eax
08284e3c +0x134:  add    %edx,%eax
08284e3e +0x136:  shl    $0x3,%eax
08284e41 +0x139:  lea    (%ecx,%eax,1),%eax
08284e44 +0x13c:  add    0x8(%ebp),%eax
08284e47 +0x13f:  lea    0x10(%eax),%ebx
08284e4a +0x142:  lea    -0x20(%ebp),%eax
08284e4d +0x145:  mov    0x10(%ebp),%edx
08284e50 +0x148:  mov    %edx,0x4(%esp)
08284e54 +0x14c:  mov    %eax,(%esp)
08284e57 +0x14f:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08284e5c +0x154:  sub    $0x4,%esp
08284e5f +0x157:  lea    -0x1c(%ebp),%eax
08284e62 +0x15a:  mov    0x10(%ebp),%edx
08284e65 +0x15d:  mov    %edx,0x4(%esp)
08284e69 +0x161:  mov    %eax,(%esp)
08284e6c +0x164:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
08284e71 +0x169:  sub    $0x4,%esp
08284e74 +0x16c:  lea    -0x34(%ebp),%eax
08284e77 +0x16f:  mov    %ebx,0xc(%esp)
08284e7b +0x173:  mov    -0x20(%ebp),%edx
08284e7e +0x176:  mov    %edx,0x8(%esp)
08284e82 +0x17a:  mov    -0x1c(%ebp),%edx
08284e85 +0x17d:  mov    %edx,0x4(%esp)
08284e89 +0x181:  mov    %eax,(%esp)
08284e8c +0x184:  call   08285609 <_GLOBAL__I__ZN20TournamentRewardType5ClearEv+0xe0>  ; global constructors keyed to TournamentRewardType::Clear()+0xe0
08284e91 +0x189:  sub    $0x4,%esp
08284e94 +0x18c:  lea    -0x18(%ebp),%eax
08284e97 +0x18f:  mov    0x10(%ebp),%edx
08284e9a +0x192:  mov    %edx,0x4(%esp)
08284e9e +0x196:  mov    %eax,(%esp)
08284ea1 +0x199:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08284ea6 +0x19e:  sub    $0x4,%esp
08284ea9 +0x1a1:  lea    -0x18(%ebp),%eax
08284eac +0x1a4:  mov    %eax,0x4(%esp)
08284eb0 +0x1a8:  lea    -0x34(%ebp),%eax
08284eb3 +0x1ab:  mov    %eax,(%esp)
08284eb6 +0x1ae:  call   080f9b9c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x3a8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x3a8
08284ebb +0x1b3:  test   %al,%al
08284ebd +0x1b5:  je     08284ec6 <+0x1be>
08284ebf +0x1b7:  mov    $0x0,%eax
08284ec4 +0x1bc:  jmp    08284ede <+0x1d6>
08284ec6 +0x1be:  addl   $0x1,-0xc(%ebp)
08284eca +0x1c2:  cmpl   $0x1,-0xc(%ebp)
08284ece +0x1c6:  setle  %al
08284ed1 +0x1c9:  test   %al,%al
08284ed3 +0x1cb:  jne    08284e25 <+0x11d>
08284ed9 +0x1d1:  mov    $0x1,%eax
08284ede +0x1d6:  mov    -0x4(%ebp),%ebx
08284ee1 +0x1d9:  leave
08284ee2 +0x1da:  ret
08284ee3 +0x1db:  nop
```

## 反编译 C

```c
// CTournamentDungeonReward::isCardSelectComplete @ 0x8284d08

/* CTournamentDungeonReward::isCardSelectComplete(ENUM_TOURNAMENT_REWARD_CARD_TYPE, std::vector<int,
   std::allocator<int> > const&) */

undefined4 __thiscall
CTournamentDungeonReward::isCardSelectComplete
          (CTournamentDungeonReward *this,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int local_54 [7];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  piVar6 = local_54 + 2;
  local_54[2] = param_3;
  cVar2 = std::vector<int,std::allocator<int>>::empty();
  if (cVar2 == '\0') {
    if (param_2 == 2) {
      for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
        for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
          iVar1 = local_14 * 0xc;
          iVar5 = local_18 * 0x18;
          piVar6[1] = param_3;
          *piVar6 = (int)&local_30;
          piVar6[-1] = 0x8284d81;
          std::vector<int,std::allocator<int>>::end();
          piVar6[1] = param_3;
          *piVar6 = (int)&local_2c;
          piVar6[-1] = 0x8284d96;
          std::vector<int,std::allocator<int>>::begin();
          piVar6[3] = (int)(this + iVar1 + iVar5 + 0x10);
          piVar6[2] = local_30;
          piVar6[1] = local_2c;
          *piVar6 = (int)local_34;
          piVar6[-1] = 0x8284db6;
          std::
          find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,char>()
          ;
          *piVar6 = param_3;
          piVar6[-1] = (int)local_28;
          piVar6[-2] = 0x8284dcb;
          std::vector<int,std::allocator<int>>::end();
          *piVar6 = (int)local_28;
          piVar6[-1] = (int)local_34;
          piVar6[-2] = 0x8284de0;
          bVar3 = __gnu_cxx::operator==
                            ((__normal_iterator *)piVar6[-1],(__normal_iterator *)*piVar6);
          if (bVar3) {
            return 0;
          }
          piVar6 = piVar6 + -1;
        }
      }
    }
    else {
      piVar6 = local_54 + 2;
      for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
        iVar1 = local_10 * 0xc;
        piVar6[1] = param_3;
        *piVar6 = (int)&local_24;
        piVar6[-1] = 0x8284e5c;
        std::vector<int,std::allocator<int>>::end();
        piVar6[1] = param_3;
        *piVar6 = (int)&local_20;
        piVar6[-1] = 0x8284e71;
        std::vector<int,std::allocator<int>>::begin();
        piVar6[3] = (int)(this + iVar1 + param_2 * 0x18 + 0x10);
        piVar6[2] = local_24;
        piVar6[1] = local_20;
        *piVar6 = (int)local_38;
        piVar6[-1] = 0x8284e91;
        std::
        find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,char>();
        *piVar6 = param_3;
        piVar6[-1] = (int)local_1c;
        piVar6[-2] = 0x8284ea6;
        std::vector<int,std::allocator<int>>::end();
        *piVar6 = (int)local_1c;
        piVar6[-1] = (int)local_38;
        piVar6[-2] = 0x8284ebb;
        bVar3 = __gnu_cxx::operator==((__normal_iterator *)piVar6[-1],(__normal_iterator *)*piVar6);
        if (bVar3) {
          return 0;
        }
        piVar6 = piVar6 + -1;
      }
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
