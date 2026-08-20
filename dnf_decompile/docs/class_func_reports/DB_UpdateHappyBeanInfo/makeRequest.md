# makeRequest

`_ZN22DB_UpdateHappyBeanInfo11makeRequestEjjjPKc`

`DB_UpdateHappyBeanInfo::makeRequest(unsigned int, unsigned int, unsigned int, char const*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateHappyBeanInfo` | `0x08425a02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08425a02  _ZN22DB_UpdateHappyBeanInfo11makeRequestEjjjPKc
#           DB_UpdateHappyBeanInfo::makeRequest(unsigned int, unsigned int, unsigned int, char const*)
# range [0x08425a02, 0x08425b0b]
08425a02 +0x000:  push   %ebp
08425a03 +0x001:  mov    %esp,%ebp
08425a05 +0x003:  push   %esi
08425a06 +0x004:  push   %ebx
08425a07 +0x005:  sub    $0x20,%esp
08425a0a +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08425a0f +0x00d:  movl   $0x63a3,0x8(%esp)
08425a17 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08425a1f +0x01d:  mov    %eax,(%esp)
08425a22 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08425a27 +0x025:  movl   $0x1,0x8(%esp)
08425a2f +0x02d:  mov    %eax,0x4(%esp)
08425a33 +0x031:  lea    -0x10(%ebp),%eax
08425a36 +0x034:  mov    %eax,(%esp)
08425a39 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08425a3e +0x03c:  lea    -0x10(%ebp),%eax
08425a41 +0x03f:  mov    %eax,(%esp)
08425a44 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425a49 +0x047:  movl   $0xbb,0x4(%esp)
08425a51 +0x04f:  mov    %eax,(%esp)
08425a54 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08425a59 +0x057:  lea    -0x10(%ebp),%eax
08425a5c +0x05a:  mov    %eax,(%esp)
08425a5f +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425a64 +0x062:  mov    0x8(%ebp),%edx
08425a67 +0x065:  mov    %edx,0x4(%esp)
08425a6b +0x069:  mov    %eax,(%esp)
08425a6e +0x06c:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08425a73 +0x071:  lea    -0x10(%ebp),%eax
08425a76 +0x074:  mov    %eax,(%esp)
08425a79 +0x077:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425a7e +0x07c:  mov    0xc(%ebp),%edx
08425a81 +0x07f:  mov    %edx,0x4(%esp)
08425a85 +0x083:  mov    %eax,(%esp)
08425a88 +0x086:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08425a8d +0x08b:  lea    -0x10(%ebp),%eax
08425a90 +0x08e:  mov    %eax,(%esp)
08425a93 +0x091:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425a98 +0x096:  mov    0x10(%ebp),%edx
08425a9b +0x099:  mov    %edx,0x4(%esp)
08425a9f +0x09d:  mov    %eax,(%esp)
08425aa2 +0x0a0:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
08425aa7 +0x0a5:  lea    -0x10(%ebp),%eax
08425aaa +0x0a8:  mov    %eax,(%esp)
08425aad +0x0ab:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08425ab2 +0x0b0:  mov    0x14(%ebp),%edx
08425ab5 +0x0b3:  mov    %edx,0x4(%esp)
08425ab9 +0x0b7:  mov    %eax,(%esp)
08425abc +0x0ba:  call   0822ad8a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x434>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x434
08425ac1 +0x0bf:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08425ac6 +0x0c4:  lea    -0x10(%ebp),%edx
08425ac9 +0x0c7:  mov    %edx,0x8(%esp)
08425acd +0x0cb:  movl   $0x2,0x4(%esp)
08425ad5 +0x0d3:  mov    %eax,(%esp)
08425ad8 +0x0d6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08425add +0x0db:  jmp    08425afa <+0xf8>
08425adf +0x0dd:  mov    %edx,%ebx
08425ae1 +0x0df:  mov    %eax,%esi
08425ae3 +0x0e1:  lea    -0x10(%ebp),%eax
08425ae6 +0x0e4:  mov    %eax,(%esp)
08425ae9 +0x0e7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08425aee +0x0ec:  mov    %esi,%eax
08425af0 +0x0ee:  mov    %ebx,%edx
08425af2 +0x0f0:  mov    %eax,(%esp)
08425af5 +0x0f3:  call   08ae3750 <_Unwind_Resume>
08425afa +0x0f8:  lea    -0x10(%ebp),%eax
08425afd +0x0fb:  mov    %eax,(%esp)
08425b00 +0x0fe:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08425b05 +0x103:  add    $0x20,%esp
08425b08 +0x106:  pop    %ebx
08425b09 +0x107:  pop    %esi
08425b0a +0x108:  pop    %ebp
08425b0b +0x109:  ret
```

## 反编译 C

```c
// DB_UpdateHappyBeanInfo::makeRequest @ 0x8425a02

/* DB_UpdateHappyBeanInfo::makeRequest(unsigned int, unsigned int, unsigned int, char const*) */

void DB_UpdateHappyBeanInfo::makeRequest(uint param_1,uint param_2,uint param_3,char *param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x63a3);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08425a54 to 08425adc has its CatchHandler @ 08425adf */
  CStreamGuard::operator<<(pCVar2,0xbb);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
