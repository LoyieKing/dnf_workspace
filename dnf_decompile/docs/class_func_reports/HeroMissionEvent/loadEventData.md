# loadEventData

`_ZN16HeroMissionEvent13loadEventDataEP5CUser`

`HeroMissionEvent::loadEventData(CUser*)`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x0816709e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816709e  _ZN16HeroMissionEvent13loadEventDataEP5CUser
#           HeroMissionEvent::loadEventData(CUser*)
# range [0x0816709e, 0x08167215]
0816709e +0x000:  push   %ebp
0816709f +0x001:  mov    %esp,%ebp
081670a1 +0x003:  push   %esi
081670a2 +0x004:  push   %ebx
081670a3 +0x005:  sub    $0x30,%esp
081670a6 +0x008:  mov    0x8(%ebp),%eax
081670a9 +0x00b:  mov    (%eax),%eax
081670ab +0x00d:  add    $0x34,%eax
081670ae +0x010:  mov    (%eax),%edx
081670b0 +0x012:  mov    0x8(%ebp),%eax
081670b3 +0x015:  movl   $0x0,0x4(%esp)
081670bb +0x01d:  mov    %eax,(%esp)
081670be +0x020:  call   *%edx
081670c0 +0x022:  xor    $0x1,%eax
081670c3 +0x025:  test   %al,%al
081670c5 +0x027:  jne    0816720d <+0x16f>
081670cb +0x02d:  cmpl   $0x0,0xc(%ebp)
081670cf +0x031:  jne    08167102 <+0x64>
081670d1 +0x033:  movl   $"[HeroMission] User is null.",0x10(%esp)
081670d9 +0x03b:  movl   $0x28c,0xc(%esp)
081670e1 +0x043:  movl   $&_ZZN16HeroMissionEvent13loadEventDataEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
081670e9 +0x04b:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
081670f1 +0x053:  movl   $0x1,(%esp)
081670f8 +0x05a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081670fd +0x05f:  jmp    0816720e <+0x170>
08167102 +0x064:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08167107 +0x069:  movl   $0x291,0x8(%esp)
0816710f +0x071:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08167117 +0x079:  mov    %eax,(%esp)
0816711a +0x07c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0816711f +0x081:  movl   $0x1,0x8(%esp)
08167127 +0x089:  mov    %eax,0x4(%esp)
0816712b +0x08d:  lea    -0x14(%ebp),%eax
0816712e +0x090:  mov    %eax,(%esp)
08167131 +0x093:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08167136 +0x098:  mov    0xc(%ebp),%eax
08167139 +0x09b:  mov    %eax,(%esp)
0816713c +0x09e:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08167141 +0x0a3:  mov    %eax,0x8(%esp)
08167145 +0x0a7:  movl   $0x12,0x4(%esp)
0816714d +0x0af:  lea    -0x14(%ebp),%eax
08167150 +0x0b2:  mov    %eax,(%esp)
08167153 +0x0b5:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
08167158 +0x0ba:  lea    -0x14(%ebp),%eax
0816715b +0x0bd:  mov    %eax,(%esp)
0816715e +0x0c0:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08167163 +0x0c5:  mov    %eax,(%esp)
08167166 +0x0c8:  call   0815edc6 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x103a>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x103a
0816716b +0x0cd:  mov    %eax,-0xc(%ebp)
0816716e +0x0d0:  cmpl   $0x0,-0xc(%ebp)
08167172 +0x0d4:  jne    081671a2 <+0x104>
08167174 +0x0d6:  movl   $"[HeroMission] SigLoadHeroMissionData is null.",0x10(%esp)
0816717c +0x0de:  movl   $0x296,0xc(%esp)
08167184 +0x0e6:  movl   $&_ZZN16HeroMissionEvent13loadEventDataEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0816718c +0x0ee:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08167194 +0x0f6:  movl   $0x1,(%esp)
0816719b +0x0fd:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081671a0 +0x102:  jmp    08167200 <+0x162>
081671a2 +0x104:  mov    -0xc(%ebp),%eax
081671a5 +0x107:  mov    %eax,(%esp)
081671a8 +0x10a:  call   08163a04 <_ZN6Taiwan22SigLoadHeroMissionData4initEv>  ; Taiwan::SigLoadHeroMissionData::init()
081671ad +0x10f:  movl   $0xffffffff,0x4(%esp)
081671b5 +0x117:  mov    0xc(%ebp),%eax
081671b8 +0x11a:  mov    %eax,(%esp)
081671bb +0x11d:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081671c0 +0x122:  mov    %eax,%edx
081671c2 +0x124:  mov    -0xc(%ebp),%eax
081671c5 +0x127:  mov    %edx,(%eax)
081671c7 +0x129:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081671cc +0x12e:  lea    -0x14(%ebp),%edx
081671cf +0x131:  mov    %edx,0x8(%esp)
081671d3 +0x135:  movl   $0x2,0x4(%esp)
081671db +0x13d:  mov    %eax,(%esp)
081671de +0x140:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081671e3 +0x145:  jmp    08167200 <+0x162>
081671e5 +0x147:  mov    %edx,%ebx
081671e7 +0x149:  mov    %eax,%esi
081671e9 +0x14b:  lea    -0x14(%ebp),%eax
081671ec +0x14e:  mov    %eax,(%esp)
081671ef +0x151:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081671f4 +0x156:  mov    %esi,%eax
081671f6 +0x158:  mov    %ebx,%edx
081671f8 +0x15a:  mov    %eax,(%esp)
081671fb +0x15d:  call   08ae3750 <_Unwind_Resume>
08167200 +0x162:  lea    -0x14(%ebp),%eax
08167203 +0x165:  mov    %eax,(%esp)
08167206 +0x168:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0816720b +0x16d:  jmp    0816720e <+0x170>
0816720d +0x16f:  nop
0816720e +0x170:  add    $0x30,%esp
08167211 +0x173:  pop    %ebx
08167212 +0x174:  pop    %esi
08167213 +0x175:  pop    %ebp
08167214 +0x176:  ret
08167215 +0x177:  nop
```

## 反编译 C

```c
// HeroMissionEvent::loadEventData @ 0x816709e

