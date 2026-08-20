# makeRequest

`_ZN14DB_HadesPunish11makeRequestEjjjjjPc`

`DB_HadesPunish::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `DB_HadesPunish` | `0x08445dd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08445dd4  _ZN14DB_HadesPunish11makeRequestEjjjjjPc
#           DB_HadesPunish::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char*)
# range [0x08445dd4, 0x08445eed]
08445dd4 +0x000:  push   %ebp
08445dd5 +0x001:  mov    %esp,%ebp
08445dd7 +0x003:  push   %esi
08445dd8 +0x004:  push   %ebx
08445dd9 +0x005:  sub    $0x20,%esp
08445ddc +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08445de1 +0x00d:  movl   $0xad59,0x8(%esp)
08445de9 +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08445df1 +0x01d:  mov    %eax,(%esp)
08445df4 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08445df9 +0x025:  movl   $0x1,0x8(%esp)
08445e01 +0x02d:  mov    %eax,0x4(%esp)
08445e05 +0x031:  lea    -0x14(%ebp),%eax
08445e08 +0x034:  mov    %eax,(%esp)
08445e0b +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08445e10 +0x03c:  lea    -0x14(%ebp),%eax
08445e13 +0x03f:  mov    %eax,(%esp)
08445e16 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08445e1b +0x047:  movl   $0x2b6,0x4(%esp)
08445e23 +0x04f:  mov    %eax,(%esp)
08445e26 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08445e2b +0x057:  lea    -0x14(%ebp),%eax
08445e2e +0x05a:  mov    %eax,(%esp)
08445e31 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08445e36 +0x062:  movl   $0xffffffff,0x4(%esp)
08445e3e +0x06a:  mov    %eax,(%esp)
08445e41 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08445e46 +0x072:  lea    -0x14(%ebp),%eax
08445e49 +0x075:  mov    %eax,(%esp)
08445e4c +0x078:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08445e51 +0x07d:  mov    %eax,(%esp)
08445e54 +0x080:  call   08454286 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6e9c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6e9c
08445e59 +0x085:  mov    %eax,-0xc(%ebp)
08445e5c +0x088:  mov    -0xc(%ebp),%eax
08445e5f +0x08b:  mov    0x8(%ebp),%edx
08445e62 +0x08e:  mov    %edx,(%eax)
08445e64 +0x090:  mov    -0xc(%ebp),%eax
08445e67 +0x093:  mov    0xc(%ebp),%edx
08445e6a +0x096:  mov    %edx,0x4(%eax)
08445e6d +0x099:  mov    -0xc(%ebp),%eax
08445e70 +0x09c:  mov    0x10(%ebp),%edx
08445e73 +0x09f:  mov    %edx,0x8(%eax)
08445e76 +0x0a2:  mov    -0xc(%ebp),%eax
08445e79 +0x0a5:  mov    0x14(%ebp),%edx
08445e7c +0x0a8:  mov    %edx,0xc(%eax)
08445e7f +0x0ab:  mov    -0xc(%ebp),%eax
08445e82 +0x0ae:  mov    0x18(%ebp),%edx
08445e85 +0x0b1:  mov    %edx,0x10(%eax)
08445e88 +0x0b4:  cmpl   $0x0,0x1c(%ebp)
08445e8c +0x0b8:  je     08445ea3 <+0xcf>
08445e8e +0x0ba:  mov    -0xc(%ebp),%eax
08445e91 +0x0bd:  lea    0x14(%eax),%edx
08445e94 +0x0c0:  mov    0x1c(%ebp),%eax
08445e97 +0x0c3:  mov    %eax,0x4(%esp)
08445e9b +0x0c7:  mov    %edx,(%esp)
08445e9e +0x0ca:  call   0807def0 <_init+0x7e8>
08445ea3 +0x0cf:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08445ea8 +0x0d4:  lea    -0x14(%ebp),%edx
08445eab +0x0d7:  mov    %edx,0x8(%esp)
08445eaf +0x0db:  movl   $0x2,0x4(%esp)
08445eb7 +0x0e3:  mov    %eax,(%esp)
08445eba +0x0e6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08445ebf +0x0eb:  jmp    08445edc <+0x108>
08445ec1 +0x0ed:  mov    %edx,%ebx
08445ec3 +0x0ef:  mov    %eax,%esi
08445ec5 +0x0f1:  lea    -0x14(%ebp),%eax
08445ec8 +0x0f4:  mov    %eax,(%esp)
08445ecb +0x0f7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08445ed0 +0x0fc:  mov    %esi,%eax
08445ed2 +0x0fe:  mov    %ebx,%edx
08445ed4 +0x100:  mov    %eax,(%esp)
08445ed7 +0x103:  call   08ae3750 <_Unwind_Resume>
08445edc +0x108:  lea    -0x14(%ebp),%eax
08445edf +0x10b:  mov    %eax,(%esp)
08445ee2 +0x10e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08445ee7 +0x113:  add    $0x20,%esp
08445eea +0x116:  pop    %ebx
08445eeb +0x117:  pop    %esi
08445eec +0x118:  pop    %ebp
08445eed +0x119:  ret
```

## 反编译 C

```c
// DB_HadesPunish::makeRequest @ 0x8445dd4

/* DB_HadesPunish::makeRequest(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   char*) */

void DB_HadesPunish::makeRequest
               (uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,char *param_6)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_HADES_PUNISH *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xad59);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08445e26 to 08445ebe has its CatchHandler @ 08445ec1 */
  CStreamGuard::operator<<(pCVar2,0x2b6);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_HADES_PUNISH>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  *(uint *)(local_10 + 8) = param_3;
  *(uint *)(local_10 + 0xc) = param_4;
  *(uint *)(local_10 + 0x10) = param_5;
  if (param_6 != (char *)0x0) {
    strcpy((char *)(local_10 + 0x14),param_6);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
