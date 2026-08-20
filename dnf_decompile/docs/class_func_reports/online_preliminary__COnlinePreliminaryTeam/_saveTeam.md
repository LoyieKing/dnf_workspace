# _saveTeam

`_ZN18online_preliminary22COnlinePreliminaryTeam9_saveTeamEv`

`online_preliminary::COnlinePreliminaryTeam::_saveTeam()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeam` | `0x08587ee4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08587ee4  _ZN18online_preliminary22COnlinePreliminaryTeam9_saveTeamEv
#           online_preliminary::COnlinePreliminaryTeam::_saveTeam()
# range [0x08587ee4, 0x0858800b]
08587ee4 +0x000:  push   %ebp
08587ee5 +0x001:  mov    %esp,%ebp
08587ee7 +0x003:  push   %esi
08587ee8 +0x004:  push   %ebx
08587ee9 +0x005:  sub    $0x20,%esp
08587eec +0x008:  mov    0x8(%ebp),%eax
08587eef +0x00b:  movzbl 0x3c(%eax),%eax
08587ef3 +0x00f:  xor    $0x1,%eax
08587ef6 +0x012:  test   %al,%al
08587ef8 +0x014:  je     08587f04 <+0x20>
08587efa +0x016:  mov    $0x1,%ebx
08587eff +0x01b:  jmp    08588003 <+0x11f>
08587f04 +0x020:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08587f09 +0x025:  movl   $0x38,0x8(%esp)
08587f11 +0x02d:  movl   $"OnlinePreliminaryTeam.cpp",0x4(%esp)
08587f19 +0x035:  mov    %eax,(%esp)
08587f1c +0x038:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08587f21 +0x03d:  movl   $0x1,0x8(%esp)
08587f29 +0x045:  mov    %eax,0x4(%esp)
08587f2d +0x049:  lea    -0x14(%ebp),%eax
08587f30 +0x04c:  mov    %eax,(%esp)
08587f33 +0x04f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08587f38 +0x054:  lea    -0x14(%ebp),%eax
08587f3b +0x057:  mov    %eax,(%esp)
08587f3e +0x05a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08587f43 +0x05f:  movl   $0x1e9,0x4(%esp)
08587f4b +0x067:  mov    %eax,(%esp)
08587f4e +0x06a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08587f53 +0x06f:  lea    -0x14(%ebp),%eax
08587f56 +0x072:  mov    %eax,(%esp)
08587f59 +0x075:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08587f5e +0x07a:  movl   $0xffffffff,0x4(%esp)
08587f66 +0x082:  mov    %eax,(%esp)
08587f69 +0x085:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08587f6e +0x08a:  lea    -0x14(%ebp),%eax
08587f71 +0x08d:  mov    %eax,(%esp)
08587f74 +0x090:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08587f79 +0x095:  mov    %eax,(%esp)
08587f7c +0x098:  call   08589132 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x425>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x425
08587f81 +0x09d:  mov    %eax,-0xc(%ebp)
08587f84 +0x0a0:  mov    0x8(%ebp),%eax
08587f87 +0x0a3:  mov    0x4(%eax),%edx
08587f8a +0x0a6:  mov    -0xc(%ebp),%eax
08587f8d +0x0a9:  mov    %edx,(%eax)
08587f8f +0x0ab:  mov    0x8(%ebp),%eax
08587f92 +0x0ae:  mov    0x8(%eax),%edx
08587f95 +0x0b1:  mov    -0xc(%ebp),%eax
08587f98 +0x0b4:  mov    %edx,0x14(%eax)
08587f9b +0x0b7:  mov    0x8(%ebp),%eax
08587f9e +0x0ba:  mov    0xc(%eax),%edx
08587fa1 +0x0bd:  mov    -0xc(%ebp),%eax
08587fa4 +0x0c0:  mov    %edx,0x18(%eax)
08587fa7 +0x0c3:  mov    0x8(%ebp),%eax
08587faa +0x0c6:  mov    0x10(%eax),%edx
08587fad +0x0c9:  mov    -0xc(%ebp),%eax
08587fb0 +0x0cc:  mov    %edx,0x1c(%eax)
08587fb3 +0x0cf:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08587fb8 +0x0d4:  lea    -0x14(%ebp),%edx
08587fbb +0x0d7:  mov    %edx,0x8(%esp)
08587fbf +0x0db:  movl   $0x2,0x4(%esp)
08587fc7 +0x0e3:  mov    %eax,(%esp)
08587fca +0x0e6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08587fcf +0x0eb:  mov    0x8(%ebp),%eax
08587fd2 +0x0ee:  movb   $0x0,0x3c(%eax)
08587fd6 +0x0f2:  mov    $0x1,%ebx
08587fdb +0x0f7:  lea    -0x14(%ebp),%eax
08587fde +0x0fa:  mov    %eax,(%esp)
08587fe1 +0x0fd:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08587fe6 +0x102:  jmp    08588003 <+0x11f>
08587fe8 +0x104:  mov    %edx,%ebx
08587fea +0x106:  mov    %eax,%esi
08587fec +0x108:  lea    -0x14(%ebp),%eax
08587fef +0x10b:  mov    %eax,(%esp)
08587ff2 +0x10e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08587ff7 +0x113:  mov    %esi,%eax
08587ff9 +0x115:  mov    %ebx,%edx
08587ffb +0x117:  mov    %eax,(%esp)
08587ffe +0x11a:  call   08ae3750 <_Unwind_Resume>
08588003 +0x11f:  mov    %ebx,%eax
08588005 +0x121:  add    $0x20,%esp
08588008 +0x124:  pop    %ebx
08588009 +0x125:  pop    %esi
0858800a +0x126:  pop    %ebp
0858800b +0x127:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeam::_saveTeam @ 0x8587ee4

/* online_preliminary::COnlinePreliminaryTeam::_saveTeam() */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryTeam::_saveTeam(COnlinePreliminaryTeam *this)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_ONLINE_PRELIMINARY_TEAM *local_10;
  
  if (this[0x3c] == (COnlinePreliminaryTeam)0x1) {
    pSVar1 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"OnlinePreliminaryTeam.cpp",0x38);
    CStreamGuard::CStreamGuard(local_18,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08587f4e to 08587fce has its CatchHandler @ 08587fe8 */
    CStreamGuard::operator<<(pCVar2,0x1e9);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_ONLINE_PRELIMINARY_TEAM>(pCVar2);
    *(undefined4 *)local_10 = *(undefined4 *)(this + 4);
    *(undefined4 *)(local_10 + 0x14) = *(undefined4 *)(this + 8);
    *(undefined4 *)(local_10 + 0x18) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(local_10 + 0x1c) = *(undefined4 *)(this + 0x10);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    this[0x3c] = (COnlinePreliminaryTeam)0x0;
    CStreamGuard::~CStreamGuard(local_18);
  }
  return 1;
}
```
