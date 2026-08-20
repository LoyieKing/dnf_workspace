# process

`_ZN27Dispatcher_SaveGameOption_27processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SaveGameOption_2::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveGameOption_2` | `0x081cee64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cee64  _ZN27Dispatcher_SaveGameOption_27processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SaveGameOption_2::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cee64, 0x081cf04f]
081cee64 +0x000:  push   %ebp
081cee65 +0x001:  mov    %esp,%ebp
081cee67 +0x003:  push   %esi
081cee68 +0x004:  push   %ebx
081cee69 +0x005:  sub    $0x30,%esp
081cee6c +0x008:  mov    0x10(%ebp),%eax
081cee6f +0x00b:  mov    %eax,0x8(%esp)
081cee73 +0x00f:  mov    0xc(%ebp),%eax
081cee76 +0x012:  mov    %eax,0x4(%esp)
081cee7a +0x016:  mov    0x8(%ebp),%eax
081cee7d +0x019:  mov    %eax,(%esp)
081cee80 +0x01c:  call   081cf050 <_ZN27Dispatcher_SaveGameOption_211check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_SaveGameOption_2::check_error(CUser*, MSG_BASE&)
081cee85 +0x021:  mov    %eax,-0x1c(%ebp)
081cee88 +0x024:  cmpl   $0x0,-0x1c(%ebp)
081cee8c +0x028:  jle    081cee96 <+0x32>
081cee8e +0x02a:  mov    -0x1c(%ebp),%ebx
081cee91 +0x02d:  jmp    081cf046 <+0x1e2>
081cee96 +0x032:  cmpl   $0x0,-0x1c(%ebp)
081cee9a +0x036:  jns    081ceea6 <+0x42>
081cee9c +0x038:  mov    $0xffffffff,%ebx
081ceea1 +0x03d:  jmp    081cf046 <+0x1e2>
081ceea6 +0x042:  mov    0x10(%ebp),%eax
081ceea9 +0x045:  mov    %eax,-0x18(%ebp)
081ceeac +0x048:  mov    0xc(%ebp),%eax
081ceeaf +0x04b:  mov    %eax,(%esp)
081ceeb2 +0x04e:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
081ceeb7 +0x053:  mov    %eax,-0x14(%ebp)
081ceeba +0x056:  mov    0xc(%ebp),%eax
081ceebd +0x059:  mov    %eax,(%esp)
081ceec0 +0x05c:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081ceec5 +0x061:  mov    %eax,0x4(%esp)
081ceec9 +0x065:  mov    0xc(%ebp),%eax
081ceecc +0x068:  mov    %eax,(%esp)
081ceecf +0x06b:  call   08692ef2 <_ZN5CUser19GetCharacHotKeyTypeEi>  ; CUser::GetCharacHotKeyType(int)
081ceed4 +0x070:  mov    %al,-0xd(%ebp)
081ceed7 +0x073:  mov    -0x18(%ebp),%eax
081ceeda +0x076:  lea    0x11(%eax),%edx
081ceedd +0x079:  movzbl -0xd(%ebp),%eax
081ceee1 +0x07d:  mov    %edx,0x8(%esp)
081ceee5 +0x081:  mov    %eax,0x4(%esp)
081ceee9 +0x085:  mov    -0x14(%ebp),%eax
081ceeec +0x088:  mov    %eax,(%esp)
081ceeef +0x08b:  call   084b6da0 <_ZN11CGameOption21IsHotKeyOptionChangedEhR13CHotkeyOption>  ; CGameOption::IsHotKeyOptionChanged(unsigned char, CHotkeyOption&)
081ceef4 +0x090:  xor    $0x1,%eax
081ceef7 +0x093:  test   %al,%al
081ceef9 +0x095:  je     081cef05 <+0xa1>
081ceefb +0x097:  mov    $0x0,%ebx
081cef00 +0x09c:  jmp    081cf046 <+0x1e2>
081cef05 +0x0a1:  mov    -0x18(%ebp),%eax
081cef08 +0x0a4:  lea    0x11(%eax),%edx
081cef0b +0x0a7:  movzbl -0xd(%ebp),%eax
081cef0f +0x0ab:  mov    %edx,0x8(%esp)
081cef13 +0x0af:  mov    %eax,0x4(%esp)
081cef17 +0x0b3:  mov    -0x14(%ebp),%eax
081cef1a +0x0b6:  mov    %eax,(%esp)
081cef1d +0x0b9:  call   084b6cf0 <_ZN11CGameOption15SetHotKeyOptionEhR13CHotkeyOption>  ; CGameOption::SetHotKeyOption(unsigned char, CHotkeyOption&)
081cef22 +0x0be:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081cef27 +0x0c3:  movl   $0x28e1,0x8(%esp)
081cef2f +0x0cb:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081cef37 +0x0d3:  mov    %eax,(%esp)
081cef3a +0x0d6:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081cef3f +0x0db:  movl   $0x1,0x8(%esp)
081cef47 +0x0e3:  mov    %eax,0x4(%esp)
081cef4b +0x0e7:  lea    -0x24(%ebp),%eax
081cef4e +0x0ea:  mov    %eax,(%esp)
081cef51 +0x0ed:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081cef56 +0x0f2:  lea    -0x24(%ebp),%eax
081cef59 +0x0f5:  mov    %eax,(%esp)
081cef5c +0x0f8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081cef61 +0x0fd:  movl   $0x131,0x4(%esp)
081cef69 +0x105:  mov    %eax,(%esp)
081cef6c +0x108:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081cef71 +0x10d:  mov    0xc(%ebp),%eax
081cef74 +0x110:  mov    %eax,(%esp)
081cef77 +0x113:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081cef7c +0x118:  mov    %eax,%ebx
081cef7e +0x11a:  lea    -0x24(%ebp),%eax
081cef81 +0x11d:  mov    %eax,(%esp)
081cef84 +0x120:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081cef89 +0x125:  mov    %ebx,0x4(%esp)
081cef8d +0x129:  mov    %eax,(%esp)
081cef90 +0x12c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081cef95 +0x131:  lea    -0x24(%ebp),%eax
081cef98 +0x134:  mov    %eax,(%esp)
081cef9b +0x137:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081cefa0 +0x13c:  mov    %eax,(%esp)
081cefa3 +0x13f:  call   08236eb4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc55e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc55e
081cefa8 +0x144:  mov    %eax,-0xc(%ebp)
081cefab +0x147:  mov    0xc(%ebp),%eax
081cefae +0x14a:  mov    %eax,(%esp)
081cefb1 +0x14d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cefb6 +0x152:  mov    -0xc(%ebp),%edx
081cefb9 +0x155:  mov    %eax,(%edx)
081cefbb +0x157:  mov    0xc(%ebp),%eax
081cefbe +0x15a:  mov    %eax,(%esp)
081cefc1 +0x15d:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081cefc6 +0x162:  mov    %eax,0x4(%esp)
081cefca +0x166:  mov    0xc(%ebp),%eax
081cefcd +0x169:  mov    %eax,(%esp)
081cefd0 +0x16c:  call   08692ef2 <_ZN5CUser19GetCharacHotKeyTypeEi>  ; CUser::GetCharacHotKeyType(int)
081cefd5 +0x171:  mov    %eax,%edx
081cefd7 +0x173:  mov    -0xc(%ebp),%eax
081cefda +0x176:  mov    %dl,0x4(%eax)
081cefdd +0x179:  mov    -0x18(%ebp),%eax
081cefe0 +0x17c:  lea    0x11(%eax),%edx
081cefe3 +0x17f:  mov    -0xc(%ebp),%eax
081cefe6 +0x182:  add    $0x5,%eax
081cefe9 +0x185:  movl   $0xbc,0x8(%esp)
081ceff1 +0x18d:  mov    %edx,0x4(%esp)
081ceff5 +0x191:  mov    %eax,(%esp)
081ceff8 +0x194:  call   0807d8a0 <_init+0x198>
081ceffd +0x199:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081cf002 +0x19e:  lea    -0x24(%ebp),%edx
081cf005 +0x1a1:  mov    %edx,0x8(%esp)
081cf009 +0x1a5:  movl   $0x2,0x4(%esp)
081cf011 +0x1ad:  mov    %eax,(%esp)
081cf014 +0x1b0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081cf019 +0x1b5:  mov    $0x0,%ebx
081cf01e +0x1ba:  lea    -0x24(%ebp),%eax
081cf021 +0x1bd:  mov    %eax,(%esp)
081cf024 +0x1c0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081cf029 +0x1c5:  jmp    081cf046 <+0x1e2>
081cf02b +0x1c7:  mov    %edx,%ebx
081cf02d +0x1c9:  mov    %eax,%esi
081cf02f +0x1cb:  lea    -0x24(%ebp),%eax
081cf032 +0x1ce:  mov    %eax,(%esp)
081cf035 +0x1d1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081cf03a +0x1d6:  mov    %esi,%eax
081cf03c +0x1d8:  mov    %ebx,%edx
081cf03e +0x1da:  mov    %eax,(%esp)
081cf041 +0x1dd:  call   08ae3750 <_Unwind_Resume>
081cf046 +0x1e2:  mov    %ebx,%eax
081cf048 +0x1e4:  add    $0x30,%esp
081cf04b +0x1e7:  pop    %ebx
081cf04c +0x1e8:  pop    %esi
081cf04d +0x1e9:  pop    %ebp
081cf04e +0x1ea:  ret
081cf04f +0x1eb:  nop
```

