# sendResult

`_ZN25DB_RequestCharacSkillInfo10sendResultEiP29SIG_REQUEST_CHARAC_SKILL_INFO`

`DB_RequestCharacSkillInfo::sendResult(int, SIG_REQUEST_CHARAC_SKILL_INFO*)`

| 类 | 地址 |
|---|---|
| `DB_RequestCharacSkillInfo` | `0x084475a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084475a0  _ZN25DB_RequestCharacSkillInfo10sendResultEiP29SIG_REQUEST_CHARAC_SKILL_INFO
#           DB_RequestCharacSkillInfo::sendResult(int, SIG_REQUEST_CHARAC_SKILL_INFO*)
# range [0x084475a0, 0x0844768b]
084475a0 +0x00:  push   %ebp
084475a1 +0x01:  mov    %esp,%ebp
084475a3 +0x03:  push   %esi
084475a4 +0x04:  push   %ebx
084475a5 +0x05:  sub    $0x20,%esp
084475a8 +0x08:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084475ad +0x0d:  movl   $0xb202,0x8(%esp)
084475b5 +0x15:  movl   $"DBThread.cpp",0x4(%esp)
084475bd +0x1d:  mov    %eax,(%esp)
084475c0 +0x20:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084475c5 +0x25:  movl   $0x1,0x8(%esp)
084475cd +0x2d:  mov    %eax,0x4(%esp)
084475d1 +0x31:  lea    -0x14(%ebp),%eax
084475d4 +0x34:  mov    %eax,(%esp)
084475d7 +0x37:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084475dc +0x3c:  lea    -0x14(%ebp),%eax
084475df +0x3f:  mov    %eax,(%esp)
084475e2 +0x42:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084475e7 +0x47:  movl   $0x2fd,0x4(%esp)
084475ef +0x4f:  mov    %eax,(%esp)
084475f2 +0x52:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084475f7 +0x57:  lea    -0x14(%ebp),%eax
084475fa +0x5a:  mov    %eax,(%esp)
084475fd +0x5d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08447602 +0x62:  mov    0xc(%ebp),%edx
08447605 +0x65:  mov    %edx,0x4(%esp)
08447609 +0x69:  mov    %eax,(%esp)
0844760c +0x6c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08447611 +0x71:  lea    -0x14(%ebp),%eax
08447614 +0x74:  mov    %eax,(%esp)
08447617 +0x77:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0844761c +0x7c:  mov    %eax,(%esp)
0844761f +0x7f:  call   08237438 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcae2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcae2
08447624 +0x84:  mov    %eax,-0xc(%ebp)
08447627 +0x87:  movl   $0x1a0,0x8(%esp)
0844762f +0x8f:  mov    0x10(%ebp),%eax
08447632 +0x92:  mov    %eax,0x4(%esp)
08447636 +0x96:  mov    -0xc(%ebp),%eax
08447639 +0x99:  mov    %eax,(%esp)
0844763c +0x9c:  call   0807d8a0 <_init+0x198>
08447641 +0xa1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08447646 +0xa6:  lea    -0x14(%ebp),%edx
08447649 +0xa9:  mov    %edx,0x8(%esp)
0844764d +0xad:  movl   $0x1,0x4(%esp)
08447655 +0xb5:  mov    %eax,(%esp)
08447658 +0xb8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0844765d +0xbd:  jmp    0844767a <+0xda>
0844765f +0xbf:  mov    %edx,%ebx
08447661 +0xc1:  mov    %eax,%esi
08447663 +0xc3:  lea    -0x14(%ebp),%eax
08447666 +0xc6:  mov    %eax,(%esp)
08447669 +0xc9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0844766e +0xce:  mov    %esi,%eax
08447670 +0xd0:  mov    %ebx,%edx
08447672 +0xd2:  mov    %eax,(%esp)
08447675 +0xd5:  call   08ae3750 <_Unwind_Resume>
0844767a +0xda:  lea    -0x14(%ebp),%eax
0844767d +0xdd:  mov    %eax,(%esp)
08447680 +0xe0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08447685 +0xe5:  add    $0x20,%esp
08447688 +0xe8:  pop    %ebx
08447689 +0xe9:  pop    %esi
0844768a +0xea:  pop    %ebp
0844768b +0xeb:  ret
```

## 反编译 C

```c
// DB_RequestCharacSkillInfo::sendResult @ 0x84475a0

/* DB_RequestCharacSkillInfo::sendResult(int, SIG_REQUEST_CHARAC_SKILL_INFO*) */

void __thiscall
DB_RequestCharacSkillInfo::sendResult
          (DB_RequestCharacSkillInfo *this,int param_1,SIG_REQUEST_CHARAC_SKILL_INFO *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_REQUEST_CHARAC_SKILL_INFO *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb202);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084475f2 to 0844765c has its CatchHandler @ 0844765f */
  CStreamGuard::operator<<(pCVar2,0x2fd);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_REQUEST_CHARAC_SKILL_INFO>(pCVar2);
  memcpy(local_10,param_2,0x1a0);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
