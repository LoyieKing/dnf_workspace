# makeRequest

`_ZN30DB_InsertAccountFirstLoginFlag11makeRequestEijiji`

`DB_InsertAccountFirstLoginFlag::makeRequest(int, unsigned int, int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `DB_InsertAccountFirstLoginFlag` | `0x0843e79a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843e79a  _ZN30DB_InsertAccountFirstLoginFlag11makeRequestEijiji
#           DB_InsertAccountFirstLoginFlag::makeRequest(int, unsigned int, int, unsigned int, int)
# range [0x0843e79a, 0x0843e8bd]
0843e79a +0x000:  push   %ebp
0843e79b +0x001:  mov    %esp,%ebp
0843e79d +0x003:  push   %esi
0843e79e +0x004:  push   %ebx
0843e79f +0x005:  sub    $0x20,%esp
0843e7a2 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843e7a7 +0x00d:  movl   $0x9503,0x8(%esp)
0843e7af +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0843e7b7 +0x01d:  mov    %eax,(%esp)
0843e7ba +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843e7bf +0x025:  movl   $0x1,0x8(%esp)
0843e7c7 +0x02d:  mov    %eax,0x4(%esp)
0843e7cb +0x031:  lea    -0x10(%ebp),%eax
0843e7ce +0x034:  mov    %eax,(%esp)
0843e7d1 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843e7d6 +0x03c:  lea    -0x10(%ebp),%eax
0843e7d9 +0x03f:  mov    %eax,(%esp)
0843e7dc +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e7e1 +0x047:  movl   $0x25e,0x4(%esp)
0843e7e9 +0x04f:  mov    %eax,(%esp)
0843e7ec +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843e7f1 +0x057:  lea    -0x10(%ebp),%eax
0843e7f4 +0x05a:  mov    %eax,(%esp)
0843e7f7 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e7fc +0x062:  mov    0x8(%ebp),%edx
0843e7ff +0x065:  mov    %edx,0x4(%esp)
0843e803 +0x069:  mov    %eax,(%esp)
0843e806 +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843e80b +0x071:  lea    -0x10(%ebp),%eax
0843e80e +0x074:  mov    %eax,(%esp)
0843e811 +0x077:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e816 +0x07c:  mov    0xc(%ebp),%edx
0843e819 +0x07f:  mov    %edx,0x4(%esp)
0843e81d +0x083:  mov    %eax,(%esp)
0843e820 +0x086:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843e825 +0x08b:  lea    -0x10(%ebp),%eax
0843e828 +0x08e:  mov    %eax,(%esp)
0843e82b +0x091:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e830 +0x096:  mov    0x10(%ebp),%edx
0843e833 +0x099:  mov    %edx,0x4(%esp)
0843e837 +0x09d:  mov    %eax,(%esp)
0843e83a +0x0a0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843e83f +0x0a5:  lea    -0x10(%ebp),%eax
0843e842 +0x0a8:  mov    %eax,(%esp)
0843e845 +0x0ab:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e84a +0x0b0:  mov    0x14(%ebp),%edx
0843e84d +0x0b3:  mov    %edx,0x4(%esp)
0843e851 +0x0b7:  mov    %eax,(%esp)
0843e854 +0x0ba:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0843e859 +0x0bf:  lea    -0x10(%ebp),%eax
0843e85c +0x0c2:  mov    %eax,(%esp)
0843e85f +0x0c5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843e864 +0x0ca:  mov    0x18(%ebp),%edx
0843e867 +0x0cd:  mov    %edx,0x4(%esp)
0843e86b +0x0d1:  mov    %eax,(%esp)
0843e86e +0x0d4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843e873 +0x0d9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843e878 +0x0de:  lea    -0x10(%ebp),%edx
0843e87b +0x0e1:  mov    %edx,0x8(%esp)
0843e87f +0x0e5:  movl   $0x2,0x4(%esp)
0843e887 +0x0ed:  mov    %eax,(%esp)
0843e88a +0x0f0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843e88f +0x0f5:  jmp    0843e8ac <+0x112>
0843e891 +0x0f7:  mov    %edx,%ebx
0843e893 +0x0f9:  mov    %eax,%esi
0843e895 +0x0fb:  lea    -0x10(%ebp),%eax
0843e898 +0x0fe:  mov    %eax,(%esp)
0843e89b +0x101:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843e8a0 +0x106:  mov    %esi,%eax
0843e8a2 +0x108:  mov    %ebx,%edx
0843e8a4 +0x10a:  mov    %eax,(%esp)
0843e8a7 +0x10d:  call   08ae3750 <_Unwind_Resume>
0843e8ac +0x112:  lea    -0x10(%ebp),%eax
0843e8af +0x115:  mov    %eax,(%esp)
0843e8b2 +0x118:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843e8b7 +0x11d:  add    $0x20,%esp
0843e8ba +0x120:  pop    %ebx
0843e8bb +0x121:  pop    %esi
0843e8bc +0x122:  pop    %ebp
0843e8bd +0x123:  ret
```

## 反编译 C

```c
// DB_InsertAccountFirstLoginFlag::makeRequest @ 0x843e79a

/* DB_InsertAccountFirstLoginFlag::makeRequest(int, unsigned int, int, unsigned int, int) */

void DB_InsertAccountFirstLoginFlag::makeRequest
               (int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x9503);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843e7ec to 0843e88e has its CatchHandler @ 0843e891 */
  CStreamGuard::operator<<(pCVar2,0x25e);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_5);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
