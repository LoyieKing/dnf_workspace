# getLevelRewardInfo

`_ZNK10CNPCScript18getLevelRewardInfoEt`

`CNPCScript::getLevelRewardInfo(unsigned short) const`

| 类 | 地址 |
|---|---|
| `CNPCScript` | `0x08581076` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08581076  _ZNK10CNPCScript18getLevelRewardInfoEt
#           CNPCScript::getLevelRewardInfo(unsigned short) const
# range [0x08581076, 0x085811a1]
08581076 +0x000:  push   %ebp
08581077 +0x001:  mov    %esp,%ebp
08581079 +0x003:  push   %edi
0858107a +0x004:  push   %esi
0858107b +0x005:  push   %ebx
0858107c +0x006:  sub    $0x3c,%esp
0858107f +0x009:  mov    0x8(%ebp),%ebx
08581082 +0x00c:  mov    0x10(%ebp),%eax
08581085 +0x00f:  mov    %ax,-0x2c(%ebp)
08581089 +0x013:  mov    %ebx,%eax
0858108b +0x015:  mov    %eax,(%esp)
0858108e +0x018:  call   0858188a <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1c>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1c
08581093 +0x01d:  mov    0xc(%ebp),%eax
08581096 +0x020:  lea    0x658(%eax),%edx
0858109c +0x026:  lea    -0x28(%ebp),%eax
0858109f +0x029:  mov    %edx,0x4(%esp)
085810a3 +0x02d:  mov    %eax,(%esp)
085810a6 +0x030:  call   08582d0e <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x14a0>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x14a0
085810ab +0x035:  sub    $0x4,%esp
085810ae +0x038:  jmp    08581142 <+0xcc>
085810b3 +0x03d:  lea    -0x28(%ebp),%eax
085810b6 +0x040:  mov    %eax,(%esp)
085810b9 +0x043:  call   08582d92 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1524>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1524
085810be +0x048:  mov    %eax,-0x1c(%ebp)
085810c1 +0x04b:  cmpl   $0x0,-0x1c(%ebp)
085810c5 +0x04f:  je     08581125 <+0xaf>
085810c7 +0x051:  mov    -0x1c(%ebp),%eax
085810ca +0x054:  movzwl (%eax),%eax
085810cd +0x057:  cmp    -0x2c(%ebp),%ax
085810d1 +0x05b:  jne    08581125 <+0xaf>
085810d3 +0x05d:  mov    %ebx,%eax
085810d5 +0x05f:  mov    -0x1c(%ebp),%edx
085810d8 +0x062:  movzwl (%edx),%edx
085810db +0x065:  mov    %dx,(%eax)
085810de +0x068:  mov    %ebx,%eax
085810e0 +0x06a:  mov    -0x1c(%ebp),%edx
085810e3 +0x06d:  mov    0x4(%edx),%edx
085810e6 +0x070:  mov    %edx,0x4(%eax)
085810e9 +0x073:  mov    %ebx,%eax
085810eb +0x075:  mov    -0x1c(%ebp),%edx
085810ee +0x078:  mov    0x8(%edx),%edx
085810f1 +0x07b:  mov    %edx,0x8(%eax)
085810f4 +0x07e:  mov    -0x1c(%ebp),%eax
085810f7 +0x081:  lea    0xc(%eax),%edx
085810fa +0x084:  mov    %ebx,%eax
085810fc +0x086:  add    $0xc,%eax
085810ff +0x089:  mov    %edx,0x4(%esp)
08581103 +0x08d:  mov    %eax,(%esp)
08581106 +0x090:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0858110b +0x095:  mov    -0x1c(%ebp),%eax
0858110e +0x098:  lea    0x10(%eax),%edx
08581111 +0x09b:  mov    %ebx,%eax
08581113 +0x09d:  add    $0x10,%eax
08581116 +0x0a0:  mov    %edx,0x4(%esp)
0858111a +0x0a4:  mov    %eax,(%esp)
0858111d +0x0a7:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08581122 +0x0ac:  nop
08581123 +0x0ad:  jmp    08581193 <+0x11d>
08581125 +0x0af:  lea    -0x20(%ebp),%eax
08581128 +0x0b2:  movl   $0x0,0x8(%esp)
08581130 +0x0ba:  lea    -0x28(%ebp),%edx
08581133 +0x0bd:  mov    %edx,0x4(%esp)
08581137 +0x0c1:  mov    %eax,(%esp)
0858113a +0x0c4:  call   08582d9c <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x152e>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x152e
0858113f +0x0c9:  sub    $0x4,%esp
08581142 +0x0cc:  mov    0xc(%ebp),%eax
08581145 +0x0cf:  lea    0x658(%eax),%edx
0858114b +0x0d5:  lea    -0x24(%ebp),%eax
0858114e +0x0d8:  mov    %edx,0x4(%esp)
08581152 +0x0dc:  mov    %eax,(%esp)
08581155 +0x0df:  call   08582d3a <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x14cc>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x14cc
0858115a +0x0e4:  sub    $0x4,%esp
0858115d +0x0e7:  lea    -0x24(%ebp),%eax
08581160 +0x0ea:  mov    %eax,0x4(%esp)
08581164 +0x0ee:  lea    -0x28(%ebp),%eax
08581167 +0x0f1:  mov    %eax,(%esp)
0858116a +0x0f4:  call   08582d66 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x14f8>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x14f8
0858116f +0x0f9:  test   %al,%al
08581171 +0x0fb:  jne    085810b3 <+0x3d>
08581177 +0x101:  jmp    08581193 <+0x11d>
08581179 +0x103:  mov    %edx,%esi
0858117b +0x105:  mov    %eax,%edi
0858117d +0x107:  mov    %ebx,%eax
0858117f +0x109:  mov    %eax,(%esp)
08581182 +0x10c:  call   085823c6 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xb58>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xb58
08581187 +0x111:  mov    %edi,%eax
08581189 +0x113:  mov    %esi,%edx
0858118b +0x115:  mov    %eax,(%esp)
0858118e +0x118:  call   08ae3750 <_Unwind_Resume>
08581193 +0x11d:  mov    %ebx,%eax
08581195 +0x11f:  mov    %ebx,%eax
08581197 +0x121:  lea    -0xc(%ebp),%esp
0858119a +0x124:  add    $0x0,%esp
0858119d +0x127:  pop    %ebx
0858119e +0x128:  pop    %esi
0858119f +0x129:  pop    %edi
085811a0 +0x12a:  pop    %ebp
085811a1 +0x12b:  ret    $0x4
```

## 反编译 C

```c
// CNPCScript::getLevelRewardInfo @ 0x8581076

