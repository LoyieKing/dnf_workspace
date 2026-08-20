# dispatch_sig

`_ZN23Inter_CodeChecksumRange12dispatch_sigEP5CUserPci`

`Inter_CodeChecksumRange::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_CodeChecksumRange` | `0x084d0648` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d0648  _ZN23Inter_CodeChecksumRange12dispatch_sigEP5CUserPci
#           Inter_CodeChecksumRange::dispatch_sig(CUser*, char*, int)
# range [0x084d0648, 0x084d07d1]
084d0648 +0x000:  push   %ebp
084d0649 +0x001:  mov    %esp,%ebp
084d064b +0x003:  push   %esi
084d064c +0x004:  push   %ebx
084d064d +0x005:  sub    $0x260,%esp
084d0653 +0x00b:  lea    -0x128(%ebp),%eax
084d0659 +0x011:  mov    %eax,(%esp)
084d065c +0x014:  call   0808a966 <_ZN20CodeHackCheckRangeExC1Ev>  ; CodeHackCheckRangeEx::CodeHackCheckRangeEx()
084d0661 +0x019:  lea    -0x240(%ebp),%eax
084d0667 +0x01f:  mov    %eax,(%esp)
084d066a +0x022:  call   0808a700 <_ZN18CodeHackChecksumExC1Ev>  ; CodeHackChecksumEx::CodeHackChecksumEx()
084d066f +0x027:  mov    0x10(%ebp),%eax
084d0672 +0x02a:  mov    %eax,0x4(%esp)
084d0676 +0x02e:  lea    -0x128(%ebp),%eax
084d067c +0x034:  mov    %eax,(%esp)
084d067f +0x037:  call   0808a9cc <_ZN20CodeHackCheckRangeEx7setDataEPKc>  ; CodeHackCheckRangeEx::setData(char const*)
084d0684 +0x03c:  mov    %eax,-0x14(%ebp)
084d0687 +0x03f:  mov    -0x14(%ebp),%eax
084d068a +0x042:  mov    %eax,0x4(%esp)
084d068e +0x046:  lea    -0x240(%ebp),%eax
084d0694 +0x04c:  mov    %eax,(%esp)
084d0697 +0x04f:  call   0808a802 <_ZN18CodeHackChecksumEx7setDataEPKc>  ; CodeHackChecksumEx::setData(char const*)
084d069c +0x054:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084d06a1 +0x059:  lea    0x22c(%eax),%edx
084d06a7 +0x05f:  lea    -0x1c(%ebp),%eax
084d06aa +0x062:  mov    %edx,0x4(%esp)
084d06ae +0x066:  mov    %eax,(%esp)
084d06b1 +0x069:  call   080d3ab4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x8901>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8901
084d06b6 +0x06e:  sub    $0x4,%esp
084d06b9 +0x071:  jmp    084d075d <+0x115>
084d06be +0x076:  lea    -0x1c(%ebp),%eax
084d06c1 +0x079:  mov    %eax,(%esp)
084d06c4 +0x07c:  call   082b0798 <_GLOBAL__I__ZN4CLog5this_E+0xcbbf>  ; global constructors keyed to CLog::this_+0xcbbf
084d06c9 +0x081:  mov    0x4(%eax),%eax
084d06cc +0x084:  mov    %eax,-0x10(%ebp)
084d06cf +0x087:  lea    -0x128(%ebp),%eax
084d06d5 +0x08d:  mov    %eax,0x8(%esp)
084d06d9 +0x091:  lea    -0x240(%ebp),%eax
084d06df +0x097:  mov    %eax,0x4(%esp)
084d06e3 +0x09b:  mov    -0x10(%ebp),%eax
084d06e6 +0x09e:  mov    %eax,(%esp)
084d06e9 +0x0a1:  call   0867ea5c <_ZN5CUser22checkCodeChecksumRangeERK18CodeHackChecksumExRK20CodeHackCheckRangeEx>  ; CUser::checkCodeChecksumRange(CodeHackChecksumEx const&, CodeHackCheckRangeEx const&)
084d06ee +0x0a6:  xor    $0x1,%eax
084d06f1 +0x0a9:  test   %al,%al
084d06f3 +0x0ab:  je     084d0752 <+0x10a>
084d06f5 +0x0ad:  mov    -0x10(%ebp),%eax
084d06f8 +0x0b0:  mov    %eax,(%esp)
084d06fb +0x0b3:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d0700 +0x0b8:  cmp    $0x1,%eax
084d0703 +0x0bb:  setg   %al
084d0706 +0x0be:  test   %al,%al
084d0708 +0x0c0:  je     084d0752 <+0x10a>
084d070a +0x0c2:  mov    -0x10(%ebp),%eax
084d070d +0x0c5:  mov    %eax,(%esp)
084d0710 +0x0c8:  call   084ec98e <_GLOBAL__I__Z7getUserj+0x3940>  ; global constructors keyed to getUser(unsigned int)+0x3940
084d0715 +0x0cd:  mov    %eax,-0xc(%ebp)
084d0718 +0x0d0:  mov    -0x10(%ebp),%eax
084d071b +0x0d3:  mov    %eax,(%esp)
084d071e +0x0d6:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084d0723 +0x0db:  movl   $0x0,0x14(%esp)
084d072b +0x0e3:  movl   $0x0,0x10(%esp)
084d0733 +0x0eb:  movl   $0x1,0xc(%esp)
084d073b +0x0f3:  movl   $0x3b7,0x8(%esp)
084d0743 +0x0fb:  mov    -0x10(%ebp),%edx
084d0746 +0x0fe:  mov    %edx,0x4(%esp)
084d074a +0x102:  mov    %eax,(%esp)
084d074d +0x105:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
084d0752 +0x10a:  lea    -0x1c(%ebp),%eax
084d0755 +0x10d:  mov    %eax,(%esp)
084d0758 +0x110:  call   080d0d52 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5b9f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5b9f
084d075d +0x115:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084d0762 +0x11a:  lea    0x22c(%eax),%edx
084d0768 +0x120:  lea    -0x18(%ebp),%eax
084d076b +0x123:  mov    %edx,0x4(%esp)
084d076f +0x127:  mov    %eax,(%esp)
084d0772 +0x12a:  call   080d3ada <_GLOBAL__I__ZN10BingoEventC2Ev+0x8927>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8927
084d0777 +0x12f:  sub    $0x4,%esp
084d077a +0x132:  lea    -0x18(%ebp),%eax
084d077d +0x135:  mov    %eax,0x4(%esp)
084d0781 +0x139:  lea    -0x1c(%ebp),%eax
084d0784 +0x13c:  mov    %eax,(%esp)
084d0787 +0x13f:  call   082b07fc <_GLOBAL__I__ZN4CLog5this_E+0xcc23>  ; global constructors keyed to CLog::this_+0xcc23
084d078c +0x144:  test   %al,%al
084d078e +0x146:  jne    084d06be <+0x76>
084d0794 +0x14c:  mov    $0x0,%ebx
084d0799 +0x151:  lea    -0x240(%ebp),%eax
084d079f +0x157:  mov    %eax,(%esp)
084d07a2 +0x15a:  call   0808a76c <_ZN18CodeHackChecksumExD1Ev>  ; CodeHackChecksumEx::~CodeHackChecksumEx()
084d07a7 +0x15f:  mov    %ebx,%eax
084d07a9 +0x161:  lea    -0x8(%ebp),%esp
084d07ac +0x164:  add    $0x0,%esp
084d07af +0x167:  pop    %ebx
084d07b0 +0x168:  pop    %esi
084d07b1 +0x169:  pop    %ebp
084d07b2 +0x16a:  ret
084d07b3 +0x16b:  mov    %edx,%ebx
084d07b5 +0x16d:  mov    %eax,%esi
084d07b7 +0x16f:  lea    -0x240(%ebp),%eax
084d07bd +0x175:  mov    %eax,(%esp)
084d07c0 +0x178:  call   0808a76c <_ZN18CodeHackChecksumExD1Ev>  ; CodeHackChecksumEx::~CodeHackChecksumEx()
084d07c5 +0x17d:  mov    %esi,%eax
084d07c7 +0x17f:  mov    %ebx,%edx
084d07c9 +0x181:  mov    %eax,(%esp)
084d07cc +0x184:  call   08ae3750 <_Unwind_Resume>
084d07d1 +0x189:  nop
```

## 反编译 C

```c
// Inter_CodeChecksumRange::dispatch_sig @ 0x84d0648

