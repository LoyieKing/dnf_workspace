# makeRequest

`_ZN13DB_HackIPSave11makeRequestEPKcS1_jj`

`DB_HackIPSave::makeRequest(char const*, char const*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_HackIPSave` | `0x08436ff8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08436ff8  _ZN13DB_HackIPSave11makeRequestEPKcS1_jj
#           DB_HackIPSave::makeRequest(char const*, char const*, unsigned int, unsigned int)
# range [0x08436ff8, 0x0843712d]
08436ff8 +0x000:  push   %ebp
08436ff9 +0x001:  mov    %esp,%ebp
08436ffb +0x003:  push   %esi
08436ffc +0x004:  push   %ebx
08436ffd +0x005:  sub    $0x20,%esp
08437000 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08437005 +0x00d:  movl   $0x82be,0x8(%esp)
0843700d +0x015:  movl   $"DBThread.cpp",0x4(%esp)
08437015 +0x01d:  mov    %eax,(%esp)
08437018 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0843701d +0x025:  movl   $0x1,0x8(%esp)
08437025 +0x02d:  mov    %eax,0x4(%esp)
08437029 +0x031:  lea    -0x14(%ebp),%eax
0843702c +0x034:  mov    %eax,(%esp)
0843702f +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08437034 +0x03c:  lea    -0x14(%ebp),%eax
08437037 +0x03f:  mov    %eax,(%esp)
0843703a +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843703f +0x047:  movl   $0x190,0x4(%esp)
08437047 +0x04f:  mov    %eax,(%esp)
0843704a +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843704f +0x057:  lea    -0x14(%ebp),%eax
08437052 +0x05a:  mov    %eax,(%esp)
08437055 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843705a +0x062:  movl   $0xffffffff,0x4(%esp)
08437062 +0x06a:  mov    %eax,(%esp)
08437065 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843706a +0x072:  cmpl   $0x0,0x8(%ebp)
0843706e +0x076:  je     08437084 <+0x8c>
08437070 +0x078:  mov    0x8(%ebp),%eax
08437073 +0x07b:  mov    %eax,(%esp)
08437076 +0x07e:  call   0807e3b0 <_init+0xca8>
0843707b +0x083:  cmp    $0x7,%eax
0843707e +0x086:  jbe    0843711c <+0x124>
08437084 +0x08c:  lea    -0x14(%ebp),%eax
08437087 +0x08f:  mov    %eax,(%esp)
0843708a +0x092:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0843708f +0x097:  mov    %eax,(%esp)
08437092 +0x09a:  call   084534aa <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x60c0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x60c0
08437097 +0x09f:  mov    %eax,-0xc(%ebp)
0843709a +0x0a2:  mov    -0xc(%ebp),%eax
0843709d +0x0a5:  movl   $0xd,0x8(%esp)
084370a5 +0x0ad:  mov    0x8(%ebp),%edx
084370a8 +0x0b0:  mov    %edx,0x4(%esp)
084370ac +0x0b4:  mov    %eax,(%esp)
084370af +0x0b7:  call   0807d8d0 <_init+0x1c8>
084370b4 +0x0bc:  mov    -0xc(%ebp),%eax
084370b7 +0x0bf:  mov    0x10(%ebp),%edx
084370ba +0x0c2:  mov    %edx,0x20(%eax)
084370bd +0x0c5:  mov    -0xc(%ebp),%eax
084370c0 +0x0c8:  mov    0x14(%ebp),%edx
084370c3 +0x0cb:  mov    %edx,0x24(%eax)
084370c6 +0x0ce:  mov    -0xc(%ebp),%eax
084370c9 +0x0d1:  lea    0xd(%eax),%edx
084370cc +0x0d4:  movl   $0x10,0x8(%esp)
084370d4 +0x0dc:  mov    0xc(%ebp),%eax
084370d7 +0x0df:  mov    %eax,0x4(%esp)
084370db +0x0e3:  mov    %edx,(%esp)
084370de +0x0e6:  call   0807d8d0 <_init+0x1c8>
084370e3 +0x0eb:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084370e8 +0x0f0:  lea    -0x14(%ebp),%edx
084370eb +0x0f3:  mov    %edx,0x8(%esp)
084370ef +0x0f7:  movl   $0x2,0x4(%esp)
084370f7 +0x0ff:  mov    %eax,(%esp)
084370fa +0x102:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084370ff +0x107:  jmp    0843711c <+0x124>
08437101 +0x109:  mov    %edx,%ebx
08437103 +0x10b:  mov    %eax,%esi
08437105 +0x10d:  lea    -0x14(%ebp),%eax
08437108 +0x110:  mov    %eax,(%esp)
0843710b +0x113:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08437110 +0x118:  mov    %esi,%eax
08437112 +0x11a:  mov    %ebx,%edx
08437114 +0x11c:  mov    %eax,(%esp)
08437117 +0x11f:  call   08ae3750 <_Unwind_Resume>
0843711c +0x124:  lea    -0x14(%ebp),%eax
0843711f +0x127:  mov    %eax,(%esp)
08437122 +0x12a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08437127 +0x12f:  add    $0x20,%esp
0843712a +0x132:  pop    %ebx
0843712b +0x133:  pop    %esi
0843712c +0x134:  pop    %ebp
0843712d +0x135:  ret
```

## 反编译 C

```c
// DB_HackIPSave::makeRequest @ 0x8436ff8

/* DB_HackIPSave::makeRequest(char const*, char const*, unsigned int, unsigned int) */

void DB_HackIPSave::makeRequest(char *param_1,char *param_2,uint param_3,uint param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  size_t sVar3;
  CStreamGuard local_18 [8];
  SIG_HACK_IP_SAVE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x82be);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843704a to 084370fe has its CatchHandler @ 08437101 */
  CStreamGuard::operator<<(pCVar2,400);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  if (param_1 != (char *)0x0) {
    sVar3 = strlen(param_1);
    if (sVar3 < 8) goto LAB_0843711c;
  }
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_HACK_IP_SAVE>(pCVar2);
  strncpy((char *)local_10,param_1,0xd);
  *(uint *)(local_10 + 0x20) = param_3;
  *(uint *)(local_10 + 0x24) = param_4;
  strncpy((char *)(local_10 + 0xd),param_2,0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
LAB_0843711c:
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
