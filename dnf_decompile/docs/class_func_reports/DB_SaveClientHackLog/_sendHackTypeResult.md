# _sendHackTypeResult

`_ZN20DB_SaveClientHackLog19_sendHackTypeResultEjii`

`DB_SaveClientHackLog::_sendHackTypeResult(unsigned int, int, int)`

| 类 | 地址 |
|---|---|
| `DB_SaveClientHackLog` | `0x08422152` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08422152  _ZN20DB_SaveClientHackLog19_sendHackTypeResultEjii
#           DB_SaveClientHackLog::_sendHackTypeResult(unsigned int, int, int)
# range [0x08422152, 0x08422241]
08422152 +0x00:  push   %ebp
08422153 +0x01:  mov    %esp,%ebp
08422155 +0x03:  push   %esi
08422156 +0x04:  push   %ebx
08422157 +0x05:  sub    $0x20,%esp
0842215a +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842215f +0x0d:  movl   $0x5a6c,0x8(%esp)
08422167 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
0842216f +0x1d:  mov    %eax,(%esp)
08422172 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08422177 +0x25:  movl   $0x1,0x8(%esp)
0842217f +0x2d:  mov    %eax,0x4(%esp)
08422183 +0x31:  lea    -0x14(%ebp),%eax
08422186 +0x34:  mov    %eax,(%esp)
08422189 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842218e +0x3c:  lea    -0x14(%ebp),%eax
08422191 +0x3f:  mov    %eax,(%esp)
08422194 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08422199 +0x47:  movl   $0x9a,0x4(%esp)
084221a1 +0x4f:  mov    %eax,(%esp)
084221a4 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084221a9 +0x57:  lea    -0x14(%ebp),%eax
084221ac +0x5a:  mov    %eax,(%esp)
084221af +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084221b4 +0x62:  movl   $0xffffffff,0x4(%esp)
084221bc +0x6a:  mov    %eax,(%esp)
084221bf +0x6d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084221c4 +0x72:  lea    -0x14(%ebp),%eax
084221c7 +0x75:  mov    %eax,(%esp)
084221ca +0x78:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084221cf +0x7d:  mov    %eax,(%esp)
084221d2 +0x80:  call   080f9e44 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x650>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x650
084221d7 +0x85:  mov    %eax,-0xc(%ebp)
084221da +0x88:  mov    -0xc(%ebp),%eax
084221dd +0x8b:  mov    0xc(%ebp),%edx
084221e0 +0x8e:  mov    %edx,(%eax)
084221e2 +0x90:  mov    0x10(%ebp),%eax
084221e5 +0x93:  mov    %eax,%edx
084221e7 +0x95:  mov    -0xc(%ebp),%eax
084221ea +0x98:  mov    %dx,0x8(%eax)
084221ee +0x9c:  mov    -0xc(%ebp),%eax
084221f1 +0x9f:  mov    0x14(%ebp),%edx
084221f4 +0xa2:  mov    %edx,0xe(%eax)
084221f7 +0xa5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084221fc +0xaa:  lea    -0x14(%ebp),%edx
084221ff +0xad:  mov    %edx,0x8(%esp)
08422203 +0xb1:  movl   $0x1,0x4(%esp)
0842220b +0xb9:  mov    %eax,(%esp)
0842220e +0xbc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08422213 +0xc1:  jmp    08422230 <+0xde>
08422215 +0xc3:  mov    %edx,%ebx
08422217 +0xc5:  mov    %eax,%esi
08422219 +0xc7:  lea    -0x14(%ebp),%eax
0842221c +0xca:  mov    %eax,(%esp)
0842221f +0xcd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08422224 +0xd2:  mov    %esi,%eax
08422226 +0xd4:  mov    %ebx,%edx
08422228 +0xd6:  mov    %eax,(%esp)
0842222b +0xd9:  call   08ae3750 <_Unwind_Resume>
08422230 +0xde:  lea    -0x14(%ebp),%eax
08422233 +0xe1:  mov    %eax,(%esp)
08422236 +0xe4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842223b +0xe9:  add    $0x20,%esp
0842223e +0xec:  pop    %ebx
0842223f +0xed:  pop    %esi
08422240 +0xee:  pop    %ebp
08422241 +0xef:  ret
```

## 反编译 C

```c
// DB_SaveClientHackLog::_sendHackTypeResult @ 0x8422152

/* DB_SaveClientHackLog::_sendHackTypeResult(unsigned int, int, int) */

void __thiscall
DB_SaveClientHackLog::_sendHackTypeResult
          (DB_SaveClientHackLog *this,uint param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SAVE_CLIENT_HACK_LOG *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5a6c);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084221a4 to 08422212 has its CatchHandler @ 08422215 */
  CStreamGuard::operator<<(pCVar2,0x9a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_CLIENT_HACK_LOG>(pCVar2);
  *(uint *)local_10 = param_1;
  *(short *)(local_10 + 8) = (short)param_2;
  *(int *)(local_10 + 0xe) = param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
