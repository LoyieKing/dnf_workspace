# dispatch_sig

`_ZN22TimerScheduleTenSecond12dispatch_sigEiij`

`TimerScheduleTenSecond::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerScheduleTenSecond` | `0x08637936` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08637936  _ZN22TimerScheduleTenSecond12dispatch_sigEiij
#           TimerScheduleTenSecond::dispatch_sig(int, int, unsigned int)
# range [0x08637936, 0x08637a61]
08637936 +0x000:  push   %ebp
08637937 +0x001:  mov    %esp,%ebp
08637939 +0x003:  push   %esi
0863793a +0x004:  push   %ebx
0863793b +0x005:  sub    $0x30,%esp
0863793e +0x008:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08637943 +0x00d:  lea    0x22c(%eax),%edx
08637949 +0x013:  lea    -0x14(%ebp),%eax
0863794c +0x016:  mov    %edx,0x4(%esp)
08637950 +0x01a:  mov    %eax,(%esp)
08637953 +0x01d:  call   080d3ab4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x8901>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8901
08637958 +0x022:  sub    $0x4,%esp
0863795b +0x025:  lea    -0x14(%ebp),%eax
0863795e +0x028:  mov    %eax,0x4(%esp)
08637962 +0x02c:  lea    -0x18(%ebp),%eax
08637965 +0x02f:  mov    %eax,(%esp)
08637968 +0x032:  call   082c44f6 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x163f1>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x163f1
0863796d +0x037:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08637972 +0x03c:  lea    0x22c(%eax),%edx
08637978 +0x042:  lea    -0x10(%ebp),%eax
0863797b +0x045:  mov    %edx,0x4(%esp)
0863797f +0x049:  mov    %eax,(%esp)
08637982 +0x04c:  call   080d3ada <_GLOBAL__I__ZN10BingoEventC2Ev+0x8927>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8927
08637987 +0x051:  sub    $0x4,%esp
0863798a +0x054:  lea    -0x10(%ebp),%eax
0863798d +0x057:  mov    %eax,0x4(%esp)
08637991 +0x05b:  lea    -0x1c(%ebp),%eax
08637994 +0x05e:  mov    %eax,(%esp)
08637997 +0x061:  call   082c44f6 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x163f1>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x163f1
0863799c +0x066:  jmp    08637a2d <+0xf7>
086379a1 +0x06b:  lea    -0x18(%ebp),%eax
086379a4 +0x06e:  mov    %eax,(%esp)
086379a7 +0x071:  call   084f11de <_GLOBAL__I__Z7getUserj+0x8190>  ; global constructors keyed to getUser(unsigned int)+0x8190
086379ac +0x076:  mov    0x4(%eax),%eax
086379af +0x079:  mov    %eax,-0xc(%ebp)
086379b2 +0x07c:  mov    -0xc(%ebp),%eax
086379b5 +0x07f:  mov    %eax,(%esp)
086379b8 +0x082:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086379bd +0x087:  cmp    $0x1,%eax
086379c0 +0x08a:  jle    086379d8 <+0xa2>
086379c2 +0x08c:  mov    -0xc(%ebp),%eax
086379c5 +0x08f:  mov    %eax,(%esp)
086379c8 +0x092:  call   0822fce4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x538e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x538e
086379cd +0x097:  test   %eax,%eax
086379cf +0x099:  js     086379d8 <+0xa2>
086379d1 +0x09b:  mov    $0x1,%eax
086379d6 +0x0a0:  jmp    086379dd <+0xa7>
086379d8 +0x0a2:  mov    $0x0,%eax
086379dd +0x0a7:  test   %al,%al
086379df +0x0a9:  je     08637a22 <+0xec>
086379e1 +0x0ab:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
086379e6 +0x0b0:  mov    (%eax),%eax
086379e8 +0x0b2:  add    $0x14,%eax
086379eb +0x0b5:  mov    (%eax),%esi
086379ed +0x0b7:  mov    -0xc(%ebp),%eax
086379f0 +0x0ba:  mov    %eax,(%esp)
086379f3 +0x0bd:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086379f8 +0x0c2:  mov    %eax,%ebx
086379fa +0x0c4:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086379ff +0x0c9:  mov    %eax,(%esp)
08637a02 +0x0cc:  call   08234516 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bc0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bc0
08637a07 +0x0d1:  mov    &_ZN10GlobalData17s_antibotChecker_E,%edx
08637a0d +0x0d7:  mov    %ebx,0xc(%esp)
08637a11 +0x0db:  movl   $0x0,0x8(%esp)
08637a19 +0x0e3:  mov    %eax,0x4(%esp)
08637a1d +0x0e7:  mov    %edx,(%esp)
08637a20 +0x0ea:  call   *%esi
08637a22 +0x0ec:  lea    -0x18(%ebp),%eax
08637a25 +0x0ef:  mov    %eax,(%esp)
08637a28 +0x0f2:  call   082cf9a8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x218a3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x218a3
08637a2d +0x0f7:  lea    -0x1c(%ebp),%eax
08637a30 +0x0fa:  mov    %eax,0x4(%esp)
08637a34 +0x0fe:  lea    -0x18(%ebp),%eax
08637a37 +0x101:  mov    %eax,(%esp)
08637a3a +0x104:  call   0863d2ac <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17bd>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17bd
08637a3f +0x109:  test   %al,%al
08637a41 +0x10b:  jne    086379a1 <+0x6b>
08637a47 +0x111:  movl   $0xa,(%esp)
08637a4e +0x118:  call   08637a62 <_ZN22TimerScheduleTenSecond15registNextTimerEj>  ; TimerScheduleTenSecond::registNextTimer(unsigned int)
08637a53 +0x11d:  mov    $0x1,%eax
08637a58 +0x122:  lea    -0x8(%ebp),%esp
08637a5b +0x125:  add    $0x0,%esp
08637a5e +0x128:  pop    %ebx
08637a5f +0x129:  pop    %esi
08637a60 +0x12a:  pop    %ebp
08637a61 +0x12b:  ret
```

## 反编译 C

```c
// TimerScheduleTenSecond::dispatch_sig @ 0x8637936

/* TimerScheduleTenSecond::dispatch_sig(int, int, unsigned int) */

undefined4 TimerScheduleTenSecond::dispatch_sig(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CEnvironment *this;
  undefined4 uVar6;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>> local_20 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>> local_1c [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  G_CGameManager();
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::begin(local_18);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_const_iterator
            (local_1c,(_Rb_tree_iterator *)local_18);
  G_CGameManager();
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::end(local_14);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_const_iterator
            (local_20,(_Rb_tree_iterator *)local_14);
  do {
    cVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                      (local_1c,(_Rb_tree_const_iterator *)local_20);
    if (cVar3 == '\0') {
      registNextTimer(10);
      return 1;
    }
    iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator->(local_1c)
    ;
    local_10 = *(CUser **)(iVar4 + 4);
    iVar4 = CUser::get_state(local_10);
    if (iVar4 < 2) {
LAB_086379d8:
      bVar2 = false;
    }
    else {
      iVar4 = CUser::getAntibotKey(local_10);
      if (iVar4 < 0) goto LAB_086379d8;
      bVar2 = true;
    }
    if (bVar2) {
      pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0x14);
      uVar5 = CUser::get_acc_id(local_10);
      this = (CEnvironment *)G_CEnvironment();
      uVar6 = CEnvironment::getProcessSequence(this);
      (*pcVar1)(GlobalData::s_antibotChecker_,uVar6,0,uVar5);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator++(local_1c);
  } while( true );
}
```
