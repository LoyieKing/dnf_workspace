# UpdateBreakAwayLuckPoint

`_ZN5CUser24UpdateBreakAwayLuckPointEv`

`CUser::UpdateBreakAwayLuckPoint()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086521ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086521ec  _ZN5CUser24UpdateBreakAwayLuckPointEv
#           CUser::UpdateBreakAwayLuckPoint()
# range [0x086521ec, 0x086522e9]
086521ec +0x00:  push   %ebp
086521ed +0x01:  mov    %esp,%ebp
086521ef +0x03:  push   %esi
086521f0 +0x04:  push   %ebx
086521f1 +0x05:  sub    $0x20,%esp
086521f4 +0x08:  movl   $0x0,0x4(%esp)
086521fc +0x10:  mov    0x8(%ebp),%eax
086521ff +0x13:  mov    %eax,(%esp)
08652202 +0x16:  call   086971ee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3a43>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3a43
08652207 +0x1b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0865220c +0x20:  movl   $0x1bf2,0x8(%esp)
08652214 +0x28:  movl   $"user.cpp",0x4(%esp)
0865221c +0x30:  mov    %eax,(%esp)
0865221f +0x33:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08652224 +0x38:  movl   $0x1,0x8(%esp)
0865222c +0x40:  mov    %eax,0x4(%esp)
08652230 +0x44:  lea    -0x10(%ebp),%eax
08652233 +0x47:  mov    %eax,(%esp)
08652236 +0x4a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0865223b +0x4f:  lea    -0x10(%ebp),%eax
0865223e +0x52:  mov    %eax,(%esp)
08652241 +0x55:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08652246 +0x5a:  movl   $0x149,0x4(%esp)
0865224e +0x62:  mov    %eax,(%esp)
08652251 +0x65:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08652256 +0x6a:  mov    0x8(%ebp),%eax
08652259 +0x6d:  mov    %eax,(%esp)
0865225c +0x70:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08652261 +0x75:  mov    %eax,%ebx
08652263 +0x77:  lea    -0x10(%ebp),%eax
08652266 +0x7a:  mov    %eax,(%esp)
08652269 +0x7d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0865226e +0x82:  mov    %ebx,0x4(%esp)
08652272 +0x86:  mov    %eax,(%esp)
08652275 +0x89:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0865227a +0x8e:  mov    0x8(%ebp),%eax
0865227d +0x91:  mov    %eax,(%esp)
08652280 +0x94:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08652285 +0x99:  mov    %eax,%ebx
08652287 +0x9b:  lea    -0x10(%ebp),%eax
0865228a +0x9e:  mov    %eax,(%esp)
0865228d +0xa1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08652292 +0xa6:  mov    %ebx,0x4(%esp)
08652296 +0xaa:  mov    %eax,(%esp)
08652299 +0xad:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0865229e +0xb2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086522a3 +0xb7:  lea    -0x10(%ebp),%edx
086522a6 +0xba:  mov    %edx,0x8(%esp)
086522aa +0xbe:  movl   $0x2,0x4(%esp)
086522b2 +0xc6:  mov    %eax,(%esp)
086522b5 +0xc9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086522ba +0xce:  jmp    086522d7 <+0xeb>
086522bc +0xd0:  mov    %edx,%ebx
086522be +0xd2:  mov    %eax,%esi
086522c0 +0xd4:  lea    -0x10(%ebp),%eax
086522c3 +0xd7:  mov    %eax,(%esp)
086522c6 +0xda:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086522cb +0xdf:  mov    %esi,%eax
086522cd +0xe1:  mov    %ebx,%edx
086522cf +0xe3:  mov    %eax,(%esp)
086522d2 +0xe6:  call   08ae3750 <_Unwind_Resume>
086522d7 +0xeb:  lea    -0x10(%ebp),%eax
086522da +0xee:  mov    %eax,(%esp)
086522dd +0xf1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086522e2 +0xf6:  add    $0x20,%esp
086522e5 +0xf9:  pop    %ebx
086522e6 +0xfa:  pop    %esi
086522e7 +0xfb:  pop    %ebp
086522e8 +0xfc:  ret
086522e9 +0xfd:  nop
```

## 反编译 C

```c
// CUser::UpdateBreakAwayLuckPoint @ 0x86521ec

/* CUser::UpdateBreakAwayLuckPoint() */

void __thiscall CUser::UpdateBreakAwayLuckPoint(CUser *this)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  uint uVar4;
  CStreamGuard local_14 [8];
  
  setUsedBreakAwayLuckPoint(this,false);
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x1bf2);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08652251 to 086522b9 has its CatchHandler @ 086522bc */
  CStreamGuard::operator<<(pCVar2,0x149);
  iVar3 = GetUID(this);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  uVar4 = get_acc_id(this);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,uVar4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
