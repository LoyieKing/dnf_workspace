# SendAradEventItemLog

`_ZN5CUser20SendAradEventItemLogEmi`

`CUser::SendAradEventItemLog(unsigned long, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692b84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692b84  _ZN5CUser20SendAradEventItemLogEmi
#           CUser::SendAradEventItemLog(unsigned long, int)
# range [0x08692b84, 0x08692d29]
08692b84 +0x000:  push   %ebp
08692b85 +0x001:  mov    %esp,%ebp
08692b87 +0x003:  push   %esi
08692b88 +0x004:  push   %ebx
08692b89 +0x005:  sub    $0x30,%esp
08692b8c +0x008:  lea    -0x9(%ebp),%eax
08692b8f +0x00b:  mov    %eax,(%esp)
08692b92 +0x00e:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08692b97 +0x013:  lea    -0x9(%ebp),%eax
08692b9a +0x016:  mov    %eax,0x8(%esp)
08692b9e +0x01a:  movl   $"Arad_StatisticsEventItemList",0x4(%esp)
08692ba6 +0x022:  lea    -0x10(%ebp),%eax
08692ba9 +0x025:  mov    %eax,(%esp)
08692bac +0x028:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08692bb1 +0x02d:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
08692bb6 +0x032:  lea    -0x10(%ebp),%edx
08692bb9 +0x035:  mov    %edx,0x4(%esp)
08692bbd +0x039:  mov    %eax,(%esp)
08692bc0 +0x03c:  call   081882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>  ; ARAD::Arad_DataManager::findGameScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
08692bc5 +0x041:  mov    0xc(%ebp),%edx
08692bc8 +0x044:  mov    %edx,0x4(%esp)
08692bcc +0x048:  mov    %eax,(%esp)
08692bcf +0x04b:  call   0819d09a <_ZN4ARAD28Arad_StatisticsEventItemList14needStatisticsEm>  ; ARAD::Arad_StatisticsEventItemList::needStatistics(unsigned long)
08692bd4 +0x050:  mov    %eax,%ebx
08692bd6 +0x052:  xor    $0x1,%ebx
08692bd9 +0x055:  lea    -0x10(%ebp),%eax
08692bdc +0x058:  mov    %eax,(%esp)
08692bdf +0x05b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08692be4 +0x060:  jmp    08692c16 <+0x92>
08692be6 +0x062:  mov    %edx,%ebx
08692be8 +0x064:  mov    %eax,%esi
08692bea +0x066:  lea    -0x10(%ebp),%eax
08692bed +0x069:  mov    %eax,(%esp)
08692bf0 +0x06c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08692bf5 +0x071:  mov    %esi,%eax
08692bf7 +0x073:  mov    %ebx,%edx
08692bf9 +0x075:  jmp    08692bfb <+0x77>
08692bfb +0x077:  mov    %edx,%ebx
08692bfd +0x079:  mov    %eax,%esi
08692bff +0x07b:  lea    -0x9(%ebp),%eax
08692c02 +0x07e:  mov    %eax,(%esp)
08692c05 +0x081:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08692c0a +0x086:  mov    %esi,%eax
08692c0c +0x088:  mov    %ebx,%edx
08692c0e +0x08a:  mov    %eax,(%esp)
08692c11 +0x08d:  call   08ae3750 <_Unwind_Resume>
08692c16 +0x092:  lea    -0x9(%ebp),%eax
08692c19 +0x095:  mov    %eax,(%esp)
08692c1c +0x098:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08692c21 +0x09d:  test   %bl,%bl
08692c23 +0x09f:  jne    08692d22 <+0x19e>
08692c29 +0x0a5:  lea    -0x20(%ebp),%eax
08692c2c +0x0a8:  mov    %eax,(%esp)
08692c2f +0x0ab:  call   08694f14 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1769>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1769
08692c34 +0x0b0:  mov    0x8(%ebp),%eax
08692c37 +0x0b3:  mov    %eax,(%esp)
08692c3a +0x0b6:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08692c3f +0x0bb:  mov    %eax,-0x18(%ebp)
08692c42 +0x0be:  movl   $0xffffffff,0x4(%esp)
08692c4a +0x0c6:  mov    0x8(%ebp),%eax
08692c4d +0x0c9:  mov    %eax,(%esp)
08692c50 +0x0cc:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08692c55 +0x0d1:  mov    %eax,-0x14(%ebp)
08692c58 +0x0d4:  mov    0xc(%ebp),%eax
08692c5b +0x0d7:  mov    %eax,-0x20(%ebp)
08692c5e +0x0da:  mov    0x10(%ebp),%eax
08692c61 +0x0dd:  mov    %eax,-0x1c(%ebp)
08692c64 +0x0e0:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08692c69 +0x0e5:  movl   $0xb9c7,0x8(%esp)
08692c71 +0x0ed:  movl   $"user.cpp",0x4(%esp)
08692c79 +0x0f5:  mov    %eax,(%esp)
08692c7c +0x0f8:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08692c81 +0x0fd:  movl   $0x1,0x8(%esp)
08692c89 +0x105:  mov    %eax,0x4(%esp)
08692c8d +0x109:  lea    -0x28(%ebp),%eax
08692c90 +0x10c:  mov    %eax,(%esp)
08692c93 +0x10f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08692c98 +0x114:  mov    0x8(%ebp),%eax
08692c9b +0x117:  mov    %eax,(%esp)
08692c9e +0x11a:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08692ca3 +0x11f:  mov    %eax,0x8(%esp)
08692ca7 +0x123:  movl   $0x20,0x4(%esp)
08692caf +0x12b:  lea    -0x28(%ebp),%eax
08692cb2 +0x12e:  mov    %eax,(%esp)
08692cb5 +0x131:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
08692cba +0x136:  lea    -0x28(%ebp),%eax
08692cbd +0x139:  mov    %eax,(%esp)
08692cc0 +0x13c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08692cc5 +0x141:  movl   $0x10,0x8(%esp)
08692ccd +0x149:  lea    -0x20(%ebp),%edx
08692cd0 +0x14c:  mov    %edx,0x4(%esp)
08692cd4 +0x150:  mov    %eax,(%esp)
08692cd7 +0x153:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08692cdc +0x158:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08692ce1 +0x15d:  lea    -0x28(%ebp),%edx
08692ce4 +0x160:  mov    %edx,0x8(%esp)
08692ce8 +0x164:  movl   $0x4,0x4(%esp)
08692cf0 +0x16c:  mov    %eax,(%esp)
08692cf3 +0x16f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08692cf8 +0x174:  jmp    08692d15 <+0x191>
08692cfa +0x176:  mov    %edx,%ebx
08692cfc +0x178:  mov    %eax,%esi
08692cfe +0x17a:  lea    -0x28(%ebp),%eax
08692d01 +0x17d:  mov    %eax,(%esp)
08692d04 +0x180:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08692d09 +0x185:  mov    %esi,%eax
08692d0b +0x187:  mov    %ebx,%edx
08692d0d +0x189:  mov    %eax,(%esp)
08692d10 +0x18c:  call   08ae3750 <_Unwind_Resume>
08692d15 +0x191:  lea    -0x28(%ebp),%eax
08692d18 +0x194:  mov    %eax,(%esp)
08692d1b +0x197:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08692d20 +0x19c:  jmp    08692d23 <+0x19f>
08692d22 +0x19e:  nop
08692d23 +0x19f:  add    $0x30,%esp
08692d26 +0x1a2:  pop    %ebx
08692d27 +0x1a3:  pop    %esi
08692d28 +0x1a4:  pop    %ebp
08692d29 +0x1a5:  ret
```

