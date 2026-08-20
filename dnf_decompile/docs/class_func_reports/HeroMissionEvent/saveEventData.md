# saveEventData

`_ZN16HeroMissionEvent13saveEventDataEP5CUserb`

`HeroMissionEvent::saveEventData(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x08166d38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08166d38  _ZN16HeroMissionEvent13saveEventDataEP5CUserb
#           HeroMissionEvent::saveEventData(CUser*, bool)
# range [0x08166d38, 0x0816709d]
08166d38 +0x000:  push   %ebp
08166d39 +0x001:  mov    %esp,%ebp
08166d3b +0x003:  push   %esi
08166d3c +0x004:  push   %ebx
08166d3d +0x005:  sub    $0x60,%esp
08166d40 +0x008:  mov    0x10(%ebp),%eax
08166d43 +0x00b:  mov    %al,-0x3c(%ebp)
08166d46 +0x00e:  mov    0x8(%ebp),%eax
08166d49 +0x011:  mov    (%eax),%eax
08166d4b +0x013:  add    $0x34,%eax
08166d4e +0x016:  mov    (%eax),%edx
08166d50 +0x018:  mov    0x8(%ebp),%eax
08166d53 +0x01b:  movl   $0x0,0x4(%esp)
08166d5b +0x023:  mov    %eax,(%esp)
08166d5e +0x026:  call   *%edx
08166d60 +0x028:  xor    $0x1,%eax
08166d63 +0x02b:  test   %al,%al
08166d65 +0x02d:  jne    08167090 <+0x358>
08166d6b +0x033:  cmpl   $0x0,0xc(%ebp)
08166d6f +0x037:  jne    08166da2 <+0x6a>
08166d71 +0x039:  movl   $"[HeroMission] User is null.",0x10(%esp)
08166d79 +0x041:  movl   $0x25e,0xc(%esp)
08166d81 +0x049:  movl   $&_ZZN16HeroMissionEvent13saveEventDataEP5CUserbE19__PRETTY_FUNCTION__,0x8(%esp)
08166d89 +0x051:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08166d91 +0x059:  movl   $0x1,(%esp)
08166d98 +0x060:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08166d9d +0x065:  jmp    08167094 <+0x35c>
08166da2 +0x06a:  movl   $0xffffffff,0x4(%esp)
08166daa +0x072:  mov    0xc(%ebp),%eax
08166dad +0x075:  mov    %eax,(%esp)
08166db0 +0x078:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08166db5 +0x07d:  test   %eax,%eax
08166db7 +0x07f:  sete   %al
08166dba +0x082:  test   %al,%al
08166dbc +0x084:  jne    08167093 <+0x35b>
08166dc2 +0x08a:  lea    -0x20(%ebp),%eax
08166dc5 +0x08d:  mov    %eax,(%esp)
08166dc8 +0x090:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08166dcd +0x095:  movl   $0xffffffff,0x4(%esp)
08166dd5 +0x09d:  mov    0xc(%ebp),%eax
08166dd8 +0x0a0:  mov    %eax,(%esp)
08166ddb +0x0a3:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08166de0 +0x0a8:  mov    %eax,-0x1c(%ebp)
08166de3 +0x0ab:  mov    0x8(%ebp),%eax
08166de6 +0x0ae:  lea    0x24(%eax),%ecx
08166de9 +0x0b1:  lea    -0x24(%ebp),%eax
08166dec +0x0b4:  lea    -0x1c(%ebp),%edx
08166def +0x0b7:  mov    %edx,0x8(%esp)
08166df3 +0x0bb:  mov    %ecx,0x4(%esp)
08166df7 +0x0bf:  mov    %eax,(%esp)
08166dfa +0x0c2:  call   081687f8 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x659>  ; global constructors keyed to HeroMissionValue::clear()+0x659
08166dff +0x0c7:  sub    $0x4,%esp
08166e02 +0x0ca:  mov    0x8(%ebp),%eax
08166e05 +0x0cd:  lea    0x24(%eax),%edx
08166e08 +0x0d0:  lea    -0x18(%ebp),%eax
08166e0b +0x0d3:  mov    %edx,0x4(%esp)
08166e0f +0x0d7:  mov    %eax,(%esp)
08166e12 +0x0da:  call   08168824 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x685>  ; global constructors keyed to HeroMissionValue::clear()+0x685
08166e17 +0x0df:  sub    $0x4,%esp
08166e1a +0x0e2:  lea    -0x18(%ebp),%eax
08166e1d +0x0e5:  mov    %eax,0x4(%esp)
08166e21 +0x0e9:  lea    -0x24(%ebp),%eax
08166e24 +0x0ec:  mov    %eax,(%esp)
08166e27 +0x0ef:  call   0816892c <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x78d>  ; global constructors keyed to HeroMissionValue::clear()+0x78d
08166e2c +0x0f4:  test   %al,%al
08166e2e +0x0f6:  je     08166e78 <+0x140>
08166e30 +0x0f8:  movl   $0xffffffff,0x4(%esp)
08166e38 +0x100:  mov    0xc(%ebp),%eax
08166e3b +0x103:  mov    %eax,(%esp)
08166e3e +0x106:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08166e43 +0x10b:  mov    %eax,0x14(%esp)
08166e47 +0x10f:  movl   $"[HeroMission] Not exist mission value. (charac:%u)",0x10(%esp)
08166e4f +0x117:  movl   $0x269,0xc(%esp)
08166e57 +0x11f:  movl   $&_ZZN16HeroMissionEvent13saveEventDataEP5CUserbE19__PRETTY_FUNCTION__,0x8(%esp)
08166e5f +0x127:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08166e67 +0x12f:  movl   $0x1,(%esp)
08166e6e +0x136:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08166e73 +0x13b:  jmp    08167083 <+0x34b>
08166e78 +0x140:  lea    -0x24(%ebp),%eax
08166e7b +0x143:  mov    %eax,(%esp)
08166e7e +0x146:  call   08168940 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7a1>  ; global constructors keyed to HeroMissionValue::clear()+0x7a1
08166e83 +0x14b:  lea    0x4(%eax),%edx
08166e86 +0x14e:  lea    -0x30(%ebp),%eax
08166e89 +0x151:  mov    %edx,0x4(%esp)
08166e8d +0x155:  mov    %eax,(%esp)
08166e90 +0x158:  call   081684f6 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x357>  ; global constructors keyed to HeroMissionValue::clear()+0x357
08166e95 +0x15d:  sub    $0x4,%esp
08166e98 +0x160:  jmp    08166ebf <+0x187>
08166e9a +0x162:  lea    -0x30(%ebp),%eax
08166e9d +0x165:  mov    %eax,(%esp)
08166ea0 +0x168:  call   08168582 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3e3>  ; global constructors keyed to HeroMissionValue::clear()+0x3e3
08166ea5 +0x16d:  lea    -0x20(%ebp),%edx
08166ea8 +0x170:  mov    %edx,0x4(%esp)
08166eac +0x174:  mov    %eax,(%esp)
08166eaf +0x177:  call   08164bca <_ZN16HeroMissionValue14getStringTokenERSs>  ; HeroMissionValue::getStringToken(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
08166eb4 +0x17c:  lea    -0x30(%ebp),%eax
08166eb7 +0x17f:  mov    %eax,(%esp)
08166eba +0x182:  call   0816856c <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3cd>  ; global constructors keyed to HeroMissionValue::clear()+0x3cd
08166ebf +0x187:  lea    -0x24(%ebp),%eax
08166ec2 +0x18a:  mov    %eax,(%esp)
08166ec5 +0x18d:  call   08168940 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7a1>  ; global constructors keyed to HeroMissionValue::clear()+0x7a1
08166eca +0x192:  lea    0x4(%eax),%edx
08166ecd +0x195:  lea    -0x14(%ebp),%eax
08166ed0 +0x198:  mov    %edx,0x4(%esp)
08166ed4 +0x19c:  mov    %eax,(%esp)
08166ed7 +0x19f:  call   0816851a <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x37b>  ; global constructors keyed to HeroMissionValue::clear()+0x37b
08166edc +0x1a4:  sub    $0x4,%esp
08166edf +0x1a7:  lea    -0x14(%ebp),%eax
08166ee2 +0x1aa:  mov    %eax,0x4(%esp)
08166ee6 +0x1ae:  lea    -0x30(%ebp),%eax
08166ee9 +0x1b1:  mov    %eax,(%esp)
08166eec +0x1b4:  call   08168540 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3a1>  ; global constructors keyed to HeroMissionValue::clear()+0x3a1
08166ef1 +0x1b9:  test   %al,%al
08166ef3 +0x1bb:  jne    08166e9a <+0x162>
08166ef5 +0x1bd:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08166efa +0x1c2:  movl   $0x271,0x8(%esp)
08166f02 +0x1ca:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08166f0a +0x1d2:  mov    %eax,(%esp)
08166f0d +0x1d5:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08166f12 +0x1da:  movl   $0x1,0x8(%esp)
08166f1a +0x1e2:  mov    %eax,0x4(%esp)
08166f1e +0x1e6:  lea    -0x2c(%ebp),%eax
08166f21 +0x1e9:  mov    %eax,(%esp)
08166f24 +0x1ec:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08166f29 +0x1f1:  mov    0xc(%ebp),%eax
08166f2c +0x1f4:  mov    %eax,(%esp)
08166f2f +0x1f7:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08166f34 +0x1fc:  mov    %eax,0x8(%esp)
08166f38 +0x200:  movl   $0x11,0x4(%esp)
08166f40 +0x208:  lea    -0x2c(%ebp),%eax
08166f43 +0x20b:  mov    %eax,(%esp)
08166f46 +0x20e:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
08166f4b +0x213:  lea    -0x2c(%ebp),%eax
08166f4e +0x216:  mov    %eax,(%esp)
08166f51 +0x219:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08166f56 +0x21e:  mov    %eax,(%esp)
08166f59 +0x221:  call   0816894e <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7af>  ; global constructors keyed to HeroMissionValue::clear()+0x7af
08166f5e +0x226:  mov    %eax,-0xc(%ebp)
08166f61 +0x229:  cmpl   $0x0,-0xc(%ebp)
08166f65 +0x22d:  jne    08166f9d <+0x265>
08166f67 +0x22f:  movl   $"[HeroMission] SigSaveHeroMissionData is null.",0x10(%esp)
08166f6f +0x237:  movl   $0x276,0xc(%esp)
08166f77 +0x23f:  movl   $&_ZZN16HeroMissionEvent13saveEventDataEP5CUserbE19__PRETTY_FUNCTION__,0x8(%esp)
08166f7f +0x247:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08166f87 +0x24f:  movl   $0x1,(%esp)
08166f8e +0x256:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08166f93 +0x25b:  mov    $0x0,%ebx
08166f98 +0x260:  jmp    08167059 <+0x321>
08166f9d +0x265:  mov    -0xc(%ebp),%eax
08166fa0 +0x268:  mov    %eax,(%esp)
08166fa3 +0x26b:  call   081639c0 <_ZN6Taiwan22SigSaveHeroMissionData4initEv>  ; Taiwan::SigSaveHeroMissionData::init()
08166fa8 +0x270:  movl   $0xffffffff,0x4(%esp)
08166fb0 +0x278:  mov    0xc(%ebp),%eax
08166fb3 +0x27b:  mov    %eax,(%esp)
08166fb6 +0x27e:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08166fbb +0x283:  mov    %eax,%edx
08166fbd +0x285:  mov    -0xc(%ebp),%eax
08166fc0 +0x288:  mov    %edx,(%eax)
08166fc2 +0x28a:  lea    -0x20(%ebp),%eax
08166fc5 +0x28d:  mov    %eax,(%esp)
08166fc8 +0x290:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
08166fcd +0x295:  mov    %eax,%ebx
08166fcf +0x297:  lea    -0x20(%ebp),%eax
08166fd2 +0x29a:  mov    %eax,(%esp)
08166fd5 +0x29d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08166fda +0x2a2:  mov    -0xc(%ebp),%edx
08166fdd +0x2a5:  add    $0x4,%edx
08166fe0 +0x2a8:  mov    %ebx,0x8(%esp)
08166fe4 +0x2ac:  mov    %eax,0x4(%esp)
08166fe8 +0x2b0:  mov    %edx,(%esp)
08166feb +0x2b3:  call   0807d8d0 <_init+0x1c8>
08166ff0 +0x2b8:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08166ff5 +0x2bd:  lea    -0x2c(%ebp),%edx
08166ff8 +0x2c0:  mov    %edx,0x8(%esp)
08166ffc +0x2c4:  movl   $0x2,0x4(%esp)
08167004 +0x2cc:  mov    %eax,(%esp)
08167007 +0x2cf:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0816700c +0x2d4:  cmpb   $0x0,-0x3c(%ebp)
08167010 +0x2d8:  je     0816703d <+0x305>
08167012 +0x2da:  movl   $0xffffffff,0x4(%esp)
0816701a +0x2e2:  mov    0xc(%ebp),%eax
0816701d +0x2e5:  mov    %eax,(%esp)
08167020 +0x2e8:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08167025 +0x2ed:  mov    %eax,-0x10(%ebp)
08167028 +0x2f0:  mov    0x8(%ebp),%eax
0816702b +0x2f3:  lea    0x24(%eax),%edx
0816702e +0x2f6:  lea    -0x10(%ebp),%eax
08167031 +0x2f9:  mov    %eax,0x4(%esp)
08167035 +0x2fd:  mov    %edx,(%esp)
08167038 +0x300:  call   0816885e <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x6bf>  ; global constructors keyed to HeroMissionValue::clear()+0x6bf
0816703d +0x305:  mov    $0x1,%ebx
08167042 +0x30a:  jmp    08167059 <+0x321>
08167044 +0x30c:  mov    %edx,%ebx
08167046 +0x30e:  mov    %eax,%esi
08167048 +0x310:  lea    -0x2c(%ebp),%eax
0816704b +0x313:  mov    %eax,(%esp)
0816704e +0x316:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08167053 +0x31b:  mov    %esi,%eax
08167055 +0x31d:  mov    %ebx,%edx
08167057 +0x31f:  jmp    08167068 <+0x330>
08167059 +0x321:  lea    -0x2c(%ebp),%eax
0816705c +0x324:  mov    %eax,(%esp)
0816705f +0x327:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08167064 +0x32c:  test   %ebx,%ebx
08167066 +0x32e:  jmp    08167083 <+0x34b>
08167068 +0x330:  mov    %edx,%ebx
0816706a +0x332:  mov    %eax,%esi
0816706c +0x334:  lea    -0x20(%ebp),%eax
0816706f +0x337:  mov    %eax,(%esp)
08167072 +0x33a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08167077 +0x33f:  mov    %esi,%eax
08167079 +0x341:  mov    %ebx,%edx
0816707b +0x343:  mov    %eax,(%esp)
0816707e +0x346:  call   08ae3750 <_Unwind_Resume>
08167083 +0x34b:  lea    -0x20(%ebp),%eax
08167086 +0x34e:  mov    %eax,(%esp)
08167089 +0x351:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0816708e +0x356:  jmp    08167094 <+0x35c>
08167090 +0x358:  nop
08167091 +0x359:  jmp    08167094 <+0x35c>
08167093 +0x35b:  nop
08167094 +0x35c:  lea    -0x8(%ebp),%esp
08167097 +0x35f:  add    $0x0,%esp
0816709a +0x362:  pop    %ebx
0816709b +0x363:  pop    %esi
0816709c +0x364:  pop    %ebp
0816709d +0x365:  ret
```

