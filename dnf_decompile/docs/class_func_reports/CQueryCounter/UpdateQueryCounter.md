# UpdateQueryCounter

`_ZN13CQueryCounter18UpdateQueryCounterEv`

`CQueryCounter::UpdateQueryCounter()`

| 类 | 地址 |
|---|---|
| `CQueryCounter` | `0x085ecee6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ecee6  _ZN13CQueryCounter18UpdateQueryCounterEv
#           CQueryCounter::UpdateQueryCounter()
# range [0x085ecee6, 0x085ed107]
085ecee6 +0x000:  push   %ebp
085ecee7 +0x001:  mov    %esp,%ebp
085ecee9 +0x003:  push   %esi
085eceea +0x004:  push   %ebx
085eceeb +0x005:  sub    $0x50,%esp
085eceee +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
085ecef3 +0x00d:  movl   $0x1f1,0x8(%esp)
085ecefb +0x015:  movl   $"QueryCounter.cpp",0x4(%esp)
085ecf03 +0x01d:  mov    %eax,(%esp)
085ecf06 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
085ecf0b +0x025:  movl   $0x1,0x8(%esp)
085ecf13 +0x02d:  mov    %eax,0x4(%esp)
085ecf17 +0x031:  lea    -0x28(%ebp),%eax
085ecf1a +0x034:  mov    %eax,(%esp)
085ecf1d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085ecf22 +0x03c:  lea    -0x28(%ebp),%eax
085ecf25 +0x03f:  mov    %eax,(%esp)
085ecf28 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085ecf2d +0x047:  movl   $0x7d,0x4(%esp)
085ecf35 +0x04f:  mov    %eax,(%esp)
085ecf38 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085ecf3d +0x057:  lea    -0x28(%ebp),%eax
085ecf40 +0x05a:  mov    %eax,(%esp)
085ecf43 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085ecf48 +0x062:  movl   $0xffffffff,0x4(%esp)
085ecf50 +0x06a:  mov    %eax,(%esp)
085ecf53 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085ecf58 +0x072:  movl   $0x0,(%esp)
085ecf5f +0x079:  call   0807d750 <_init+0x48>
085ecf64 +0x07e:  mov    %eax,-0x18(%ebp)
085ecf67 +0x081:  lea    -0x28(%ebp),%eax
085ecf6a +0x084:  mov    %eax,(%esp)
085ecf6d +0x087:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085ecf72 +0x08c:  mov    -0x18(%ebp),%edx
085ecf75 +0x08f:  mov    %edx,0x4(%esp)
085ecf79 +0x093:  mov    %eax,(%esp)
085ecf7c +0x096:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085ecf81 +0x09b:  mov    0x8(%ebp),%eax
085ecf84 +0x09e:  mov    0x38(%eax),%ebx
085ecf87 +0x0a1:  lea    -0x28(%ebp),%eax
085ecf8a +0x0a4:  mov    %eax,(%esp)
085ecf8d +0x0a7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085ecf92 +0x0ac:  mov    %ebx,0x4(%esp)
085ecf96 +0x0b0:  mov    %eax,(%esp)
085ecf99 +0x0b3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085ecf9e +0x0b8:  mov    0x8(%ebp),%eax
085ecfa1 +0x0bb:  lea    0x4(%eax),%edx
085ecfa4 +0x0be:  lea    -0x2c(%ebp),%eax
085ecfa7 +0x0c1:  mov    %edx,0x4(%esp)
085ecfab +0x0c5:  mov    %eax,(%esp)
085ecfae +0x0c8:  call   08451406 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x401c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x401c
085ecfb3 +0x0cd:  sub    $0x4,%esp
085ecfb6 +0x0d0:  jmp    085ed07c <+0x196>
085ecfbb +0x0d5:  lea    -0x2c(%ebp),%eax
085ecfbe +0x0d8:  mov    %eax,(%esp)
085ecfc1 +0x0db:  call   084514a4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x40ba>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x40ba
085ecfc6 +0x0e0:  mov    (%eax),%eax
085ecfc8 +0x0e2:  mov    %eax,-0x14(%ebp)
085ecfcb +0x0e5:  lea    -0x2c(%ebp),%eax
085ecfce +0x0e8:  mov    %eax,(%esp)
085ecfd1 +0x0eb:  call   084514a4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x40ba>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x40ba
085ecfd6 +0x0f0:  mov    0x4(%eax),%eax
085ecfd9 +0x0f3:  mov    %eax,-0x10(%ebp)
085ecfdc +0x0f6:  lea    -0x2c(%ebp),%eax
085ecfdf +0x0f9:  mov    %eax,(%esp)
085ecfe2 +0x0fc:  call   084514a4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x40ba>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x40ba
085ecfe7 +0x101:  fldl   0x8(%eax)
085ecfea +0x104:  fldl   &data#a2821b98(.rodata)
085ecff0 +0x10a:  fmulp  %st,%st(1)
085ecff2 +0x10c:  fnstcw -0x3a(%ebp)
085ecff5 +0x10f:  movzwl -0x3a(%ebp),%eax
085ecff9 +0x113:  mov    $0xc,%ah
085ecffb +0x115:  mov    %ax,-0x3c(%ebp)
085ecfff +0x119:  fldcw  -0x3c(%ebp)
085ed002 +0x11c:  fistpl -0xc(%ebp)
085ed005 +0x11f:  fldcw  -0x3a(%ebp)
085ed008 +0x122:  cmpl   $0x0,-0x10(%ebp)
085ed00c +0x126:  jle    085ed05e <+0x178>
085ed00e +0x128:  lea    -0x28(%ebp),%eax
085ed011 +0x12b:  mov    %eax,(%esp)
085ed014 +0x12e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085ed019 +0x133:  mov    -0x14(%ebp),%edx
085ed01c +0x136:  mov    %edx,0x4(%esp)
085ed020 +0x13a:  mov    %eax,(%esp)
085ed023 +0x13d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085ed028 +0x142:  lea    -0x28(%ebp),%eax
085ed02b +0x145:  mov    %eax,(%esp)
085ed02e +0x148:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085ed033 +0x14d:  mov    -0x10(%ebp),%edx
085ed036 +0x150:  mov    %edx,0x4(%esp)
085ed03a +0x154:  mov    %eax,(%esp)
085ed03d +0x157:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085ed042 +0x15c:  lea    -0x28(%ebp),%eax
085ed045 +0x15f:  mov    %eax,(%esp)
085ed048 +0x162:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085ed04d +0x167:  mov    -0xc(%ebp),%edx
085ed050 +0x16a:  mov    %edx,0x4(%esp)
085ed054 +0x16e:  mov    %eax,(%esp)
085ed057 +0x171:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085ed05c +0x176:  jmp    085ed05f <+0x179>
085ed05e +0x178:  nop
085ed05f +0x179:  lea    -0x1c(%ebp),%eax
085ed062 +0x17c:  movl   $0x0,0x8(%esp)
085ed06a +0x184:  lea    -0x2c(%ebp),%edx
085ed06d +0x187:  mov    %edx,0x4(%esp)
085ed071 +0x18b:  mov    %eax,(%esp)
085ed074 +0x18e:  call   08451466 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x407c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x407c
085ed079 +0x193:  sub    $0x4,%esp
085ed07c +0x196:  mov    0x8(%ebp),%eax
085ed07f +0x199:  lea    0x4(%eax),%edx
085ed082 +0x19c:  lea    -0x20(%ebp),%eax
085ed085 +0x19f:  mov    %edx,0x4(%esp)
085ed089 +0x1a3:  mov    %eax,(%esp)
085ed08c +0x1a6:  call   0845142c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4042>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4042
085ed091 +0x1ab:  sub    $0x4,%esp
085ed094 +0x1ae:  lea    -0x20(%ebp),%eax
085ed097 +0x1b1:  mov    %eax,0x4(%esp)
085ed09b +0x1b5:  lea    -0x2c(%ebp),%eax
085ed09e +0x1b8:  mov    %eax,(%esp)
085ed0a1 +0x1bb:  call   08451452 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4068>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4068
085ed0a6 +0x1c0:  test   %al,%al
085ed0a8 +0x1c2:  jne    085ecfbb <+0xd5>
085ed0ae +0x1c8:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085ed0b3 +0x1cd:  lea    -0x28(%ebp),%edx
085ed0b6 +0x1d0:  mov    %edx,0x8(%esp)
085ed0ba +0x1d4:  movl   $0x4,0x4(%esp)
085ed0c2 +0x1dc:  mov    %eax,(%esp)
085ed0c5 +0x1df:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085ed0ca +0x1e4:  mov    0x8(%ebp),%eax
085ed0cd +0x1e7:  mov    %eax,(%esp)
085ed0d0 +0x1ea:  call   085ecbd6 <_ZN13CQueryCounter5ResetEv>  ; CQueryCounter::Reset()
085ed0d5 +0x1ef:  jmp    085ed0f2 <+0x20c>
085ed0d7 +0x1f1:  mov    %edx,%ebx
085ed0d9 +0x1f3:  mov    %eax,%esi
085ed0db +0x1f5:  lea    -0x28(%ebp),%eax
085ed0de +0x1f8:  mov    %eax,(%esp)
085ed0e1 +0x1fb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085ed0e6 +0x200:  mov    %esi,%eax
085ed0e8 +0x202:  mov    %ebx,%edx
085ed0ea +0x204:  mov    %eax,(%esp)
085ed0ed +0x207:  call   08ae3750 <_Unwind_Resume>
085ed0f2 +0x20c:  lea    -0x28(%ebp),%eax
085ed0f5 +0x20f:  mov    %eax,(%esp)
085ed0f8 +0x212:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085ed0fd +0x217:  lea    -0x8(%ebp),%esp
085ed100 +0x21a:  add    $0x0,%esp
085ed103 +0x21d:  pop    %ebx
085ed104 +0x21e:  pop    %esi
085ed105 +0x21f:  pop    %ebp
085ed106 +0x220:  ret
085ed107 +0x221:  nop
```

