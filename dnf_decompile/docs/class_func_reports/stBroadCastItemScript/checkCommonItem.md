# checkCommonItem

`_ZNK21stBroadCastItemScript15checkCommonItemEi`

`stBroadCastItemScript::checkCommonItem(int) const`

| 类 | 地址 |
|---|---|
| `stBroadCastItemScript` | `0x08918cdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08918cdc  _ZNK21stBroadCastItemScript15checkCommonItemEi
#           stBroadCastItemScript::checkCommonItem(int) const
# range [0x08918cdc, 0x08918d9b]
08918cdc +0x00:  push   %ebp
08918cdd +0x01:  mov    %esp,%ebp
08918cdf +0x03:  sub    $0x38,%esp
08918ce2 +0x06:  movb   $0x0,-0xd(%ebp)
08918ce6 +0x0a:  cmpb   $0x0,-0xd(%ebp)
08918cea +0x0e:  jne    08918d94 <+0xb8>
08918cf0 +0x14:  mov    0x8(%ebp),%edx
08918cf3 +0x17:  lea    -0x18(%ebp),%eax
08918cf6 +0x1a:  mov    %edx,0x4(%esp)
08918cfa +0x1e:  mov    %eax,(%esp)
08918cfd +0x21:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
08918d02 +0x26:  sub    $0x4,%esp
08918d05 +0x29:  mov    0x8(%ebp),%edx
08918d08 +0x2c:  lea    -0x1c(%ebp),%eax
08918d0b +0x2f:  mov    %edx,0x4(%esp)
08918d0f +0x33:  mov    %eax,(%esp)
08918d12 +0x36:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08918d17 +0x3b:  sub    $0x4,%esp
08918d1a +0x3e:  jmp    08918d64 <+0x88>
08918d1c +0x40:  lea    -0x18(%ebp),%eax
08918d1f +0x43:  mov    %eax,(%esp)
08918d22 +0x46:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08918d27 +0x4b:  mov    %eax,-0xc(%ebp)
08918d2a +0x4e:  jmp    08918d41 <+0x65>
08918d2c +0x50:  mov    -0xc(%ebp),%eax
08918d2f +0x53:  mov    (%eax),%eax
08918d31 +0x55:  cmp    0xc(%ebp),%eax
08918d34 +0x58:  jne    08918d3d <+0x61>
08918d36 +0x5a:  mov    $0x1,%eax
08918d3b +0x5f:  jmp    08918d99 <+0xbd>
08918d3d +0x61:  movb   $0x0,-0xd(%ebp)
08918d41 +0x65:  cmpb   $0x0,-0xd(%ebp)
08918d45 +0x69:  jne    08918d2c <+0x50>
08918d47 +0x6b:  lea    -0x14(%ebp),%eax
08918d4a +0x6e:  movl   $0x0,0x8(%esp)
08918d52 +0x76:  lea    -0x18(%ebp),%edx
08918d55 +0x79:  mov    %edx,0x4(%esp)
08918d59 +0x7d:  mov    %eax,(%esp)
08918d5c +0x80:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08918d61 +0x85:  sub    $0x4,%esp
08918d64 +0x88:  lea    -0x1c(%ebp),%eax
08918d67 +0x8b:  mov    %eax,0x4(%esp)
08918d6b +0x8f:  lea    -0x18(%ebp),%eax
08918d6e +0x92:  mov    %eax,(%esp)
08918d71 +0x95:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
08918d76 +0x9a:  test   %al,%al
08918d78 +0x9c:  je     08918d8b <+0xaf>
08918d7a +0x9e:  xorb   $0x1,-0xd(%ebp)
08918d7e +0xa2:  cmpb   $0x0,-0xd(%ebp)
08918d82 +0xa6:  je     08918d8b <+0xaf>
08918d84 +0xa8:  mov    $0x1,%eax
08918d89 +0xad:  jmp    08918d90 <+0xb4>
08918d8b +0xaf:  mov    $0x0,%eax
08918d90 +0xb4:  test   %al,%al
08918d92 +0xb6:  jne    08918d1c <+0x40>
08918d94 +0xb8:  mov    $0x0,%eax
08918d99 +0xbd:  leave
08918d9a +0xbe:  ret
08918d9b +0xbf:  nop
```

## 反编译 C

```c
// stBroadCastItemScript::checkCommonItem @ 0x8918cdc

/* stBroadCastItemScript::checkCommonItem(int) const */

undefined4 __thiscall
stBroadCastItemScript::checkCommonItem(stBroadCastItemScript *this,int param_1)

{
  bool bVar1;
  __normal_iterator local_20 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_18 [7];
  byte local_11;
  int *local_10;
  
  local_11 = 0;
  std::vector<int,std::allocator<int>>::begin();
  std::vector<int,std::allocator<int>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_1c,local_20);
    if ((bVar1) && (local_11 = local_11 ^ 1, local_11 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    local_10 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                      ::operator*(local_1c);
    while (local_11 != 0) {
      if (*local_10 == param_1) {
        return 1;
      }
      local_11 = 0;
    }
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_18,(int)local_1c);
  }
  return 0;
}
```
