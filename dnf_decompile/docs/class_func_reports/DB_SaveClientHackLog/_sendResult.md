# _sendResult

`_ZN20DB_SaveClientHackLog11_sendResultEj`

`DB_SaveClientHackLog::_sendResult(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_SaveClientHackLog` | `0x08421e3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08421e3a  _ZN20DB_SaveClientHackLog11_sendResultEj
#           DB_SaveClientHackLog::_sendResult(unsigned int)
# range [0x08421e3a, 0x08421f15]
08421e3a +0x00:  push   %ebp
08421e3b +0x01:  mov    %esp,%ebp
08421e3d +0x03:  push   %esi
08421e3e +0x04:  push   %ebx
08421e3f +0x05:  sub    $0x20,%esp
08421e42 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08421e47 +0x0d:  movl   $0x5a14,0x8(%esp)
08421e4f +0x15:  movl   $"DBThread.cpp",0x4(%esp)
08421e57 +0x1d:  mov    %eax,(%esp)
08421e5a +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08421e5f +0x25:  movl   $0x1,0x8(%esp)
08421e67 +0x2d:  mov    %eax,0x4(%esp)
08421e6b +0x31:  lea    -0x14(%ebp),%eax
08421e6e +0x34:  mov    %eax,(%esp)
08421e71 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08421e76 +0x3c:  lea    -0x14(%ebp),%eax
08421e79 +0x3f:  mov    %eax,(%esp)
08421e7c +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08421e81 +0x47:  movl   $0x9a,0x4(%esp)
08421e89 +0x4f:  mov    %eax,(%esp)
08421e8c +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08421e91 +0x57:  lea    -0x14(%ebp),%eax
08421e94 +0x5a:  mov    %eax,(%esp)
08421e97 +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08421e9c +0x62:  movl   $0xffffffff,0x4(%esp)
08421ea4 +0x6a:  mov    %eax,(%esp)
08421ea7 +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08421eac +0x72:  lea    -0x14(%ebp),%eax
08421eaf +0x75:  mov    %eax,(%esp)
08421eb2 +0x78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08421eb7 +0x7d:  mov    %eax,(%esp)
08421eba +0x80:  call   080f9e44 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x650>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x650
08421ebf +0x85:  mov    %eax,-0xc(%ebp)
08421ec2 +0x88:  mov    -0xc(%ebp),%eax
08421ec5 +0x8b:  mov    0xc(%ebp),%edx
08421ec8 +0x8e:  mov    %edx,(%eax)
08421eca +0x90:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08421ecf +0x95:  lea    -0x14(%ebp),%edx
08421ed2 +0x98:  mov    %edx,0x8(%esp)
08421ed6 +0x9c:  movl   $0x1,0x4(%esp)
08421ede +0xa4:  mov    %eax,(%esp)
08421ee1 +0xa7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08421ee6 +0xac:  jmp    08421f03 <+0xc9>
08421ee8 +0xae:  mov    %edx,%ebx
08421eea +0xb0:  mov    %eax,%esi
08421eec +0xb2:  lea    -0x14(%ebp),%eax
08421eef +0xb5:  mov    %eax,(%esp)
08421ef2 +0xb8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08421ef7 +0xbd:  mov    %esi,%eax
08421ef9 +0xbf:  mov    %ebx,%edx
08421efb +0xc1:  mov    %eax,(%esp)
08421efe +0xc4:  call   08ae3750 <_Unwind_Resume>
08421f03 +0xc9:  lea    -0x14(%ebp),%eax
08421f06 +0xcc:  mov    %eax,(%esp)
08421f09 +0xcf:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08421f0e +0xd4:  add    $0x20,%esp
08421f11 +0xd7:  pop    %ebx
08421f12 +0xd8:  pop    %esi
08421f13 +0xd9:  pop    %ebp
08421f14 +0xda:  ret
08421f15 +0xdb:  nop
```

## 反编译 C

```c
// DB_SaveClientHackLog::_sendResult @ 0x8421e3a

/* DB_SaveClientHackLog::_sendResult(unsigned int) */

void __thiscall DB_SaveClientHackLog::_sendResult(DB_SaveClientHackLog *this,uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SAVE_CLIENT_HACK_LOG *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5a14);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08421e8c to 08421ee5 has its CatchHandler @ 08421ee8 */
  CStreamGuard::operator<<(pCVar2,0x9a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_CLIENT_HACK_LOG>(pCVar2);
  *(uint *)local_10 = param_1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
