# makeRequest

`_ZN24DB_Find_Factory_Hub_User11makeRequestEjPct`

`DB_Find_Factory_Hub_User::makeRequest(unsigned int, char*, unsigned short)`

| 类 | 地址 |
|---|---|
| `DB_Find_Factory_Hub_User` | `0x08437c50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08437c50  _ZN24DB_Find_Factory_Hub_User11makeRequestEjPct
#           DB_Find_Factory_Hub_User::makeRequest(unsigned int, char*, unsigned short)
# range [0x08437c50, 0x08437d4d]
08437c50 +0x00:  push   %ebp
08437c51 +0x01:  mov    %esp,%ebp
08437c53 +0x03:  push   %esi
08437c54 +0x04:  push   %ebx
08437c55 +0x05:  sub    $0x30,%esp
08437c58 +0x08:  mov    0x10(%ebp),%eax
08437c5b +0x0b:  mov    %ax,-0x1c(%ebp)
08437c5f +0x0f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08437c64 +0x14:  movl   $0x851e,0x8(%esp)
08437c6c +0x1c:  movl   $"DBThread.cpp",0x4(%esp)
08437c74 +0x24:  mov    %eax,(%esp)
08437c77 +0x27:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08437c7c +0x2c:  movl   $0x1,0x8(%esp)
08437c84 +0x34:  mov    %eax,0x4(%esp)
08437c88 +0x38:  lea    -0x14(%ebp),%eax
08437c8b +0x3b:  mov    %eax,(%esp)
08437c8e +0x3e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08437c93 +0x43:  lea    -0x14(%ebp),%eax
08437c96 +0x46:  mov    %eax,(%esp)
08437c99 +0x49:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08437c9e +0x4e:  movl   $0x1a0,0x4(%esp)
08437ca6 +0x56:  mov    %eax,(%esp)
08437ca9 +0x59:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08437cae +0x5e:  mov    0x8(%ebp),%ebx
08437cb1 +0x61:  lea    -0x14(%ebp),%eax
08437cb4 +0x64:  mov    %eax,(%esp)
08437cb7 +0x67:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08437cbc +0x6c:  mov    %ebx,0x4(%esp)
08437cc0 +0x70:  mov    %eax,(%esp)
08437cc3 +0x73:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08437cc8 +0x78:  lea    -0x14(%ebp),%eax
08437ccb +0x7b:  mov    %eax,(%esp)
08437cce +0x7e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08437cd3 +0x83:  mov    %eax,(%esp)
08437cd6 +0x86:  call   084536a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x62bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x62bc
08437cdb +0x8b:  mov    %eax,-0xc(%ebp)
08437cde +0x8e:  mov    -0xc(%ebp),%eax
08437ce1 +0x91:  movl   $0x1d,0x8(%esp)
08437ce9 +0x99:  mov    0xc(%ebp),%edx
08437cec +0x9c:  mov    %edx,0x4(%esp)
08437cf0 +0xa0:  mov    %eax,(%esp)
08437cf3 +0xa3:  call   0807d8d0 <_init+0x1c8>
08437cf8 +0xa8:  mov    -0xc(%ebp),%eax
08437cfb +0xab:  movzwl -0x1c(%ebp),%edx
08437cff +0xaf:  mov    %dx,0x1e(%eax)
08437d03 +0xb3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08437d08 +0xb8:  lea    -0x14(%ebp),%edx
08437d0b +0xbb:  mov    %edx,0x8(%esp)
08437d0f +0xbf:  movl   $0x2,0x4(%esp)
08437d17 +0xc7:  mov    %eax,(%esp)
08437d1a +0xca:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08437d1f +0xcf:  jmp    08437d3c <+0xec>
08437d21 +0xd1:  mov    %edx,%ebx
08437d23 +0xd3:  mov    %eax,%esi
08437d25 +0xd5:  lea    -0x14(%ebp),%eax
08437d28 +0xd8:  mov    %eax,(%esp)
08437d2b +0xdb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08437d30 +0xe0:  mov    %esi,%eax
08437d32 +0xe2:  mov    %ebx,%edx
08437d34 +0xe4:  mov    %eax,(%esp)
08437d37 +0xe7:  call   08ae3750 <_Unwind_Resume>
08437d3c +0xec:  lea    -0x14(%ebp),%eax
08437d3f +0xef:  mov    %eax,(%esp)
08437d42 +0xf2:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08437d47 +0xf7:  add    $0x30,%esp
08437d4a +0xfa:  pop    %ebx
08437d4b +0xfb:  pop    %esi
08437d4c +0xfc:  pop    %ebp
08437d4d +0xfd:  ret
```

## 反编译 C

```c
// DB_Find_Factory_Hub_User::makeRequest @ 0x8437c50

/* DB_Find_Factory_Hub_User::makeRequest(unsigned int, char*, unsigned short) */

void DB_Find_Factory_Hub_User::makeRequest(uint param_1,char *param_2,ushort param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_FIND_FACTORY_HUB_USER *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x851e);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08437ca9 to 08437d1e has its CatchHandler @ 08437d21 */
  CStreamGuard::operator<<(pCVar2,0x1a0);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_FIND_FACTORY_HUB_USER>(pCVar2);
  strncpy((char *)local_10,param_2,0x1d);
  *(ushort *)(local_10 + 0x1e) = param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
