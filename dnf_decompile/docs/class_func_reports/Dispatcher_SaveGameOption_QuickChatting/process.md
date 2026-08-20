# process

`_ZN39Dispatcher_SaveGameOption_QuickChatting7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SaveGameOption_QuickChatting::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveGameOption_QuickChatting` | `0x081cf1ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cf1ac  _ZN39Dispatcher_SaveGameOption_QuickChatting7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SaveGameOption_QuickChatting::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cf1ac, 0x081cf353]
081cf1ac +0x000:  push   %ebp
081cf1ad +0x001:  mov    %esp,%ebp
081cf1af +0x003:  push   %esi
081cf1b0 +0x004:  push   %ebx
081cf1b1 +0x005:  sub    $0x30,%esp
081cf1b4 +0x008:  mov    0x10(%ebp),%eax
081cf1b7 +0x00b:  mov    %eax,-0x18(%ebp)
081cf1ba +0x00e:  mov    0x14(%ebp),%eax
081cf1bd +0x011:  mov    %eax,-0x14(%ebp)
081cf1c0 +0x014:  mov    0xc(%ebp),%eax
081cf1c3 +0x017:  mov    %eax,(%esp)
081cf1c6 +0x01a:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
081cf1cb +0x01f:  mov    %eax,-0x10(%ebp)
081cf1ce +0x022:  mov    -0x18(%ebp),%eax
081cf1d1 +0x025:  movzbl 0x11(%eax),%eax
081cf1d5 +0x029:  movzbl %al,%eax
081cf1d8 +0x02c:  mov    -0x18(%ebp),%edx
081cf1db +0x02f:  add    $0x12,%edx
081cf1de +0x032:  mov    %eax,0x8(%esp)
081cf1e2 +0x036:  mov    %edx,0x4(%esp)
081cf1e6 +0x03a:  mov    -0x10(%ebp),%eax
081cf1e9 +0x03d:  mov    %eax,(%esp)
081cf1ec +0x040:  call   084b6e74 <_ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj>  ; CGameOption::SetQuickChatOption(CQuickChattingOption const&, unsigned int)
081cf1f1 +0x045:  mov    -0x18(%ebp),%eax
081cf1f4 +0x048:  mov    %eax,(%esp)
081cf1f7 +0x04b:  call   0822dc98 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3342>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3342
081cf1fc +0x050:  test   %al,%al
081cf1fe +0x052:  je     081cf216 <+0x6a>
081cf200 +0x054:  mov    -0x10(%ebp),%eax
081cf203 +0x057:  mov    %eax,(%esp)
081cf206 +0x05a:  call   0822eff2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x469c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x469c
081cf20b +0x05f:  test   %al,%al
081cf20d +0x061:  je     081cf216 <+0x6a>
081cf20f +0x063:  mov    $0x1,%eax
081cf214 +0x068:  jmp    081cf21b <+0x6f>
081cf216 +0x06a:  mov    $0x0,%eax
081cf21b +0x06f:  test   %al,%al
081cf21d +0x071:  je     081cf347 <+0x19b>
081cf223 +0x077:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081cf228 +0x07c:  movl   $0x291b,0x8(%esp)
081cf230 +0x084:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081cf238 +0x08c:  mov    %eax,(%esp)
081cf23b +0x08f:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081cf240 +0x094:  movl   $0x1,0x8(%esp)
081cf248 +0x09c:  mov    %eax,0x4(%esp)
081cf24c +0x0a0:  lea    -0x20(%ebp),%eax
081cf24f +0x0a3:  mov    %eax,(%esp)
081cf252 +0x0a6:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081cf257 +0x0ab:  lea    -0x20(%ebp),%eax
081cf25a +0x0ae:  mov    %eax,(%esp)
081cf25d +0x0b1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081cf262 +0x0b6:  movl   $0x239,0x4(%esp)
081cf26a +0x0be:  mov    %eax,(%esp)
081cf26d +0x0c1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081cf272 +0x0c6:  mov    0xc(%ebp),%eax
081cf275 +0x0c9:  mov    %eax,(%esp)
081cf278 +0x0cc:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081cf27d +0x0d1:  mov    %eax,%ebx
081cf27f +0x0d3:  lea    -0x20(%ebp),%eax
081cf282 +0x0d6:  mov    %eax,(%esp)
081cf285 +0x0d9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081cf28a +0x0de:  mov    %ebx,0x4(%esp)
081cf28e +0x0e2:  mov    %eax,(%esp)
081cf291 +0x0e5:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081cf296 +0x0ea:  lea    -0x20(%ebp),%eax
081cf299 +0x0ed:  mov    %eax,(%esp)
081cf29c +0x0f0:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081cf2a1 +0x0f5:  mov    %eax,(%esp)
081cf2a4 +0x0f8:  call   08236eca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc574>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc574
081cf2a9 +0x0fd:  mov    %eax,-0xc(%ebp)
081cf2ac +0x100:  mov    0xc(%ebp),%eax
081cf2af +0x103:  mov    %eax,(%esp)
081cf2b2 +0x106:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cf2b7 +0x10b:  mov    -0xc(%ebp),%edx
081cf2ba +0x10e:  mov    %eax,(%edx)
081cf2bc +0x110:  mov    -0xc(%ebp),%eax
081cf2bf +0x113:  add    $0x4,%eax
081cf2c2 +0x116:  movl   $0x0,0x8(%esp)
081cf2ca +0x11e:  mov    %eax,0x4(%esp)
081cf2ce +0x122:  mov    -0x10(%ebp),%eax
081cf2d1 +0x125:  mov    %eax,(%esp)
081cf2d4 +0x128:  call   084b6fe0 <_ZN11CGameOption17CopyQuickChattingER20CQuickChattingOptionj>  ; CGameOption::CopyQuickChatting(CQuickChattingOption&, unsigned int)
081cf2d9 +0x12d:  mov    -0xc(%ebp),%eax
081cf2dc +0x130:  add    $0x130,%eax
081cf2e1 +0x135:  movl   $0x1,0x8(%esp)
081cf2e9 +0x13d:  mov    %eax,0x4(%esp)
081cf2ed +0x141:  mov    -0x10(%ebp),%eax
081cf2f0 +0x144:  mov    %eax,(%esp)
081cf2f3 +0x147:  call   084b6fe0 <_ZN11CGameOption17CopyQuickChattingER20CQuickChattingOptionj>  ; CGameOption::CopyQuickChatting(CQuickChattingOption&, unsigned int)
081cf2f8 +0x14c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081cf2fd +0x151:  lea    -0x20(%ebp),%edx
081cf300 +0x154:  mov    %edx,0x8(%esp)
081cf304 +0x158:  movl   $0x2,0x4(%esp)
081cf30c +0x160:  mov    %eax,(%esp)
081cf30f +0x163:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081cf314 +0x168:  mov    -0x10(%ebp),%eax
081cf317 +0x16b:  mov    %eax,(%esp)
081cf31a +0x16e:  call   0822f002 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46ac
081cf31f +0x173:  lea    -0x20(%ebp),%eax
081cf322 +0x176:  mov    %eax,(%esp)
081cf325 +0x179:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081cf32a +0x17e:  jmp    081cf347 <+0x19b>
081cf32c +0x180:  mov    %edx,%ebx
081cf32e +0x182:  mov    %eax,%esi
081cf330 +0x184:  lea    -0x20(%ebp),%eax
081cf333 +0x187:  mov    %eax,(%esp)
081cf336 +0x18a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081cf33b +0x18f:  mov    %esi,%eax
081cf33d +0x191:  mov    %ebx,%edx
081cf33f +0x193:  mov    %eax,(%esp)
081cf342 +0x196:  call   08ae3750 <_Unwind_Resume>
081cf347 +0x19b:  mov    $0x0,%eax
081cf34c +0x1a0:  add    $0x30,%esp
081cf34f +0x1a3:  pop    %ebx
081cf350 +0x1a4:  pop    %esi
081cf351 +0x1a5:  pop    %ebp
081cf352 +0x1a6:  ret
081cf353 +0x1a7:  nop
```

