# checkUnCommonNestedItem

`_ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii`

`stBroadCastItemScript::checkUnCommonNestedItem(int, int) const`

| 类 | 地址 |
|---|---|
| `stBroadCastItemScript` | `0x08918dfe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08918dfe  _ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii
#           stBroadCastItemScript::checkUnCommonNestedItem(int, int) const
# range [0x08918dfe, 0x08918f23]
08918dfe +0x000:  push   %ebp
08918dff +0x001:  mov    %esp,%ebp
08918e01 +0x003:  sub    $0x38,%esp
08918e04 +0x006:  mov    0x8(%ebp),%eax
08918e07 +0x009:  lea    0xc(%eax),%ecx
08918e0a +0x00c:  lea    -0x1c(%ebp),%eax
08918e0d +0x00f:  lea    0xc(%ebp),%edx
08918e10 +0x012:  mov    %edx,0x8(%esp)
08918e14 +0x016:  mov    %ecx,0x4(%esp)
08918e18 +0x01a:  mov    %eax,(%esp)
08918e1b +0x01d:  call   08922102 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8de1>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8de1
08918e20 +0x022:  sub    $0x4,%esp
08918e23 +0x025:  mov    0x8(%ebp),%eax
08918e26 +0x028:  lea    0xc(%eax),%edx
08918e29 +0x02b:  lea    -0x18(%ebp),%eax
08918e2c +0x02e:  mov    %edx,0x4(%esp)
08918e30 +0x032:  mov    %eax,(%esp)
08918e33 +0x035:  call   0892212e <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8e0d>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8e0d
08918e38 +0x03a:  sub    $0x4,%esp
08918e3b +0x03d:  lea    -0x18(%ebp),%eax
08918e3e +0x040:  mov    %eax,0x4(%esp)
08918e42 +0x044:  lea    -0x1c(%ebp),%eax
08918e45 +0x047:  mov    %eax,(%esp)
08918e48 +0x04a:  call   08922154 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8e33>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8e33
08918e4d +0x04f:  test   %al,%al
08918e4f +0x051:  je     08918f1d <+0x11f>
08918e55 +0x057:  movb   $0x0,-0xd(%ebp)
08918e59 +0x05b:  cmpb   $0x0,-0xd(%ebp)
08918e5d +0x05f:  jne    08918f1d <+0x11f>
08918e63 +0x065:  lea    -0x1c(%ebp),%eax
08918e66 +0x068:  mov    %eax,(%esp)
08918e69 +0x06b:  call   08922168 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8e47>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8e47
08918e6e +0x070:  lea    0x4(%eax),%edx
08918e71 +0x073:  lea    -0x20(%ebp),%eax
08918e74 +0x076:  mov    %edx,0x4(%esp)
08918e78 +0x07a:  mov    %eax,(%esp)
08918e7b +0x07d:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
08918e80 +0x082:  sub    $0x4,%esp
08918e83 +0x085:  lea    -0x1c(%ebp),%eax
08918e86 +0x088:  mov    %eax,(%esp)
08918e89 +0x08b:  call   08922168 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8e47>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8e47
08918e8e +0x090:  lea    0x4(%eax),%edx
08918e91 +0x093:  lea    -0x24(%ebp),%eax
08918e94 +0x096:  mov    %edx,0x4(%esp)
08918e98 +0x09a:  mov    %eax,(%esp)
08918e9b +0x09d:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08918ea0 +0x0a2:  sub    $0x4,%esp
08918ea3 +0x0a5:  jmp    08918eed <+0xef>
08918ea5 +0x0a7:  lea    -0x20(%ebp),%eax
08918ea8 +0x0aa:  mov    %eax,(%esp)
08918eab +0x0ad:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08918eb0 +0x0b2:  mov    %eax,-0xc(%ebp)
08918eb3 +0x0b5:  jmp    08918eca <+0xcc>
08918eb5 +0x0b7:  mov    -0xc(%ebp),%eax
08918eb8 +0x0ba:  mov    (%eax),%eax
08918eba +0x0bc:  cmp    0x10(%ebp),%eax
08918ebd +0x0bf:  jne    08918ec6 <+0xc8>
08918ebf +0x0c1:  mov    $0x1,%eax
08918ec4 +0x0c6:  jmp    08918f22 <+0x124>
08918ec6 +0x0c8:  movb   $0x0,-0xd(%ebp)
08918eca +0x0cc:  cmpb   $0x0,-0xd(%ebp)
08918ece +0x0d0:  jne    08918eb5 <+0xb7>
08918ed0 +0x0d2:  lea    -0x14(%ebp),%eax
08918ed3 +0x0d5:  movl   $0x0,0x8(%esp)
08918edb +0x0dd:  lea    -0x20(%ebp),%edx
08918ede +0x0e0:  mov    %edx,0x4(%esp)
08918ee2 +0x0e4:  mov    %eax,(%esp)
08918ee5 +0x0e7:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08918eea +0x0ec:  sub    $0x4,%esp
08918eed +0x0ef:  lea    -0x24(%ebp),%eax
08918ef0 +0x0f2:  mov    %eax,0x4(%esp)
08918ef4 +0x0f6:  lea    -0x20(%ebp),%eax
08918ef7 +0x0f9:  mov    %eax,(%esp)
08918efa +0x0fc:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
08918eff +0x101:  test   %al,%al
08918f01 +0x103:  je     08918f14 <+0x116>
08918f03 +0x105:  xorb   $0x1,-0xd(%ebp)
08918f07 +0x109:  cmpb   $0x0,-0xd(%ebp)
08918f0b +0x10d:  je     08918f14 <+0x116>
08918f0d +0x10f:  mov    $0x1,%eax
08918f12 +0x114:  jmp    08918f19 <+0x11b>
08918f14 +0x116:  mov    $0x0,%eax
08918f19 +0x11b:  test   %al,%al
08918f1b +0x11d:  jne    08918ea5 <+0xa7>
08918f1d +0x11f:  mov    $0x0,%eax
08918f22 +0x124:  leave
08918f23 +0x125:  ret
```

## 反编译 C

```c
// stBroadCastItemScript::checkUnCommonNestedItem @ 0x8918dfe

/* stBroadCastItemScript::checkUnCommonNestedItem(int, int) const */

undefined4 __thiscall
stBroadCastItemScript::checkUnCommonNestedItem(stBroadCastItemScript *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  __normal_iterator local_28 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_24 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>> local_20 [4];
  map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
  local_1c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_18 [7];
  byte local_11;
  int *local_10;
  
  std::
  map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
  ::find((int *)local_20);
  std::
  map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
  ::end(local_1c);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>>::
          operator!=(local_20,(_Rb_tree_const_iterator *)local_1c);
  if (cVar1 != '\0') {
    local_11 = 0;
    std::_Rb_tree_const_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>>::
    operator->(local_20);
    std::vector<int,std::allocator<int>>::begin();
    std::_Rb_tree_const_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>>::
    operator->(local_20);
    std::vector<int,std::allocator<int>>::end();
    while( true ) {
      bVar2 = __gnu_cxx::operator!=(local_24,local_28);
      if ((bVar2) && (local_11 = local_11 ^ 1, local_11 != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) break;
      local_10 = (int *)__gnu_cxx::
                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                        operator*(local_24);
      while (local_11 != 0) {
        if (*local_10 == param_2) {
          return 1;
        }
        local_11 = 0;
      }
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_18,(int)local_24);
    }
  }
  return 0;
}
```
