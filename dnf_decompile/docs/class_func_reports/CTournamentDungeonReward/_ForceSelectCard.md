# _ForceSelectCard

`_ZN24CTournamentDungeonReward16_ForceSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE`

`CTournamentDungeonReward::_ForceSelectCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, std::vector<int, std::allocator<int> > const&)`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x082853b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082853b8  _ZN24CTournamentDungeonReward16_ForceSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE
#           CTournamentDungeonReward::_ForceSelectCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, std::vector<int, std::allocator<int> > const&)
# range [0x082853b8, 0x082854e8]
082853b8 +0x000:  push   %ebp
082853b9 +0x001:  mov    %esp,%ebp
082853bb +0x003:  push   %esi
082853bc +0x004:  push   %ebx
082853bd +0x005:  sub    $0x20,%esp
082853c0 +0x008:  mov    0xc(%ebp),%eax
082853c3 +0x00b:  cmp    $0x1,%eax
082853c6 +0x00e:  jg     082854de <+0x126>
082853cc +0x014:  movl   $0x0,-0xc(%ebp)
082853d3 +0x01b:  jmp    082854cd <+0x115>
082853d8 +0x020:  mov    0xc(%ebp),%edx
082853db +0x023:  mov    -0xc(%ebp),%ecx
082853de +0x026:  mov    0x8(%ebp),%ebx
082853e1 +0x029:  mov    %ecx,%eax
082853e3 +0x02b:  add    %eax,%eax
082853e5 +0x02d:  add    %ecx,%eax
082853e7 +0x02f:  lea    0x0(,%eax,4),%ecx
082853ee +0x036:  mov    %edx,%eax
082853f0 +0x038:  add    %eax,%eax
082853f2 +0x03a:  add    %edx,%eax
082853f4 +0x03c:  shl    $0x3,%eax
082853f7 +0x03f:  lea    (%ecx,%eax,1),%eax
082853fa +0x042:  movzbl 0x10(%eax,%ebx,1),%eax
082853ff +0x047:  cmp    $0xff,%al
08285401 +0x049:  jne    082854c9 <+0x111>
08285407 +0x04f:  lea    -0x18(%ebp),%eax
0828540a +0x052:  mov    0x10(%ebp),%edx
0828540d +0x055:  mov    %edx,0x4(%esp)
08285411 +0x059:  mov    %eax,(%esp)
08285414 +0x05c:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
08285419 +0x061:  sub    $0x4,%esp
0828541c +0x064:  jmp    0828549a <+0xe2>
0828541e +0x066:  lea    -0x18(%ebp),%eax
08285421 +0x069:  mov    %eax,(%esp)
08285424 +0x06c:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08285429 +0x071:  mov    (%eax),%eax
0828542b +0x073:  mov    %eax,0x8(%esp)
0828542f +0x077:  mov    0xc(%ebp),%eax
08285432 +0x07a:  mov    %eax,0x4(%esp)
08285436 +0x07e:  mov    0x8(%ebp),%eax
08285439 +0x081:  mov    %eax,(%esp)
0828543c +0x084:  call   08285284 <_ZN24CTournamentDungeonReward18isMemberSelectCardE32ENUM_TOURNAMENT_REWARD_CARD_TYPEi>  ; CTournamentDungeonReward::isMemberSelectCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, int)
08285441 +0x089:  xor    $0x1,%eax
08285444 +0x08c:  test   %al,%al
08285446 +0x08e:  je     0828547d <+0xc5>
08285448 +0x090:  mov    0xc(%ebp),%ebx
0828544b +0x093:  mov    -0xc(%ebp),%esi
0828544e +0x096:  lea    -0x18(%ebp),%eax
08285451 +0x099:  mov    %eax,(%esp)
08285454 +0x09c:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08285459 +0x0a1:  mov    (%eax),%eax
0828545b +0x0a3:  mov    %eax,%ecx
0828545d +0x0a5:  mov    0x8(%ebp),%edx
08285460 +0x0a8:  mov    %esi,%eax
08285462 +0x0aa:  add    %eax,%eax
08285464 +0x0ac:  add    %esi,%eax
08285466 +0x0ae:  lea    0x0(,%eax,4),%esi
0828546d +0x0b5:  mov    %ebx,%eax
0828546f +0x0b7:  add    %eax,%eax
08285471 +0x0b9:  add    %ebx,%eax
08285473 +0x0bb:  shl    $0x3,%eax
08285476 +0x0be:  lea    (%esi,%eax,1),%eax
08285479 +0x0c1:  mov    %cl,0x10(%eax,%edx,1)
0828547d +0x0c5:  lea    -0x10(%ebp),%eax
08285480 +0x0c8:  movl   $0x0,0x8(%esp)
08285488 +0x0d0:  lea    -0x18(%ebp),%edx
0828548b +0x0d3:  mov    %edx,0x4(%esp)
0828548f +0x0d7:  mov    %eax,(%esp)
08285492 +0x0da:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08285497 +0x0df:  sub    $0x4,%esp
0828549a +0x0e2:  lea    -0x14(%ebp),%eax
0828549d +0x0e5:  mov    0x10(%ebp),%edx
082854a0 +0x0e8:  mov    %edx,0x4(%esp)
082854a4 +0x0ec:  mov    %eax,(%esp)
082854a7 +0x0ef:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
082854ac +0x0f4:  sub    $0x4,%esp
082854af +0x0f7:  lea    -0x14(%ebp),%eax
082854b2 +0x0fa:  mov    %eax,0x4(%esp)
082854b6 +0x0fe:  lea    -0x18(%ebp),%eax
082854b9 +0x101:  mov    %eax,(%esp)
082854bc +0x104:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
082854c1 +0x109:  test   %al,%al
082854c3 +0x10b:  jne    0828541e <+0x66>
082854c9 +0x111:  addl   $0x1,-0xc(%ebp)
082854cd +0x115:  cmpl   $0x1,-0xc(%ebp)
082854d1 +0x119:  setle  %al
082854d4 +0x11c:  test   %al,%al
082854d6 +0x11e:  jne    082853d8 <+0x20>
082854dc +0x124:  jmp    082854df <+0x127>
082854de +0x126:  nop
082854df +0x127:  lea    -0x8(%ebp),%esp
082854e2 +0x12a:  add    $0x0,%esp
082854e5 +0x12d:  pop    %ebx
082854e6 +0x12e:  pop    %esi
082854e7 +0x12f:  pop    %ebp
082854e8 +0x130:  ret
```

## 反编译 C

```c
// CTournamentDungeonReward::_ForceSelectCard @ 0x82853b8

/* CTournamentDungeonReward::_ForceSelectCard(ENUM_TOURNAMENT_REWARD_CARD_TYPE, std::vector<int,
   std::allocator<int> > const&) */

void CTournamentDungeonReward::_ForceSelectCard(CTournamentDungeonReward *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_14 [4];
  int local_10;
  
  if (param_2 < 2) {
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      if (param_1[local_10 * 0xc + param_2 * 0x18 + 0x10] == (CTournamentDungeonReward)0xff) {
        std::vector<int,std::allocator<int>>::begin();
        while( true ) {
          std::vector<int,std::allocator<int>>::end();
          bVar3 = __gnu_cxx::operator!=(local_1c,local_18);
          if (!bVar3) break;
          puVar4 = (undefined4 *)
                   __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                   operator*(local_1c);
          cVar2 = isMemberSelectCard(param_1,param_2,*puVar4);
          iVar1 = local_10;
          if (cVar2 != '\x01') {
            puVar4 = (undefined4 *)
                     __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                     operator*(local_1c);
            param_1[iVar1 * 0xc + param_2 * 0x18 + 0x10] = SUB41(*puVar4,0);
          }
          __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                    (local_14,(int)local_1c);
        }
      }
    }
  }
  return;
}
```
