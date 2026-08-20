# initScript

`_ZN14CNPCScriptList10initScriptEPcS0_S0_`

`CNPCScriptList::initScript(char*, char*, char*)`

| 类 | 地址 |
|---|---|
| `CNPCScriptList` | `0x08581314` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08581314  _ZN14CNPCScriptList10initScriptEPcS0_S0_
#           CNPCScriptList::initScript(char*, char*, char*)
# range [0x08581314, 0x0858167f]
08581314 +0x000:  push   %ebp
08581315 +0x001:  mov    %esp,%ebp
08581317 +0x003:  push   %edi
08581318 +0x004:  push   %esi
08581319 +0x005:  push   %ebx
0858131a +0x006:  sub    $0x9c,%esp
08581320 +0x00c:  mov    0x10(%ebp),%eax
08581323 +0x00f:  mov    %eax,0x4(%esp)
08581327 +0x013:  mov    0xc(%ebp),%eax
0858132a +0x016:  mov    %eax,(%esp)
0858132d +0x019:  call   089fc1a8 <_Z13initNpcScriptPKcS0_>  ; initNpcScript(char const*, char const*)
08581332 +0x01e:  xor    $0x1,%eax
08581335 +0x021:  test   %al,%al
08581337 +0x023:  je     08581343 <+0x2f>
08581339 +0x025:  mov    $0x1a1,%eax
0858133e +0x02a:  jmp    08581675 <+0x361>
08581343 +0x02f:  lea    -0x80(%ebp),%eax
08581346 +0x032:  movl   $&g_npcScriptFileList,0x4(%esp)
0858134e +0x03a:  mov    %eax,(%esp)
08581351 +0x03d:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
08581356 +0x042:  sub    $0x4,%esp
08581359 +0x045:  lea    -0x80(%ebp),%eax
0858135c +0x048:  mov    %eax,0x4(%esp)
08581360 +0x04c:  lea    -0x84(%ebp),%eax
08581366 +0x052:  mov    %eax,(%esp)
08581369 +0x055:  call   08582e92 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1624>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1624
0858136e +0x05a:  lea    -0x7c(%ebp),%eax
08581371 +0x05d:  movl   $&g_npcScriptFileList,0x4(%esp)
08581379 +0x065:  mov    %eax,(%esp)
0858137c +0x068:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
08581381 +0x06d:  sub    $0x4,%esp
08581384 +0x070:  lea    -0x7c(%ebp),%eax
08581387 +0x073:  mov    %eax,0x4(%esp)
0858138b +0x077:  lea    -0x88(%ebp),%eax
08581391 +0x07d:  mov    %eax,(%esp)
08581394 +0x080:  call   08582e92 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1624>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1624
08581399 +0x085:  jmp    08581586 <+0x272>
0858139e +0x08a:  lea    -0x84(%ebp),%eax
085813a4 +0x090:  mov    %eax,(%esp)
085813a7 +0x093:  call   080c6e8e <_GLOBAL__I_g_ServerString_+0x3f9>  ; global constructors keyed to g_ServerString_+0x3f9
085813ac +0x098:  add    $0x4,%eax
085813af +0x09b:  mov    %eax,(%esp)
085813b2 +0x09e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085813b7 +0x0a3:  mov    %eax,(%esp)
085813ba +0x0a6:  call   089fae70 <_Z16isExistNPCScriptPKc>  ; isExistNPCScript(char const*)
085813bf +0x0ab:  xor    $0x1,%eax
085813c2 +0x0ae:  test   %al,%al
085813c4 +0x0b0:  je     08581420 <+0x10c>
085813c6 +0x0b2:  lea    -0x84(%ebp),%eax
085813cc +0x0b8:  mov    %eax,(%esp)
085813cf +0x0bb:  call   080c6e8e <_GLOBAL__I_g_ServerString_+0x3f9>  ; global constructors keyed to g_ServerString_+0x3f9
085813d4 +0x0c0:  add    $0x4,%eax
085813d7 +0x0c3:  mov    %eax,(%esp)
085813da +0x0c6:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085813df +0x0cb:  mov    %eax,%ebx
085813e1 +0x0cd:  movl   $0x5,0xc(%esp)
085813e9 +0x0d5:  movl   $0x1a9,0x8(%esp)
085813f1 +0x0dd:  movl   $&_ZZN14CNPCScriptList10initScriptEPcS0_S0_E19__PRETTY_FUNCTION__,0x4(%esp)
085813f9 +0x0e5:  lea    -0x78(%ebp),%eax
085813fc +0x0e8:  mov    %eax,(%esp)
085813ff +0x0eb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08581404 +0x0f0:  mov    %ebx,0x8(%esp)
08581408 +0x0f4:  movl   $"%s file not exists\n",0x4(%esp)
08581410 +0x0fc:  lea    -0x78(%ebp),%eax
08581413 +0x0ff:  mov    %eax,(%esp)
08581416 +0x102:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0858141b +0x107:  jmp    08581578 <+0x264>
08581420 +0x10c:  movl   $0x6ec,(%esp)
08581427 +0x113:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0858142c +0x118:  mov    %eax,%ebx
0858142e +0x11a:  mov    %ebx,%eax
08581430 +0x11c:  mov    %eax,(%esp)
08581433 +0x11f:  call   08582338 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xaca>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xaca
08581438 +0x124:  jmp    08581452 <+0x13e>
0858143a +0x126:  mov    %edx,%esi
0858143c +0x128:  mov    %eax,%edi
0858143e +0x12a:  mov    %ebx,(%esp)
08581441 +0x12d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08581446 +0x132:  mov    %edi,%eax
08581448 +0x134:  mov    %esi,%edx
0858144a +0x136:  mov    %eax,(%esp)
0858144d +0x139:  call   08ae3750 <_Unwind_Resume>
08581452 +0x13e:  mov    %ebx,%eax
08581454 +0x140:  mov    %eax,-0x8c(%ebp)
0858145a +0x146:  lea    -0x84(%ebp),%eax
08581460 +0x14c:  mov    %eax,(%esp)
08581463 +0x14f:  call   080c6e8e <_GLOBAL__I_g_ServerString_+0x3f9>  ; global constructors keyed to g_ServerString_+0x3f9
08581468 +0x154:  add    $0x4,%eax
0858146b +0x157:  mov    %eax,(%esp)
0858146e +0x15a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08581473 +0x15f:  mov    -0x8c(%ebp),%edx
08581479 +0x165:  mov    %eax,0x4(%esp)
0858147d +0x169:  mov    %edx,(%esp)
08581480 +0x16c:  call   085809a6 <_ZN10CNPCScript4loadEPKc>  ; CNPCScript::load(char const*)
08581485 +0x171:  xor    $0x1,%eax
08581488 +0x174:  test   %al,%al
0858148a +0x176:  je     085814eb <+0x1d7>
0858148c +0x178:  lea    -0x84(%ebp),%eax
08581492 +0x17e:  mov    %eax,(%esp)
08581495 +0x181:  call   080c6e8e <_GLOBAL__I_g_ServerString_+0x3f9>  ; global constructors keyed to g_ServerString_+0x3f9
0858149a +0x186:  add    $0x4,%eax
0858149d +0x189:  mov    %eax,(%esp)
085814a0 +0x18c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
085814a5 +0x191:  mov    %eax,%ebx
085814a7 +0x193:  movl   $0x5,0xc(%esp)
085814af +0x19b:  movl   $0x1b0,0x8(%esp)
085814b7 +0x1a3:  movl   $&_ZZN14CNPCScriptList10initScriptEPcS0_S0_E19__PRETTY_FUNCTION__,0x4(%esp)
085814bf +0x1ab:  lea    -0x68(%ebp),%eax
085814c2 +0x1ae:  mov    %eax,(%esp)
085814c5 +0x1b1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085814ca +0x1b6:  mov    %ebx,0x8(%esp)
085814ce +0x1ba:  movl   $"%s load failed\n",0x4(%esp)
085814d6 +0x1c2:  lea    -0x68(%ebp),%eax
085814d9 +0x1c5:  mov    %eax,(%esp)
085814dc +0x1c8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085814e1 +0x1cd:  mov    $0x1b4,%eax
085814e6 +0x1d2:  jmp    08581675 <+0x361>
085814eb +0x1d7:  mov    -0x8c(%ebp),%eax
085814f1 +0x1dd:  mov    %eax,(%esp)
085814f4 +0x1e0:  call   085819ac <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x13e>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x13e
085814f9 +0x1e5:  mov    %eax,-0x3c(%ebp)
085814fc +0x1e8:  lea    -0x44(%ebp),%eax
085814ff +0x1eb:  lea    -0x8c(%ebp),%edx
08581505 +0x1f1:  mov    %edx,0x8(%esp)
08581509 +0x1f5:  lea    -0x3c(%ebp),%edx
0858150c +0x1f8:  mov    %edx,0x4(%esp)
08581510 +0x1fc:  mov    %eax,(%esp)
08581513 +0x1ff:  call   08582ebf <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1651>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1651
08581518 +0x204:  sub    $0x4,%esp
0858151b +0x207:  lea    -0x44(%ebp),%eax
0858151e +0x20a:  mov    %eax,0x4(%esp)
08581522 +0x20e:  lea    -0x4c(%ebp),%eax
08581525 +0x211:  mov    %eax,(%esp)
08581528 +0x214:  call   08582f06 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1698>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1698
0858152d +0x219:  mov    0x8(%ebp),%edx
08581530 +0x21c:  lea    -0x58(%ebp),%eax
08581533 +0x21f:  lea    -0x4c(%ebp),%ecx
08581536 +0x222:  mov    %ecx,0x8(%esp)
0858153a +0x226:  mov    %edx,0x4(%esp)
0858153e +0x22a:  mov    %eax,(%esp)
08581541 +0x22d:  call   08582f36 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x16c8>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x16c8
08581546 +0x232:  sub    $0x4,%esp
08581549 +0x235:  mov    -0x8c(%ebp),%eax
0858154f +0x23b:  mov    %eax,(%esp)
08581552 +0x23e:  call   085819b6 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x148>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x148
08581557 +0x243:  test   %al,%al
08581559 +0x245:  je     08581578 <+0x264>
0858155b +0x247:  mov    -0x8c(%ebp),%ebx
08581561 +0x24d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08581566 +0x252:  mov    0xa8d4(%eax),%eax
0858156c +0x258:  mov    %ebx,0x4(%esp)
08581570 +0x25c:  mov    %eax,(%esp)
08581573 +0x25f:  call   08580668 <_ZN22CNPCDynamicInfoManager3addEPK10CNPCScript>  ; CNPCDynamicInfoManager::add(CNPCScript const*)
08581578 +0x264:  lea    -0x84(%ebp),%eax
0858157e +0x26a:  mov    %eax,(%esp)
08581581 +0x26d:  call   08582ea2 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1634>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1634
08581586 +0x272:  lea    -0x88(%ebp),%eax
0858158c +0x278:  mov    %eax,0x4(%esp)
08581590 +0x27c:  lea    -0x84(%ebp),%eax
08581596 +0x282:  mov    %eax,(%esp)
08581599 +0x285:  call   080c6e7a <_GLOBAL__I_g_ServerString_+0x3e5>  ; global constructors keyed to g_ServerString_+0x3e5
0858159e +0x28a:  test   %al,%al
085815a0 +0x28c:  jne    0858139e <+0x8a>
085815a6 +0x292:  mov    0x8(%ebp),%eax
085815a9 +0x295:  lea    0x14(%eax),%edx
085815ac +0x298:  mov    0x14(%ebp),%eax
085815af +0x29b:  mov    %eax,0x4(%esp)
085815b3 +0x29f:  mov    %edx,(%esp)
085815b6 +0x2a2:  call   089fafc5 <_Z17loadNPCCommonDataR17stNPCCommonData_tPKc>  ; loadNPCCommonData(stNPCCommonData_t&, char const*)
085815bb +0x2a7:  test   %eax,%eax
085815bd +0x2a9:  setne  %al
085815c0 +0x2ac:  test   %al,%al
085815c2 +0x2ae:  je     08581608 <+0x2f4>
085815c4 +0x2b0:  movl   $0x5,0xc(%esp)
085815cc +0x2b8:  movl   $0x1be,0x8(%esp)
085815d4 +0x2c0:  movl   $&_ZZN14CNPCScriptList10initScriptEPcS0_S0_E19__PRETTY_FUNCTION__,0x4(%esp)
085815dc +0x2c8:  lea    -0x38(%ebp),%eax
085815df +0x2cb:  mov    %eax,(%esp)
085815e2 +0x2ce:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085815e7 +0x2d3:  mov    0x14(%ebp),%eax
085815ea +0x2d6:  mov    %eax,0x8(%esp)
085815ee +0x2da:  movl   $"%s load failed\n",0x4(%esp)
085815f6 +0x2e2:  lea    -0x38(%ebp),%eax
085815f9 +0x2e5:  mov    %eax,(%esp)
085815fc +0x2e8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08581601 +0x2ed:  mov    $0x1bf,%eax
08581606 +0x2f2:  jmp    08581675 <+0x361>
08581608 +0x2f4:  mov    0x8(%ebp),%eax
0858160b +0x2f7:  add    $0x2c,%eax
0858160e +0x2fa:  mov    %eax,(%esp)
08581611 +0x2fd:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08581616 +0x302:  cmp    $0x32,%eax
08581619 +0x305:  seta   %al
0858161c +0x308:  test   %al,%al
0858161e +0x30a:  je     08581664 <+0x350>
08581620 +0x30c:  movl   $0x5,0xc(%esp)
08581628 +0x314:  movl   $0x1c3,0x8(%esp)
08581630 +0x31c:  movl   $&_ZZN14CNPCScriptList10initScriptEPcS0_S0_E19__PRETTY_FUNCTION__,0x4(%esp)
08581638 +0x324:  lea    -0x28(%ebp),%eax
0858163b +0x327:  mov    %eax,(%esp)
0858163e +0x32a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08581643 +0x32f:  mov    0x14(%ebp),%eax
08581646 +0x332:  mov    %eax,0x8(%esp)
0858164a +0x336:  movl   $"%s Favorable npc count over",0x4(%esp)
08581652 +0x33e:  lea    -0x28(%ebp),%eax
08581655 +0x341:  mov    %eax,(%esp)
08581658 +0x344:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0858165d +0x349:  mov    $0x1c4,%eax
08581662 +0x34e:  jmp    08581675 <+0x361>
08581664 +0x350:  movl   $0x0,(%esp)
0858166b +0x357:  call   086381ec <_ZN18TimerNPCMoodChange15registNextTimerEl>  ; TimerNPCMoodChange::registNextTimer(long)
08581670 +0x35c:  mov    $0x0,%eax
08581675 +0x361:  lea    -0xc(%ebp),%esp
08581678 +0x364:  add    $0x0,%esp
0858167b +0x367:  pop    %ebx
0858167c +0x368:  pop    %esi
0858167d +0x369:  pop    %edi
0858167e +0x36a:  pop    %ebp
0858167f +0x36b:  ret
```

## 反编译 C

```c
// CNPCScriptList::initScript @ 0x8581314

