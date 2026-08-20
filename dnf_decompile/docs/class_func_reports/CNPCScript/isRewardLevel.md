# isRewardLevel

`_ZNK10CNPCScript13isRewardLevelEt`

`CNPCScript::isRewardLevel(unsigned short) const`

| 类 | 地址 |
|---|---|
| `CNPCScript` | `0x08580fd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08580fd0  _ZNK10CNPCScript13isRewardLevelEt
#           CNPCScript::isRewardLevel(unsigned short) const
# range [0x08580fd0, 0x08581075]
08580fd0 +0x00:  push   %ebp
08580fd1 +0x01:  mov    %esp,%ebp
08580fd3 +0x03:  sub    $0x38,%esp
08580fd6 +0x06:  mov    0xc(%ebp),%eax
08580fd9 +0x09:  mov    %ax,-0x1c(%ebp)
08580fdd +0x0d:  mov    0x8(%ebp),%eax
08580fe0 +0x10:  lea    0x658(%eax),%edx
08580fe6 +0x16:  lea    -0x18(%ebp),%eax
08580fe9 +0x19:  mov    %edx,0x4(%esp)
08580fed +0x1d:  mov    %eax,(%esp)
08580ff0 +0x20:  call   08582d0e <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x14a0>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x14a0
08580ff5 +0x25:  sub    $0x4,%esp
08580ff8 +0x28:  jmp    0858103e <+0x6e>
08580ffa +0x2a:  lea    -0x18(%ebp),%eax
08580ffd +0x2d:  mov    %eax,(%esp)
08581000 +0x30:  call   08582d92 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1524>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1524
08581005 +0x35:  mov    %eax,-0xc(%ebp)
08581008 +0x38:  cmpl   $0x0,-0xc(%ebp)
0858100c +0x3c:  je     08581021 <+0x51>
0858100e +0x3e:  mov    -0xc(%ebp),%eax
08581011 +0x41:  movzwl (%eax),%eax
08581014 +0x44:  cmp    -0x1c(%ebp),%ax
08581018 +0x48:  jne    08581021 <+0x51>
0858101a +0x4a:  mov    $0x1,%eax
0858101f +0x4f:  jmp    08581074 <+0xa4>
08581021 +0x51:  lea    -0x10(%ebp),%eax
08581024 +0x54:  movl   $0x0,0x8(%esp)
0858102c +0x5c:  lea    -0x18(%ebp),%edx
0858102f +0x5f:  mov    %edx,0x4(%esp)
08581033 +0x63:  mov    %eax,(%esp)
08581036 +0x66:  call   08582d9c <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x152e>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x152e
0858103b +0x6b:  sub    $0x4,%esp
0858103e +0x6e:  mov    0x8(%ebp),%eax
08581041 +0x71:  lea    0x658(%eax),%edx
08581047 +0x77:  lea    -0x14(%ebp),%eax
0858104a +0x7a:  mov    %edx,0x4(%esp)
0858104e +0x7e:  mov    %eax,(%esp)
08581051 +0x81:  call   08582d3a <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x14cc>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x14cc
08581056 +0x86:  sub    $0x4,%esp
08581059 +0x89:  lea    -0x14(%ebp),%eax
0858105c +0x8c:  mov    %eax,0x4(%esp)
08581060 +0x90:  lea    -0x18(%ebp),%eax
08581063 +0x93:  mov    %eax,(%esp)
08581066 +0x96:  call   08582d66 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x14f8>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x14f8
0858106b +0x9b:  test   %al,%al
0858106d +0x9d:  jne    08580ffa <+0x2a>
0858106f +0x9f:  mov    $0x0,%eax
08581074 +0xa4:  leave
08581075 +0xa5:  ret
```

## 反编译 C

```c
// CNPCScript::isRewardLevel @ 0x8580fd0

/* CNPCScript::isRewardLevel(unsigned short) const */

undefined4 __thiscall CNPCScript::isRewardLevel(CNPCScript *this,ushort param_1)

{
  bool bVar1;
  __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
  local_14 [4];
  ushort *local_10;
  
  std::
  vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>
  ::begin();
  while( true ) {
    std::
    vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>
    ::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) {
      return 0;
    }
    local_10 = (ushort *)
               __gnu_cxx::
               __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
               ::operator*(local_1c);
    if ((local_10 != (ushort *)0x0) && (*local_10 == param_1)) break;
    __gnu_cxx::
    __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
    ::operator++(local_14,(int)local_1c);
  }
  return 1;
}
```
