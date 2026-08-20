# _saveData

`_ZN10CTitleBook9_saveDataEP5CUser`

`CTitleBook::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x086414a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086414a8  _ZN10CTitleBook9_saveDataEP5CUser
#           CTitleBook::_saveData(CUser*)
# range [0x086414a8, 0x0864165d]
086414a8 +0x000:  push   %ebp
086414a9 +0x001:  mov    %esp,%ebp
086414ab +0x003:  push   %esi
086414ac +0x004:  push   %ebx
086414ad +0x005:  sub    $0x20,%esp
086414b0 +0x008:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
086414b5 +0x00d:  movl   $0x9c,0x8(%esp)
086414bd +0x015:  movl   $"TitleBook.cpp",0x4(%esp)
086414c5 +0x01d:  mov    %eax,(%esp)
086414c8 +0x020:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
086414cd +0x025:  movl   $0x1,0x8(%esp)
086414d5 +0x02d:  mov    %eax,0x4(%esp)
086414d9 +0x031:  lea    -0x14(%ebp),%eax
086414dc +0x034:  mov    %eax,(%esp)
086414df +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086414e4 +0x03c:  lea    -0x14(%ebp),%eax
086414e7 +0x03f:  mov    %eax,(%esp)
086414ea +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086414ef +0x047:  movl   $0x285,0x4(%esp)
086414f7 +0x04f:  mov    %eax,(%esp)
086414fa +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086414ff +0x057:  mov    0xc(%ebp),%eax
08641502 +0x05a:  mov    %eax,(%esp)
08641505 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0864150a +0x062:  mov    %eax,%ebx
0864150c +0x064:  lea    -0x14(%ebp),%eax
0864150f +0x067:  mov    %eax,(%esp)
08641512 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08641517 +0x06f:  mov    %ebx,0x4(%esp)
0864151b +0x073:  mov    %eax,(%esp)
0864151e +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08641523 +0x07b:  lea    -0x14(%ebp),%eax
08641526 +0x07e:  mov    %eax,(%esp)
08641529 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0864152e +0x086:  mov    %eax,(%esp)
08641531 +0x089:  call   0864314c <_GLOBAL__I__ZN10CTitleBookC2Ev+0x1d>  ; global constructors keyed to CTitleBook::CTitleBook()+0x1d
08641536 +0x08e:  mov    %eax,-0xc(%ebp)
08641539 +0x091:  cmpl   $0x0,-0xc(%ebp)
0864153d +0x095:  jne    08641549 <+0xa1>
0864153f +0x097:  mov    $0x0,%ebx
08641544 +0x09c:  jmp    0864164a <+0x1a2>
08641549 +0x0a1:  movl   $0x6b3e,0x8(%esp)
08641551 +0x0a9:  movl   $0x0,0x4(%esp)
08641559 +0x0b1:  mov    -0xc(%ebp),%eax
0864155c +0x0b4:  mov    %eax,(%esp)
0864155f +0x0b7:  call   0807dcc0 <_init+0x5b8>
08641564 +0x0bc:  movl   $0xffffffff,0x4(%esp)
0864156c +0x0c4:  mov    0xc(%ebp),%eax
0864156f +0x0c7:  mov    %eax,(%esp)
08641572 +0x0ca:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08641577 +0x0cf:  mov    -0xc(%ebp),%edx
0864157a +0x0d2:  mov    %eax,0x6b3a(%edx)
08641580 +0x0d8:  mov    0x8(%ebp),%eax
08641583 +0x0db:  lea    0xc(%eax),%edx
08641586 +0x0de:  mov    -0xc(%ebp),%eax
08641589 +0x0e1:  movl   $0x10ae,0x8(%esp)
08641591 +0x0e9:  mov    %edx,0x4(%esp)
08641595 +0x0ed:  mov    %eax,(%esp)
08641598 +0x0f0:  call   0807d8a0 <_init+0x198>
0864159d +0x0f5:  mov    0x8(%ebp),%eax
086415a0 +0x0f8:  lea    0x10ba(%eax),%edx
086415a6 +0x0fe:  mov    -0xc(%ebp),%eax
086415a9 +0x101:  add    $0x10ae,%eax
086415ae +0x106:  movl   $0x2fa8,0x8(%esp)
086415b6 +0x10e:  mov    %edx,0x4(%esp)
086415ba +0x112:  mov    %eax,(%esp)
086415bd +0x115:  call   0807d8a0 <_init+0x198>
086415c2 +0x11a:  mov    0x8(%ebp),%eax
086415c5 +0x11d:  lea    0x4062(%eax),%edx
086415cb +0x123:  mov    -0xc(%ebp),%eax
086415ce +0x126:  add    $0x4056,%eax
086415d3 +0x12b:  movl   $0x1c98,0x8(%esp)
086415db +0x133:  mov    %edx,0x4(%esp)
086415df +0x137:  mov    %eax,(%esp)
086415e2 +0x13a:  call   0807d8a0 <_init+0x198>
086415e7 +0x13f:  mov    0x8(%ebp),%eax
086415ea +0x142:  lea    0x5cfa(%eax),%edx
086415f0 +0x148:  mov    -0xc(%ebp),%eax
086415f3 +0x14b:  add    $0x5cee,%eax
086415f8 +0x150:  movl   $0xe4c,0x8(%esp)
08641600 +0x158:  mov    %edx,0x4(%esp)
08641604 +0x15c:  mov    %eax,(%esp)
08641607 +0x15f:  call   0807d8a0 <_init+0x198>
0864160c +0x164:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08641611 +0x169:  lea    -0x14(%ebp),%edx
08641614 +0x16c:  mov    %edx,0x8(%esp)
08641618 +0x170:  movl   $0x2,0x4(%esp)
08641620 +0x178:  mov    %eax,(%esp)
08641623 +0x17b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08641628 +0x180:  mov    $0x1,%ebx
0864162d +0x185:  jmp    0864164a <+0x1a2>
0864162f +0x187:  mov    %edx,%ebx
08641631 +0x189:  mov    %eax,%esi
08641633 +0x18b:  lea    -0x14(%ebp),%eax
08641636 +0x18e:  mov    %eax,(%esp)
08641639 +0x191:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0864163e +0x196:  mov    %esi,%eax
08641640 +0x198:  mov    %ebx,%edx
08641642 +0x19a:  mov    %eax,(%esp)
08641645 +0x19d:  call   08ae3750 <_Unwind_Resume>
0864164a +0x1a2:  lea    -0x14(%ebp),%eax
0864164d +0x1a5:  mov    %eax,(%esp)
08641650 +0x1a8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08641655 +0x1ad:  mov    %ebx,%eax
08641657 +0x1af:  add    $0x20,%esp
0864165a +0x1b2:  pop    %ebx
0864165b +0x1b3:  pop    %esi
0864165c +0x1b4:  pop    %ebp
0864165d +0x1b5:  ret
```

## 反编译 C

```c
// CTitleBook::_saveData @ 0x86414a8

/* CTitleBook::_saveData(CUser*) */

bool __thiscall CTitleBook::_saveData(CTitleBook *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  CStreamGuard local_18 [8];
  stTitleBook_Save *local_10;
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"TitleBook.cpp",0x9c);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 086414fa to 08641627 has its CatchHandler @ 0864162f */
  CStreamGuard::operator<<(pCVar2,0x285);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<stTitleBook_Save>(pCVar2);
  bVar5 = local_10 != (stTitleBook_Save *)0x0;
  if (bVar5) {
    memset(local_10,0,0x6b3e);
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(local_10 + 0x6b3a) = uVar4;
    memcpy(local_10,this + 0xc,0x10ae);
    memcpy(local_10 + 0x10ae,this + 0x10ba,0x2fa8);
    memcpy(local_10 + 0x4056,this + 0x4062,0x1c98);
    memcpy(local_10 + 0x5cee,this + 0x5cfa,0xe4c);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return bVar5;
}
```