/* Inter_CodeChecksumRange::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CodeChecksumRange::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  CHackAnalyzer *pCVar3;
  CodeHackChecksumEx local_244 [280];
  CodeHackCheckRangeEx local_12c [268];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_20 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_1c [4];
  char *local_18;
  CUser *local_14;
  undefined4 local_10;
  
  CodeHackCheckRangeEx::CodeHackCheckRangeEx(local_12c);
  CodeHackChecksumEx::CodeHackChecksumEx(local_244);
                    /* try { // try from 084d067f to 084d0776 has its CatchHandler @ 084d07b3 */
  local_18 = (char *)CodeHackCheckRangeEx::setData(local_12c,(char *)param_3);
  CodeHackChecksumEx::setData(local_244,local_18);
  G_CGameManager();
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::begin(local_20);
  while( true ) {
    G_CGameManager();
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::end(local_1c);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_20,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_20);
    local_14 = *(CUser **)(iVar2 + 4);
    cVar1 = CUser::checkCodeChecksumRange(local_14,local_244,local_12c);
    if (cVar1 != '\x01') {
      iVar2 = CUser::get_state(local_14);
      if (1 < iVar2) {
        local_10 = CUser::GetChecksumAnswerCount(local_14);
        pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(local_14);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,local_14,0x3b7,1,0,0);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_20);
  }
  CodeHackChecksumEx::~CodeHackChecksumEx(local_244);
  return 0;
}
```
