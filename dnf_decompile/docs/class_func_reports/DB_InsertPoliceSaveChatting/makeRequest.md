# makeRequest

`_ZN27DB_InsertPoliceSaveChatting11makeRequestEjcPc`

`DB_InsertPoliceSaveChatting::makeRequest(unsigned int, char, char*)`

| 类 | 地址 |
|---|---|
| `DB_InsertPoliceSaveChatting` | `0x0843c6aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843c6aa  _ZN27DB_InsertPoliceSaveChatting11makeRequestEjcPc
#           DB_InsertPoliceSaveChatting::makeRequest(unsigned int, char, char*)
# range [0x0843c6aa, 0x0843c7bb]
0843c6aa +0x000:  push   %ebp
0843c6ab +0x001:  mov    %esp,%ebp
0843c6ad +0x003:  push   %esi
0843c6ae +0x004:  push   %ebx
0843c6af +0x005:  sub    $0x30,%esp
0843c6b2 +0x008:  mov    0xc(%ebp),%eax
0843c6b5 +0x00b:  mov    %al,-0x1c(%ebp)
0843c6b8 +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843c6bd +0x013:  movl   $0x904c,0x8(%esp)
0843c6c5 +0x01b:  movl   $"DBThread.cpp",0x4(%esp)
0843c6cd +0x023:  mov    %eax,(%esp)
0843c6d0 +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843c6d5 +0x02b:  movl   $0x1,0x8(%esp)
0843c6dd +0x033:  mov    %eax,0x4(%esp)
0843c6e1 +0x037:  lea    -0x10(%ebp),%eax
0843c6e4 +0x03a:  mov    %eax,(%esp)
0843c6e7 +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843c6ec +0x042:  lea    -0x10(%ebp),%eax
0843c6ef +0x045:  mov    %eax,(%esp)
0843c6f2 +0x048:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c6f7 +0x04d:  movl   $0x20c,0x4(%esp)
0843c6ff +0x055:  mov    %eax,(%esp)
0843c702 +0x058:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843c707 +0x05d:  lea    -0x10(%ebp),%eax
0843c70a +0x060:  mov    %eax,(%esp)
0843c70d +0x063:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c712 +0x068:  movl   $0xffffffff,0x4(%esp)
0843c71a +0x070:  mov    %eax,(%esp)
0843c71d +0x073:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843c722 +0x078:  lea    -0x10(%ebp),%eax
0843c725 +0x07b:  mov    %eax,(%esp)
0843c728 +0x07e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c72d +0x083:  mov    0x8(%ebp),%edx
0843c730 +0x086:  mov    %edx,0x4(%esp)
0843c734 +0x08a:  mov    %eax,(%esp)
0843c737 +0x08d:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843c73c +0x092:  movsbl -0x1c(%ebp),%ebx
0843c740 +0x096:  lea    -0x10(%ebp),%eax
0843c743 +0x099:  mov    %eax,(%esp)
0843c746 +0x09c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c74b +0x0a1:  mov    %ebx,0x4(%esp)
0843c74f +0x0a5:  mov    %eax,(%esp)
0843c752 +0x0a8:  call   08101004 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x26>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x26
0843c757 +0x0ad:  lea    -0x10(%ebp),%eax
0843c75a +0x0b0:  mov    %eax,(%esp)
0843c75d +0x0b3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843c762 +0x0b8:  mov    0x10(%ebp),%edx
0843c765 +0x0bb:  mov    %edx,0x4(%esp)
0843c769 +0x0bf:  mov    %eax,(%esp)
0843c76c +0x0c2:  call   0822ad8a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x434>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x434
0843c771 +0x0c7:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843c776 +0x0cc:  lea    -0x10(%ebp),%edx
0843c779 +0x0cf:  mov    %edx,0x8(%esp)
0843c77d +0x0d3:  movl   $0x4,0x4(%esp)
0843c785 +0x0db:  mov    %eax,(%esp)
0843c788 +0x0de:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843c78d +0x0e3:  jmp    0843c7aa <+0x100>
0843c78f +0x0e5:  mov    %edx,%ebx
0843c791 +0x0e7:  mov    %eax,%esi
0843c793 +0x0e9:  lea    -0x10(%ebp),%eax
0843c796 +0x0ec:  mov    %eax,(%esp)
0843c799 +0x0ef:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843c79e +0x0f4:  mov    %esi,%eax
0843c7a0 +0x0f6:  mov    %ebx,%edx
0843c7a2 +0x0f8:  mov    %eax,(%esp)
0843c7a5 +0x0fb:  call   08ae3750 <_Unwind_Resume>
0843c7aa +0x100:  lea    -0x10(%ebp),%eax
0843c7ad +0x103:  mov    %eax,(%esp)
0843c7b0 +0x106:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843c7b5 +0x10b:  add    $0x30,%esp
0843c7b8 +0x10e:  pop    %ebx
0843c7b9 +0x10f:  pop    %esi
0843c7ba +0x110:  pop    %ebp
0843c7bb +0x111:  ret
```

## 反编译 C

```c
// DB_InsertPoliceSaveChatting::makeRequest @ 0x843c6aa

/* DB_InsertPoliceSaveChatting::makeRequest(unsigned int, char, char*) */

void DB_InsertPoliceSaveChatting::makeRequest(uint param_1,char param_2,char *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x904c);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843c702 to 0843c78c has its CatchHandler @ 0843c78f */
  CStreamGuard::operator<<(pCVar2,0x20c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
