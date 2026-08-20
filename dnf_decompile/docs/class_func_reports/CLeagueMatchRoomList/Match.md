# Match

`_ZN20CLeagueMatchRoomList5MatchEP6IMatchPS1_`

`CLeagueMatchRoomList::Match(IMatch*, IMatch**)`

| 类 | 地址 |
|---|---|
| `CLeagueMatchRoomList` | `0x08567d00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08567d00  _ZN20CLeagueMatchRoomList5MatchEP6IMatchPS1_
#           CLeagueMatchRoomList::Match(IMatch*, IMatch**)
# range [0x08567d00, 0x08567e9d]
08567d00 +0x000:  push   %ebp
08567d01 +0x001:  mov    %esp,%ebp
08567d03 +0x003:  sub    $0x38,%esp
08567d06 +0x006:  movb   $0x0,-0x15(%ebp)
08567d0a +0x00a:  mov    $0x0,%eax
08567d0f +0x00f:  mov    %eax,-0x14(%ebp)
08567d12 +0x012:  mov    0x8(%ebp),%eax
08567d15 +0x015:  add    $0x4,%eax
08567d18 +0x018:  mov    %eax,(%esp)
08567d1b +0x01b:  call   08569bbc <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1586>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1586
08567d20 +0x020:  test   %eax,%eax
08567d22 +0x022:  sete   %al
08567d25 +0x025:  test   %al,%al
08567d27 +0x027:  je     08567d33 <+0x33>
08567d29 +0x029:  mov    $0x0,%eax
08567d2e +0x02e:  jmp    08567e9b <+0x19b>
08567d33 +0x033:  mov    0x8(%ebp),%eax
08567d36 +0x036:  lea    0x4(%eax),%edx
08567d39 +0x039:  lea    -0x24(%ebp),%eax
08567d3c +0x03c:  mov    %edx,0x4(%esp)
08567d40 +0x040:  mov    %eax,(%esp)
08567d43 +0x043:  call   08569bd0 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x159a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x159a
08567d48 +0x048:  sub    $0x4,%esp
08567d4b +0x04b:  mov    0x8(%ebp),%eax
08567d4e +0x04e:  lea    0x4(%eax),%edx
08567d51 +0x051:  lea    -0x28(%ebp),%eax
08567d54 +0x054:  mov    %edx,0x4(%esp)
08567d58 +0x058:  mov    %eax,(%esp)
08567d5b +0x05b:  call   08569bf6 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x15c0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x15c0
08567d60 +0x060:  sub    $0x4,%esp
08567d63 +0x063:  jmp    08567e08 <+0x108>
08567d68 +0x068:  lea    -0x28(%ebp),%eax
08567d6b +0x06b:  mov    %eax,(%esp)
08567d6e +0x06e:  call   08569c4e <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1618>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1618
08567d73 +0x073:  mov    (%eax),%eax
08567d75 +0x075:  mov    %eax,-0x10(%ebp)
08567d78 +0x078:  mov    -0x10(%ebp),%eax
08567d7b +0x07b:  cmp    0xc(%ebp),%eax
08567d7e +0x07e:  je     08567df9 <+0xf9>
08567d80 +0x080:  mov    0xc(%ebp),%eax
08567d83 +0x083:  mov    (%eax),%eax
08567d85 +0x085:  add    $0x78,%eax
08567d88 +0x088:  mov    (%eax),%edx
08567d8a +0x08a:  mov    -0x10(%ebp),%eax
08567d8d +0x08d:  mov    %eax,0x4(%esp)
08567d91 +0x091:  mov    0xc(%ebp),%eax
08567d94 +0x094:  mov    %eax,(%esp)
08567d97 +0x097:  call   *%edx
08567d99 +0x099:  xor    $0x1,%eax
08567d9c +0x09c:  test   %al,%al
08567d9e +0x09e:  jne    08567dfc <+0xfc>
08567da0 +0x0a0:  mov    0xc(%ebp),%eax
08567da3 +0x0a3:  mov    (%eax),%eax
08567da5 +0x0a5:  add    $0xc,%eax
08567da8 +0x0a8:  mov    (%eax),%edx
08567daa +0x0aa:  mov    -0x10(%ebp),%eax
08567dad +0x0ad:  mov    %eax,0x4(%esp)
08567db1 +0x0b1:  mov    0xc(%ebp),%eax
08567db4 +0x0b4:  mov    %eax,(%esp)
08567db7 +0x0b7:  call   *%edx
08567db9 +0x0b9:  fstps  -0xc(%ebp)
08567dbc +0x0bc:  movzbl -0x15(%ebp),%eax
08567dc0 +0x0c0:  xor    $0x1,%eax
08567dc3 +0x0c3:  test   %al,%al
08567dc5 +0x0c5:  je     08567dd7 <+0xd7>
08567dc7 +0x0c7:  mov    -0xc(%ebp),%eax
08567dca +0x0ca:  mov    %eax,-0x14(%ebp)
08567dcd +0x0cd:  mov    -0x28(%ebp),%eax
08567dd0 +0x0d0:  mov    %eax,-0x24(%ebp)
08567dd3 +0x0d3:  movb   $0x1,-0x15(%ebp)
08567dd7 +0x0d7:  flds   -0x14(%ebp)
08567dda +0x0da:  flds   -0xc(%ebp)
08567ddd +0x0dd:  fxch   %st(1)
08567ddf +0x0df:  fucompp
08567de1 +0x0e1:  fnstsw %ax
08567de3 +0x0e3:  sahf
08567de4 +0x0e4:  seta   %al
08567de7 +0x0e7:  test   %al,%al
08567de9 +0x0e9:  je     08567dfd <+0xfd>
08567deb +0x0eb:  mov    -0xc(%ebp),%eax
08567dee +0x0ee:  mov    %eax,-0x14(%ebp)
08567df1 +0x0f1:  mov    -0x28(%ebp),%eax
08567df4 +0x0f4:  mov    %eax,-0x24(%ebp)
08567df7 +0x0f7:  jmp    08567dfd <+0xfd>
08567df9 +0x0f9:  nop
08567dfa +0x0fa:  jmp    08567dfd <+0xfd>
08567dfc +0x0fc:  nop
08567dfd +0x0fd:  lea    -0x28(%ebp),%eax
08567e00 +0x100:  mov    %eax,(%esp)
08567e03 +0x103:  call   08569c30 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x15fa>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x15fa
08567e08 +0x108:  mov    0x8(%ebp),%eax
08567e0b +0x10b:  lea    0x4(%eax),%edx
08567e0e +0x10e:  lea    -0x20(%ebp),%eax
08567e11 +0x111:  mov    %edx,0x4(%esp)
08567e15 +0x115:  mov    %eax,(%esp)
08567e18 +0x118:  call   08569bd0 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x159a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x159a
08567e1d +0x11d:  sub    $0x4,%esp
08567e20 +0x120:  lea    -0x20(%ebp),%eax
08567e23 +0x123:  mov    %eax,0x4(%esp)
08567e27 +0x127:  lea    -0x28(%ebp),%eax
08567e2a +0x12a:  mov    %eax,(%esp)
08567e2d +0x12d:  call   08569c1c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x15e6>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x15e6
08567e32 +0x132:  test   %al,%al
08567e34 +0x134:  jne    08567d68 <+0x68>
08567e3a +0x13a:  mov    0x8(%ebp),%eax
08567e3d +0x13d:  lea    0x4(%eax),%edx
08567e40 +0x140:  lea    -0x1c(%ebp),%eax
08567e43 +0x143:  mov    %edx,0x4(%esp)
08567e47 +0x147:  mov    %eax,(%esp)
08567e4a +0x14a:  call   08569bd0 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x159a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x159a
08567e4f +0x14f:  sub    $0x4,%esp
08567e52 +0x152:  lea    -0x1c(%ebp),%eax
08567e55 +0x155:  mov    %eax,0x4(%esp)
08567e59 +0x159:  lea    -0x24(%ebp),%eax
08567e5c +0x15c:  mov    %eax,(%esp)
08567e5f +0x15f:  call   08569c1c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x15e6>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x15e6
08567e64 +0x164:  test   %al,%al
08567e66 +0x166:  je     08567e96 <+0x196>
08567e68 +0x168:  lea    -0x24(%ebp),%eax
08567e6b +0x16b:  mov    %eax,(%esp)
08567e6e +0x16e:  call   08569c4e <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1618>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1618
08567e73 +0x173:  mov    (%eax),%edx
08567e75 +0x175:  mov    0x10(%ebp),%eax
08567e78 +0x178:  mov    %edx,(%eax)
08567e7a +0x17a:  mov    0x8(%ebp),%eax
08567e7d +0x17d:  lea    0x4(%eax),%edx
08567e80 +0x180:  mov    -0x24(%ebp),%eax
08567e83 +0x183:  mov    %eax,0x4(%esp)
08567e87 +0x187:  mov    %edx,(%esp)
08567e8a +0x18a:  call   08569c5c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1626>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1626
08567e8f +0x18f:  mov    $0x1,%eax
08567e94 +0x194:  jmp    08567e9b <+0x19b>
08567e96 +0x196:  mov    $0x0,%eax
08567e9b +0x19b:  leave
08567e9c +0x19c:  ret
08567e9d +0x19d:  nop
```

