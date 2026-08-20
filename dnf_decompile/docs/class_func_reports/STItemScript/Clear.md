# Clear

`_ZN12STItemScript5ClearEv`

`STItemScript::Clear()`

| 类 | 地址 |
|---|---|
| `STItemScript` | `0x0898d718` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898d718  _ZN12STItemScript5ClearEv
#           STItemScript::Clear()
# range [0x0898d718, 0x0898db29]
0898d718 +0x000:  push   %ebp
0898d719 +0x001:  mov    %esp,%ebp
0898d71b +0x003:  sub    $0x38,%esp
0898d71e +0x006:  mov    0x8(%ebp),%eax
0898d721 +0x009:  movl   $0x0,(%eax)
0898d727 +0x00f:  mov    0x8(%ebp),%eax
0898d72a +0x012:  movl   $0x1,0x4(%eax)
0898d731 +0x019:  mov    0x8(%ebp),%eax
0898d734 +0x01c:  movl   $0x0,0x8(%eax)
0898d73b +0x023:  mov    0x8(%ebp),%eax
0898d73e +0x026:  movl   $0x0,0xc(%eax)
0898d745 +0x02d:  mov    0x8(%ebp),%eax
0898d748 +0x030:  movl   $0x0,0x10(%eax)
0898d74f +0x037:  mov    0x8(%ebp),%eax
0898d752 +0x03a:  movl   $0x0,0x14(%eax)
0898d759 +0x041:  mov    0x8(%ebp),%eax
0898d75c +0x044:  movl   $0x0,0x18(%eax)
0898d763 +0x04b:  mov    0x8(%ebp),%eax
0898d766 +0x04e:  movl   $0x0,0x1c(%eax)
0898d76d +0x055:  mov    0x8(%ebp),%eax
0898d770 +0x058:  movl   $0x0,0x20(%eax)
0898d777 +0x05f:  mov    0x8(%ebp),%eax
0898d77a +0x062:  movl   $0xffffffff,0x24(%eax)
0898d781 +0x069:  mov    0x8(%ebp),%eax
0898d784 +0x06c:  movl   $0xffffffff,0x28(%eax)
0898d78b +0x073:  mov    0x8(%ebp),%eax
0898d78e +0x076:  movl   $0x0,0x2c(%eax)
0898d795 +0x07d:  mov    0x8(%ebp),%eax
0898d798 +0x080:  movb   $0x0,0x30(%eax)
0898d79c +0x084:  mov    0x8(%ebp),%eax
0898d79f +0x087:  movb   $0x0,0x31(%eax)
0898d7a3 +0x08b:  mov    0x8(%ebp),%eax
0898d7a6 +0x08e:  movl   $0x0,0x34(%eax)
0898d7ad +0x095:  movl   $0x0,-0xc(%ebp)
0898d7b4 +0x09c:  jmp    0898d7c5 <+0xad>
0898d7b6 +0x09e:  mov    -0xc(%ebp),%eax
0898d7b9 +0x0a1:  mov    0x8(%ebp),%edx
0898d7bc +0x0a4:  movb   $0x0,0x38(%edx,%eax,1)
0898d7c1 +0x0a9:  addl   $0x1,-0xc(%ebp)
0898d7c5 +0x0ad:  cmpl   $0xa,-0xc(%ebp)
0898d7c9 +0x0b1:  setle  %al
0898d7cc +0x0b4:  test   %al,%al
0898d7ce +0x0b6:  jne    0898d7b6 <+0x9e>
0898d7d0 +0x0b8:  movl   $0x0,-0x24(%ebp)
0898d7d7 +0x0bf:  jmp    0898d801 <+0xe9>
0898d7d9 +0x0c1:  mov    0x8(%ebp),%eax
0898d7dc +0x0c4:  lea    0x44(%eax),%ecx
0898d7df +0x0c7:  lea    -0x20(%ebp),%eax
0898d7e2 +0x0ca:  lea    -0x24(%ebp),%edx
0898d7e5 +0x0cd:  mov    %edx,0x8(%esp)
0898d7e9 +0x0d1:  mov    %ecx,0x4(%esp)
0898d7ed +0x0d5:  mov    %eax,(%esp)
0898d7f0 +0x0d8:  call   080da5c6 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x763>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x763
0898d7f5 +0x0dd:  sub    $0x4,%esp
0898d7f8 +0x0e0:  mov    -0x24(%ebp),%eax
0898d7fb +0x0e3:  add    $0x1,%eax
0898d7fe +0x0e6:  mov    %eax,-0x24(%ebp)
0898d801 +0x0e9:  mov    -0x24(%ebp),%eax
0898d804 +0x0ec:  cmp    $0xa,%eax
0898d807 +0x0ef:  setle  %al
0898d80a +0x0f2:  test   %al,%al
0898d80c +0x0f4:  jne    0898d7d9 <+0xc1>
0898d80e +0x0f6:  mov    0x8(%ebp),%eax
0898d811 +0x0f9:  movl   $0x0,0x5c(%eax)
0898d818 +0x100:  mov    0x8(%ebp),%eax
0898d81b +0x103:  movl   $0x0,0x60(%eax)
0898d822 +0x10a:  mov    0x8(%ebp),%eax
0898d825 +0x10d:  movl   $0x0,0x64(%eax)
0898d82c +0x114:  mov    0x8(%ebp),%eax
0898d82f +0x117:  movl   $0x0,0x68(%eax)
0898d836 +0x11e:  mov    0x8(%ebp),%eax
0898d839 +0x121:  add    $0x6c,%eax
0898d83c +0x124:  movl   $"",0x4(%esp)
0898d844 +0x12c:  mov    %eax,(%esp)
0898d847 +0x12f:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898d84c +0x134:  mov    0x8(%ebp),%eax
0898d84f +0x137:  movl   $0x0,0x70(%eax)
0898d856 +0x13e:  mov    0x8(%ebp),%eax
0898d859 +0x141:  add    $0x74,%eax
0898d85c +0x144:  movl   $"",0x4(%esp)
0898d864 +0x14c:  mov    %eax,(%esp)
0898d867 +0x14f:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898d86c +0x154:  mov    0x8(%ebp),%eax
0898d86f +0x157:  movl   $0x0,0x78(%eax)
0898d876 +0x15e:  mov    0x8(%ebp),%eax
0898d879 +0x161:  add    $0x84,%eax
0898d87e +0x166:  movl   $"",0x4(%esp)
0898d886 +0x16e:  mov    %eax,(%esp)
0898d889 +0x171:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898d88e +0x176:  mov    0x8(%ebp),%eax
0898d891 +0x179:  add    $0x88,%eax
0898d896 +0x17e:  mov    %eax,(%esp)
0898d899 +0x181:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0898d89e +0x186:  mov    0x8(%ebp),%eax
0898d8a1 +0x189:  add    $0x94,%eax
0898d8a6 +0x18e:  mov    %eax,(%esp)
0898d8a9 +0x191:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
0898d8ae +0x196:  mov    0x8(%ebp),%eax
0898d8b1 +0x199:  movb   $0x0,0xa0(%eax)
0898d8b8 +0x1a0:  mov    0x8(%ebp),%eax
0898d8bb +0x1a3:  movl   $0x0,0xa4(%eax)
0898d8c5 +0x1ad:  mov    0x8(%ebp),%eax
0898d8c8 +0x1b0:  movl   $0xffffffff,0xa8(%eax)
0898d8d2 +0x1ba:  mov    0x8(%ebp),%eax
0898d8d5 +0x1bd:  add    $0xac,%eax
0898d8da +0x1c2:  movl   $"",0x4(%esp)
0898d8e2 +0x1ca:  mov    %eax,(%esp)
0898d8e5 +0x1cd:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898d8ea +0x1d2:  mov    0x8(%ebp),%eax
0898d8ed +0x1d5:  add    $0xb0,%eax
0898d8f2 +0x1da:  movl   $"",0x4(%esp)
0898d8fa +0x1e2:  mov    %eax,(%esp)
0898d8fd +0x1e5:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898d902 +0x1ea:  mov    0x8(%ebp),%eax
0898d905 +0x1ed:  add    $0xb4,%eax
0898d90a +0x1f2:  movl   $"",0x4(%esp)
0898d912 +0x1fa:  mov    %eax,(%esp)
0898d915 +0x1fd:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898d91a +0x202:  mov    0x8(%ebp),%eax
0898d91d +0x205:  add    $0xb8,%eax
0898d922 +0x20a:  movl   $"",0x4(%esp)
0898d92a +0x212:  mov    %eax,(%esp)
0898d92d +0x215:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898d932 +0x21a:  mov    0x8(%ebp),%eax
0898d935 +0x21d:  add    $0xbc,%eax
0898d93a +0x222:  movl   $"",0x4(%esp)
0898d942 +0x22a:  mov    %eax,(%esp)
0898d945 +0x22d:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898d94a +0x232:  mov    0x8(%ebp),%eax
0898d94d +0x235:  add    $0xc0,%eax
0898d952 +0x23a:  movl   $"",0x4(%esp)
0898d95a +0x242:  mov    %eax,(%esp)
0898d95d +0x245:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898d962 +0x24a:  mov    0x8(%ebp),%eax
0898d965 +0x24d:  movl   $0xffffffff,0xc4(%eax)
0898d96f +0x257:  mov    0x8(%ebp),%eax
0898d972 +0x25a:  movl   $0x0,0xc8(%eax)
0898d97c +0x264:  mov    0x8(%ebp),%eax
0898d97f +0x267:  movl   $0x0,0xcc(%eax)
0898d989 +0x271:  mov    0x8(%ebp),%eax
0898d98c +0x274:  movb   $0x0,0xd0(%eax)
0898d993 +0x27b:  mov    0x8(%ebp),%eax
0898d996 +0x27e:  movb   $0x0,0xda(%eax)
0898d99d +0x285:  mov    0x8(%ebp),%eax
0898d9a0 +0x288:  movb   $0x0,0xd9(%eax)
0898d9a7 +0x28f:  mov    0x8(%ebp),%eax
0898d9aa +0x292:  movb   $0x0,0xd1(%eax)
0898d9b1 +0x299:  mov    0x8(%ebp),%eax
0898d9b4 +0x29c:  add    $0xdc,%eax
0898d9b9 +0x2a1:  mov    %eax,(%esp)
0898d9bc +0x2a4:  call   080da456 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x5f3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x5f3
0898d9c1 +0x2a9:  movl   $0x0,-0x10(%ebp)
0898d9c8 +0x2b0:  mov    0x8(%ebp),%eax
0898d9cb +0x2b3:  lea    0xdc(%eax),%ecx
0898d9d1 +0x2b9:  lea    -0x18(%ebp),%eax
0898d9d4 +0x2bc:  lea    -0x10(%ebp),%edx
0898d9d7 +0x2bf:  mov    %edx,0x8(%esp)
0898d9db +0x2c3:  mov    %ecx,0x4(%esp)
0898d9df +0x2c7:  mov    %eax,(%esp)
0898d9e2 +0x2ca:  call   080da5c6 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x763>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x763
0898d9e7 +0x2cf:  sub    $0x4,%esp
0898d9ea +0x2d2:  mov    0x8(%ebp),%eax
0898d9ed +0x2d5:  movl   $0x0,0xf4(%eax)
0898d9f7 +0x2df:  mov    0x8(%ebp),%eax
0898d9fa +0x2e2:  movl   $0x0,0xf8(%eax)
0898da04 +0x2ec:  mov    0x8(%ebp),%eax
0898da07 +0x2ef:  movb   $0x1,0xfc(%eax)
0898da0e +0x2f6:  mov    0x8(%ebp),%eax
0898da11 +0x2f9:  movl   $0x0,0x100(%eax)
0898da1b +0x303:  mov    0x8(%ebp),%eax
0898da1e +0x306:  movb   $0x1,0x104(%eax)
0898da25 +0x30d:  mov    0x8(%ebp),%eax
0898da28 +0x310:  movb   $0x0,0x10e(%eax)
0898da2f +0x317:  mov    0x8(%ebp),%eax
0898da32 +0x31a:  movb   $0x0,0x10f(%eax)
0898da39 +0x321:  mov    0x8(%ebp),%eax
0898da3c +0x324:  add    $0x110,%eax
0898da41 +0x329:  mov    %eax,(%esp)
0898da44 +0x32c:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
0898da49 +0x331:  mov    0x8(%ebp),%eax
0898da4c +0x334:  add    $0x11c,%eax
0898da51 +0x339:  mov    %eax,(%esp)
0898da54 +0x33c:  call   089c53f8 <_GLOBAL__I_g_npcNameVector+0x27d3>  ; global constructors keyed to g_npcNameVector+0x27d3
0898da59 +0x341:  mov    0x8(%ebp),%eax
0898da5c +0x344:  movw   $0x0,0x134(%eax)
0898da65 +0x34d:  mov    0x8(%ebp),%eax
0898da68 +0x350:  mov    $0x0,%edx
0898da6d +0x355:  mov    %edx,0x150(%eax)
0898da73 +0x35b:  mov    0x8(%ebp),%eax
0898da76 +0x35e:  mov    $0x0,%edx
0898da7b +0x363:  mov    %edx,0x154(%eax)
0898da81 +0x369:  mov    0x8(%ebp),%eax
0898da84 +0x36c:  add    $0x158,%eax
0898da89 +0x371:  mov    %eax,(%esp)
0898da8c +0x374:  call   08516bb2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x31e7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x31e7
0898da91 +0x379:  mov    0x8(%ebp),%eax
0898da94 +0x37c:  mov    $0x0,%edx
0898da99 +0x381:  mov    %edx,0x13c(%eax)
0898da9f +0x387:  mov    0x8(%ebp),%eax
0898daa2 +0x38a:  mov    $0x0,%edx
0898daa7 +0x38f:  mov    %edx,0x138(%eax)
0898daad +0x395:  mov    0x8(%ebp),%eax
0898dab0 +0x398:  mov    $0x0,%edx
0898dab5 +0x39d:  mov    %edx,0x140(%eax)
0898dabb +0x3a3:  mov    0x8(%ebp),%eax
0898dabe +0x3a6:  movl   $0x0,0x144(%eax)
0898dac8 +0x3b0:  mov    0x8(%ebp),%eax
0898dacb +0x3b3:  mov    $0x0,%edx
0898dad0 +0x3b8:  mov    %edx,0x148(%eax)
0898dad6 +0x3be:  mov    0x8(%ebp),%eax
0898dad9 +0x3c1:  mov    $0x0,%edx
0898dade +0x3c6:  mov    %edx,0x14c(%eax)
0898dae4 +0x3cc:  mov    0x8(%ebp),%eax
0898dae7 +0x3cf:  movl   $0x0,0xd4(%eax)
0898daf1 +0x3d9:  mov    0x8(%ebp),%eax
0898daf4 +0x3dc:  movl   $0x0,0x80(%eax)
0898dafe +0x3e6:  mov    0x8(%ebp),%eax
0898db01 +0x3e9:  add    $0x164,%eax
0898db06 +0x3ee:  mov    %eax,(%esp)
0898db09 +0x3f1:  call   08513b0e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x143>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x143
0898db0e +0x3f6:  mov    0x8(%ebp),%eax
0898db11 +0x3f9:  add    $0x174,%eax
0898db16 +0x3fe:  mov    %eax,(%esp)
0898db19 +0x401:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0898db1e +0x406:  mov    0x8(%ebp),%eax
0898db21 +0x409:  movb   $0x0,0xd8(%eax)
0898db28 +0x410:  leave
0898db29 +0x411:  ret
```

## 反编译 C

```c
// STItemScript::Clear @ 0x898d718

