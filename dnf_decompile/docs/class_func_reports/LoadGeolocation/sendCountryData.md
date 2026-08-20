# sendCountryData

`_ZN15LoadGeolocation15sendCountryDataERN6Taiwan18SigLoadGeolocationE`

`LoadGeolocation::sendCountryData(Taiwan::SigLoadGeolocation&)`

| 类 | 地址 |
|---|---|
| `LoadGeolocation` | `0x0815b266` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815b266  _ZN15LoadGeolocation15sendCountryDataERN6Taiwan18SigLoadGeolocationE
#           LoadGeolocation::sendCountryData(Taiwan::SigLoadGeolocation&)
# range [0x0815b266, 0x0815b361]
0815b266 +0x00:  push   %ebp
0815b267 +0x01:  mov    %esp,%ebp
0815b269 +0x03:  push   %esi
0815b26a +0x04:  push   %ebx
0815b26b +0x05:  sub    $0x20,%esp
0815b26e +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0815b273 +0x0d:  movl   $0x144,0x8(%esp)
0815b27b +0x15:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815b283 +0x1d:  mov    %eax,(%esp)
0815b286 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0815b28b +0x25:  movl   $0x1,0x8(%esp)
0815b293 +0x2d:  mov    %eax,0x4(%esp)
0815b297 +0x31:  lea    -0x14(%ebp),%eax
0815b29a +0x34:  mov    %eax,(%esp)
0815b29d +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0815b2a2 +0x3c:  movl   $0xffffffff,0x8(%esp)
0815b2aa +0x44:  movl   $0x4,0x4(%esp)
0815b2b2 +0x4c:  lea    -0x14(%ebp),%eax
0815b2b5 +0x4f:  mov    %eax,(%esp)
0815b2b8 +0x52:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
0815b2bd +0x57:  lea    -0x14(%ebp),%eax
0815b2c0 +0x5a:  mov    %eax,(%esp)
0815b2c3 +0x5d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0815b2c8 +0x62:  mov    %eax,(%esp)
0815b2cb +0x65:  call   0815ea0c <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xc80>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xc80
0815b2d0 +0x6a:  mov    %eax,-0xc(%ebp)
0815b2d3 +0x6d:  cmpl   $0x0,-0xc(%ebp)
0815b2d7 +0x71:  jne    0815b305 <+0x9f>
0815b2d9 +0x73:  movl   $0x4,(%esp)
0815b2e0 +0x7a:  call   08725800 <__cxa_allocate_exception>
0815b2e5 +0x7f:  mov    %eax,%edx
0815b2e7 +0x81:  movl   $"stream",(%edx)
0815b2ed +0x87:  movl   $0x0,0x8(%esp)
0815b2f5 +0x8f:  movl   $&_ZTIPKc,0x4(%esp)
0815b2fd +0x97:  mov    %eax,(%esp)
0815b300 +0x9a:  call   08724c50 <__cxa_throw>
0815b305 +0x9f:  mov    0xc(%ebp),%eax
0815b308 +0xa2:  mov    %eax,0x4(%esp)
0815b30c +0xa6:  mov    -0xc(%ebp),%eax
0815b30f +0xa9:  mov    %eax,(%esp)
0815b312 +0xac:  call   0815df06 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0x17a>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0x17a
0815b317 +0xb1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0815b31c +0xb6:  lea    -0x14(%ebp),%edx
0815b31f +0xb9:  mov    %edx,0x8(%esp)
0815b323 +0xbd:  movl   $0x1,0x4(%esp)
0815b32b +0xc5:  mov    %eax,(%esp)
0815b32e +0xc8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0815b333 +0xcd:  jmp    0815b350 <+0xea>
0815b335 +0xcf:  mov    %edx,%ebx
0815b337 +0xd1:  mov    %eax,%esi
0815b339 +0xd3:  lea    -0x14(%ebp),%eax
0815b33c +0xd6:  mov    %eax,(%esp)
0815b33f +0xd9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815b344 +0xde:  mov    %esi,%eax
0815b346 +0xe0:  mov    %ebx,%edx
0815b348 +0xe2:  mov    %eax,(%esp)
0815b34b +0xe5:  call   08ae3750 <_Unwind_Resume>
0815b350 +0xea:  lea    -0x14(%ebp),%eax
0815b353 +0xed:  mov    %eax,(%esp)
0815b356 +0xf0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0815b35b +0xf5:  add    $0x20,%esp
0815b35e +0xf8:  pop    %ebx
0815b35f +0xf9:  pop    %esi
0815b360 +0xfa:  pop    %ebp
0815b361 +0xfb:  ret
```

## 反编译 C

```c
// LoadGeolocation::sendCountryData @ 0x815b266

/* LoadGeolocation::sendCountryData(Taiwan::SigLoadGeolocation&) */

void __thiscall LoadGeolocation::sendCountryData(LoadGeolocation *this,SigLoadGeolocation *param_1)

{
  Stream *pSVar1;
  CStreamGuard *this_00;
  undefined4 *puVar2;
  CStreamGuard local_18 [8];
  SigLoadGeolocation *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x144);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 0815b2b8 to 0815b332 has its CatchHandler @ 0815b335 */
  Taiwan::internal_stream(local_18,4,0xffffffff);
  this_00 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<Taiwan::SigLoadGeolocation>(this_00);
  if (local_10 == (SigLoadGeolocation *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "stream";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  Taiwan::SigLoadGeolocation::setData(local_10,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