## 反编译 C

```c
// Dispatcher_SaveGameOption_2::process @ 0x81cee64

/* Dispatcher_SaveGameOption_2::process(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_SaveGameOption_2::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  SIG_LOAD_CHARAC_HOTKEY_OPTION SVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  undefined4 uVar6;
  CStreamGuard local_28 [8];
  int local_20;
  ParamBase *local_1c;
  CGameOption *local_18;
  uchar local_11;
  SIG_LOAD_CHARAC_HOTKEY_OPTION *local_10;
  
  iVar3 = check_error(param_1,param_2);
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      iVar3 = -1;
    }
    else {
      local_1c = param_3;
      local_20 = iVar3;
      local_18 = (CGameOption *)CUser::GetGameOptionRef((CUser *)param_2);
      iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
      local_11 = CUser::GetCharacHotKeyType((CUser *)param_2,iVar3);
      cVar1 = CGameOption::IsHotKeyOptionChanged
                        (local_18,local_11,(CHotkeyOption *)(local_1c + 0x11));
      if (cVar1 == '\x01') {
        CGameOption::SetHotKeyOption(local_18,local_11,(CHotkeyOption *)(local_1c + 0x11));
        pSVar4 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x28e1)
        ;
        CStreamGuard::CStreamGuard(local_28,pSVar4,true);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 081cef6c to 081cf018 has its CatchHandler @ 081cf02b */
        CStreamGuard::operator<<(pCVar5,0x131);
        iVar3 = CUser::GetUID((CUser *)param_2);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_28);
        CStreamGuard::operator<<(pCVar5,iVar3);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_28);
        local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_CHARAC_HOTKEY_OPTION>(pCVar5);
        uVar6 = CUser::get_acc_id((CUser *)param_2);
        *(undefined4 *)local_10 = uVar6;
        iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
        SVar2 = (SIG_LOAD_CHARAC_HOTKEY_OPTION)CUser::GetCharacHotKeyType((CUser *)param_2,iVar3);
        local_10[4] = SVar2;
        memcpy(local_10 + 5,local_1c + 0x11,0xbc);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
        iVar3 = 0;
        CStreamGuard::~CStreamGuard(local_28);
      }
      else {
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}
```