/* STItemScript::Clear() */

void __thiscall STItemScript::Clear(STItemScript *this)

{
  int local_28;
  int local_24 [2];
  int local_1c [2];
  undefined4 local_14;
  int local_10;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x30] = (STItemScript)0x0;
  this[0x31] = (STItemScript)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    this[local_10 + 0x38] = (STItemScript)0x0;
  }
  for (local_28 = 0; local_28 < 0xb; local_28 = local_28 + 1) {
    std::set<int,std::less<int>,std::allocator<int>>::insert(local_24);
  }
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  std::string::operator=((string *)(this + 0x6c),"");
  *(undefined4 *)(this + 0x70) = 0;
  std::string::operator=((string *)(this + 0x74),"");
  *(undefined4 *)(this + 0x78) = 0;
  std::string::operator=((string *)(this + 0x84),"");
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x88));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x94));
  this[0xa0] = (STItemScript)0x0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  std::string::operator=((string *)(this + 0xac),"");
  std::string::operator=((string *)(this + 0xb0),"");
  std::string::operator=((string *)(this + 0xb4),"");
  std::string::operator=((string *)(this + 0xb8),"");
  std::string::operator=((string *)(this + 0xbc),"");
  std::string::operator=((string *)(this + 0xc0),"");
  *(undefined4 *)(this + 0xc4) = 0xffffffff;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  this[0xd0] = (STItemScript)0x0;
  this[0xda] = (STItemScript)0x0;
  this[0xd9] = (STItemScript)0x0;
  this[0xd1] = (STItemScript)0x0;
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0xdc));
  local_14 = 0;
  std::set<int,std::less<int>,std::allocator<int>>::insert(local_1c);
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  this[0xfc] = (STItemScript)0x1;
  *(undefined4 *)(this + 0x100) = 0;
  this[0x104] = (STItemScript)0x1;
  this[0x10e] = (STItemScript)0x0;
  this[0x10f] = (STItemScript)0x0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x110));
  std::
  set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
  ::clear((set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
           *)(this + 0x11c));
  *(undefined2 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  std::vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>::
  clear((vector<STItemScript::SEXPERTJOB::SUSABLE,std::allocator<STItemScript::SEXPERTJOB::SUSABLE>>
         *)(this + 0x158));
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  DyeInfo::clear((DyeInfo *)(this + 0x164));
  std::string::clear((string *)(this + 0x174));
  this[0xd8] = (STItemScript)0x0;
  return;
}
```