## 反编译 C

```c
// Dispatcher_SaveGameOption_QuickChatting::process @ 0x81cf1ac

/* Dispatcher_SaveGameOption_QuickChatting::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SaveGameOption_QuickChatting::process
          (Dispatcher_SaveGameOption_QuickChatting *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  undefined4 uVar6;
  CStreamGuard local_24 [8];
  MSG_BASE *local_1c;
  ParamBase *local_18;
  CGameOption *local_14;
  SIG_SAVE_GAME_OPTION_QUICKCHAT *local_10;
  
  local_1c = param_2;
  local_18 = param_3;
  local_14 = (CGameOption *)CUser::GetGameOptionRef(param_1);
  CGameOption::SetQuickChatOption
            (local_14,(CQuickChattingOption *)(local_1c + 0x12),(uint)(byte)local_1c[0x11]);
  cVar2 = MSG_QUICK_CHAT::isLastMessage((MSG_QUICK_CHAT *)local_1c);
  if (cVar2 != '\0') {
    cVar2 = CGameOption::isChanged_QuickChatData(local_14);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_081cf21b;
    }
  }
  bVar1 = false;
LAB_081cf21b:
  if (bVar1) {
    pSVar3 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x291b);
    CStreamGuard::CStreamGuard(local_24,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 081cf26d to 081cf313 has its CatchHandler @ 081cf32c */
    CStreamGuard::operator<<(pCVar4,0x239);
    iVar5 = CUser::GetUID(param_1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar4,iVar5);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_24);
    local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_GAME_OPTION_QUICKCHAT>(pCVar4);
    uVar6 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_10 = uVar6;
    CGameOption::CopyQuickChatting(local_14,(CQuickChattingOption *)(local_10 + 4),0);
    CGameOption::CopyQuickChatting(local_14,(CQuickChattingOption *)(local_10 + 0x130),1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
    CGameOption::resetFlag_QuickChatChnage(local_14);
    CStreamGuard::~CStreamGuard(local_24);
  }
  return 0;
}
```
