# MakeReward

`_ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib`

`CTournamentDungeonReward::MakeReward(std::map<int, TournamentRewardRate, std::less<int>, std::allocator<std::pair<int const, TournamentRewardRate> > > const*, TournamentRewardItemRate const*, int, bool)`

| 类 | 地址 |
|---|---|
| `CTournamentDungeonReward` | `0x08284890` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284890  _ZN24CTournamentDungeonReward10MakeRewardEPKSt3mapIi20TournamentRewardRateSt4lessIiESaISt4pairIKiS1_EEEPK24TournamentRewardItemRateib
#           CTournamentDungeonReward::MakeReward(std::map<int, TournamentRewardRate, std::less<int>, std::allocator<std::pair<int const, TournamentRewardRate> > > const*, TournamentRewardItemRate const*, int, bool)
# range [0x08284890, 0x08284a23]
08284890 +0x000:  push   %ebp
08284891 +0x001:  mov    %esp,%ebp
08284893 +0x003:  sub    $0x68,%esp
08284896 +0x006:  mov    0x18(%ebp),%eax
08284899 +0x009:  mov    %al,-0x4c(%ebp)
0828489c +0x00c:  cmpl   $0x0,0xc(%ebp)
082848a0 +0x010:  je     08284a1a <+0x18a>
082848a6 +0x016:  movl   $0x0,-0x18(%ebp)
082848ad +0x01d:  cmpb   $0x0,-0x4c(%ebp)
082848b1 +0x021:  je     082848bb <+0x2b>
082848b3 +0x023:  mov    0x14(%ebp),%eax
082848b6 +0x026:  mov    %eax,-0x18(%ebp)
082848b9 +0x029:  jmp    082848c4 <+0x34>
082848bb +0x02b:  mov    0x14(%ebp),%eax
082848be +0x02e:  sub    $0x1,%eax
082848c1 +0x031:  mov    %eax,-0x18(%ebp)
082848c4 +0x034:  mov    -0x18(%ebp),%eax
082848c7 +0x037:  test   %eax,%eax
082848c9 +0x039:  jns    082848d4 <+0x44>
082848cb +0x03b:  movl   $0x0,-0x18(%ebp)
082848d2 +0x042:  jmp    082848e3 <+0x53>
082848d4 +0x044:  mov    -0x18(%ebp),%eax
082848d7 +0x047:  cmp    $0x4,%eax
082848da +0x04a:  jle    082848e3 <+0x53>
082848dc +0x04c:  movl   $0x4,-0x18(%ebp)
082848e3 +0x053:  lea    -0x1c(%ebp),%eax
082848e6 +0x056:  lea    -0x18(%ebp),%edx
082848e9 +0x059:  mov    %edx,0x8(%esp)
082848ed +0x05d:  mov    0xc(%ebp),%edx
082848f0 +0x060:  mov    %edx,0x4(%esp)
082848f4 +0x064:  mov    %eax,(%esp)
082848f7 +0x067:  call   0828555a <_GLOBAL__I__ZN20TournamentRewardType5ClearEv+0x31>  ; global constructors keyed to TournamentRewardType::Clear()+0x31
082848fc +0x06c:  sub    $0x4,%esp
082848ff +0x06f:  lea    -0x14(%ebp),%eax
08284902 +0x072:  mov    0xc(%ebp),%edx
08284905 +0x075:  mov    %edx,0x4(%esp)
08284909 +0x079:  mov    %eax,(%esp)
0828490c +0x07c:  call   08285586 <_GLOBAL__I__ZN20TournamentRewardType5ClearEv+0x5d>  ; global constructors keyed to TournamentRewardType::Clear()+0x5d
08284911 +0x081:  sub    $0x4,%esp
08284914 +0x084:  lea    -0x14(%ebp),%eax
08284917 +0x087:  mov    %eax,0x4(%esp)
0828491b +0x08b:  lea    -0x1c(%ebp),%eax
0828491e +0x08e:  mov    %eax,(%esp)
08284921 +0x091:  call   082855ac <_GLOBAL__I__ZN20TournamentRewardType5ClearEv+0x83>  ; global constructors keyed to TournamentRewardType::Clear()+0x83
08284926 +0x096:  test   %al,%al
08284928 +0x098:  jne    08284a1d <+0x18d>
0828492e +0x09e:  lea    -0x1c(%ebp),%eax
08284931 +0x0a1:  mov    %eax,(%esp)
08284934 +0x0a4:  call   082855c0 <_GLOBAL__I__ZN20TournamentRewardType5ClearEv+0x97>  ; global constructors keyed to TournamentRewardType::Clear()+0x97
08284939 +0x0a9:  mov    0x4(%eax),%edx
0828493c +0x0ac:  mov    %edx,-0x2c(%ebp)
0828493f +0x0af:  mov    0x8(%eax),%edx
08284942 +0x0b2:  mov    %edx,-0x28(%ebp)
08284945 +0x0b5:  mov    0xc(%eax),%edx
08284948 +0x0b8:  mov    %edx,-0x24(%ebp)
0828494b +0x0bb:  mov    0x10(%eax),%eax
0828494e +0x0be:  mov    %eax,-0x20(%ebp)
08284951 +0x0c1:  mov    0x10(%ebp),%eax
08284954 +0x0c4:  mov    %eax,0xc(%esp)
08284958 +0x0c8:  lea    -0x2c(%ebp),%eax
0828495b +0x0cb:  mov    %eax,0x8(%esp)
0828495f +0x0cf:  movl   $0x0,0x4(%esp)
08284967 +0x0d7:  mov    0x8(%ebp),%eax
0828496a +0x0da:  mov    %eax,(%esp)
0828496d +0x0dd:  call   08284a24 <_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate>  ; CTournamentDungeonReward::DecisionRewardType(ENUM_TOURNAMENT_REWARD_CARD_TYPE, TournamentRewardRate&, TournamentRewardItemRate const*)
08284972 +0x0e2:  cmpl   $0x4,0x14(%ebp)
08284976 +0x0e6:  jne    08284a21 <+0x191>
0828497c +0x0ec:  cmpb   $0x0,-0x4c(%ebp)
08284980 +0x0f0:  je     08284a21 <+0x191>
08284986 +0x0f6:  movl   $0x5,-0x10(%ebp)
0828498d +0x0fd:  lea    -0x30(%ebp),%eax
08284990 +0x100:  lea    -0x10(%ebp),%edx
08284993 +0x103:  mov    %edx,0x8(%esp)
08284997 +0x107:  mov    0xc(%ebp),%edx
0828499a +0x10a:  mov    %edx,0x4(%esp)
0828499e +0x10e:  mov    %eax,(%esp)
082849a1 +0x111:  call   0828555a <_GLOBAL__I__ZN20TournamentRewardType5ClearEv+0x31>  ; global constructors keyed to TournamentRewardType::Clear()+0x31
082849a6 +0x116:  sub    $0x4,%esp
082849a9 +0x119:  lea    -0xc(%ebp),%eax
082849ac +0x11c:  mov    0xc(%ebp),%edx
082849af +0x11f:  mov    %edx,0x4(%esp)
082849b3 +0x123:  mov    %eax,(%esp)
082849b6 +0x126:  call   08285586 <_GLOBAL__I__ZN20TournamentRewardType5ClearEv+0x5d>  ; global constructors keyed to TournamentRewardType::Clear()+0x5d
082849bb +0x12b:  sub    $0x4,%esp
082849be +0x12e:  lea    -0xc(%ebp),%eax
082849c1 +0x131:  mov    %eax,0x4(%esp)
082849c5 +0x135:  lea    -0x30(%ebp),%eax
082849c8 +0x138:  mov    %eax,(%esp)
082849cb +0x13b:  call   082855ac <_GLOBAL__I__ZN20TournamentRewardType5ClearEv+0x83>  ; global constructors keyed to TournamentRewardType::Clear()+0x83
082849d0 +0x140:  test   %al,%al
082849d2 +0x142:  jne    08284a20 <+0x190>
082849d4 +0x144:  lea    -0x30(%ebp),%eax
082849d7 +0x147:  mov    %eax,(%esp)
082849da +0x14a:  call   082855c0 <_GLOBAL__I__ZN20TournamentRewardType5ClearEv+0x97>  ; global constructors keyed to TournamentRewardType::Clear()+0x97
082849df +0x14f:  mov    0x4(%eax),%edx
082849e2 +0x152:  mov    %edx,-0x40(%ebp)
082849e5 +0x155:  mov    0x8(%eax),%edx
082849e8 +0x158:  mov    %edx,-0x3c(%ebp)
082849eb +0x15b:  mov    0xc(%eax),%edx
082849ee +0x15e:  mov    %edx,-0x38(%ebp)
082849f1 +0x161:  mov    0x10(%eax),%eax
082849f4 +0x164:  mov    %eax,-0x34(%ebp)
082849f7 +0x167:  mov    0x10(%ebp),%eax
082849fa +0x16a:  mov    %eax,0xc(%esp)
082849fe +0x16e:  lea    -0x40(%ebp),%eax
08284a01 +0x171:  mov    %eax,0x8(%esp)
08284a05 +0x175:  movl   $0x1,0x4(%esp)
08284a0d +0x17d:  mov    0x8(%ebp),%eax
08284a10 +0x180:  mov    %eax,(%esp)
08284a13 +0x183:  call   08284a24 <_ZN24CTournamentDungeonReward18DecisionRewardTypeE32ENUM_TOURNAMENT_REWARD_CARD_TYPER20TournamentRewardRatePK24TournamentRewardItemRate>  ; CTournamentDungeonReward::DecisionRewardType(ENUM_TOURNAMENT_REWARD_CARD_TYPE, TournamentRewardRate&, TournamentRewardItemRate const*)
08284a18 +0x188:  jmp    08284a21 <+0x191>
08284a1a +0x18a:  nop
08284a1b +0x18b:  jmp    08284a21 <+0x191>
08284a1d +0x18d:  nop
08284a1e +0x18e:  jmp    08284a21 <+0x191>
08284a20 +0x190:  nop
08284a21 +0x191:  leave
08284a22 +0x192:  ret
08284a23 +0x193:  nop
```

## 反编译 C

```c
// CTournamentDungeonReward::MakeReward @ 0x8284890

