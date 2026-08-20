# sendStayTimeData

`_ZN18CheckStayTimeEvent16sendStayTimeDataEi`

`CheckStayTimeEvent::sendStayTimeData(int)`

| 类 | 地址 |
|---|---|
| `CheckStayTimeEvent` | `0x0815b6ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815b6ac  _ZN18CheckStayTimeEvent16sendStayTimeDataEi
#           CheckStayTimeEvent::sendStayTimeData(int)
# range [0x0815b6ac, 0x0815b769]
0815b6ac +0x00:  push   %ebp
0815b6ad +0x01:  mov    %esp,%ebp
0815b6af +0x03:  push   %esi
0815b6b0 +0x04:  push   %ebx
0815b6b1 +0x05:  sub    $0x20,%esp
0815b6b4 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0815b6b9 +0x0d:  movl   $0x192,0x8(%esp)
0815b6c1 +0x15:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815b6c9 +0x1d:  mov    %eax,(%esp)
0815b6cc +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0815b6d1 +0x25:  movl   $0x1,0x8(%esp)
0815b6d9 +0x2d:  mov    %eax,0x4(%esp)
0815b6dd +0x31:  lea    -0x14(%ebp),%eax
0815b6e0 +0x34:  mov    %eax,(%esp)
0815b6e3 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0815b6e8 +0x3c:  mov    0xc(%ebp),%eax
0815b6eb +0x3f:  mov    %eax,0x8(%esp)
0815b6ef +0x43:  movl   $0x5,0x4(%esp)
0815b6f7 +0x4b:  lea    -0x14(%ebp),%eax
0815b6fa +0x4e:  mov    %eax,(%esp)
0815b6fd +0x51:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0815b702 +0x56:  lea    -0x14(%ebp),%eax
0815b705 +0x59:  mov    %eax,(%esp)
0815b708 +0x5c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0815b70d +0x61:  mov    %eax,(%esp)
0815b710 +0x64:  call   0815ea76 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xcea>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xcea
0815b715 +0x69:  mov    %eax,-0xc(%ebp)
0815b718 +0x6c:  cmpl   $0x0,-0xc(%ebp)
0815b71c +0x70:  je     0815b757 <+0xab>
0815b71e +0x72:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0815b723 +0x77:  lea    -0x14(%ebp),%edx
0815b726 +0x7a:  mov    %edx,0x8(%esp)
0815b72a +0x7e:  movl   $0x1,0x4(%esp)
0815b732 +0x86:  mov    %eax,(%esp)
0815b735 +0x89:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0815b73a +0x8e:  jmp    0815b757 <+0xab>
0815b73c +0x90:  mov    %edx,%ebx
0815b73e +0x92:  mov    %eax,%esi
0815b740 +0x94:  lea    -0x14(%ebp),%eax
0815b743 +0x97:  mov    %eax,(%esp)
0815b746 +0x9a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815b74b +0x9f:  mov    %esi,%eax
0815b74d +0xa1:  mov    %ebx,%edx
0815b74f +0xa3:  mov    %eax,(%esp)
0815b752 +0xa6:  call   08ae3750 <_Unwind_Resume>
0815b757 +0xab:  lea    -0x14(%ebp),%eax
0815b75a +0xae:  mov    %eax,(%esp)
0815b75d +0xb1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815b762 +0xb6:  add    $0x20,%esp
0815b765 +0xb9:  pop    %ebx
0815b766 +0xba:  pop    %esi
0815b767 +0xbb:  pop    %ebp
0815b768 +0xbc:  ret
0815b769 +0xbd:  nop
```

## 反编译 C

```c
// CheckStayTimeEvent::sendStayTimeData @ 0x815b6ac

/* CheckStayTimeEvent::sendStayTimeData(int) */

void __thiscall CheckStayTimeEvent::sendStayTimeData(CheckStayTimeEvent *this,int param_1)

{
  Stream *pSVar1;
  CStreamGuard *this_00;
  CStreamGuard local_18 [8];
  SigStayTimeEvent *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x192);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 0815b6fd to 0815b739 has its CatchHandler @ 0815b73c */
  Taiwan::internal_stream(local_18,5,param_1);
  this_00 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<Taiwan::SigStayTimeEvent>(this_00);
  if (local_10 != (SigStayTimeEvent *)0x0) {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
