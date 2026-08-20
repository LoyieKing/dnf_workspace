# loadData

`_ZN19RestrictGeolocation8loadDataEv`

`RestrictGeolocation::loadData()`

| 类 | 地址 |
|---|---|
| `RestrictGeolocation` | `0x08170fec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08170fec  _ZN19RestrictGeolocation8loadDataEv
#           RestrictGeolocation::loadData()
# range [0x08170fec, 0x08171099]
08170fec +0x00:  push   %ebp
08170fed +0x01:  mov    %esp,%ebp
08170fef +0x03:  push   %esi
08170ff0 +0x04:  push   %ebx
08170ff1 +0x05:  sub    $0x20,%esp
08170ff4 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08170ff9 +0x0d:  movl   $0x8b,0x8(%esp)
08171001 +0x15:  movl   $"localtaiwan/System/RestrictGeolocation.cpp",0x4(%esp)
08171009 +0x1d:  mov    %eax,(%esp)
0817100c +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08171011 +0x25:  movl   $0x1,0x8(%esp)
08171019 +0x2d:  mov    %eax,0x4(%esp)
0817101d +0x31:  lea    -0x10(%ebp),%eax
08171020 +0x34:  mov    %eax,(%esp)
08171023 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08171028 +0x3c:  movl   $0xffffffff,0x8(%esp)
08171030 +0x44:  movl   $0x4,0x4(%esp)
08171038 +0x4c:  lea    -0x10(%ebp),%eax
0817103b +0x4f:  mov    %eax,(%esp)
0817103e +0x52:  call   08163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>  ; Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
08171043 +0x57:  mov    0x8(%ebp),%eax
08171046 +0x5a:  mov    %eax,(%esp)
08171049 +0x5d:  call   08170b16 <_ZN19RestrictGeolocation17clearAllowCountryEv>  ; RestrictGeolocation::clearAllowCountry()
0817104e +0x62:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08171053 +0x67:  lea    -0x10(%ebp),%edx
08171056 +0x6a:  mov    %edx,0x8(%esp)
0817105a +0x6e:  movl   $0x2,0x4(%esp)
08171062 +0x76:  mov    %eax,(%esp)
08171065 +0x79:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0817106a +0x7e:  jmp    08171087 <+0x9b>
0817106c +0x80:  mov    %edx,%ebx
0817106e +0x82:  mov    %eax,%esi
08171070 +0x84:  lea    -0x10(%ebp),%eax
08171073 +0x87:  mov    %eax,(%esp)
08171076 +0x8a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0817107b +0x8f:  mov    %esi,%eax
0817107d +0x91:  mov    %ebx,%edx
0817107f +0x93:  mov    %eax,(%esp)
08171082 +0x96:  call   08ae3750 <_Unwind_Resume>
08171087 +0x9b:  lea    -0x10(%ebp),%eax
0817108a +0x9e:  mov    %eax,(%esp)
0817108d +0xa1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08171092 +0xa6:  add    $0x20,%esp
08171095 +0xa9:  pop    %ebx
08171096 +0xaa:  pop    %esi
08171097 +0xab:  pop    %ebp
08171098 +0xac:  ret
08171099 +0xad:  nop
```

## 反编译 C

```c
// RestrictGeolocation::loadData @ 0x8170fec

/* RestrictGeolocation::loadData() */

void __thiscall RestrictGeolocation::loadData(RestrictGeolocation *this)

{
  Stream *pSVar1;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/System/RestrictGeolocation.cpp",0x8b);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
                    /* try { // try from 0817103e to 08171069 has its CatchHandler @ 0817106c */
  Taiwan::internal_stream(local_14,4,0xffffffff);
  clearAllowCountry(this);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
