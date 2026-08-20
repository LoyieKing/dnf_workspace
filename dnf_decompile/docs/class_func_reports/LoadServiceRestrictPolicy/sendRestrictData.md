# sendRestrictData

`_ZN25LoadServiceRestrictPolicy16sendRestrictDataERN6Taiwan21SigLoadRestrictPolicyE`

`LoadServiceRestrictPolicy::sendRestrictData(Taiwan::SigLoadRestrictPolicy&)`

| 类 | 地址 |
|---|---|
| `LoadServiceRestrictPolicy` | `0x0815ac40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815ac40  _ZN25LoadServiceRestrictPolicy16sendRestrictDataERN6Taiwan21SigLoadRestrictPolicyE
#           LoadServiceRestrictPolicy::sendRestrictData(Taiwan::SigLoadRestrictPolicy&)
# range [0x0815ac40, 0x0815ad3b]
0815ac40 +0x00:  push   %ebp
0815ac41 +0x01:  mov    %esp,%ebp
0815ac43 +0x03:  push   %esi
0815ac44 +0x04:  push   %ebx
0815ac45 +0x05:  sub    $0x20,%esp
0815ac48 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0815ac4d +0x0d:  movl   $0xd9,0x8(%esp)
0815ac55 +0x15:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815ac5d +0x1d:  mov    %eax,(%esp)
0815ac60 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0815ac65 +0x25:  movl   $0x1,0x8(%esp)
0815ac6d +0x2d:  mov    %eax,0x4(%esp)
0815ac71 +0x31:  lea    -0x14(%ebp),%eax
0815ac74 +0x34:  mov    %eax,(%esp)
0815ac77 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0815ac7c +0x3c:  movl   $0xffffffff,0x8(%esp)
0815ac84 +0x44:  movl   $0x1,0x4(%esp)
0815ac8c +0x4c:  lea    -0x14(%ebp),%eax
0815ac8f +0x4f:  mov    %eax,(%esp)
0815ac92 +0x52:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0815ac97 +0x57:  lea    -0x14(%ebp),%eax
0815ac9a +0x5a:  mov    %eax,(%esp)
0815ac9d +0x5d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0815aca2 +0x62:  mov    %eax,(%esp)
0815aca5 +0x65:  call   0815e9a2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xc16>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xc16
0815acaa +0x6a:  mov    %eax,-0xc(%ebp)
0815acad +0x6d:  cmpl   $0x0,-0xc(%ebp)
0815acb1 +0x71:  jne    0815acdf <+0x9f>
0815acb3 +0x73:  movl   $0x4,(%esp)
0815acba +0x7a:  call   08725800 <__cxa_allocate_exception>
0815acbf +0x7f:  mov    %eax,%edx
0815acc1 +0x81:  movl   $"stream",(%edx)
0815acc7 +0x87:  movl   $0x0,0x8(%esp)
0815accf +0x8f:  movl   $&_ZTIPKc,0x4(%esp)
0815acd7 +0x97:  mov    %eax,(%esp)
0815acda +0x9a:  call   08724c50 <__cxa_throw>
0815acdf +0x9f:  mov    0xc(%ebp),%eax
0815ace2 +0xa2:  mov    %eax,0x4(%esp)
0815ace6 +0xa6:  mov    -0xc(%ebp),%eax
0815ace9 +0xa9:  mov    %eax,(%esp)
0815acec +0xac:  call   0815de38 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xac>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xac
0815acf1 +0xb1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0815acf6 +0xb6:  lea    -0x14(%ebp),%edx
0815acf9 +0xb9:  mov    %edx,0x8(%esp)
0815acfd +0xbd:  movl   $0x1,0x4(%esp)
0815ad05 +0xc5:  mov    %eax,(%esp)
0815ad08 +0xc8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0815ad0d +0xcd:  jmp    0815ad2a <+0xea>
0815ad0f +0xcf:  mov    %edx,%ebx
0815ad11 +0xd1:  mov    %eax,%esi
0815ad13 +0xd3:  lea    -0x14(%ebp),%eax
0815ad16 +0xd6:  mov    %eax,(%esp)
0815ad19 +0xd9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815ad1e +0xde:  mov    %esi,%eax
0815ad20 +0xe0:  mov    %ebx,%edx
0815ad22 +0xe2:  mov    %eax,(%esp)
0815ad25 +0xe5:  call   08ae3750 <_Unwind_Resume>
0815ad2a +0xea:  lea    -0x14(%ebp),%eax
0815ad2d +0xed:  mov    %eax,(%esp)
0815ad30 +0xf0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815ad35 +0xf5:  add    $0x20,%esp
0815ad38 +0xf8:  pop    %ebx
0815ad39 +0xf9:  pop    %esi
0815ad3a +0xfa:  pop    %ebp
0815ad3b +0xfb:  ret
```

## 反编译 C

```c
// LoadServiceRestrictPolicy::sendRestrictData @ 0x815ac40

/* LoadServiceRestrictPolicy::sendRestrictData(Taiwan::SigLoadRestrictPolicy&) */

void __thiscall
LoadServiceRestrictPolicy::sendRestrictData
          (LoadServiceRestrictPolicy *this,SigLoadRestrictPolicy *param_1)

{
  Stream *pSVar1;
  CStreamGuard *this_00;
  undefined4 *puVar2;
  CStreamGuard local_18 [8];
  SigLoadRestrictPolicy *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0xd9);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 0815ac92 to 0815ad0c has its CatchHandler @ 0815ad0f */
  Taiwan::internal_stream(local_18,1,0xffffffff);
  this_00 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<Taiwan::SigLoadRestrictPolicy>(this_00);
  if (local_10 == (SigLoadRestrictPolicy *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "stream";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  Taiwan::SigLoadRestrictPolicy::set(local_10,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
