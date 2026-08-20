# makeRequest

`_ZN32DB_SecuServiceUpdateValidityTime11makeRequestEjjtPc`

`DB_SecuServiceUpdateValidityTime::makeRequest(unsigned int, unsigned int, unsigned short, char*)`

| 类 | 地址 |
|---|---|
| `DB_SecuServiceUpdateValidityTime` | `0x0843a34e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843a34e  _ZN32DB_SecuServiceUpdateValidityTime11makeRequestEjjtPc
#           DB_SecuServiceUpdateValidityTime::makeRequest(unsigned int, unsigned int, unsigned short, char*)
# range [0x0843a34e, 0x0843a461]
0843a34e +0x000:  push   %ebp
0843a34f +0x001:  mov    %esp,%ebp
0843a351 +0x003:  push   %esi
0843a352 +0x004:  push   %ebx
0843a353 +0x005:  sub    $0x30,%esp
0843a356 +0x008:  mov    0x10(%ebp),%eax
0843a359 +0x00b:  mov    %ax,-0x1c(%ebp)
0843a35d +0x00f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0843a362 +0x014:  movl   $0x88d4,0x8(%esp)
0843a36a +0x01c:  movl   $"DBThread.cpp",0x4(%esp)
0843a372 +0x024:  mov    %eax,(%esp)
0843a375 +0x027:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843a37a +0x02c:  movl   $0x1,0x8(%esp)
0843a382 +0x034:  mov    %eax,0x4(%esp)
0843a386 +0x038:  lea    -0x14(%ebp),%eax
0843a389 +0x03b:  mov    %eax,(%esp)
0843a38c +0x03e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0843a391 +0x043:  lea    -0x14(%ebp),%eax
0843a394 +0x046:  mov    %eax,(%esp)
0843a397 +0x049:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843a39c +0x04e:  movl   $0x1c9,0x4(%esp)
0843a3a4 +0x056:  mov    %eax,(%esp)
0843a3a7 +0x059:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843a3ac +0x05e:  lea    -0x14(%ebp),%eax
0843a3af +0x061:  mov    %eax,(%esp)
0843a3b2 +0x064:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843a3b7 +0x069:  movl   $0xffffffff,0x4(%esp)
0843a3bf +0x071:  mov    %eax,(%esp)
0843a3c2 +0x074:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843a3c7 +0x079:  lea    -0x14(%ebp),%eax
0843a3ca +0x07c:  mov    %eax,(%esp)
0843a3cd +0x07f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843a3d2 +0x084:  mov    %eax,(%esp)
0843a3d5 +0x087:  call   084538fa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6510>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6510
0843a3da +0x08c:  mov    %eax,-0xc(%ebp)
0843a3dd +0x08f:  mov    -0xc(%ebp),%eax
0843a3e0 +0x092:  mov    0x8(%ebp),%edx
0843a3e3 +0x095:  mov    %edx,(%eax)
0843a3e5 +0x097:  mov    -0xc(%ebp),%eax
0843a3e8 +0x09a:  mov    0xc(%ebp),%edx
0843a3eb +0x09d:  mov    %edx,0x4(%eax)
0843a3ee +0x0a0:  mov    -0xc(%ebp),%eax
0843a3f1 +0x0a3:  movzwl -0x1c(%ebp),%edx
0843a3f5 +0x0a7:  mov    %dx,0x8(%eax)
0843a3f9 +0x0ab:  mov    -0xc(%ebp),%eax
0843a3fc +0x0ae:  lea    0xa(%eax),%edx
0843a3ff +0x0b1:  movl   $0x10,0x8(%esp)
0843a407 +0x0b9:  mov    0x14(%ebp),%eax
0843a40a +0x0bc:  mov    %eax,0x4(%esp)
0843a40e +0x0c0:  mov    %edx,(%esp)
0843a411 +0x0c3:  call   0807d8d0 <_init+0x1c8>
0843a416 +0x0c8:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0843a41b +0x0cd:  lea    -0x14(%ebp),%edx
0843a41e +0x0d0:  mov    %edx,0x8(%esp)
0843a422 +0x0d4:  movl   $0x2,0x4(%esp)
0843a42a +0x0dc:  mov    %eax,(%esp)
0843a42d +0x0df:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0843a432 +0x0e4:  jmp    0843a44f <+0x101>
0843a434 +0x0e6:  mov    %edx,%ebx
0843a436 +0x0e8:  mov    %eax,%esi
0843a438 +0x0ea:  lea    -0x14(%ebp),%eax
0843a43b +0x0ed:  mov    %eax,(%esp)
0843a43e +0x0f0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843a443 +0x0f5:  mov    %esi,%eax
0843a445 +0x0f7:  mov    %ebx,%edx
0843a447 +0x0f9:  mov    %eax,(%esp)
0843a44a +0x0fc:  call   08ae3750 <_Unwind_Resume>
0843a44f +0x101:  lea    -0x14(%ebp),%eax
0843a452 +0x104:  mov    %eax,(%esp)
0843a455 +0x107:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0843a45a +0x10c:  add    $0x30,%esp
0843a45d +0x10f:  pop    %ebx
0843a45e +0x110:  pop    %esi
0843a45f +0x111:  pop    %ebp
0843a460 +0x112:  ret
0843a461 +0x113:  nop
```

## 反编译 C

```c
// DB_SecuServiceUpdateValidityTime::makeRequest @ 0x843a34e

/* DB_SecuServiceUpdateValidityTime::makeRequest(unsigned int, unsigned int, unsigned short, char*)
    */

void DB_SecuServiceUpdateValidityTime::makeRequest
               (uint param_1,uint param_2,ushort param_3,char *param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_SERVICE_VALIDITYTIME *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x88d4);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843a3a7 to 0843a431 has its CatchHandler @ 0843a434 */
  CStreamGuard::operator<<(pCVar2,0x1c9);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_SERVICE_VALIDITYTIME>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  *(ushort *)(local_10 + 8) = param_3;
  strncpy((char *)(local_10 + 10),param_4,0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
