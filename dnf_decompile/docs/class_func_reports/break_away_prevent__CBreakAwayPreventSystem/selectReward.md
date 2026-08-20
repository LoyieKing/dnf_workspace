# selectReward

`_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser`

`break_away_prevent::CBreakAwayPreventSystem::selectReward(int, int, CUser*)`

| 类 | 地址 |
|---|---|
| `break_away_prevent::CBreakAwayPreventSystem` | `0x0831c872` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c872  _ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser
#           break_away_prevent::CBreakAwayPreventSystem::selectReward(int, int, CUser*)
# range [0x0831c872, 0x0831ca59]
0831c872 +0x000:  push   %ebp
0831c873 +0x001:  mov    %esp,%ebp
0831c875 +0x003:  sub    $0x58,%esp
0831c878 +0x006:  mov    0xc(%ebp),%edx
0831c87b +0x009:  mov    %edx,%eax
0831c87d +0x00b:  add    %eax,%eax
0831c87f +0x00d:  add    %edx,%eax
0831c881 +0x00f:  add    $0x2f0,%eax
0831c886 +0x014:  add    0x8(%ebp),%eax
0831c889 +0x017:  lea    0xc(%eax),%ecx
0831c88c +0x01a:  mov    0x8(%ebp),%eax
0831c88f +0x01d:  lea    0x2e4(%eax),%edx
0831c895 +0x023:  lea    -0x24(%ebp),%eax
0831c898 +0x026:  mov    %ecx,0x8(%esp)
0831c89c +0x02a:  mov    %edx,0x4(%esp)
0831c8a0 +0x02e:  mov    %eax,(%esp)
0831c8a3 +0x031:  call   0831d6b2 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x46b>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x46b
0831c8a8 +0x036:  sub    $0x4,%esp
0831c8ab +0x039:  mov    0x8(%ebp),%eax
0831c8ae +0x03c:  lea    0x2e4(%eax),%edx
0831c8b4 +0x042:  lea    -0x20(%ebp),%eax
0831c8b7 +0x045:  mov    %edx,0x4(%esp)
0831c8bb +0x049:  mov    %eax,(%esp)
0831c8be +0x04c:  call   0831d6de <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x497>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x497
0831c8c3 +0x051:  sub    $0x4,%esp
0831c8c6 +0x054:  lea    -0x20(%ebp),%eax
0831c8c9 +0x057:  mov    %eax,0x4(%esp)
0831c8cd +0x05b:  lea    -0x24(%ebp),%eax
0831c8d0 +0x05e:  mov    %eax,(%esp)
0831c8d3 +0x061:  call   0831d82e <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x5e7>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x5e7
0831c8d8 +0x066:  test   %al,%al
0831c8da +0x068:  je     0831c8e6 <+0x74>
0831c8dc +0x06a:  mov    $0x0,%eax
0831c8e1 +0x06f:  jmp    0831ca57 <+0x1e5>
0831c8e6 +0x074:  lea    -0x24(%ebp),%eax
0831c8e9 +0x077:  mov    %eax,(%esp)
0831c8ec +0x07a:  call   0831d718 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x4d1>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x4d1
0831c8f1 +0x07f:  add    $0x4,%eax
0831c8f4 +0x082:  mov    %eax,-0x18(%ebp)
0831c8f7 +0x085:  mov    0x10(%ebp),%eax
0831c8fa +0x088:  mov    %eax,-0x14(%ebp)
0831c8fd +0x08b:  cmpl   $0x0,-0x14(%ebp)
0831c901 +0x08f:  jns    0831c90d <+0x9b>
0831c903 +0x091:  mov    $0x0,%eax
0831c908 +0x096:  jmp    0831ca57 <+0x1e5>
0831c90d +0x09b:  lea    -0x38(%ebp),%eax
0831c910 +0x09e:  mov    %eax,(%esp)
0831c913 +0x0a1:  call   0831d4ca <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x283>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x283
0831c918 +0x0a6:  mov    0xc(%ebp),%eax
0831c91b +0x0a9:  mov    %eax,-0x28(%ebp)
0831c91e +0x0ac:  lea    -0x3c(%ebp),%eax
0831c921 +0x0af:  mov    -0x18(%ebp),%edx
0831c924 +0x0b2:  mov    %edx,0x4(%esp)
0831c928 +0x0b6:  mov    %eax,(%esp)
0831c92b +0x0b9:  call   0831d842 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x5fb>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x5fb
0831c930 +0x0be:  sub    $0x4,%esp
0831c933 +0x0c1:  jmp    0831ca11 <+0x19f>
0831c938 +0x0c6:  lea    -0x3c(%ebp),%eax
0831c93b +0x0c9:  mov    %eax,(%esp)
0831c93e +0x0cc:  call   0831d8b4 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x66d>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x66d
0831c943 +0x0d1:  mov    (%eax),%eax
0831c945 +0x0d3:  mov    %eax,-0x10(%ebp)
0831c948 +0x0d6:  lea    -0x3c(%ebp),%eax
0831c94b +0x0d9:  mov    %eax,(%esp)
0831c94e +0x0dc:  call   0831d8b4 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x66d>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x66d
0831c953 +0x0e1:  mov    0x4(%eax),%eax
0831c956 +0x0e4:  mov    %eax,-0xc(%ebp)
0831c959 +0x0e7:  lea    -0x3c(%ebp),%eax
0831c95c +0x0ea:  mov    %eax,(%esp)
0831c95f +0x0ed:  call   0831d8b4 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x66d>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x66d
0831c964 +0x0f2:  mov    0x8(%eax),%eax
0831c967 +0x0f5:  mov    %eax,-0x38(%ebp)
0831c96a +0x0f8:  lea    -0x3c(%ebp),%eax
0831c96d +0x0fb:  mov    %eax,(%esp)
0831c970 +0x0fe:  call   0831d8b4 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x66d>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x66d
0831c975 +0x103:  mov    0xc(%eax),%eax
0831c978 +0x106:  mov    %eax,-0x34(%ebp)
0831c97b +0x109:  lea    -0x3c(%ebp),%eax
0831c97e +0x10c:  mov    %eax,(%esp)
0831c981 +0x10f:  call   0831d8b4 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x66d>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x66d
0831c986 +0x114:  mov    0x10(%eax),%eax
0831c989 +0x117:  mov    %eax,-0x30(%ebp)
0831c98c +0x11a:  mov    -0x14(%ebp),%eax
0831c98f +0x11d:  mov    %eax,-0x2c(%ebp)
0831c992 +0x120:  mov    -0x10(%ebp),%eax
0831c995 +0x123:  cmp    -0x14(%ebp),%eax
0831c998 +0x126:  jle    0831c9a4 <+0x132>
0831c99a +0x128:  mov    $0x0,%eax
0831c99f +0x12d:  jmp    0831ca57 <+0x1e5>
0831c9a4 +0x132:  mov    -0x10(%ebp),%eax
0831c9a7 +0x135:  cmp    -0x14(%ebp),%eax
0831c9aa +0x138:  jg     0831ca06 <+0x194>
0831c9ac +0x13a:  mov    -0xc(%ebp),%eax
0831c9af +0x13d:  cmp    -0x14(%ebp),%eax
0831c9b2 +0x140:  jl     0831ca06 <+0x194>
0831c9b4 +0x142:  lea    -0x3c(%ebp),%eax
0831c9b7 +0x145:  mov    %eax,(%esp)
0831c9ba +0x148:  call   0831d8b4 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x66d>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x66d
0831c9bf +0x14d:  mov    0x8(%eax),%eax
0831c9c2 +0x150:  mov    %eax,-0x38(%ebp)
0831c9c5 +0x153:  lea    -0x3c(%ebp),%eax
0831c9c8 +0x156:  mov    %eax,(%esp)
0831c9cb +0x159:  call   0831d8b4 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x66d>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x66d
0831c9d0 +0x15e:  mov    0xc(%eax),%eax
0831c9d3 +0x161:  mov    %eax,-0x34(%ebp)
0831c9d6 +0x164:  lea    -0x3c(%ebp),%eax
0831c9d9 +0x167:  mov    %eax,(%esp)
0831c9dc +0x16a:  call   0831d8b4 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x66d>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x66d
0831c9e1 +0x16f:  mov    0x10(%eax),%eax
0831c9e4 +0x172:  mov    %eax,-0x30(%ebp)
0831c9e7 +0x175:  mov    -0x14(%ebp),%eax
0831c9ea +0x178:  mov    %eax,-0x2c(%ebp)
0831c9ed +0x17b:  lea    -0x38(%ebp),%eax
0831c9f0 +0x17e:  mov    %eax,0x4(%esp)
0831c9f4 +0x182:  mov    0x14(%ebp),%eax
0831c9f7 +0x185:  mov    %eax,(%esp)
0831c9fa +0x188:  call   0831d528 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x2e1>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x2e1
0831c9ff +0x18d:  mov    $0x1,%eax
0831ca04 +0x192:  jmp    0831ca57 <+0x1e5>
0831ca06 +0x194:  lea    -0x3c(%ebp),%eax
0831ca09 +0x197:  mov    %eax,(%esp)
0831ca0c +0x19a:  call   0831d8a0 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x659>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x659
0831ca11 +0x19f:  lea    -0x1c(%ebp),%eax
0831ca14 +0x1a2:  mov    -0x18(%ebp),%edx
0831ca17 +0x1a5:  mov    %edx,0x4(%esp)
0831ca1b +0x1a9:  mov    %eax,(%esp)
0831ca1e +0x1ac:  call   0831d868 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x621>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x621
0831ca23 +0x1b1:  sub    $0x4,%esp
0831ca26 +0x1b4:  lea    -0x1c(%ebp),%eax
0831ca29 +0x1b7:  mov    %eax,0x4(%esp)
0831ca2d +0x1bb:  lea    -0x3c(%ebp),%eax
0831ca30 +0x1be:  mov    %eax,(%esp)
0831ca33 +0x1c1:  call   0831d88c <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x645>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x645
0831ca38 +0x1c6:  test   %al,%al
0831ca3a +0x1c8:  jne    0831c938 <+0xc6>
0831ca40 +0x1ce:  lea    -0x38(%ebp),%eax
0831ca43 +0x1d1:  mov    %eax,0x4(%esp)
0831ca47 +0x1d5:  mov    0x14(%ebp),%eax
0831ca4a +0x1d8:  mov    %eax,(%esp)
0831ca4d +0x1db:  call   0831d528 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x2e1>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x2e1
0831ca52 +0x1e0:  mov    $0x1,%eax
0831ca57 +0x1e5:  leave
0831ca58 +0x1e6:  ret
0831ca59 +0x1e7:  nop
```

## 反编译 C

```c
// break_away_prevent::CBreakAwayPreventSystem::selectReward @ 0x831c872

