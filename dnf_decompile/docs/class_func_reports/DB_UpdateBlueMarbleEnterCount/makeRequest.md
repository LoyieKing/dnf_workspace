# makeRequest

`_ZN29DB_UpdateBlueMarbleEnterCount11makeRequestEjh`

`DB_UpdateBlueMarbleEnterCount::makeRequest(unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `DB_UpdateBlueMarbleEnterCount` | `0x0844884c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844884c  _ZN29DB_UpdateBlueMarbleEnterCount11makeRequestEjh
#           DB_UpdateBlueMarbleEnterCount::makeRequest(unsigned int, unsigned char)
# range [0x0844884c, 0x08448943]
0844884c +0x00:  push   %ebp
0844884d +0x01:  mov    %esp,%ebp
0844884f +0x03:  push   %esi
08448850 +0x04:  push   %ebx
08448851 +0x05:  sub    $0x30,%esp
08448854 +0x08:  mov    0xc(%ebp),%eax
08448857 +0x0b:  mov    %al,-0x1c(%ebp)
0844885a +0x0e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0844885f +0x13:  movl   $0xb585,0x8(%esp)
08448867 +0x1b:  movl   $"DBThread.cpp",0x4(%esp)
0844886f +0x23:  mov    %eax,(%esp)
08448872 +0x26:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08448877 +0x2b:  movl   $0x1,0x8(%esp)
0844887f +0x33:  mov    %eax,0x4(%esp)
08448883 +0x37:  lea    -0x10(%ebp),%eax
08448886 +0x3a:  mov    %eax,(%esp)
08448889 +0x3d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844888e +0x42:  lea    -0x10(%ebp),%eax
08448891 +0x45:  mov    %eax,(%esp)
08448894 +0x48:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08448899 +0x4d:  movl   $0x30c,0x4(%esp)
084488a1 +0x55:  mov    %eax,(%esp)
084488a4 +0x58:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084488a9 +0x5d:  lea    -0x10(%ebp),%eax
084488ac +0x60:  mov    %eax,(%esp)
084488af +0x63:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084488b4 +0x68:  movl   $0xffffffff,0x4(%esp)
084488bc +0x70:  mov    %eax,(%esp)
084488bf +0x73:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084488c4 +0x78:  lea    -0x10(%ebp),%eax
084488c7 +0x7b:  mov    %eax,(%esp)
084488ca +0x7e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084488cf +0x83:  mov    0x8(%ebp),%edx
084488d2 +0x86:  mov    %edx,0x4(%esp)
084488d6 +0x8a:  mov    %eax,(%esp)
084488d9 +0x8d:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
084488de +0x92:  movzbl -0x1c(%ebp),%ebx
084488e2 +0x96:  lea    -0x10(%ebp),%eax
084488e5 +0x99:  mov    %eax,(%esp)
084488e8 +0x9c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084488ed +0xa1:  mov    %ebx,0x4(%esp)
084488f1 +0xa5:  mov    %eax,(%esp)
084488f4 +0xa8:  call   0844d454 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6a
084488f9 +0xad:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084488fe +0xb2:  lea    -0x10(%ebp),%edx
08448901 +0xb5:  mov    %edx,0x8(%esp)
08448905 +0xb9:  movl   $0x2,0x4(%esp)
0844890d +0xc1:  mov    %eax,(%esp)
08448910 +0xc4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08448915 +0xc9:  jmp    08448932 <+0xe6>
08448917 +0xcb:  mov    %edx,%ebx
08448919 +0xcd:  mov    %eax,%esi
0844891b +0xcf:  lea    -0x10(%ebp),%eax
0844891e +0xd2:  mov    %eax,(%esp)
08448921 +0xd5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08448926 +0xda:  mov    %esi,%eax
08448928 +0xdc:  mov    %ebx,%edx
0844892a +0xde:  mov    %eax,(%esp)
0844892d +0xe1:  call   08ae3750 <_Unwind_Resume>
08448932 +0xe6:  lea    -0x10(%ebp),%eax
08448935 +0xe9:  mov    %eax,(%esp)
08448938 +0xec:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844893d +0xf1:  add    $0x30,%esp
08448940 +0xf4:  pop    %ebx
08448941 +0xf5:  pop    %esi
08448942 +0xf6:  pop    %ebp
08448943 +0xf7:  ret
```

## 反编译 C

```c
// DB_UpdateBlueMarbleEnterCount::makeRequest @ 0x844884c

/* DB_UpdateBlueMarbleEnterCount::makeRequest(unsigned int, unsigned char) */

void DB_UpdateBlueMarbleEnterCount::makeRequest(uint param_1,uchar param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb585);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084488a4 to 08448914 has its CatchHandler @ 08448917 */
  CStreamGuard::operator<<(pCVar2,0x30c);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