## 反编译 C

```c
// HeroMissionEvent::saveEventData @ 0x8166d38

/* HeroMissionEvent::saveEventData(CUser*, bool) */

void __thiscall HeroMissionEvent::saveEventData(HeroMissionEvent *this,CUser *param_1,bool param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  HeroMissionValue *this_00;
  Stream *pSVar5;
  CStreamGuard *this_01;
  size_t __n;
  char *__src;
  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
  local_34 [4];
  CStreamGuard local_30 [8];
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
  local_28 [4];
  string local_24;
  undefined4 local_20;
  map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  undefined4 local_14;
  SigSaveHeroMissionData *local_10;
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 == '\x01') {
    if (param_1 == (CUser *)0x0) {
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "void HeroMissionEvent::saveEventData(CUser*, bool)",0x25e,
                 "[HeroMission] User is null.");
    }
    else {
      iVar3 = CUser::get_charac_no(param_1,-1);
      if (iVar3 != 0) {
        std::string::string((string *)&local_24);
                    /* try { // try from 08166ddb to 08166f11 has its CatchHandler @ 08167068 */
        local_20 = CUser::get_charac_no(param_1,-1);
        std::
        map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
        ::find((uint *)local_28);
        std::
        map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
        ::end(local_1c);
        cVar1 = std::
                _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
                ::operator==(local_28,(_Rb_tree_iterator *)local_1c);
        if (cVar1 == '\0') {
          std::
          _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
          ::operator->(local_28);
          std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::begin();
          while( true ) {
            std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
            ::operator->(local_28);
            std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::end();
            bVar2 = __gnu_cxx::operator!=(local_34,local_18);
            if (!bVar2) break;
            this_00 = (HeroMissionValue *)
                      __gnu_cxx::
                      __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                      ::operator->(local_34);
            HeroMissionValue::getStringToken(this_00,&local_24);
            __gnu_cxx::
            __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
            ::operator++(local_34);
          }
          pSVar5 = (Stream *)
                   StreamPool::Acquire(GlobalData::s_stream_pool,
                                       "localtaiwan/Event/EventHeroMission.cpp",0x271);
          CStreamGuard::CStreamGuard(local_30,pSVar5,true);
          uVar4 = CUser::GetUID(param_1);
                    /* try { // try from 08166f46 to 0816703c has its CatchHandler @ 08167044 */
          Taiwan::internal_stream(local_30,0x11,uVar4);
          this_01 = (CStreamGuard *)CStreamGuard::operator->(local_30);
          local_10 = CStreamGuard::GetInBuffer<Taiwan::SigSaveHeroMissionData>(this_01);
          if (local_10 == (SigSaveHeroMissionData *)0x0) {
            LogManager::logFormat
                      (1,"localtaiwan/Event/EventHeroMission.cpp",
                       "void HeroMissionEvent::saveEventData(CUser*, bool)",0x276,
                       "[HeroMission] SigSaveHeroMissionData is null.");
          }
          else {
            Taiwan::SigSaveHeroMissionData::init(local_10);
            uVar4 = CUser::get_charac_no(param_1,-1);
            *(undefined4 *)local_10 = uVar4;
            __n = std::string::length((string *)&local_24);
            __src = (char *)std::string::c_str((string *)&local_24);
            strncpy((char *)(local_10 + 4),__src,__n);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_30);
            if (param_2) {
              local_14 = CUser::get_charac_no(param_1,-1);
              std::
              map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
              ::erase((uint *)(this + 0x24));
            }
          }
                    /* try { // try from 0816705f to 08167063 has its CatchHandler @ 08167068 */
          CStreamGuard::~CStreamGuard(local_30);
        }
        else {
          uVar4 = CUser::get_charac_no(param_1,-1);
          LogManager::logFormat
                    (1,"localtaiwan/Event/EventHeroMission.cpp",
                     "void HeroMissionEvent::saveEventData(CUser*, bool)",0x269,
                     "[HeroMission] Not exist mission value. (charac:%u)",uVar4);
        }
        std::string::~string((string *)&local_24);
      }
    }
  }
  return;
}
```
