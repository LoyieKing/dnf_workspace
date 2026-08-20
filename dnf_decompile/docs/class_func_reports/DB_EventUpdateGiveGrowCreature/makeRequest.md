# makeRequest

`_ZN30DB_EventUpdateGiveGrowCreature11makeRequestEjRN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoE`

`DB_EventUpdateGiveGrowCreature::makeRequest(unsigned int, SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo&)`

| 类 | 地址 |
|---|---|
| `DB_EventUpdateGiveGrowCreature` | `0x08449d1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08449d1c  _ZN30DB_EventUpdateGiveGrowCreature11makeRequestEjRN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoE
#           DB_EventUpdateGiveGrowCreature::makeRequest(unsigned int, SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo&)
# range [0x08449d1c, 0x08449e3d]
08449d1c +0x000:  push   %ebp
08449d1d +0x001:  mov    %esp,%ebp
08449d1f +0x003:  push   %esi
08449d20 +0x004:  push   %ebx
08449d21 +0x005:  sub    $0x20,%esp
08449d24 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08449d29 +0x00d:  movl   $0xb9aa,0x8(%esp)
08449d31 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08449d39 +0x01d:  mov    %eax,(%esp)
08449d3c +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08449d41 +0x025:  movl   $0x1,0x8(%esp)
08449d49 +0x02d:  mov    %eax,0x4(%esp)
08449d4d +0x031:  lea    -0x14(%ebp),%eax
08449d50 +0x034:  mov    %eax,(%esp)
08449d53 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08449d58 +0x03c:  lea    -0x14(%ebp),%eax
08449d5b +0x03f:  mov    %eax,(%esp)
08449d5e +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449d63 +0x047:  movl   $0x317,0x4(%esp)
08449d6b +0x04f:  mov    %eax,(%esp)
08449d6e +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08449d73 +0x057:  lea    -0x14(%ebp),%eax
08449d76 +0x05a:  mov    %eax,(%esp)
08449d79 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449d7e +0x062:  movl   $0xffffffff,0x4(%esp)
08449d86 +0x06a:  mov    %eax,(%esp)
08449d89 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08449d8e +0x072:  lea    -0x14(%ebp),%eax
08449d91 +0x075:  mov    %eax,(%esp)
08449d94 +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449d99 +0x07d:  mov    0x8(%ebp),%edx
08449d9c +0x080:  mov    %edx,0x4(%esp)
08449da0 +0x084:  mov    %eax,(%esp)
08449da3 +0x087:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08449da8 +0x08c:  lea    -0x14(%ebp),%eax
08449dab +0x08f:  mov    %eax,(%esp)
08449dae +0x092:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08449db3 +0x097:  mov    %eax,(%esp)
08449db6 +0x09a:  call   08454738 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x734e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x734e
08449dbb +0x09f:  mov    %eax,-0xc(%ebp)
08449dbe +0x0a2:  movl   $0x4,0x8(%esp)
08449dc6 +0x0aa:  movl   $0x0,0x4(%esp)
08449dce +0x0b2:  mov    -0xc(%ebp),%eax
08449dd1 +0x0b5:  mov    %eax,(%esp)
08449dd4 +0x0b8:  call   0807dcc0 <_init+0x5b8>
08449dd9 +0x0bd:  movl   $0x2c,0x8(%esp)
08449de1 +0x0c5:  mov    0xc(%ebp),%eax
08449de4 +0x0c8:  mov    %eax,0x4(%esp)
08449de8 +0x0cc:  mov    -0xc(%ebp),%eax
08449deb +0x0cf:  mov    %eax,(%esp)
08449dee +0x0d2:  call   0807d8a0 <_init+0x198>
08449df3 +0x0d7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08449df8 +0x0dc:  lea    -0x14(%ebp),%edx
08449dfb +0x0df:  mov    %edx,0x8(%esp)
08449dff +0x0e3:  movl   $0x2,0x4(%esp)
08449e07 +0x0eb:  mov    %eax,(%esp)
08449e0a +0x0ee:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08449e0f +0x0f3:  jmp    08449e2c <+0x110>
08449e11 +0x0f5:  mov    %edx,%ebx
08449e13 +0x0f7:  mov    %eax,%esi
08449e15 +0x0f9:  lea    -0x14(%ebp),%eax
08449e18 +0x0fc:  mov    %eax,(%esp)
08449e1b +0x0ff:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08449e20 +0x104:  mov    %esi,%eax
08449e22 +0x106:  mov    %ebx,%edx
08449e24 +0x108:  mov    %eax,(%esp)
08449e27 +0x10b:  call   08ae3750 <_Unwind_Resume>
08449e2c +0x110:  lea    -0x14(%ebp),%eax
08449e2f +0x113:  mov    %eax,(%esp)
08449e32 +0x116:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08449e37 +0x11b:  add    $0x20,%esp
08449e3a +0x11e:  pop    %ebx
08449e3b +0x11f:  pop    %esi
08449e3c +0x120:  pop    %ebp
08449e3d +0x121:  ret
```

## 反编译 C

```c
// DB_EventUpdateGiveGrowCreature::makeRequest @ 0x8449d1c

/* DB_EventUpdateGiveGrowCreature::makeRequest(unsigned int,
   SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo&) */

void DB_EventUpdateGiveGrowCreature::makeRequest(uint param_1,eventCharacInfo *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  eventCharacInfo *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb9aa);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08449d6e to 08449e0e has its CatchHandler @ 08449e11 */
  CStreamGuard::operator<<(pCVar2,0x317);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo>(pCVar2);
  memset(local_10,0,4);
  memcpy(local_10,param_2,0x2c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
