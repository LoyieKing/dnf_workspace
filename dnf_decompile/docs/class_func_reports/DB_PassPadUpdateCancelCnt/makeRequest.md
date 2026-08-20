# makeRequest

`_ZN25DB_PassPadUpdateCancelCnt11makeRequestEjjPc`

`DB_PassPadUpdateCancelCnt::makeRequest(unsigned int, unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `DB_PassPadUpdateCancelCnt` | `0x0842403a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842403a  _ZN25DB_PassPadUpdateCancelCnt11makeRequestEjjPc
#           DB_PassPadUpdateCancelCnt::makeRequest(unsigned int, unsigned int, char*)
# range [0x0842403a, 0x0842413b]
0842403a +0x000:  push   %ebp
0842403b +0x001:  mov    %esp,%ebp
0842403d +0x003:  push   %esi
0842403e +0x004:  push   %ebx
0842403f +0x005:  sub    $0x20,%esp
08424042 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08424047 +0x00d:  movl   $0x5f5e,0x8(%esp)
0842404f +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08424057 +0x01d:  mov    %eax,(%esp)
0842405a +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842405f +0x025:  movl   $0x1,0x8(%esp)
08424067 +0x02d:  mov    %eax,0x4(%esp)
0842406b +0x031:  lea    -0x14(%ebp),%eax
0842406e +0x034:  mov    %eax,(%esp)
08424071 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08424076 +0x03c:  lea    -0x14(%ebp),%eax
08424079 +0x03f:  mov    %eax,(%esp)
0842407c +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08424081 +0x047:  movl   $0xa5,0x4(%esp)
08424089 +0x04f:  mov    %eax,(%esp)
0842408c +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08424091 +0x057:  lea    -0x14(%ebp),%eax
08424094 +0x05a:  mov    %eax,(%esp)
08424097 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842409c +0x062:  movl   $0xffffffff,0x4(%esp)
084240a4 +0x06a:  mov    %eax,(%esp)
084240a7 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084240ac +0x072:  lea    -0x14(%ebp),%eax
084240af +0x075:  mov    %eax,(%esp)
084240b2 +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084240b7 +0x07d:  mov    %eax,(%esp)
084240ba +0x080:  call   08451e1a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4a30>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4a30
084240bf +0x085:  mov    %eax,-0xc(%ebp)
084240c2 +0x088:  mov    -0xc(%ebp),%eax
084240c5 +0x08b:  mov    0x8(%ebp),%edx
084240c8 +0x08e:  mov    %edx,(%eax)
084240ca +0x090:  mov    -0xc(%ebp),%eax
084240cd +0x093:  mov    0xc(%ebp),%edx
084240d0 +0x096:  mov    %edx,0x4(%eax)
084240d3 +0x099:  mov    -0xc(%ebp),%eax
084240d6 +0x09c:  lea    0x8(%eax),%edx
084240d9 +0x09f:  movl   $0x10,0x8(%esp)
084240e1 +0x0a7:  mov    0x10(%ebp),%eax
084240e4 +0x0aa:  mov    %eax,0x4(%esp)
084240e8 +0x0ae:  mov    %edx,(%esp)
084240eb +0x0b1:  call   0807d8d0 <_init+0x1c8>
084240f0 +0x0b6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084240f5 +0x0bb:  lea    -0x14(%ebp),%edx
084240f8 +0x0be:  mov    %edx,0x8(%esp)
084240fc +0x0c2:  movl   $0x2,0x4(%esp)
08424104 +0x0ca:  mov    %eax,(%esp)
08424107 +0x0cd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842410c +0x0d2:  jmp    08424129 <+0xef>
0842410e +0x0d4:  mov    %edx,%ebx
08424110 +0x0d6:  mov    %eax,%esi
08424112 +0x0d8:  lea    -0x14(%ebp),%eax
08424115 +0x0db:  mov    %eax,(%esp)
08424118 +0x0de:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842411d +0x0e3:  mov    %esi,%eax
0842411f +0x0e5:  mov    %ebx,%edx
08424121 +0x0e7:  mov    %eax,(%esp)
08424124 +0x0ea:  call   08ae3750 <_Unwind_Resume>
08424129 +0x0ef:  lea    -0x14(%ebp),%eax
0842412c +0x0f2:  mov    %eax,(%esp)
0842412f +0x0f5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08424134 +0x0fa:  add    $0x20,%esp
08424137 +0x0fd:  pop    %ebx
08424138 +0x0fe:  pop    %esi
08424139 +0x0ff:  pop    %ebp
0842413a +0x100:  ret
0842413b +0x101:  nop
```

## 反编译 C

```c
// DB_PassPadUpdateCancelCnt::makeRequest @ 0x842403a

/* DB_PassPadUpdateCancelCnt::makeRequest(unsigned int, unsigned int, char*) */

void DB_PassPadUpdateCancelCnt::makeRequest(uint param_1,uint param_2,char *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5f5e);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842408c to 0842410b has its CatchHandler @ 0842410e */
  CStreamGuard::operator<<(pCVar2,0xa5);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  strncpy((char *)(local_10 + 8),param_3,0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