## 反编译 C

```c
// CQueryCounter::UpdateQueryCounter @ 0x85ecee6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CQueryCounter::UpdateQueryCounter() */

void __thiscall CQueryCounter::UpdateQueryCounter(CQueryCounter *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int *piVar4;
  int iVar5;
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  local_30 [4];
  CStreamGuard local_2c [8];
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  local_24 [4];
  _Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"QueryCounter.cpp",0x1f1);
  CStreamGuard::CStreamGuard(local_2c,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
                    /* try { // try from 085ecf38 to 085ed0d4 has its CatchHandler @ 085ed0d7 */
  CStreamGuard::operator<<(pCVar3,0x7d);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
  CStreamGuard::operator<<(pCVar3,-1);
  local_1c = time((time_t *)0x0);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
  CStreamGuard::operator<<(pCVar3,local_1c);
  iVar5 = *(int *)(this + 0x38);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
  CStreamGuard::operator<<(pCVar3,iVar5);
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::begin(local_30);
  while( true ) {
    std::
    map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
    ::end(local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_30
                       ,(_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') break;
    piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)
                               local_30);
    local_18 = *piVar4;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_30
                      );
    local_14 = *(int *)(iVar5 + 4);
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_30
                      );
    local_10 = (int)ROUND(_DAT_08ccf310 * *(double *)(iVar5 + 8));
    if (0 < local_14) {
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
      CStreamGuard::operator<<(pCVar3,local_18);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
      CStreamGuard::operator<<(pCVar3,local_14);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
      CStreamGuard::operator<<(pCVar3,local_10);
    }
    std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator++
              (local_20,(int)local_30);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_2c);
  Reset(this);
  CStreamGuard::~CStreamGuard(local_2c);
  return;
}
```
