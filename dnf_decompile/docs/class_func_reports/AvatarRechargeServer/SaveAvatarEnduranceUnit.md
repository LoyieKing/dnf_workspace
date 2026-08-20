# SaveAvatarEnduranceUnit

`_ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitERN4arad26SigAradAvatarEnduranceSaveE`

`AvatarRechargeServer::SaveAvatarEnduranceUnit(arad::SigAradAvatarEnduranceSave&)`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x08190dea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08190dea  _ZN20AvatarRechargeServer23SaveAvatarEnduranceUnitERN4arad26SigAradAvatarEnduranceSaveE
#           AvatarRechargeServer::SaveAvatarEnduranceUnit(arad::SigAradAvatarEnduranceSave&)
# range [0x08190dea, 0x08190ead]
08190dea +0x00:  push   %ebp
08190deb +0x01:  mov    %esp,%ebp
08190ded +0x03:  push   %esi
08190dee +0x04:  push   %ebx
08190def +0x05:  sub    $0x20,%esp
08190df2 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08190df7 +0x0d:  movl   $0x10f,0x8(%esp)
08190dff +0x15:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
08190e07 +0x1d:  mov    %eax,(%esp)
08190e0a +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08190e0f +0x25:  movl   $0x1,0x8(%esp)
08190e17 +0x2d:  mov    %eax,0x4(%esp)
08190e1b +0x31:  lea    -0x10(%ebp),%eax
08190e1e +0x34:  mov    %eax,(%esp)
08190e21 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08190e26 +0x3c:  movl   $0xffffffff,0x8(%esp)
08190e2e +0x44:  movl   $0x31,0x4(%esp)
08190e36 +0x4c:  lea    -0x10(%ebp),%eax
08190e39 +0x4f:  mov    %eax,(%esp)
08190e3c +0x52:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
08190e41 +0x57:  lea    -0x10(%ebp),%eax
08190e44 +0x5a:  mov    %eax,(%esp)
08190e47 +0x5d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08190e4c +0x62:  movl   $0x8,0x8(%esp)
08190e54 +0x6a:  mov    0x8(%ebp),%edx
08190e57 +0x6d:  mov    %edx,0x4(%esp)
08190e5b +0x71:  mov    %eax,(%esp)
08190e5e +0x74:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
08190e63 +0x79:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08190e68 +0x7e:  lea    -0x10(%ebp),%edx
08190e6b +0x81:  mov    %edx,0x8(%esp)
08190e6f +0x85:  movl   $0x2,0x4(%esp)
08190e77 +0x8d:  mov    %eax,(%esp)
08190e7a +0x90:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08190e7f +0x95:  jmp    08190e9c <+0xb2>
08190e81 +0x97:  mov    %edx,%ebx
08190e83 +0x99:  mov    %eax,%esi
08190e85 +0x9b:  lea    -0x10(%ebp),%eax
08190e88 +0x9e:  mov    %eax,(%esp)
08190e8b +0xa1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08190e90 +0xa6:  mov    %esi,%eax
08190e92 +0xa8:  mov    %ebx,%edx
08190e94 +0xaa:  mov    %eax,(%esp)
08190e97 +0xad:  call   08ae3750 <_Unwind_Resume>
08190e9c +0xb2:  lea    -0x10(%ebp),%eax
08190e9f +0xb5:  mov    %eax,(%esp)
08190ea2 +0xb8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08190ea7 +0xbd:  add    $0x20,%esp
08190eaa +0xc0:  pop    %ebx
08190eab +0xc1:  pop    %esi
08190eac +0xc2:  pop    %ebp
08190ead +0xc3:  ret
```

## 反编译 C

```c
// AvatarRechargeServer::SaveAvatarEnduranceUnit @ 0x8190dea

/* AvatarRechargeServer::SaveAvatarEnduranceUnit(arad::SigAradAvatarEnduranceSave&) */

void AvatarRechargeServer::SaveAvatarEnduranceUnit(SigAradAvatarEnduranceSave *param_1)

{
  Stream *pSVar1;
  CStreamGuard *this;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/Arad_EmblemReformServer.cpp",
                               0x10f);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
                    /* try { // try from 08190e3c to 08190e7e has its CatchHandler @ 08190e81 */
  ARAD::DISPATCHER::make_internal_stream_jpn(local_14,0x31,0xffffffff);
  this = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(this,param_1,8);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
