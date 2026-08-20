# saveServerState

`_ZN4ARAD23Arad_ServerStateManager15saveServerStateE26ENUM_NOTIFY_EVENT_CATEGORY23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageb`

`ARAD::Arad_ServerStateManager::saveServerState(ENUM_NOTIFY_EVENT_CATEGORY, ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&, bool)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_ServerStateManager` | `0x081a9afa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a9afa  _ZN4ARAD23Arad_ServerStateManager15saveServerStateE26ENUM_NOTIFY_EVENT_CATEGORY23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageb
#           ARAD::Arad_ServerStateManager::saveServerState(ENUM_NOTIFY_EVENT_CATEGORY, ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&, bool)
# range [0x081a9afa, 0x081a9c29]
081a9afa +0x000:  push   %ebp
081a9afb +0x001:  mov    %esp,%ebp
081a9afd +0x003:  push   %esi
081a9afe +0x004:  push   %ebx
081a9aff +0x005:  sub    $0x1d0,%esp
081a9b05 +0x00b:  mov    0x18(%ebp),%eax
081a9b08 +0x00e:  mov    %al,-0x1ac(%ebp)
081a9b0e +0x014:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081a9b13 +0x019:  mov    %eax,(%esp)
081a9b16 +0x01c:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
081a9b1b +0x021:  cmp    $0xa,%eax
081a9b1e +0x024:  setne  %al
081a9b21 +0x027:  test   %al,%al
081a9b23 +0x029:  jne    081a9c1f <+0x125>
081a9b29 +0x02f:  lea    -0x1a5(%ebp),%eax
081a9b2f +0x035:  mov    %eax,(%esp)
081a9b32 +0x038:  call   08186722 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0xec>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0xec
081a9b37 +0x03d:  mov    0x10(%ebp),%ecx
081a9b3a +0x040:  mov    0xc(%ebp),%edx
081a9b3d +0x043:  movzbl -0x1ac(%ebp),%eax
081a9b44 +0x04a:  mov    0x14(%ebp),%ebx
081a9b47 +0x04d:  mov    %ebx,0x10(%esp)
081a9b4b +0x051:  mov    %ecx,0xc(%esp)
081a9b4f +0x055:  mov    %edx,0x8(%esp)
081a9b53 +0x059:  mov    %eax,0x4(%esp)
081a9b57 +0x05d:  lea    -0x1a5(%ebp),%eax
081a9b5d +0x063:  mov    %eax,(%esp)
081a9b60 +0x066:  call   081a9d22 <_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev+0x1d>  ; global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()+0x1d
081a9b65 +0x06b:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081a9b6a +0x070:  movl   $0xb2,0x8(%esp)
081a9b72 +0x078:  movl   $"localjapan/Arad_ServerStateManager.cpp",0x4(%esp)
081a9b7a +0x080:  mov    %eax,(%esp)
081a9b7d +0x083:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081a9b82 +0x088:  movl   $0x1,0x8(%esp)
081a9b8a +0x090:  mov    %eax,0x4(%esp)
081a9b8e +0x094:  lea    -0x10(%ebp),%eax
081a9b91 +0x097:  mov    %eax,(%esp)
081a9b94 +0x09a:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081a9b99 +0x09f:  movl   $0xffffffff,0x8(%esp)
081a9ba1 +0x0a7:  movl   $0x2a,0x4(%esp)
081a9ba9 +0x0af:  lea    -0x10(%ebp),%eax
081a9bac +0x0b2:  mov    %eax,(%esp)
081a9baf +0x0b5:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
081a9bb4 +0x0ba:  lea    -0x10(%ebp),%eax
081a9bb7 +0x0bd:  mov    %eax,(%esp)
081a9bba +0x0c0:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081a9bbf +0x0c5:  movl   $0x195,0x8(%esp)
081a9bc7 +0x0cd:  lea    -0x1a5(%ebp),%edx
081a9bcd +0x0d3:  mov    %edx,0x4(%esp)
081a9bd1 +0x0d7:  mov    %eax,(%esp)
081a9bd4 +0x0da:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
081a9bd9 +0x0df:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081a9bde +0x0e4:  lea    -0x10(%ebp),%edx
081a9be1 +0x0e7:  mov    %edx,0x8(%esp)
081a9be5 +0x0eb:  movl   $0x2,0x4(%esp)
081a9bed +0x0f3:  mov    %eax,(%esp)
081a9bf0 +0x0f6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081a9bf5 +0x0fb:  jmp    081a9c12 <+0x118>
081a9bf7 +0x0fd:  mov    %edx,%ebx
081a9bf9 +0x0ff:  mov    %eax,%esi
081a9bfb +0x101:  lea    -0x10(%ebp),%eax
081a9bfe +0x104:  mov    %eax,(%esp)
081a9c01 +0x107:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081a9c06 +0x10c:  mov    %esi,%eax
081a9c08 +0x10e:  mov    %ebx,%edx
081a9c0a +0x110:  mov    %eax,(%esp)
081a9c0d +0x113:  call   08ae3750 <_Unwind_Resume>
081a9c12 +0x118:  lea    -0x10(%ebp),%eax
081a9c15 +0x11b:  mov    %eax,(%esp)
081a9c18 +0x11e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081a9c1d +0x123:  jmp    081a9c20 <+0x126>
081a9c1f +0x125:  nop
081a9c20 +0x126:  add    $0x1d0,%esp
081a9c26 +0x12c:  pop    %ebx
081a9c27 +0x12d:  pop    %esi
081a9c28 +0x12e:  pop    %ebp
081a9c29 +0x12f:  ret
```

## 反编译 C

```c
// ARAD::Arad_ServerStateManager::saveServerState @ 0x81a9afa

/* ARAD::Arad_ServerStateManager::saveServerState(ENUM_NOTIFY_EVENT_CATEGORY,
   ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&, bool) */

void __thiscall
ARAD::Arad_ServerStateManager::saveServerState
          (undefined4 this,int param_2,int param_3,AradServerStateMessage *param_4,bool param_5)

{
  CEnvironment *this_00;
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *this_01;
  SigServerState local_1a9 [405];
  CStreamGuard local_14 [8];
  
  this_00 = (CEnvironment *)G_CEnvironment();
  iVar1 = CEnvironment::get_channel_no(this_00);
  if (iVar1 == 10) {
    arad::SigServerState::SigServerState(local_1a9);
    arad::SigServerState::set(local_1a9,param_5,param_2,param_3,param_4);
    pSVar2 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/Arad_ServerStateManager.cpp",
                                 0xb2);
    CStreamGuard::CStreamGuard(local_14,pSVar2,true);
                    /* try { // try from 081a9baf to 081a9bf4 has its CatchHandler @ 081a9bf7 */
    DISPATCHER::make_internal_stream_jpn(local_14,0x2a,0xffffffff);
    this_01 = (CStreamGuard *)CStreamGuard::operator->(local_14);
    CStreamGuard::put_binary(this_01,local_1a9,0x195);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
    CStreamGuard::~CStreamGuard(local_14);
  }
  return;
}
```
