# process

`_ZN33Dispatcher_Break_Away_Quest_Check7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Break_Away_Quest_Check::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Break_Away_Quest_Check` | `0x081d390a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d390a  _ZN33Dispatcher_Break_Away_Quest_Check7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Break_Away_Quest_Check::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d390a, 0x081d3a71]
081d390a +0x000:  push   %ebp
081d390b +0x001:  mov    %esp,%ebp
081d390d +0x003:  push   %esi
081d390e +0x004:  push   %ebx
081d390f +0x005:  sub    $0x20,%esp
081d3912 +0x008:  mov    0x14(%ebp),%eax
081d3915 +0x00b:  mov    %eax,-0x10(%ebp)
081d3918 +0x00e:  mov    0x10(%ebp),%eax
081d391b +0x011:  mov    %eax,-0xc(%ebp)
081d391e +0x014:  mov    -0xc(%ebp),%eax
081d3921 +0x017:  movzbl 0xd(%eax),%eax
081d3925 +0x01b:  test   %al,%al
081d3927 +0x01d:  je     081d3965 <+0x5b>
081d3929 +0x01f:  mov    0xc(%ebp),%eax
081d392c +0x022:  mov    %eax,(%esp)
081d392f +0x025:  call   0822fc6e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5318>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5318
081d3934 +0x02a:  test   %eax,%eax
081d3936 +0x02c:  sete   %al
081d3939 +0x02f:  test   %al,%al
081d393b +0x031:  je     081d3956 <+0x4c>
081d393d +0x033:  mov    &_ZN10GlobalData14s_BreakAwaySysE,%eax
081d3942 +0x038:  mov    0xc(%ebp),%edx
081d3945 +0x03b:  mov    %edx,0x4(%esp)
081d3949 +0x03f:  mov    %eax,(%esp)
081d394c +0x042:  call   0831d164 <_ZN18break_away_prevent23CBreakAwayPreventSystem31giveBreakAwayDungeonClearRewardEP5CUser>  ; break_away_prevent::CBreakAwayPreventSystem::giveBreakAwayDungeonClearReward(CUser*)
081d3951 +0x047:  jmp    081d3a66 <+0x15c>
081d3956 +0x04c:  mov    -0x10(%ebp),%eax
081d3959 +0x04f:  movl   $0x1,0x4(%eax)
081d3960 +0x056:  jmp    081d3a66 <+0x15c>
081d3965 +0x05b:  movl   $0xffffffff,0x4(%esp)
081d396d +0x063:  mov    0xc(%ebp),%eax
081d3970 +0x066:  mov    %eax,(%esp)
081d3973 +0x069:  call   0822fc5c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5306>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5306
081d3978 +0x06e:  movl   $0x0,0x4(%esp)
081d3980 +0x076:  mov    0xc(%ebp),%eax
081d3983 +0x079:  mov    %eax,(%esp)
081d3986 +0x07c:  call   0822fc7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5326>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5326
081d398b +0x081:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081d3990 +0x086:  movl   $0x31d9,0x8(%esp)
081d3998 +0x08e:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081d39a0 +0x096:  mov    %eax,(%esp)
081d39a3 +0x099:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081d39a8 +0x09e:  movl   $0x1,0x8(%esp)
081d39b0 +0x0a6:  mov    %eax,0x4(%esp)
081d39b4 +0x0aa:  lea    -0x18(%ebp),%eax
081d39b7 +0x0ad:  mov    %eax,(%esp)
081d39ba +0x0b0:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081d39bf +0x0b5:  lea    -0x18(%ebp),%eax
081d39c2 +0x0b8:  mov    %eax,(%esp)
081d39c5 +0x0bb:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081d39ca +0x0c0:  movl   $0x144,0x4(%esp)
081d39d2 +0x0c8:  mov    %eax,(%esp)
081d39d5 +0x0cb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081d39da +0x0d0:  mov    0xc(%ebp),%eax
081d39dd +0x0d3:  mov    %eax,(%esp)
081d39e0 +0x0d6:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081d39e5 +0x0db:  mov    %eax,%ebx
081d39e7 +0x0dd:  lea    -0x18(%ebp),%eax
081d39ea +0x0e0:  mov    %eax,(%esp)
081d39ed +0x0e3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081d39f2 +0x0e8:  mov    %ebx,0x4(%esp)
081d39f6 +0x0ec:  mov    %eax,(%esp)
081d39f9 +0x0ef:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081d39fe +0x0f4:  mov    0xc(%ebp),%eax
081d3a01 +0x0f7:  mov    %eax,(%esp)
081d3a04 +0x0fa:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d3a09 +0x0ff:  mov    %eax,%ebx
081d3a0b +0x101:  lea    -0x18(%ebp),%eax
081d3a0e +0x104:  mov    %eax,(%esp)
081d3a11 +0x107:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081d3a16 +0x10c:  mov    %ebx,0x4(%esp)
081d3a1a +0x110:  mov    %eax,(%esp)
081d3a1d +0x113:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
081d3a22 +0x118:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081d3a27 +0x11d:  lea    -0x18(%ebp),%edx
081d3a2a +0x120:  mov    %edx,0x8(%esp)
081d3a2e +0x124:  movl   $0x2,0x4(%esp)
081d3a36 +0x12c:  mov    %eax,(%esp)
081d3a39 +0x12f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081d3a3e +0x134:  jmp    081d3a5b <+0x151>
081d3a40 +0x136:  mov    %edx,%ebx
081d3a42 +0x138:  mov    %eax,%esi
081d3a44 +0x13a:  lea    -0x18(%ebp),%eax
081d3a47 +0x13d:  mov    %eax,(%esp)
081d3a4a +0x140:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081d3a4f +0x145:  mov    %esi,%eax
081d3a51 +0x147:  mov    %ebx,%edx
081d3a53 +0x149:  mov    %eax,(%esp)
081d3a56 +0x14c:  call   08ae3750 <_Unwind_Resume>
081d3a5b +0x151:  lea    -0x18(%ebp),%eax
081d3a5e +0x154:  mov    %eax,(%esp)
081d3a61 +0x157:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081d3a66 +0x15c:  mov    $0x0,%eax
081d3a6b +0x161:  add    $0x20,%esp
081d3a6e +0x164:  pop    %ebx
081d3a6f +0x165:  pop    %esi
081d3a70 +0x166:  pop    %ebp
081d3a71 +0x167:  ret
```

