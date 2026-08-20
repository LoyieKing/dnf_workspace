# SaveToDB

`_ZN10AvatarCoin8SaveToDBEP5CUser`

`AvatarCoin::SaveToDB(CUser*)`

| 类 | 地址 |
|---|---|
| `AvatarCoin` | `0x081800d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081800d6  _ZN10AvatarCoin8SaveToDBEP5CUser
#           AvatarCoin::SaveToDB(CUser*)
# range [0x081800d6, 0x081801cb]
081800d6 +0x00:  push   %ebp
081800d7 +0x01:  mov    %esp,%ebp
081800d9 +0x03:  push   %esi
081800da +0x04:  push   %ebx
081800db +0x05:  sub    $0x20,%esp
081800de +0x08:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
081800e3 +0x0d:  movl   $0x184,0x8(%esp)
081800eb +0x15:  movl   $"localjapan/Arad_AvatarRoulette.cpp",0x4(%esp)
081800f3 +0x1d:  mov    %eax,(%esp)
081800f6 +0x20:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
081800fb +0x25:  movl   $0x1,0x8(%esp)
08180103 +0x2d:  mov    %eax,0x4(%esp)
08180107 +0x31:  lea    -0x14(%ebp),%eax
0818010a +0x34:  mov    %eax,(%esp)
0818010d +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08180112 +0x3c:  lea    -0x14(%ebp),%eax
08180115 +0x3f:  mov    %eax,(%esp)
08180118 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0818011d +0x47:  movl   $0x23,0x4(%esp)
08180125 +0x4f:  mov    %eax,(%esp)
08180128 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0818012d +0x57:  mov    0x8(%ebp),%eax
08180130 +0x5a:  mov    %eax,(%esp)
08180133 +0x5d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08180138 +0x62:  mov    %eax,%ebx
0818013a +0x64:  lea    -0x14(%ebp),%eax
0818013d +0x67:  mov    %eax,(%esp)
08180140 +0x6a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08180145 +0x6f:  mov    %ebx,0x4(%esp)
08180149 +0x73:  mov    %eax,(%esp)
0818014c +0x76:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08180151 +0x7b:  lea    -0x14(%ebp),%eax
08180154 +0x7e:  mov    %eax,(%esp)
08180157 +0x81:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0818015c +0x86:  mov    %eax,(%esp)
0818015f +0x89:  call   08180dac <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xa43>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xa43
08180164 +0x8e:  mov    %eax,-0xc(%ebp)
08180167 +0x91:  mov    -0xc(%ebp),%eax
0818016a +0x94:  mov    %eax,0x4(%esp)
0818016e +0x98:  mov    0x8(%ebp),%eax
08180171 +0x9b:  mov    %eax,(%esp)
08180174 +0x9e:  call   0864fd80 <_ZN5CUser17_GetSaveInvenBaseEP18SIG_SAVE_INVENTORY>  ; CUser::_GetSaveInvenBase(SIG_SAVE_INVENTORY*)
08180179 +0xa3:  mov    -0xc(%ebp),%eax
0818017c +0xa6:  movb   $0x1,0x8(%eax)
08180180 +0xaa:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08180185 +0xaf:  lea    -0x14(%ebp),%edx
08180188 +0xb2:  mov    %edx,0x8(%esp)
0818018c +0xb6:  movl   $0x2,0x4(%esp)
08180194 +0xbe:  mov    %eax,(%esp)
08180197 +0xc1:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0818019c +0xc6:  mov    $0x1,%ebx
081801a1 +0xcb:  lea    -0x14(%ebp),%eax
081801a4 +0xce:  mov    %eax,(%esp)
081801a7 +0xd1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081801ac +0xd6:  mov    %ebx,%eax
081801ae +0xd8:  add    $0x20,%esp
081801b1 +0xdb:  pop    %ebx
081801b2 +0xdc:  pop    %esi
081801b3 +0xdd:  pop    %ebp
081801b4 +0xde:  ret
081801b5 +0xdf:  mov    %edx,%ebx
081801b7 +0xe1:  mov    %eax,%esi
081801b9 +0xe3:  lea    -0x14(%ebp),%eax
081801bc +0xe6:  mov    %eax,(%esp)
081801bf +0xe9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081801c4 +0xee:  mov    %esi,%eax
081801c6 +0xf0:  mov    %ebx,%edx
081801c8 +0xf2:  mov    %eax,(%esp)
081801cb +0xf5:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// AvatarCoin::SaveToDB @ 0x81800d6

/* AvatarCoin::SaveToDB(CUser*) */

undefined4 AvatarCoin::SaveToDB(CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_18 [8];
  SIG_SAVE_INVENTORY *local_10;
  
  pSVar1 = (Stream *)
           BigStreamPool::Acquire
                     (GlobalData::s_big_stream_pool,"localjapan/Arad_AvatarRoulette.cpp",0x184);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08180128 to 0818019b has its CatchHandler @ 081801b5 */
  CStreamGuard::operator<<(pCVar2,0x23);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_INVENTORY>(pCVar2);
  CUser::_GetSaveInvenBase(param_1,local_10);
  local_10[8] = (SIG_SAVE_INVENTORY)0x1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```
