# makeRequest

`_ZN26DB_InsertUnlimitSupportLog11makeRequestEjjPKc`

`DB_InsertUnlimitSupportLog::makeRequest(unsigned int, unsigned int, char const*)`

| 类 | 地址 |
|---|---|
| `DB_InsertUnlimitSupportLog` | `0x0842ebd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842ebd0  _ZN26DB_InsertUnlimitSupportLog11makeRequestEjjPKc
#           DB_InsertUnlimitSupportLog::makeRequest(unsigned int, unsigned int, char const*)
# range [0x0842ebd0, 0x0842ecf3]
0842ebd0 +0x000:  push   %ebp
0842ebd1 +0x001:  mov    %esp,%ebp
0842ebd3 +0x003:  push   %esi
0842ebd4 +0x004:  push   %ebx
0842ebd5 +0x005:  sub    $0x20,%esp
0842ebd8 +0x008:  cmpl   $0x946501,0x8(%ebp)
0842ebdf +0x00f:  jbe    0842ecec <+0x11c>
0842ebe5 +0x015:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842ebea +0x01a:  movl   $0x7392,0x8(%esp)
0842ebf2 +0x022:  movl   $"DBThread.cpp",0x4(%esp)
0842ebfa +0x02a:  mov    %eax,(%esp)
0842ebfd +0x02d:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842ec02 +0x032:  movl   $0x1,0x8(%esp)
0842ec0a +0x03a:  mov    %eax,0x4(%esp)
0842ec0e +0x03e:  lea    -0x14(%ebp),%eax
0842ec11 +0x041:  mov    %eax,(%esp)
0842ec14 +0x044:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842ec19 +0x049:  lea    -0x14(%ebp),%eax
0842ec1c +0x04c:  mov    %eax,(%esp)
0842ec1f +0x04f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842ec24 +0x054:  movl   $0x122,0x4(%esp)
0842ec2c +0x05c:  mov    %eax,(%esp)
0842ec2f +0x05f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842ec34 +0x064:  lea    -0x14(%ebp),%eax
0842ec37 +0x067:  mov    %eax,(%esp)
0842ec3a +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842ec3f +0x06f:  movl   $0xffffffff,0x4(%esp)
0842ec47 +0x077:  mov    %eax,(%esp)
0842ec4a +0x07a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842ec4f +0x07f:  lea    -0x14(%ebp),%eax
0842ec52 +0x082:  mov    %eax,(%esp)
0842ec55 +0x085:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842ec5a +0x08a:  mov    %eax,(%esp)
0842ec5d +0x08d:  call   084529ee <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5604>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5604
0842ec62 +0x092:  mov    %eax,-0xc(%ebp)
0842ec65 +0x095:  mov    -0xc(%ebp),%eax
0842ec68 +0x098:  mov    0x8(%ebp),%edx
0842ec6b +0x09b:  mov    %edx,(%eax)
0842ec6d +0x09d:  mov    -0xc(%ebp),%eax
0842ec70 +0x0a0:  mov    0xc(%ebp),%edx
0842ec73 +0x0a3:  mov    %edx,0x8(%eax)
0842ec76 +0x0a6:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0842ec7b +0x0ab:  mov    0x378(%eax),%eax
0842ec81 +0x0b1:  mov    %eax,%edx
0842ec83 +0x0b3:  mov    -0xc(%ebp),%eax
0842ec86 +0x0b6:  mov    %edx,0x4(%eax)
0842ec89 +0x0b9:  mov    -0xc(%ebp),%eax
0842ec8c +0x0bc:  lea    0xc(%eax),%edx
0842ec8f +0x0bf:  movl   $0x1d,0x8(%esp)
0842ec97 +0x0c7:  mov    0x10(%ebp),%eax
0842ec9a +0x0ca:  mov    %eax,0x4(%esp)
0842ec9e +0x0ce:  mov    %edx,(%esp)
0842eca1 +0x0d1:  call   0807d8d0 <_init+0x1c8>
0842eca6 +0x0d6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842ecab +0x0db:  lea    -0x14(%ebp),%edx
0842ecae +0x0de:  mov    %edx,0x8(%esp)
0842ecb2 +0x0e2:  movl   $0x2,0x4(%esp)
0842ecba +0x0ea:  mov    %eax,(%esp)
0842ecbd +0x0ed:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842ecc2 +0x0f2:  jmp    0842ecdf <+0x10f>
0842ecc4 +0x0f4:  mov    %edx,%ebx
0842ecc6 +0x0f6:  mov    %eax,%esi
0842ecc8 +0x0f8:  lea    -0x14(%ebp),%eax
0842eccb +0x0fb:  mov    %eax,(%esp)
0842ecce +0x0fe:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842ecd3 +0x103:  mov    %esi,%eax
0842ecd5 +0x105:  mov    %ebx,%edx
0842ecd7 +0x107:  mov    %eax,(%esp)
0842ecda +0x10a:  call   08ae3750 <_Unwind_Resume>
0842ecdf +0x10f:  lea    -0x14(%ebp),%eax
0842ece2 +0x112:  mov    %eax,(%esp)
0842ece5 +0x115:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842ecea +0x11a:  jmp    0842eced <+0x11d>
0842ecec +0x11c:  nop
0842eced +0x11d:  add    $0x20,%esp
0842ecf0 +0x120:  pop    %ebx
0842ecf1 +0x121:  pop    %esi
0842ecf2 +0x122:  pop    %ebp
0842ecf3 +0x123:  ret
```

## 反编译 C

```c
// DB_InsertUnlimitSupportLog::makeRequest @ 0x842ebd0

/* DB_InsertUnlimitSupportLog::makeRequest(unsigned int, unsigned int, char const*) */

void DB_InsertUnlimitSupportLog::makeRequest(uint param_1,uint param_2,char *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_18 [8];
  SIG_INSERT_UNLIMIT_SUPPORT_LOG *local_10;
  
  if (0x946501 < param_1) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7392);
    CStreamGuard::CStreamGuard(local_18,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842ec2f to 0842ecc1 has its CatchHandler @ 0842ecc4 */
    CStreamGuard::operator<<(pCVar2,0x122);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_INSERT_UNLIMIT_SUPPORT_LOG>(pCVar2);
    *(uint *)local_10 = param_1;
    *(uint *)(local_10 + 8) = param_2;
    iVar3 = G_CEnvironment();
    *(undefined4 *)(local_10 + 4) = *(undefined4 *)(iVar3 + 0x378);
    strncpy((char *)(local_10 + 0xc),param_3,0x1d);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}
```