## 反编译 C

```c
// CUser::SendAradEventItemLog @ 0x8692b84

/* CUser::SendAradEventItemLog(unsigned long, int) */

void __thiscall CUser::SendAradEventItemLog(CUser *this,ulong param_1,int param_2)

{
  char cVar1;
  Arad_DataManager *this_00;
  ulong uVar2;
  Stream *pSVar3;
  undefined4 uVar4;
  CStreamGuard *this_01;
  CStreamGuard local_2c [8];
  ulong local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  string local_14 [7];
  allocator<char> local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 08692bac to 08692bb0 has its CatchHandler @ 08692bfb */
  std::string::string(local_14,"Arad_StatisticsEventItemList",(allocator *)&local_d);
                    /* try { // try from 08692bb1 to 08692bd3 has its CatchHandler @ 08692be6 */
  this_00 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
  uVar2 = ARAD::Arad_DataManager::findGameScript(this_00,(string)local_14);
  cVar1 = ARAD::Arad_StatisticsEventItemList::needStatistics(uVar2);
                    /* try { // try from 08692bdf to 08692be3 has its CatchHandler @ 08692bfb */
  std::string::~string(local_14);
  std::allocator<char>::~allocator(&local_d);
  if (cVar1 == '\x01') {
    arad::SigAradEventItemLog::SigAradEventItemLog((SigAradEventItemLog *)&local_24);
    local_1c = get_acc_id(this);
    local_18 = get_charac_no(this,-1);
    local_24 = param_1;
    local_20 = param_2;
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0xb9c7);
    CStreamGuard::CStreamGuard(local_2c,pSVar3,true);
    uVar4 = GetUID(this);
                    /* try { // try from 08692cb5 to 08692cf7 has its CatchHandler @ 08692cfa */
    ARAD::DISPATCHER::make_internal_stream_jpn(local_2c,0x20,uVar4);
    this_01 = (CStreamGuard *)CStreamGuard::operator->(local_2c);
    CStreamGuard::put_binary(this_01,&local_24,0x10);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_2c);
    CStreamGuard::~CStreamGuard(local_2c);
  }
  return;
}
```