## 反编译 C

```c
// Dispatcher_Break_Away_Quest_Check::process @ 0x81d390a

/* Dispatcher_Break_Away_Quest_Check::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Break_Away_Quest_Check::process
          (Dispatcher_Break_Away_Quest_Check *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  int iVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  uint uVar4;
  CStreamGuard local_1c [8];
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  local_10 = param_2;
  if (param_2[0xd] == (MSG_BASE)0x0) {
    CUser::setBreakAwayDungeonClearCnt(param_1,-1);
    CUser::setBreakAwayQuestTime(param_1,0);
    pSVar2 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x31d9);
    CStreamGuard::CStreamGuard(local_1c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 081d39d5 to 081d3a3d has its CatchHandler @ 081d3a40 */
    CStreamGuard::operator<<(pCVar3,0x144);
    iVar1 = CUser::GetUID(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,iVar1);
    uVar4 = CUser::get_acc_id(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar3,uVar4);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    CStreamGuard::~CStreamGuard(local_1c);
  }
  else {
    iVar1 = CUser::getBreakAwayDungeonClearCnt(param_1);
    if (iVar1 == 0) {
      break_away_prevent::CBreakAwayPreventSystem::giveBreakAwayDungeonClearReward
                (GlobalData::s_BreakAwaySys,param_1);
    }
    else {
      *(undefined4 *)(local_14 + 4) = 1;
    }
  }
  return 0;
}
```
