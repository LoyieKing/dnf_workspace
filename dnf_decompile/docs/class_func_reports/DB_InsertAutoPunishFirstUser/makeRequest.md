# makeRequest

`_ZN28DB_InsertAutoPunishFirstUser11makeRequestEjPKcjjjjtj`

`DB_InsertAutoPunishFirstUser::makeRequest(unsigned int, char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned short, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_InsertAutoPunishFirstUser` | `0x0842dd7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842dd7c  _ZN28DB_InsertAutoPunishFirstUser11makeRequestEjPKcjjjjtj
#           DB_InsertAutoPunishFirstUser::makeRequest(unsigned int, char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned short, unsigned int)
# range [0x0842dd7c, 0x0842deb3]
0842dd7c +0x000:  push   %ebp
0842dd7d +0x001:  mov    %esp,%ebp
0842dd7f +0x003:  push   %esi
0842dd80 +0x004:  push   %ebx
0842dd81 +0x005:  sub    $0x30,%esp
0842dd84 +0x008:  mov    0x20(%ebp),%eax
0842dd87 +0x00b:  mov    %ax,-0x1c(%ebp)
0842dd8b +0x00f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842dd90 +0x014:  movl   $0x723e,0x8(%esp)
0842dd98 +0x01c:  movl   $"DBThread.cpp",0x4(%esp)
0842dda0 +0x024:  mov    %eax,(%esp)
0842dda3 +0x027:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842dda8 +0x02c:  movl   $0x1,0x8(%esp)
0842ddb0 +0x034:  mov    %eax,0x4(%esp)
0842ddb4 +0x038:  lea    -0x14(%ebp),%eax
0842ddb7 +0x03b:  mov    %eax,(%esp)
0842ddba +0x03e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842ddbf +0x043:  lea    -0x14(%ebp),%eax
0842ddc2 +0x046:  mov    %eax,(%esp)
0842ddc5 +0x049:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842ddca +0x04e:  movl   $0x10a,0x4(%esp)
0842ddd2 +0x056:  mov    %eax,(%esp)
0842ddd5 +0x059:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842ddda +0x05e:  lea    -0x14(%ebp),%eax
0842dddd +0x061:  mov    %eax,(%esp)
0842dde0 +0x064:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842dde5 +0x069:  movl   $0xffffffff,0x4(%esp)
0842dded +0x071:  mov    %eax,(%esp)
0842ddf0 +0x074:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842ddf5 +0x079:  lea    -0x14(%ebp),%eax
0842ddf8 +0x07c:  mov    %eax,(%esp)
0842ddfb +0x07f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842de00 +0x084:  mov    %eax,(%esp)
0842de03 +0x087:  call   08452846 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x545c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x545c
0842de08 +0x08c:  mov    %eax,-0xc(%ebp)
0842de0b +0x08f:  mov    -0xc(%ebp),%eax
0842de0e +0x092:  mov    0x8(%ebp),%edx
0842de11 +0x095:  mov    %edx,(%eax)
0842de13 +0x097:  mov    -0xc(%ebp),%eax
0842de16 +0x09a:  lea    0x4(%eax),%edx
0842de19 +0x09d:  movl   $0x10,0x8(%esp)
0842de21 +0x0a5:  mov    0xc(%ebp),%eax
0842de24 +0x0a8:  mov    %eax,0x4(%esp)
0842de28 +0x0ac:  mov    %edx,(%esp)
0842de2b +0x0af:  call   0807d8d0 <_init+0x1c8>
0842de30 +0x0b4:  mov    -0xc(%ebp),%eax
0842de33 +0x0b7:  mov    0x10(%ebp),%edx
0842de36 +0x0ba:  mov    %edx,0x14(%eax)
0842de39 +0x0bd:  mov    -0xc(%ebp),%eax
0842de3c +0x0c0:  mov    0x14(%ebp),%edx
0842de3f +0x0c3:  mov    %edx,0x18(%eax)
0842de42 +0x0c6:  mov    -0xc(%ebp),%eax
0842de45 +0x0c9:  mov    0x18(%ebp),%edx
0842de48 +0x0cc:  mov    %edx,0x1c(%eax)
0842de4b +0x0cf:  mov    -0xc(%ebp),%eax
0842de4e +0x0d2:  mov    0x1c(%ebp),%edx
0842de51 +0x0d5:  mov    %edx,0x20(%eax)
0842de54 +0x0d8:  mov    -0xc(%ebp),%eax
0842de57 +0x0db:  movzwl -0x1c(%ebp),%edx
0842de5b +0x0df:  mov    %dx,0x24(%eax)
0842de5f +0x0e3:  mov    -0xc(%ebp),%eax
0842de62 +0x0e6:  mov    0x24(%ebp),%edx
0842de65 +0x0e9:  mov    %edx,0x28(%eax)
0842de68 +0x0ec:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842de6d +0x0f1:  lea    -0x14(%ebp),%edx
0842de70 +0x0f4:  mov    %edx,0x8(%esp)
0842de74 +0x0f8:  movl   $0x2,0x4(%esp)
0842de7c +0x100:  mov    %eax,(%esp)
0842de7f +0x103:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842de84 +0x108:  jmp    0842dea1 <+0x125>
0842de86 +0x10a:  mov    %edx,%ebx
0842de88 +0x10c:  mov    %eax,%esi
0842de8a +0x10e:  lea    -0x14(%ebp),%eax
0842de8d +0x111:  mov    %eax,(%esp)
0842de90 +0x114:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842de95 +0x119:  mov    %esi,%eax
0842de97 +0x11b:  mov    %ebx,%edx
0842de99 +0x11d:  mov    %eax,(%esp)
0842de9c +0x120:  call   08ae3750 <_Unwind_Resume>
0842dea1 +0x125:  lea    -0x14(%ebp),%eax
0842dea4 +0x128:  mov    %eax,(%esp)
0842dea7 +0x12b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842deac +0x130:  add    $0x30,%esp
0842deaf +0x133:  pop    %ebx
0842deb0 +0x134:  pop    %esi
0842deb1 +0x135:  pop    %ebp
0842deb2 +0x136:  ret
0842deb3 +0x137:  nop
```

## 反编译 C

```c
// DB_InsertAutoPunishFirstUser::makeRequest @ 0x842dd7c

/* DB_InsertAutoPunishFirstUser::makeRequest(unsigned int, char const*, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned short, unsigned int) */

void DB_InsertAutoPunishFirstUser::makeRequest
               (uint param_1,char *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               ushort param_7,uint param_8)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_INSERT_AUTO_PUNISH_FIRST_USER *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x723e);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842ddd5 to 0842de83 has its CatchHandler @ 0842de86 */
  CStreamGuard::operator<<(pCVar2,0x10a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_INSERT_AUTO_PUNISH_FIRST_USER>(pCVar2);
  *(uint *)local_10 = param_1;
  strncpy((char *)(local_10 + 4),param_2,0x10);
  *(uint *)(local_10 + 0x14) = param_3;
  *(uint *)(local_10 + 0x18) = param_4;
  *(uint *)(local_10 + 0x1c) = param_5;
  *(uint *)(local_10 + 0x20) = param_6;
  *(ushort *)(local_10 + 0x24) = param_7;
  *(uint *)(local_10 + 0x28) = param_8;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
