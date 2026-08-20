# makeRequest

`_ZN28DB_EventSaveGiveGrowCreature11makeRequestEjRN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoE`

`DB_EventSaveGiveGrowCreature::makeRequest(unsigned int, SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo&)`

| 类 | 地址 |
|---|---|
| `DB_EventSaveGiveGrowCreature` | `0x08449b32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08449b32  _ZN28DB_EventSaveGiveGrowCreature11makeRequestEjRN30SIG_GIVE_GROWTH_CREATURE_EVENT15eventCharacInfoE
#           DB_EventSaveGiveGrowCreature::makeRequest(unsigned int, SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo&)
# range [0x08449b32, 0x08449c53]
08449b32 +0x000:  push   %ebp
08449b33 +0x001:  mov    %esp,%ebp
08449b35 +0x003:  push   %esi
08449b36 +0x004:  push   %ebx
08449b37 +0x005:  sub    $0x20,%esp
08449b3a +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08449b3f +0x00d:  movl   $0xb983,0x8(%esp)
08449b47 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08449b4f +0x01d:  mov    %eax,(%esp)
08449b52 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08449b57 +0x025:  movl   $0x1,0x8(%esp)
08449b5f +0x02d:  mov    %eax,0x4(%esp)
08449b63 +0x031:  lea    -0x14(%ebp),%eax
08449b66 +0x034:  mov    %eax,(%esp)
08449b69 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08449b6e +0x03c:  lea    -0x14(%ebp),%eax
08449b71 +0x03f:  mov    %eax,(%esp)
08449b74 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449b79 +0x047:  movl   $0x317,0x4(%esp)
08449b81 +0x04f:  mov    %eax,(%esp)
08449b84 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08449b89 +0x057:  lea    -0x14(%ebp),%eax
08449b8c +0x05a:  mov    %eax,(%esp)
08449b8f +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449b94 +0x062:  movl   $0xffffffff,0x4(%esp)
08449b9c +0x06a:  mov    %eax,(%esp)
08449b9f +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08449ba4 +0x072:  lea    -0x14(%ebp),%eax
08449ba7 +0x075:  mov    %eax,(%esp)
08449baa +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449baf +0x07d:  mov    0x8(%ebp),%edx
08449bb2 +0x080:  mov    %edx,0x4(%esp)
08449bb6 +0x084:  mov    %eax,(%esp)
08449bb9 +0x087:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08449bbe +0x08c:  lea    -0x14(%ebp),%eax
08449bc1 +0x08f:  mov    %eax,(%esp)
08449bc4 +0x092:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08449bc9 +0x097:  mov    %eax,(%esp)
08449bcc +0x09a:  call   08454738 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x734e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x734e
08449bd1 +0x09f:  mov    %eax,-0xc(%ebp)
08449bd4 +0x0a2:  movl   $0x4,0x8(%esp)
08449bdc +0x0aa:  movl   $0x0,0x4(%esp)
08449be4 +0x0b2:  mov    -0xc(%ebp),%eax
08449be7 +0x0b5:  mov    %eax,(%esp)
08449bea +0x0b8:  call   0807dcc0 <_init+0x5b8>
08449bef +0x0bd:  movl   $0x2c,0x8(%esp)
08449bf7 +0x0c5:  mov    0xc(%ebp),%eax
08449bfa +0x0c8:  mov    %eax,0x4(%esp)
08449bfe +0x0cc:  mov    -0xc(%ebp),%eax
08449c01 +0x0cf:  mov    %eax,(%esp)
08449c04 +0x0d2:  call   0807d8a0 <_init+0x198>
08449c09 +0x0d7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08449c0e +0x0dc:  lea    -0x14(%ebp),%edx
08449c11 +0x0df:  mov    %edx,0x8(%esp)
08449c15 +0x0e3:  movl   $0x2,0x4(%esp)
08449c1d +0x0eb:  mov    %eax,(%esp)
08449c20 +0x0ee:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08449c25 +0x0f3:  jmp    08449c42 <+0x110>
08449c27 +0x0f5:  mov    %edx,%ebx
08449c29 +0x0f7:  mov    %eax,%esi
08449c2b +0x0f9:  lea    -0x14(%ebp),%eax
08449c2e +0x0fc:  mov    %eax,(%esp)
08449c31 +0x0ff:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08449c36 +0x104:  mov    %esi,%eax
08449c38 +0x106:  mov    %ebx,%edx
08449c3a +0x108:  mov    %eax,(%esp)
08449c3d +0x10b:  call   08ae3750 <_Unwind_Resume>
08449c42 +0x110:  lea    -0x14(%ebp),%eax
08449c45 +0x113:  mov    %eax,(%esp)
08449c48 +0x116:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08449c4d +0x11b:  add    $0x20,%esp
08449c50 +0x11e:  pop    %ebx
08449c51 +0x11f:  pop    %esi
08449c52 +0x120:  pop    %ebp
08449c53 +0x121:  ret
```

## 反编译 C

```c
// DB_EventSaveGiveGrowCreature::makeRequest @ 0x8449b32

/* DB_EventSaveGiveGrowCreature::makeRequest(unsigned int,
   SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo&) */

void DB_EventSaveGiveGrowCreature::makeRequest(uint param_1,eventCharacInfo *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  eventCharacInfo *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb983);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08449b84 to 08449c24 has its CatchHandler @ 08449c27 */
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
