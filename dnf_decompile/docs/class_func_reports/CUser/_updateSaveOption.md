# _updateSaveOption

`_ZN5CUser17_updateSaveOptionEv`

`CUser::_updateSaveOption()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08652dde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08652dde  _ZN5CUser17_updateSaveOptionEv
#           CUser::_updateSaveOption()
# range [0x08652dde, 0x08652f0b]
08652dde +0x000:  push   %ebp
08652ddf +0x001:  mov    %esp,%ebp
08652de1 +0x003:  push   %esi
08652de2 +0x004:  push   %ebx
08652de3 +0x005:  sub    $0x20,%esp
08652de6 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08652deb +0x00d:  movl   $0x1d0d,0x8(%esp)
08652df3 +0x015:  movl   $"user.cpp",0x4(%esp)
08652dfb +0x01d:  mov    %eax,(%esp)
08652dfe +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08652e03 +0x025:  movl   $0x1,0x8(%esp)
08652e0b +0x02d:  mov    %eax,0x4(%esp)
08652e0f +0x031:  lea    -0x14(%ebp),%eax
08652e12 +0x034:  mov    %eax,(%esp)
08652e15 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08652e1a +0x03c:  lea    -0x14(%ebp),%eax
08652e1d +0x03f:  mov    %eax,(%esp)
08652e20 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08652e25 +0x047:  movl   $0x2b5,0x4(%esp)
08652e2d +0x04f:  mov    %eax,(%esp)
08652e30 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08652e35 +0x057:  mov    0x8(%ebp),%eax
08652e38 +0x05a:  mov    %eax,(%esp)
08652e3b +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08652e40 +0x062:  mov    %eax,%ebx
08652e42 +0x064:  lea    -0x14(%ebp),%eax
08652e45 +0x067:  mov    %eax,(%esp)
08652e48 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08652e4d +0x06f:  mov    %ebx,0x4(%esp)
08652e51 +0x073:  mov    %eax,(%esp)
08652e54 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08652e59 +0x07b:  lea    -0x14(%ebp),%eax
08652e5c +0x07e:  mov    %eax,(%esp)
08652e5f +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08652e64 +0x086:  mov    %eax,(%esp)
08652e67 +0x089:  call   0869aa60 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x72b5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x72b5
08652e6c +0x08e:  mov    %eax,-0xc(%ebp)
08652e6f +0x091:  movl   $0x204,0x8(%esp)
08652e77 +0x099:  movl   $0x0,0x4(%esp)
08652e7f +0x0a1:  mov    -0xc(%ebp),%eax
08652e82 +0x0a4:  mov    %eax,(%esp)
08652e85 +0x0a7:  call   0807dcc0 <_init+0x5b8>
08652e8a +0x0ac:  mov    0x8(%ebp),%eax
08652e8d +0x0af:  mov    %eax,(%esp)
08652e90 +0x0b2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08652e95 +0x0b7:  mov    -0xc(%ebp),%edx
08652e98 +0x0ba:  mov    %eax,(%edx)
08652e9a +0x0bc:  mov    -0xc(%ebp),%eax
08652e9d +0x0bf:  add    $0x4,%eax
08652ea0 +0x0c2:  mov    %eax,0x4(%esp)
08652ea4 +0x0c6:  mov    0x8(%ebp),%eax
08652ea7 +0x0c9:  mov    %eax,(%esp)
08652eaa +0x0cc:  call   0868f03c <_ZNK5CUser18GetCurCharacOptionER15CharacterOption>  ; CUser::GetCurCharacOption(CharacterOption&) const
08652eaf +0x0d1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08652eb4 +0x0d6:  lea    -0x14(%ebp),%edx
08652eb7 +0x0d9:  mov    %edx,0x8(%esp)
08652ebb +0x0dd:  movl   $0x2,0x4(%esp)
08652ec3 +0x0e5:  mov    %eax,(%esp)
08652ec6 +0x0e8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08652ecb +0x0ed:  mov    0x8(%ebp),%eax
08652ece +0x0f0:  movl   $0x0,0x4(%esp)
08652ed6 +0x0f8:  mov    %eax,(%esp)
08652ed9 +0x0fb:  call   0822f292 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x493c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x493c
08652ede +0x100:  lea    -0x14(%ebp),%eax
08652ee1 +0x103:  mov    %eax,(%esp)
08652ee4 +0x106:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08652ee9 +0x10b:  add    $0x20,%esp
08652eec +0x10e:  pop    %ebx
08652eed +0x10f:  pop    %esi
08652eee +0x110:  pop    %ebp
08652eef +0x111:  ret
08652ef0 +0x112:  mov    %edx,%ebx
08652ef2 +0x114:  mov    %eax,%esi
08652ef4 +0x116:  lea    -0x14(%ebp),%eax
08652ef7 +0x119:  mov    %eax,(%esp)
08652efa +0x11c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08652eff +0x121:  mov    %esi,%eax
08652f01 +0x123:  mov    %ebx,%edx
08652f03 +0x125:  mov    %eax,(%esp)
08652f06 +0x128:  call   08ae3750 <_Unwind_Resume>
08652f0b +0x12d:  nop
```

## 反编译 C

```c
// CUser::_updateSaveOption @ 0x8652dde

/* CUser::_updateSaveOption() */

void __thiscall CUser::_updateSaveOption(CUser *this)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_CHARACTER_OPTION *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x1d0d);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08652e30 to 08652eca has its CatchHandler @ 08652ef0 */
  CStreamGuard::operator<<(pCVar2,0x2b5);
  iVar3 = GetUID(this);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHARACTER_OPTION>(pCVar2);
  memset(local_10,0,0x204);
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  *(undefined4 *)local_10 = uVar4;
  GetCurCharacOption(this,(CharacterOption *)(local_10 + 4));
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CUserCharacInfo::setSaveCharacOption((CUserCharacInfo *)this,false);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
