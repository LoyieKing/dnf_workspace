# makeRequest

`_ZN23DB_SecurityCardActivate11makeRequestEijPKcb`

`DB_SecurityCardActivate::makeRequest(int, unsigned int, char const*, bool)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardActivate` | `0x0842bb5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842bb5c  _ZN23DB_SecurityCardActivate11makeRequestEijPKcb
#           DB_SecurityCardActivate::makeRequest(int, unsigned int, char const*, bool)
# range [0x0842bb5c, 0x0842bc63]
0842bb5c +0x000:  push   %ebp
0842bb5d +0x001:  mov    %esp,%ebp
0842bb5f +0x003:  push   %esi
0842bb60 +0x004:  push   %ebx
0842bb61 +0x005:  sub    $0x30,%esp
0842bb64 +0x008:  mov    0x14(%ebp),%eax
0842bb67 +0x00b:  mov    %al,-0x1c(%ebp)
0842bb6a +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842bb6f +0x013:  movl   $0x6e99,0x8(%esp)
0842bb77 +0x01b:  movl   $"DBThread.cpp",0x4(%esp)
0842bb7f +0x023:  mov    %eax,(%esp)
0842bb82 +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842bb87 +0x02b:  movl   $0x1,0x8(%esp)
0842bb8f +0x033:  mov    %eax,0x4(%esp)
0842bb93 +0x037:  lea    -0x14(%ebp),%eax
0842bb96 +0x03a:  mov    %eax,(%esp)
0842bb99 +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842bb9e +0x042:  lea    -0x14(%ebp),%eax
0842bba1 +0x045:  mov    %eax,(%esp)
0842bba4 +0x048:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842bba9 +0x04d:  movl   $0xff,0x4(%esp)
0842bbb1 +0x055:  mov    %eax,(%esp)
0842bbb4 +0x058:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842bbb9 +0x05d:  lea    -0x14(%ebp),%eax
0842bbbc +0x060:  mov    %eax,(%esp)
0842bbbf +0x063:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842bbc4 +0x068:  mov    0x8(%ebp),%edx
0842bbc7 +0x06b:  mov    %edx,0x4(%esp)
0842bbcb +0x06f:  mov    %eax,(%esp)
0842bbce +0x072:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842bbd3 +0x077:  lea    -0x14(%ebp),%eax
0842bbd6 +0x07a:  mov    %eax,(%esp)
0842bbd9 +0x07d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842bbde +0x082:  mov    %eax,(%esp)
0842bbe1 +0x085:  call   084526dc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x52f2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x52f2
0842bbe6 +0x08a:  mov    %eax,-0xc(%ebp)
0842bbe9 +0x08d:  mov    -0xc(%ebp),%eax
0842bbec +0x090:  mov    0xc(%ebp),%edx
0842bbef +0x093:  mov    %edx,(%eax)
0842bbf1 +0x095:  mov    -0xc(%ebp),%eax
0842bbf4 +0x098:  lea    0x4(%eax),%edx
0842bbf7 +0x09b:  movl   $0x6,0x8(%esp)
0842bbff +0x0a3:  mov    0x10(%ebp),%eax
0842bc02 +0x0a6:  mov    %eax,0x4(%esp)
0842bc06 +0x0aa:  mov    %edx,(%esp)
0842bc09 +0x0ad:  call   0807d8d0 <_init+0x1c8>
0842bc0e +0x0b2:  mov    -0xc(%ebp),%eax
0842bc11 +0x0b5:  movzbl -0x1c(%ebp),%edx
0842bc15 +0x0b9:  mov    %dl,0xb(%eax)
0842bc18 +0x0bc:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842bc1d +0x0c1:  lea    -0x14(%ebp),%edx
0842bc20 +0x0c4:  mov    %edx,0x8(%esp)
0842bc24 +0x0c8:  movl   $0x2,0x4(%esp)
0842bc2c +0x0d0:  mov    %eax,(%esp)
0842bc2f +0x0d3:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842bc34 +0x0d8:  jmp    0842bc51 <+0xf5>
0842bc36 +0x0da:  mov    %edx,%ebx
0842bc38 +0x0dc:  mov    %eax,%esi
0842bc3a +0x0de:  lea    -0x14(%ebp),%eax
0842bc3d +0x0e1:  mov    %eax,(%esp)
0842bc40 +0x0e4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842bc45 +0x0e9:  mov    %esi,%eax
0842bc47 +0x0eb:  mov    %ebx,%edx
0842bc49 +0x0ed:  mov    %eax,(%esp)
0842bc4c +0x0f0:  call   08ae3750 <_Unwind_Resume>
0842bc51 +0x0f5:  lea    -0x14(%ebp),%eax
0842bc54 +0x0f8:  mov    %eax,(%esp)
0842bc57 +0x0fb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842bc5c +0x100:  add    $0x30,%esp
0842bc5f +0x103:  pop    %ebx
0842bc60 +0x104:  pop    %esi
0842bc61 +0x105:  pop    %ebp
0842bc62 +0x106:  ret
0842bc63 +0x107:  nop
```

## 反编译 C

```c
// DB_SecurityCardActivate::makeRequest @ 0x842bb5c

/* DB_SecurityCardActivate::makeRequest(int, unsigned int, char const*, bool) */

void DB_SecurityCardActivate::makeRequest(int param_1,uint param_2,char *param_3,bool param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_ACTIVATE *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6e99);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842bbb4 to 0842bc33 has its CatchHandler @ 0842bc36 */
  CStreamGuard::operator<<(pCVar2,0xff);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_ACTIVATE>(pCVar2);
  *(uint *)local_10 = param_2;
  strncpy((char *)(local_10 + 4),param_3,6);
  local_10[0xb] = (SIG_SECURITY_CARD_ACTIVATE)param_4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