## 反编译 C

```c
// CLeagueMatchRoomList::Match @ 0x8567d00

/* CLeagueMatchRoomList::Match(IMatch*, IMatch**) */

undefined4 __thiscall
CLeagueMatchRoomList::Match(CLeagueMatchRoomList *this,IMatch *param_1,IMatch **param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  longdouble lVar6;
  undefined4 local_2c;
  undefined4 local_28;
  map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>> local_24 [4];
  map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>> local_20 [7];
  char local_19;
  float local_18;
  IMatch *local_14;
  float local_10;
  
  local_19 = '\0';
  local_18 = 0.0;
  iVar2 = std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::size
                    ((map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>
                      *)(this + 4));
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::end
              ((map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>> *)
               &local_28);
    std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::begin
              ((map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>> *)
               &local_2c);
    while( true ) {
      std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::end
                (local_24);
      cVar1 = std::_Rb_tree_iterator<std::pair<IMatch*const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<IMatch*const,int>> *)&local_2c,
                         (_Rb_tree_iterator *)local_24);
      if (cVar1 == '\0') break;
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<IMatch*const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<IMatch*const,int>> *)&local_2c);
      local_14 = (IMatch *)*piVar4;
      if ((local_14 != param_1) &&
         (cVar1 = (**(code **)(*(int *)param_1 + 0x78))(param_1,local_14), cVar1 == '\x01')) {
        lVar6 = (longdouble)(**(code **)(*(int *)param_1 + 0xc))(param_1,local_14);
        local_10 = (float)lVar6;
        if (local_19 != '\x01') {
          local_28 = local_2c;
          local_19 = '\x01';
          local_18 = local_10;
        }
        if (local_10 < local_18) {
          local_28 = local_2c;
          local_18 = local_10;
        }
      }
      std::_Rb_tree_iterator<std::pair<IMatch*const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<IMatch*const,int>> *)&local_2c);
    }
    std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::end
              (local_20);
    cVar1 = std::_Rb_tree_iterator<std::pair<IMatch*const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<IMatch*const,int>> *)&local_28,
                       (_Rb_tree_iterator *)local_20);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      puVar5 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<IMatch*const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<IMatch*const,int>> *)&local_28);
      *param_2 = (IMatch *)*puVar5;
      std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::erase
                ((map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>> *)
                 (this + 4),local_28);
      uVar3 = 1;
    }
  }
  return uVar3;
}
```
