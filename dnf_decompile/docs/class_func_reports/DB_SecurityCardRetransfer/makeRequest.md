# makeRequest

`_ZN25DB_SecurityCardRetransfer11makeRequestEiPcS0_jPKcS2_S2_`

`DB_SecurityCardRetransfer::makeRequest(int, char*, char*, unsigned int, char const*, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardRetransfer` | `0x0842c1f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842c1f6  _ZN25DB_SecurityCardRetransfer11makeRequestEiPcS0_jPKcS2_S2_
#           DB_SecurityCardRetransfer::makeRequest(int, char*, char*, unsigned int, char const*, char const*, char const*)
# range [0x0842c1f6, 0x0842c361]
0842c1f6 +0x000:  push   %ebp
0842c1f7 +0x001:  mov    %esp,%ebp
0842c1f9 +0x003:  push   %esi
0842c1fa +0x004:  push   %ebx
0842c1fb +0x005:  sub    $0x20,%esp
0842c1fe +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842c203 +0x00d:  movl   $0x6f38,0x8(%esp)
0842c20b +0x015:  movl   $"DBThread.cpp",0x4(%esp)
0842c213 +0x01d:  mov    %eax,(%esp)
0842c216 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842c21b +0x025:  movl   $0x1,0x8(%esp)
0842c223 +0x02d:  mov    %eax,0x4(%esp)
0842c227 +0x031:  lea    -0x14(%ebp),%eax
0842c22a +0x034:  mov    %eax,(%esp)
0842c22d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842c232 +0x03c:  lea    -0x14(%ebp),%eax
0842c235 +0x03f:  mov    %eax,(%esp)
0842c238 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842c23d +0x047:  movl   $0x138,0x4(%esp)
0842c245 +0x04f:  mov    %eax,(%esp)
0842c248 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842c24d +0x057:  lea    -0x14(%ebp),%eax
0842c250 +0x05a:  mov    %eax,(%esp)
0842c253 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842c258 +0x062:  mov    0x8(%ebp),%edx
0842c25b +0x065:  mov    %edx,0x4(%esp)
0842c25f +0x069:  mov    %eax,(%esp)
0842c262 +0x06c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842c267 +0x071:  lea    -0x14(%ebp),%eax
0842c26a +0x074:  mov    %eax,(%esp)
0842c26d +0x077:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842c272 +0x07c:  mov    %eax,(%esp)
0842c275 +0x07f:  call   0845275c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5372>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5372
0842c27a +0x084:  mov    %eax,-0xc(%ebp)
0842c27d +0x087:  mov    -0xc(%ebp),%eax
0842c280 +0x08a:  mov    0x14(%ebp),%edx
0842c283 +0x08d:  mov    %edx,(%eax)
0842c285 +0x08f:  mov    -0xc(%ebp),%eax
0842c288 +0x092:  lea    0x25(%eax),%edx
0842c28b +0x095:  movl   $0x6,0x8(%esp)
0842c293 +0x09d:  mov    0x18(%ebp),%eax
0842c296 +0x0a0:  mov    %eax,0x4(%esp)
0842c29a +0x0a4:  mov    %edx,(%esp)
0842c29d +0x0a7:  call   0807d8d0 <_init+0x1c8>
0842c2a2 +0x0ac:  mov    -0xc(%ebp),%eax
0842c2a5 +0x0af:  lea    0x4(%eax),%edx
0842c2a8 +0x0b2:  movl   $0x21,0x8(%esp)
0842c2b0 +0x0ba:  mov    0x1c(%ebp),%eax
0842c2b3 +0x0bd:  mov    %eax,0x4(%esp)
0842c2b7 +0x0c1:  mov    %edx,(%esp)
0842c2ba +0x0c4:  call   0807d8d0 <_init+0x1c8>
0842c2bf +0x0c9:  mov    -0xc(%ebp),%eax
0842c2c2 +0x0cc:  lea    0x2b(%eax),%edx
0842c2c5 +0x0cf:  movl   $0x27,0x8(%esp)
0842c2cd +0x0d7:  mov    0x20(%ebp),%eax
0842c2d0 +0x0da:  mov    %eax,0x4(%esp)
0842c2d4 +0x0de:  mov    %edx,(%esp)
0842c2d7 +0x0e1:  call   0807d8d0 <_init+0x1c8>
0842c2dc +0x0e6:  mov    -0xc(%ebp),%eax
0842c2df +0x0e9:  lea    0x52(%eax),%edx
0842c2e2 +0x0ec:  movl   $0xc,0x8(%esp)
0842c2ea +0x0f4:  mov    0xc(%ebp),%eax
0842c2ed +0x0f7:  mov    %eax,0x4(%esp)
0842c2f1 +0x0fb:  mov    %edx,(%esp)
0842c2f4 +0x0fe:  call   0807d8d0 <_init+0x1c8>
0842c2f9 +0x103:  mov    -0xc(%ebp),%eax
0842c2fc +0x106:  lea    0x5e(%eax),%edx
0842c2ff +0x109:  movl   $0x29,0x8(%esp)
0842c307 +0x111:  mov    0x10(%ebp),%eax
0842c30a +0x114:  mov    %eax,0x4(%esp)
0842c30e +0x118:  mov    %edx,(%esp)
0842c311 +0x11b:  call   0807d8d0 <_init+0x1c8>
0842c316 +0x120:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842c31b +0x125:  lea    -0x14(%ebp),%edx
0842c31e +0x128:  mov    %edx,0x8(%esp)
0842c322 +0x12c:  movl   $0x2,0x4(%esp)
0842c32a +0x134:  mov    %eax,(%esp)
0842c32d +0x137:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842c332 +0x13c:  jmp    0842c34f <+0x159>
0842c334 +0x13e:  mov    %edx,%ebx
0842c336 +0x140:  mov    %eax,%esi
0842c338 +0x142:  lea    -0x14(%ebp),%eax
0842c33b +0x145:  mov    %eax,(%esp)
0842c33e +0x148:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842c343 +0x14d:  mov    %esi,%eax
0842c345 +0x14f:  mov    %ebx,%edx
0842c347 +0x151:  mov    %eax,(%esp)
0842c34a +0x154:  call   08ae3750 <_Unwind_Resume>
0842c34f +0x159:  lea    -0x14(%ebp),%eax
0842c352 +0x15c:  mov    %eax,(%esp)
0842c355 +0x15f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842c35a +0x164:  add    $0x20,%esp
0842c35d +0x167:  pop    %ebx
0842c35e +0x168:  pop    %esi
0842c35f +0x169:  pop    %ebp
0842c360 +0x16a:  ret
0842c361 +0x16b:  nop
```

## 反编译 C

```c
// DB_SecurityCardRetransfer::makeRequest @ 0x842c1f6

/* DB_SecurityCardRetransfer::makeRequest(int, char*, char*, unsigned int, char const*, char const*,
   char const*) */

void DB_SecurityCardRetransfer::makeRequest
               (int param_1,char *param_2,char *param_3,uint param_4,char *param_5,char *param_6,
               char *param_7)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_RETRANSFER *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6f38);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842c248 to 0842c331 has its CatchHandler @ 0842c334 */
  CStreamGuard::operator<<(pCVar2,0x138);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_RETRANSFER>(pCVar2);
  *(uint *)local_10 = param_4;
  strncpy((char *)(local_10 + 0x25),param_5,6);
  strncpy((char *)(local_10 + 4),param_6,0x21);
  strncpy((char *)(local_10 + 0x2b),param_7,0x27);
  strncpy((char *)(local_10 + 0x52),param_2,0xc);
  strncpy((char *)(local_10 + 0x5e),param_3,0x29);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