/* CNPCScriptList::initScript(char*, char*, char*) */

undefined4 __thiscall
CNPCScriptList::initScript(CNPCScriptList *this,char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  CNPCScript *this_00;
  int iVar4;
  uint uVar5;
  _Rb_tree_const_iterator<std::pair<int_const,std::string>> local_8c [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::string>> local_88 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_84 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_80 [4];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  local_5c [12];
  pair<unsigned_int_const,CNPCScript*> local_50 [8];
  uint local_48 [2];
  CNPCScript *local_40;
  cMyTrace local_3c [16];
  cMyTrace local_2c [28];
  
  cVar1 = initNpcScript(param_1,param_2);
  if (cVar1 == '\x01') {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              (local_84);
    std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::_Rb_tree_const_iterator
              (local_88,(_Rb_tree_iterator *)local_84);
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_80);
    std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::_Rb_tree_const_iterator
              (local_8c,(_Rb_tree_iterator *)local_80);
    while (cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                             (local_88,(_Rb_tree_const_iterator *)local_8c), cVar1 != '\0') {
      iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->(local_88);
      pcVar3 = (char *)std::string::c_str((string *)(iVar4 + 4));
      cVar1 = isExistNPCScript(pcVar3);
      if (cVar1 == '\x01') {
        this_00 = operator_new(0x6ec);
                    /* try { // try from 08581433 to 08581437 has its CatchHandler @ 0858143a */
        CNPCScript::CNPCScript(this_00);
        iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->(local_88)
        ;
        pcVar3 = (char *)std::string::c_str((string *)(iVar4 + 4));
        cVar1 = CNPCScript::load(this_00,pcVar3);
        if (cVar1 != '\x01') {
          iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                            (local_88);
          uVar2 = std::string::c_str((string *)(iVar4 + 4));
          cMyTrace::cMyTrace(local_6c,"int CNPCScriptList::initScript(NCHAR*, NCHAR*, NCHAR*)",0x1b0
                             ,5);
          cMyTrace::operator()(local_6c,"%s load failed\n",uVar2);
          return 0x1b4;
        }
        local_40 = (CNPCScript *)CNPCScript::getIndex(this_00);
        std::make_pair<unsigned_int,CNPCScript*&>(local_48,&local_40);
        std::pair<unsigned_int_const,CNPCScript*>::pair<unsigned_int,CNPCScript*>
                  (local_50,(pair *)local_48);
        __gnu_cxx::
        hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
        ::insert(local_5c,this);
        cVar1 = CNPCScript::isFavorableNPC(this_00);
        if (cVar1 != '\0') {
          iVar4 = G_CDataManager();
          CNPCDynamicInfoManager::add(*(CNPCDynamicInfoManager **)(iVar4 + 0xa8d4),this_00);
        }
      }
      else {
        iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->(local_88)
        ;
        uVar2 = std::string::c_str((string *)(iVar4 + 4));
        cMyTrace::cMyTrace(local_7c,"int CNPCScriptList::initScript(NCHAR*, NCHAR*, NCHAR*)",0x1a9,5
                          );
        cMyTrace::operator()(local_7c,"%s file not exists\n",uVar2);
      }
      std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator++(local_88);
    }
    iVar4 = loadNPCCommonData((stNPCCommonData_t *)(this + 0x14),param_3);
    if (iVar4 == 0) {
      uVar5 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(this + 0x2c));
      if (uVar5 < 0x33) {
        TimerNPCMoodChange::registNextTimer(0);
        uVar2 = 0;
      }
      else {
        cMyTrace::cMyTrace(local_2c,"int CNPCScriptList::initScript(NCHAR*, NCHAR*, NCHAR*)",0x1c3,5
                          );
        cMyTrace::operator()(local_2c,"%s Favorable npc count over",param_3);
        uVar2 = 0x1c4;
      }
    }
    else {
      cMyTrace::cMyTrace(local_3c,"int CNPCScriptList::initScript(NCHAR*, NCHAR*, NCHAR*)",0x1be,5);
      cMyTrace::operator()(local_3c,"%s load failed\n",param_3);
      uVar2 = 0x1bf;
    }
  }
  else {
    uVar2 = 0x1a1;
  }
  return uVar2;
}
```