/* break_away_prevent::CBreakAwayPreventSystem::selectReward(int, int, CUser*) */

undefined4 __thiscall
break_away_prevent::CBreakAwayPreventSystem::selectReward
          (CBreakAwayPreventSystem *this,int param_1,int param_2,CUser *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  _List_iterator<STRewardData> local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  STRewardDataKey local_28 [4];
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  local_24 [4];
  _List_iterator local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  std::
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  ::find(local_28);
  std::
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  ::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>>::operator==
                    ((_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>> *)
                     local_28,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    local_1c = std::_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>>::operator->
                         ((_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>> *)
                          local_28);
    local_1c = local_1c + 4;
    local_18 = param_2;
    if (param_2 < 0) {
      uVar2 = 0;
    }
    else {
      STBreakAwayRewards::STBreakAwayRewards((STBreakAwayRewards *)&local_3c);
      local_2c = param_1;
      std::list<STRewardData,std::allocator<STRewardData>>::begin();
      while( true ) {
        std::list<STRewardData,std::allocator<STRewardData>>::end();
        cVar1 = std::_List_iterator<STRewardData>::operator!=(local_40,local_20);
        if (cVar1 == '\0') break;
        piVar3 = (int *)std::_List_iterator<STRewardData>::operator->(local_40);
        local_14 = *piVar3;
        iVar4 = std::_List_iterator<STRewardData>::operator->(local_40);
        local_10 = *(int *)(iVar4 + 4);
        iVar4 = std::_List_iterator<STRewardData>::operator->(local_40);
        local_3c = *(undefined4 *)(iVar4 + 8);
        iVar4 = std::_List_iterator<STRewardData>::operator->(local_40);
        local_38 = *(undefined4 *)(iVar4 + 0xc);
        iVar4 = std::_List_iterator<STRewardData>::operator->(local_40);
        local_34 = *(undefined4 *)(iVar4 + 0x10);
        local_30 = local_18;
        if (local_18 < local_14) {
          return 0;
        }
        if ((local_14 <= local_18) && (local_18 <= local_10)) {
          iVar4 = std::_List_iterator<STRewardData>::operator->(local_40);
          local_3c = *(undefined4 *)(iVar4 + 8);
          iVar4 = std::_List_iterator<STRewardData>::operator->(local_40);
          local_38 = *(undefined4 *)(iVar4 + 0xc);
          iVar4 = std::_List_iterator<STRewardData>::operator->(local_40);
          local_34 = *(undefined4 *)(iVar4 + 0x10);
          local_30 = local_18;
          CUser::setBreakAwayRewards(param_3,(STBreakAwayRewards *)&local_3c);
          return 1;
        }
        std::_List_iterator<STRewardData>::operator++(local_40);
      }
      CUser::setBreakAwayRewards(param_3,(STBreakAwayRewards *)&local_3c);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
