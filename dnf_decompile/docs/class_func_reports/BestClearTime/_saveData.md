# _saveData

`_ZN13BestClearTime9_saveDataEP5CUser`

`BestClearTime::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `BestClearTime` | `0x080c8616` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c8616  _ZN13BestClearTime9_saveDataEP5CUser
#           BestClearTime::_saveData(CUser*)
# range [0x080c8616, 0x080c8757]
080c8616 +0x000:  push   %ebp
080c8617 +0x001:  mov    %esp,%ebp
080c8619 +0x003:  push   %esi
080c861a +0x004:  push   %ebx
080c861b +0x005:  sub    $0x20,%esp
080c861e +0x008:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
080c8623 +0x00d:  movl   $0x16,0x8(%esp)
080c862b +0x015:  movl   $"BestClearTime.cpp",0x4(%esp)
080c8633 +0x01d:  mov    %eax,(%esp)
080c8636 +0x020:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
080c863b +0x025:  movl   $0x1,0x8(%esp)
080c8643 +0x02d:  mov    %eax,0x4(%esp)
080c8647 +0x031:  lea    -0x14(%ebp),%eax
080c864a +0x034:  mov    %eax,(%esp)
080c864d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
080c8652 +0x03c:  lea    -0x14(%ebp),%eax
080c8655 +0x03f:  mov    %eax,(%esp)
080c8658 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080c865d +0x047:  movl   $0x300,0x4(%esp)
080c8665 +0x04f:  mov    %eax,(%esp)
080c8668 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080c866d +0x057:  mov    0xc(%ebp),%eax
080c8670 +0x05a:  mov    %eax,(%esp)
080c8673 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
080c8678 +0x062:  mov    %eax,%ebx
080c867a +0x064:  lea    -0x14(%ebp),%eax
080c867d +0x067:  mov    %eax,(%esp)
080c8680 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080c8685 +0x06f:  mov    %ebx,0x4(%esp)
080c8689 +0x073:  mov    %eax,(%esp)
080c868c +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080c8691 +0x07b:  lea    -0x14(%ebp),%eax
080c8694 +0x07e:  mov    %eax,(%esp)
080c8697 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
080c869c +0x086:  mov    %eax,(%esp)
080c869f +0x089:  call   080c8d6a <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c2>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c2
080c86a4 +0x08e:  mov    %eax,-0xc(%ebp)
080c86a7 +0x091:  cmpl   $0x0,-0xc(%ebp)
080c86ab +0x095:  jne    080c86b7 <+0xa1>
080c86ad +0x097:  mov    $0x0,%ebx
080c86b2 +0x09c:  jmp    080c8743 <+0x12d>
080c86b7 +0x0a1:  movl   $0x5dc8,0x8(%esp)
080c86bf +0x0a9:  movl   $0x0,0x4(%esp)
080c86c7 +0x0b1:  mov    -0xc(%ebp),%eax
080c86ca +0x0b4:  mov    %eax,(%esp)
080c86cd +0x0b7:  call   0807dcc0 <_init+0x5b8>
080c86d2 +0x0bc:  mov    0x8(%ebp),%eax
080c86d5 +0x0bf:  mov    (%eax),%eax
080c86d7 +0x0c1:  add    $0x8,%eax
080c86da +0x0c4:  mov    (%eax),%edx
080c86dc +0x0c6:  mov    -0xc(%ebp),%eax
080c86df +0x0c9:  mov    %eax,0x4(%esp)
080c86e3 +0x0cd:  mov    0x8(%ebp),%eax
080c86e6 +0x0d0:  mov    %eax,(%esp)
080c86e9 +0x0d3:  call   *%edx
080c86eb +0x0d5:  movl   $0xffffffff,0x4(%esp)
080c86f3 +0x0dd:  mov    0xc(%ebp),%eax
080c86f6 +0x0e0:  mov    %eax,(%esp)
080c86f9 +0x0e3:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
080c86fe +0x0e8:  mov    %eax,%edx
080c8700 +0x0ea:  mov    -0xc(%ebp),%eax
080c8703 +0x0ed:  mov    %edx,(%eax)
080c8705 +0x0ef:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
080c870a +0x0f4:  lea    -0x14(%ebp),%edx
080c870d +0x0f7:  mov    %edx,0x8(%esp)
080c8711 +0x0fb:  movl   $0x2,0x4(%esp)
080c8719 +0x103:  mov    %eax,(%esp)
080c871c +0x106:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
080c8721 +0x10b:  mov    $0x1,%ebx
080c8726 +0x110:  jmp    080c8743 <+0x12d>
080c8728 +0x112:  mov    %edx,%ebx
080c872a +0x114:  mov    %eax,%esi
080c872c +0x116:  lea    -0x14(%ebp),%eax
080c872f +0x119:  mov    %eax,(%esp)
080c8732 +0x11c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080c8737 +0x121:  mov    %esi,%eax
080c8739 +0x123:  mov    %ebx,%edx
080c873b +0x125:  mov    %eax,(%esp)
080c873e +0x128:  call   08ae3750 <_Unwind_Resume>
080c8743 +0x12d:  lea    -0x14(%ebp),%eax
080c8746 +0x130:  mov    %eax,(%esp)
080c8749 +0x133:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080c874e +0x138:  mov    %ebx,%eax
080c8750 +0x13a:  add    $0x20,%esp
080c8753 +0x13d:  pop    %ebx
080c8754 +0x13e:  pop    %esi
080c8755 +0x13f:  pop    %ebp
080c8756 +0x140:  ret
080c8757 +0x141:  nop
```

## 反编译 C

```c
// BestClearTime::_saveData @ 0x80c8616

/* BestClearTime::_saveData(CUser*) */

bool __thiscall BestClearTime::_saveData(BestClearTime *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  CStreamGuard local_18 [8];
  SIG_BEST_CLEAR_TIME *local_10;
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"BestClearTime.cpp",0x16);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 080c8668 to 080c8720 has its CatchHandler @ 080c8728 */
  CStreamGuard::operator<<(pCVar2,0x300);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_BEST_CLEAR_TIME>(pCVar2);
  bVar5 = local_10 != (SIG_BEST_CLEAR_TIME *)0x0;
  if (bVar5) {
    memset(local_10,0,0x5dc8);
    (**(code **)(*(int *)this + 8))(this,local_10);
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)local_10 = uVar4;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return bVar5;
}
```