/* CNPCScript::getLevelRewardInfo(unsigned short) const */

stLevelRewardInfo * CNPCScript::getLevelRewardInfo(ushort param_1)

{
  bool bVar1;
  undefined2 in_stack_00000006;
  short in_stack_0000000c;
  __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
  local_2c [4];
  __normal_iterator local_28 [4];
  __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
  local_24 [4];
  short *local_20;
  
  stFavorableRelationShip_t::stLevelRewardInfo::stLevelRewardInfo(_param_1);
                    /* try { // try from 085810a6 to 0858116e has its CatchHandler @ 08581179 */
  std::
  vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>
  ::begin();
  while( true ) {
    std::
    vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>
    ::end();
    bVar1 = __gnu_cxx::operator!=(local_2c,local_28);
    if (!bVar1) {
      return _param_1;
    }
    local_20 = (short *)__gnu_cxx::
                        __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
                        ::operator*(local_2c);
    if ((local_20 != (short *)0x0) && (*local_20 == in_stack_0000000c)) break;
    __gnu_cxx::
    __normal_iterator<stFavorableRelationShip_t::stLevelRewardInfo_const*,std::vector<stFavorableRelationShip_t::stLevelRewardInfo,std::allocator<stFavorableRelationShip_t::stLevelRewardInfo>>>
    ::operator++(local_24,(int)local_2c);
  }
  *(short *)_param_1 = *local_20;
  *(undefined4 *)(_param_1 + 4) = *(undefined4 *)(local_20 + 2);
  *(undefined4 *)(_param_1 + 8) = *(undefined4 *)(local_20 + 4);
  std::string::operator=((string *)(_param_1 + 0xc),(string *)(local_20 + 6));
  std::string::operator=((string *)(_param_1 + 0x10),(string *)(local_20 + 8));
  return _param_1;
}
```
