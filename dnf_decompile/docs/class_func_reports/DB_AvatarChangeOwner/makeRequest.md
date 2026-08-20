# makeRequest

`_ZN20DB_AvatarChangeOwner11makeRequestEjjjh`

`DB_AvatarChangeOwner::makeRequest(unsigned int, unsigned int, unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `DB_AvatarChangeOwner` | `0x0840055c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840055c  _ZN20DB_AvatarChangeOwner11makeRequestEjjjh
#           DB_AvatarChangeOwner::makeRequest(unsigned int, unsigned int, unsigned int, unsigned char)
# range [0x0840055c, 0x0840065d]
0840055c +0x000:  push   %ebp
0840055d +0x001:  mov    %esp,%ebp
0840055f +0x003:  push   %esi
08400560 +0x004:  push   %ebx
08400561 +0x005:  sub    $0x30,%esp
08400564 +0x008:  mov    0x14(%ebp),%eax
08400567 +0x00b:  mov    %al,-0x1c(%ebp)
0840056a +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0840056f +0x013:  movl   $0xb7f,0x8(%esp)
08400577 +0x01b:  movl   $"DBThread.cpp",0x4(%esp)
0840057f +0x023:  mov    %eax,(%esp)
08400582 +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08400587 +0x02b:  movl   $0x1,0x8(%esp)
0840058f +0x033:  mov    %eax,0x4(%esp)
08400593 +0x037:  lea    -0x14(%ebp),%eax
08400596 +0x03a:  mov    %eax,(%esp)
08400599 +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0840059e +0x042:  lea    -0x14(%ebp),%eax
084005a1 +0x045:  mov    %eax,(%esp)
084005a4 +0x048:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084005a9 +0x04d:  movl   $0x35,0x4(%esp)
084005b1 +0x055:  mov    %eax,(%esp)
084005b4 +0x058:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084005b9 +0x05d:  lea    -0x14(%ebp),%eax
084005bc +0x060:  mov    %eax,(%esp)
084005bf +0x063:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084005c4 +0x068:  movl   $0xffffffff,0x4(%esp)
084005cc +0x070:  mov    %eax,(%esp)
084005cf +0x073:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084005d4 +0x078:  lea    -0x14(%ebp),%eax
084005d7 +0x07b:  mov    %eax,(%esp)
084005da +0x07e:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084005df +0x083:  mov    %eax,(%esp)
084005e2 +0x086:  call   0845046c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3082>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3082
084005e7 +0x08b:  mov    %eax,-0xc(%ebp)
084005ea +0x08e:  addb   $0xa,-0x1c(%ebp)
084005ee +0x092:  mov    -0xc(%ebp),%eax
084005f1 +0x095:  mov    0x8(%ebp),%edx
084005f4 +0x098:  mov    %edx,(%eax)
084005f6 +0x09a:  mov    -0xc(%ebp),%eax
084005f9 +0x09d:  mov    0xc(%ebp),%edx
084005fc +0x0a0:  mov    %edx,0x4(%eax)
084005ff +0x0a3:  mov    -0xc(%ebp),%eax
08400602 +0x0a6:  mov    0x10(%ebp),%edx
08400605 +0x0a9:  mov    %edx,0x8(%eax)
08400608 +0x0ac:  mov    -0xc(%ebp),%eax
0840060b +0x0af:  movzbl -0x1c(%ebp),%edx
0840060f +0x0b3:  mov    %dl,0xc(%eax)
08400612 +0x0b6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08400617 +0x0bb:  lea    -0x14(%ebp),%edx
0840061a +0x0be:  mov    %edx,0x8(%esp)
0840061e +0x0c2:  movl   $0x2,0x4(%esp)
08400626 +0x0ca:  mov    %eax,(%esp)
08400629 +0x0cd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0840062e +0x0d2:  jmp    0840064b <+0xef>
08400630 +0x0d4:  mov    %edx,%ebx
08400632 +0x0d6:  mov    %eax,%esi
08400634 +0x0d8:  lea    -0x14(%ebp),%eax
08400637 +0x0db:  mov    %eax,(%esp)
0840063a +0x0de:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0840063f +0x0e3:  mov    %esi,%eax
08400641 +0x0e5:  mov    %ebx,%edx
08400643 +0x0e7:  mov    %eax,(%esp)
08400646 +0x0ea:  call   08ae3750 <_Unwind_Resume>
0840064b +0x0ef:  lea    -0x14(%ebp),%eax
0840064e +0x0f2:  mov    %eax,(%esp)
08400651 +0x0f5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08400656 +0x0fa:  add    $0x30,%esp
08400659 +0x0fd:  pop    %ebx
0840065a +0x0fe:  pop    %esi
0840065b +0x0ff:  pop    %ebp
0840065c +0x100:  ret
0840065d +0x101:  nop
```

## 反编译 C

```c
// DB_AvatarChangeOwner::makeRequest @ 0x840055c

/* DB_AvatarChangeOwner::makeRequest(unsigned int, unsigned int, unsigned int, unsigned char) */

void DB_AvatarChangeOwner::makeRequest(uint param_1,uint param_2,uint param_3,uchar param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_AVATAR_CHANGE_OWNER *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb7f);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084005b4 to 0840062d has its CatchHandler @ 08400630 */
  CStreamGuard::operator<<(pCVar2,0x35);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_AVATAR_CHANGE_OWNER>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  *(uint *)(local_10 + 8) = param_3;
  local_10[0xc] = (SIG_AVATAR_CHANGE_OWNER)(param_4 + '\n');
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
