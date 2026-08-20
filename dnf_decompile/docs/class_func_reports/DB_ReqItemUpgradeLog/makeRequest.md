# makeRequest

`_ZN20DB_ReqItemUpgradeLog11makeRequestEjjjPKcjb`

`DB_ReqItemUpgradeLog::makeRequest(unsigned int, unsigned int, unsigned int, char const*, unsigned int, bool)`

| 类 | 地址 |
|---|---|
| `DB_ReqItemUpgradeLog` | `0x08425ece` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08425ece  _ZN20DB_ReqItemUpgradeLog11makeRequestEjjjPKcjb
#           DB_ReqItemUpgradeLog::makeRequest(unsigned int, unsigned int, unsigned int, char const*, unsigned int, bool)
# range [0x08425ece, 0x0842602d]
08425ece +0x000:  push   %ebp
08425ecf +0x001:  mov    %esp,%ebp
08425ed1 +0x003:  push   %esi
08425ed2 +0x004:  push   %ebx
08425ed3 +0x005:  sub    $0x30,%esp
08425ed6 +0x008:  mov    0x1c(%ebp),%eax
08425ed9 +0x00b:  mov    %al,-0x1c(%ebp)
08425edc +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08425ee1 +0x013:  movl   $0x63f7,0x8(%esp)
08425ee9 +0x01b:  movl   $"DBThread.cpp",0x4(%esp)
08425ef1 +0x023:  mov    %eax,(%esp)
08425ef4 +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08425ef9 +0x02b:  movl   $0x1,0x8(%esp)
08425f01 +0x033:  mov    %eax,0x4(%esp)
08425f05 +0x037:  lea    -0x10(%ebp),%eax
08425f08 +0x03a:  mov    %eax,(%esp)
08425f0b +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08425f10 +0x042:  lea    -0x10(%ebp),%eax
08425f13 +0x045:  mov    %eax,(%esp)
08425f16 +0x048:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425f1b +0x04d:  movl   $0xc0,0x4(%esp)
08425f23 +0x055:  mov    %eax,(%esp)
08425f26 +0x058:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08425f2b +0x05d:  lea    -0x10(%ebp),%eax
08425f2e +0x060:  mov    %eax,(%esp)
08425f31 +0x063:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425f36 +0x068:  movl   $0xffffffff,0x4(%esp)
08425f3e +0x070:  mov    %eax,(%esp)
08425f41 +0x073:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08425f46 +0x078:  lea    -0x10(%ebp),%eax
08425f49 +0x07b:  mov    %eax,(%esp)
08425f4c +0x07e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425f51 +0x083:  mov    0x8(%ebp),%edx
08425f54 +0x086:  mov    %edx,0x4(%esp)
08425f58 +0x08a:  mov    %eax,(%esp)
08425f5b +0x08d:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08425f60 +0x092:  lea    -0x10(%ebp),%eax
08425f63 +0x095:  mov    %eax,(%esp)
08425f66 +0x098:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425f6b +0x09d:  mov    0xc(%ebp),%edx
08425f6e +0x0a0:  mov    %edx,0x4(%esp)
08425f72 +0x0a4:  mov    %eax,(%esp)
08425f75 +0x0a7:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08425f7a +0x0ac:  lea    -0x10(%ebp),%eax
08425f7d +0x0af:  mov    %eax,(%esp)
08425f80 +0x0b2:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425f85 +0x0b7:  mov    0x10(%ebp),%edx
08425f88 +0x0ba:  mov    %edx,0x4(%esp)
08425f8c +0x0be:  mov    %eax,(%esp)
08425f8f +0x0c1:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08425f94 +0x0c6:  lea    -0x10(%ebp),%eax
08425f97 +0x0c9:  mov    %eax,(%esp)
08425f9a +0x0cc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425f9f +0x0d1:  mov    0x18(%ebp),%edx
08425fa2 +0x0d4:  mov    %edx,0x4(%esp)
08425fa6 +0x0d8:  mov    %eax,(%esp)
08425fa9 +0x0db:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08425fae +0x0e0:  movzbl -0x1c(%ebp),%ebx
08425fb2 +0x0e4:  lea    -0x10(%ebp),%eax
08425fb5 +0x0e7:  mov    %eax,(%esp)
08425fb8 +0x0ea:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425fbd +0x0ef:  mov    %ebx,0x4(%esp)
08425fc1 +0x0f3:  mov    %eax,(%esp)
08425fc4 +0x0f6:  call   0844d430 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x46>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x46
08425fc9 +0x0fb:  lea    -0x10(%ebp),%eax
08425fcc +0x0fe:  mov    %eax,(%esp)
08425fcf +0x101:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425fd4 +0x106:  mov    0x14(%ebp),%edx
08425fd7 +0x109:  mov    %edx,0x4(%esp)
08425fdb +0x10d:  mov    %eax,(%esp)
08425fde +0x110:  call   0822ad8a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x434>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x434
08425fe3 +0x115:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08425fe8 +0x11a:  lea    -0x10(%ebp),%edx
08425feb +0x11d:  mov    %edx,0x8(%esp)
08425fef +0x121:  movl   $0x4,0x4(%esp)
08425ff7 +0x129:  mov    %eax,(%esp)
08425ffa +0x12c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08425fff +0x131:  jmp    0842601c <+0x14e>
08426001 +0x133:  mov    %edx,%ebx
08426003 +0x135:  mov    %eax,%esi
08426005 +0x137:  lea    -0x10(%ebp),%eax
08426008 +0x13a:  mov    %eax,(%esp)
0842600b +0x13d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08426010 +0x142:  mov    %esi,%eax
08426012 +0x144:  mov    %ebx,%edx
08426014 +0x146:  mov    %eax,(%esp)
08426017 +0x149:  call   08ae3750 <_Unwind_Resume>
0842601c +0x14e:  lea    -0x10(%ebp),%eax
0842601f +0x151:  mov    %eax,(%esp)
08426022 +0x154:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08426027 +0x159:  add    $0x30,%esp
0842602a +0x15c:  pop    %ebx
0842602b +0x15d:  pop    %esi
0842602c +0x15e:  pop    %ebp
0842602d +0x15f:  ret
```

## 反编译 C

```c
// DB_ReqItemUpgradeLog::makeRequest @ 0x8425ece

/* DB_ReqItemUpgradeLog::makeRequest(unsigned int, unsigned int, unsigned int, char const*, unsigned
   int, bool) */

void DB_ReqItemUpgradeLog::makeRequest
               (uint param_1,uint param_2,uint param_3,char *param_4,uint param_5,bool param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x63f7);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08425f26 to 08425ffe has its CatchHandler @ 08426001 */
  CStreamGuard::operator<<(pCVar2,0xc0);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_5);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_6);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