/* HeroMissionEvent::loadEventData(CUser*) */

void __thiscall HeroMissionEvent::loadEventData(HeroMissionEvent *this,CUser *param_1)

{
  char cVar1;
  Stream *pSVar2;
  undefined4 uVar3;
  CStreamGuard *this_00;
  CStreamGuard local_18 [8];
  SigLoadHeroMissionData *local_10;
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 == '\x01') {
    if (param_1 == (CUser *)0x0) {
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "void HeroMissionEvent::loadEventData(CUser*)",0x28c,"[HeroMission] User is null.")
      ;
    }
    else {
      pSVar2 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,
                                   "localtaiwan/Event/EventHeroMission.cpp",0x291);
      CStreamGuard::CStreamGuard(local_18,pSVar2,true);
      uVar3 = CUser::GetUID(param_1);
                    /* try { // try from 08167153 to 081671e2 has its CatchHandler @ 081671e5 */
      Taiwan::internal_stream(local_18,0x12,uVar3);
      this_00 = (CStreamGuard *)CStreamGuard::operator->(local_18);
      local_10 = CStreamGuard::GetInBuffer<Taiwan::SigLoadHeroMissionData>(this_00);
      if (local_10 == (SigLoadHeroMissionData *)0x0) {
        LogManager::logFormat
                  (1,"localtaiwan/Event/EventHeroMission.cpp",
                   "void HeroMissionEvent::loadEventData(CUser*)",0x296,
                   "[HeroMission] SigLoadHeroMissionData is null.");
      }
      else {
        Taiwan::SigLoadHeroMissionData::init(local_10);
        uVar3 = CUser::get_charac_no(param_1,-1);
        *(undefined4 *)local_10 = uVar3;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
      }
      CStreamGuard::~CStreamGuard(local_18);
    }
  }
  return;
}
```
