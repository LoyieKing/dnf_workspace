# makeRequest

`_ZN16DBUpdateExitTime11makeRequestEjij`

`DBUpdateExitTime::makeRequest(unsigned int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DBUpdateExitTime` | `0x0815b89a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815b89a  _ZN16DBUpdateExitTime11makeRequestEjij
#           DBUpdateExitTime::makeRequest(unsigned int, int, unsigned int)
# range [0x0815b89a, 0x0815b97b]
0815b89a +0x00:  push   %ebp
0815b89b +0x01:  mov    %esp,%ebp
0815b89d +0x03:  push   %esi
0815b89e +0x04:  push   %ebx
0815b89f +0x05:  sub    $0x20,%esp
0815b8a2 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0815b8a7 +0x0d:  movl   $0x1b9,0x8(%esp)
0815b8af +0x15:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815b8b7 +0x1d:  mov    %eax,(%esp)
0815b8ba +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0815b8bf +0x25:  movl   $0x1,0x8(%esp)
0815b8c7 +0x2d:  mov    %eax,0x4(%esp)
0815b8cb +0x31:  lea    -0x14(%ebp),%eax
0815b8ce +0x34:  mov    %eax,(%esp)
0815b8d1 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0815b8d6 +0x3c:  mov    0xc(%ebp),%eax
0815b8d9 +0x3f:  mov    %eax,0x8(%esp)
0815b8dd +0x43:  movl   $0x8,0x4(%esp)
0815b8e5 +0x4b:  lea    -0x14(%ebp),%eax
0815b8e8 +0x4e:  mov    %eax,(%esp)
0815b8eb +0x51:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0815b8f0 +0x56:  lea    -0x14(%ebp),%eax
0815b8f3 +0x59:  mov    %eax,(%esp)
0815b8f6 +0x5c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0815b8fb +0x61:  mov    %eax,(%esp)
0815b8fe +0x64:  call   0815ea8c <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xd00>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xd00
0815b903 +0x69:  mov    %eax,-0xc(%ebp)
0815b906 +0x6c:  cmpl   $0x0,-0xc(%ebp)
0815b90a +0x70:  je     0815b969 <+0xcf>
0815b90c +0x72:  mov    -0xc(%ebp),%eax
0815b90f +0x75:  mov    %eax,(%esp)
0815b912 +0x78:  call   0815df38 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x1ac>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x1ac
0815b917 +0x7d:  mov    0x10(%ebp),%eax
0815b91a +0x80:  mov    %eax,0x8(%esp)
0815b91e +0x84:  mov    0x8(%ebp),%eax
0815b921 +0x87:  mov    %eax,0x4(%esp)
0815b925 +0x8b:  mov    -0xc(%ebp),%eax
0815b928 +0x8e:  mov    %eax,(%esp)
0815b92b +0x91:  call   0815df50 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x1c4>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x1c4
0815b930 +0x96:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0815b935 +0x9b:  lea    -0x14(%ebp),%edx
0815b938 +0x9e:  mov    %edx,0x8(%esp)
0815b93c +0xa2:  movl   $0x2,0x4(%esp)
0815b944 +0xaa:  mov    %eax,(%esp)
0815b947 +0xad:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0815b94c +0xb2:  jmp    0815b969 <+0xcf>
0815b94e +0xb4:  mov    %edx,%ebx
0815b950 +0xb6:  mov    %eax,%esi
0815b952 +0xb8:  lea    -0x14(%ebp),%eax
0815b955 +0xbb:  mov    %eax,(%esp)
0815b958 +0xbe:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815b95d +0xc3:  mov    %esi,%eax
0815b95f +0xc5:  mov    %ebx,%edx
0815b961 +0xc7:  mov    %eax,(%esp)
0815b964 +0xca:  call   08ae3750 <_Unwind_Resume>
0815b969 +0xcf:  lea    -0x14(%ebp),%eax
0815b96c +0xd2:  mov    %eax,(%esp)
0815b96f +0xd5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815b974 +0xda:  add    $0x20,%esp
0815b977 +0xdd:  pop    %ebx
0815b978 +0xde:  pop    %esi
0815b979 +0xdf:  pop    %ebp
0815b97a +0xe0:  ret
0815b97b +0xe1:  nop
```

## 反编译 C

```c
// DBUpdateExitTime::makeRequest @ 0x815b89a

/* DBUpdateExitTime::makeRequest(unsigned int, int, unsigned int) */

void DBUpdateExitTime::makeRequest(uint param_1,int param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *this;
  CStreamGuard local_18 [8];
  SigUpdateExitTime *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x1b9);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 0815b8eb to 0815b94b has its CatchHandler @ 0815b94e */
  Taiwan::internal_stream(local_18,8,param_2);
  this = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<Taiwan::SigUpdateExitTime>(this);
  if (local_10 != (SigUpdateExitTime *)0x0) {
    Taiwan::SigUpdateExitTime::init(local_10);
    Taiwan::SigUpdateExitTime::set(local_10,param_1,param_3);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