/* CTournamentDungeonReward::MakeReward(std::map<int, TournamentRewardRate, std::less<int>,
   std::allocator<std::pair<int const, TournamentRewardRate> > > const*, TournamentRewardItemRate
   const*, int, bool) */

void __thiscall
CTournamentDungeonReward::MakeReward
          (CTournamentDungeonReward *this,map *param_1,TournamentRewardItemRate *param_2,int param_3
          ,bool param_4)

{
  char cVar1;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  _Rb_tree_const_iterator<std::pair<int_const,TournamentRewardRate>> local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  _Rb_tree_const_iterator<std::pair<int_const,TournamentRewardRate>> local_20 [4];
  int local_1c;
  map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
  local_18 [4];
  undefined4 local_14;
  map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
  local_10 [12];
  
  if (param_1 != (map *)0x0) {
    if (param_4) {
      local_1c = param_3;
    }
    else {
      local_1c = param_3 + -1;
    }
    if (local_1c < 0) {
      local_1c = 0;
    }
    else if (4 < local_1c) {
      local_1c = 4;
    }
    std::
    map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
    ::find((int *)local_20);
    std::
    map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,TournamentRewardRate>>::operator==
                      (local_20,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,TournamentRewardRate>>::operator->
                        (local_20);
      local_30 = *(undefined4 *)(iVar2 + 4);
      local_2c = *(undefined4 *)(iVar2 + 8);
      local_28 = *(undefined4 *)(iVar2 + 0xc);
      local_24 = *(undefined4 *)(iVar2 + 0x10);
      DecisionRewardType(this,0,&local_30,param_2);
      if ((param_3 == 4) && (param_4)) {
        local_14 = 5;
        std::
        map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
        ::find((int *)local_34);
        std::
        map<int,TournamentRewardRate,std::less<int>,std::allocator<std::pair<int_const,TournamentRewardRate>>>
        ::end(local_10);
        cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,TournamentRewardRate>>::operator==
                          (local_34,(_Rb_tree_const_iterator *)local_10);
        if (cVar1 == '\0') {
          iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,TournamentRewardRate>>::
                  operator->(local_34);
          local_44 = *(undefined4 *)(iVar2 + 4);
          local_40 = *(undefined4 *)(iVar2 + 8);
          local_3c = *(undefined4 *)(iVar2 + 0xc);
          local_38 = *(undefined4 *)(iVar2 + 0x10);
          DecisionRewardType(this,1,&local_44,param_2);
        }
      }
    }
  }
  return;
}
```
