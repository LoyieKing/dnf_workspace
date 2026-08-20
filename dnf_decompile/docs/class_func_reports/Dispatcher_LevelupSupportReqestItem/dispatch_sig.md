# dispatch_sig

`_ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_LevelupSupportReqestItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_LevelupSupportReqestItem` | `0x0825fc3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825fc3a  _ZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_LevelupSupportReqestItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x0825fc3a, 0x0825fed9]
0825fc3a +0x000:  push   %ebp
0825fc3b +0x001:  mov    %esp,%ebp
0825fc3d +0x003:  push   %esi
0825fc3e +0x004:  push   %ebx
0825fc3f +0x005:  sub    $0x40,%esp
0825fc42 +0x008:  cmpl   $0x0,0xc(%ebp)
0825fc46 +0x00c:  jne    0825fc52 <+0x18>
0825fc48 +0x00e:  mov    $0xa49,%eax
0825fc4d +0x013:  jmp    0825fed3 <+0x299>
0825fc52 +0x018:  mov    0xc(%ebp),%eax
0825fc55 +0x01b:  mov    %eax,(%esp)
0825fc58 +0x01e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0825fc5d +0x023:  cmp    $0x2,%eax
0825fc60 +0x026:  setle  %al
0825fc63 +0x029:  test   %al,%al
0825fc65 +0x02b:  je     0825fc71 <+0x37>
0825fc67 +0x02d:  mov    $0x0,%eax
0825fc6c +0x032:  jmp    0825fed3 <+0x299>
0825fc71 +0x037:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0825fc76 +0x03c:  movl   $0x9e,0x4(%esp)
0825fc7e +0x044:  mov    %eax,(%esp)
0825fc81 +0x047:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0825fc86 +0x04c:  mov    (%eax),%edx
0825fc88 +0x04e:  add    $0x34,%edx
0825fc8b +0x051:  mov    (%edx),%edx
0825fc8d +0x053:  movl   $0x0,0x4(%esp)
0825fc95 +0x05b:  mov    %eax,(%esp)
0825fc98 +0x05e:  call   *%edx
0825fc9a +0x060:  xor    $0x1,%eax
0825fc9d +0x063:  test   %al,%al
0825fc9f +0x065:  je     0825fd09 <+0xcf>
0825fca1 +0x067:  movl   $0x1,0x8(%esp)
0825fca9 +0x06f:  movl   $0x255,0x4(%esp)
0825fcb1 +0x077:  mov    0xc(%ebp),%eax
0825fcb4 +0x07a:  mov    %eax,(%esp)
0825fcb7 +0x07d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0825fcbc +0x082:  mov    0xc(%ebp),%eax
0825fcbf +0x085:  mov    %eax,(%esp)
0825fcc2 +0x088:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0825fcc7 +0x08d:  movl   $0x1,0x18(%esp)
0825fccf +0x095:  mov    %eax,0x14(%esp)
0825fcd3 +0x099:  movl   $"charac_no:%d, error:%d",0x10(%esp)
0825fcdb +0x0a1:  movl   $0xa50,0xc(%esp)
0825fce3 +0x0a9:  movl   $&_ZZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
0825fceb +0x0b1:  movl   $"PacketDispatcher_Impl_2.cpp",0x4(%esp)
0825fcf3 +0x0b9:  movl   $0x1,(%esp)
0825fcfa +0x0c0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0825fcff +0x0c5:  mov    $0x0,%eax
0825fd04 +0x0ca:  jmp    0825fed3 <+0x299>
0825fd09 +0x0cf:  movl   $0x0,-0x10(%ebp)
0825fd10 +0x0d6:  lea    -0x10(%ebp),%eax
0825fd13 +0x0d9:  mov    %eax,0x4(%esp)
0825fd17 +0x0dd:  mov    0x10(%ebp),%eax
0825fd1a +0x0e0:  mov    %eax,(%esp)
0825fd1d +0x0e3:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0825fd22 +0x0e8:  xor    $0x1,%eax
0825fd25 +0x0eb:  test   %al,%al
0825fd27 +0x0ed:  je     0825fd33 <+0xf9>
0825fd29 +0x0ef:  mov    $0xa56,%eax
0825fd2e +0x0f4:  jmp    0825fed3 <+0x299>
0825fd33 +0x0f9:  movl   $0x0,-0x14(%ebp)
0825fd3a +0x100:  mov    -0x10(%ebp),%ebx
0825fd3d +0x103:  call   08147d68 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x25b>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x25b
0825fd42 +0x108:  mov    %ebx,0x4(%esp)
0825fd46 +0x10c:  mov    %eax,(%esp)
0825fd49 +0x10f:  call   08147362 <_ZN25LevelupSupportEventManger12GetStepIndexEi>  ; LevelupSupportEventManger::GetStepIndex(int)
0825fd4e +0x114:  mov    %eax,-0xc(%ebp)
0825fd51 +0x117:  cmpl   $0xffffffff,-0xc(%ebp)
0825fd55 +0x11b:  jne    0825fd5e <+0x124>
0825fd57 +0x11d:  movl   $0x1,-0x14(%ebp)
0825fd5e +0x124:  mov    -0xc(%ebp),%eax
0825fd61 +0x127:  mov    0xc(%ebp),%edx
0825fd64 +0x12a:  add    $0x8d0e4,%edx
0825fd6a +0x130:  mov    %eax,0x4(%esp)
0825fd6e +0x134:  mov    %edx,(%esp)
0825fd71 +0x137:  call   08147d16 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x209>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x209
0825fd76 +0x13c:  movzwl 0x2(%eax),%eax
0825fd7a +0x140:  movzwl %ax,%eax
0825fd7d +0x143:  cmp    $0x1,%eax
0825fd80 +0x146:  je     0825fd94 <+0x15a>
0825fd82 +0x148:  cmp    $0x2,%eax
0825fd85 +0x14b:  je     0825fdaf <+0x175>
0825fd87 +0x14d:  test   %eax,%eax
0825fd89 +0x14f:  jne    0825fdb6 <+0x17c>
0825fd8b +0x151:  movl   $0x13,-0x14(%ebp)
0825fd92 +0x158:  jmp    0825fdb6 <+0x17c>
0825fd94 +0x15a:  lea    -0x14(%ebp),%eax
0825fd97 +0x15d:  mov    %eax,0x8(%esp)
0825fd9b +0x161:  mov    -0xc(%ebp),%eax
0825fd9e +0x164:  mov    %eax,0x4(%esp)
0825fda2 +0x168:  mov    0xc(%ebp),%eax
0825fda5 +0x16b:  mov    %eax,(%esp)
0825fda8 +0x16e:  call   081473cc <_ZN25LevelupSupportEventManger10InsertItemEP5CUseriR10ENUM_ERROR>  ; LevelupSupportEventManger::InsertItem(CUser*, int, ENUM_ERROR&)
0825fdad +0x173:  jmp    0825fdb6 <+0x17c>
0825fdaf +0x175:  movl   $0x12,-0x14(%ebp)
0825fdb6 +0x17c:  mov    -0x14(%ebp),%eax
0825fdb9 +0x17f:  test   %eax,%eax
0825fdbb +0x181:  jne    0825fe66 <+0x22c>
0825fdc1 +0x187:  lea    -0x20(%ebp),%eax
0825fdc4 +0x18a:  mov    %eax,(%esp)
0825fdc7 +0x18d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0825fdcc +0x192:  lea    -0x20(%ebp),%eax
0825fdcf +0x195:  mov    %eax,(%esp)
0825fdd2 +0x198:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0825fdd7 +0x19d:  movl   $0x255,0x8(%esp)
0825fddf +0x1a5:  movl   $0x1,0x4(%esp)
0825fde7 +0x1ad:  lea    -0x20(%ebp),%eax
0825fdea +0x1b0:  mov    %eax,(%esp)
0825fded +0x1b3:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0825fdf2 +0x1b8:  movl   $0x1,0x4(%esp)
0825fdfa +0x1c0:  lea    -0x20(%ebp),%eax
0825fdfd +0x1c3:  mov    %eax,(%esp)
0825fe00 +0x1c6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0825fe05 +0x1cb:  mov    -0x10(%ebp),%eax
0825fe08 +0x1ce:  mov    %eax,0x4(%esp)
0825fe0c +0x1d2:  lea    -0x20(%ebp),%eax
0825fe0f +0x1d5:  mov    %eax,(%esp)
0825fe12 +0x1d8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0825fe17 +0x1dd:  movl   $0x1,0x4(%esp)
0825fe1f +0x1e5:  lea    -0x20(%ebp),%eax
0825fe22 +0x1e8:  mov    %eax,(%esp)
0825fe25 +0x1eb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0825fe2a +0x1f0:  lea    -0x20(%ebp),%eax
0825fe2d +0x1f3:  mov    %eax,0x4(%esp)
0825fe31 +0x1f7:  mov    0xc(%ebp),%eax
0825fe34 +0x1fa:  mov    %eax,(%esp)
0825fe37 +0x1fd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0825fe3c +0x202:  jmp    0825fe59 <+0x21f>
0825fe3e +0x204:  mov    %edx,%ebx
0825fe40 +0x206:  mov    %eax,%esi
0825fe42 +0x208:  lea    -0x20(%ebp),%eax
0825fe45 +0x20b:  mov    %eax,(%esp)
0825fe48 +0x20e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0825fe4d +0x213:  mov    %esi,%eax
0825fe4f +0x215:  mov    %ebx,%edx
0825fe51 +0x217:  mov    %eax,(%esp)
0825fe54 +0x21a:  call   08ae3750 <_Unwind_Resume>
0825fe59 +0x21f:  lea    -0x20(%ebp),%eax
0825fe5c +0x222:  mov    %eax,(%esp)
0825fe5f +0x225:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0825fe64 +0x22a:  jmp    0825fece <+0x294>
0825fe66 +0x22c:  mov    -0x14(%ebp),%eax
0825fe69 +0x22f:  movzbl %al,%eax
0825fe6c +0x232:  mov    %eax,0x8(%esp)
0825fe70 +0x236:  movl   $0x255,0x4(%esp)
0825fe78 +0x23e:  mov    0xc(%ebp),%eax
0825fe7b +0x241:  mov    %eax,(%esp)
0825fe7e +0x244:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0825fe83 +0x249:  mov    -0x14(%ebp),%eax
0825fe86 +0x24c:  mov    %eax,%esi
0825fe88 +0x24e:  mov    -0x10(%ebp),%ebx
0825fe8b +0x251:  mov    0xc(%ebp),%eax
0825fe8e +0x254:  mov    %eax,(%esp)
0825fe91 +0x257:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0825fe96 +0x25c:  mov    %esi,0x1c(%esp)
0825fe9a +0x260:  mov    %ebx,0x18(%esp)
0825fe9e +0x264:  mov    %eax,0x14(%esp)
0825fea2 +0x268:  movl   $"charac_no:%d, request_level:%d, error:%d",0x10(%esp)
0825feaa +0x270:  movl   $0xa78,0xc(%esp)
0825feb2 +0x278:  movl   $&_ZZN35Dispatcher_LevelupSupportReqestItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
0825feba +0x280:  movl   $"PacketDispatcher_Impl_2.cpp",0x4(%esp)
0825fec2 +0x288:  movl   $0x1,(%esp)
0825fec9 +0x28f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0825fece +0x294:  mov    $0x0,%eax
0825fed3 +0x299:  add    $0x40,%esp
0825fed6 +0x29c:  pop    %ebx
0825fed7 +0x29d:  pop    %esi
0825fed8 +0x29e:  pop    %ebp
0825fed9 +0x29f:  ret
```

## 反编译 C

```c
// Dispatcher_LevelupSupportReqestItem::dispatch_sig @ 0x825fc3a

/* Dispatcher_LevelupSupportReqestItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_LevelupSupportReqestItem::dispatch_sig
          (Dispatcher_LevelupSupportReqestItem *this,CUser *param_1,PacketBuf *param_2)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  PacketGuard local_24 [12];
  uint local_18;
  int local_14;
  uint local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar4 = 0xa49;
  }
  else {
    iVar5 = CUser::get_state(param_1);
    if (iVar5 < 3) {
      uVar4 = 0;
    }
    else {
      piVar6 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x9e);
      cVar3 = (**(code **)(*piVar6 + 0x34))(piVar6,0);
      if (cVar3 == '\x01') {
        local_14 = 0;
        cVar3 = PacketBuf::get_int(param_2,&local_14);
        if (cVar3 == '\x01') {
          local_18 = 0;
          iVar5 = ARAD::Singleton<LevelupSupportEventManger>::Get();
          local_10 = LevelupSupportEventManger::GetStepIndex(iVar5);
          if (local_10 == 0xffffffff) {
            local_18 = 1;
          }
          iVar5 = std::
                  vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                  ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                                *)(param_1 + 0x8d0e4),local_10);
          sVar1 = *(short *)(iVar5 + 2);
          if (sVar1 == 1) {
            LevelupSupportEventManger::InsertItem(param_1,local_10,(ENUM_ERROR *)&local_18);
          }
          else if (sVar1 == 2) {
            local_18 = 0x12;
          }
          else if (sVar1 == 0) {
            local_18 = 0x13;
          }
          if (local_18 == 0) {
            PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0825fdd2 to 0825fe3b has its CatchHandler @ 0825fe3e */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x255);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
            CUser::Send(param_1,local_24);
            PacketGuard::~PacketGuard(local_24);
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x255,local_18 & 0xff);
            iVar5 = local_14;
            uVar2 = local_18;
            uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            LogManager::logFormat
                      (1,"PacketDispatcher_Impl_2.cpp",
                       "virtual int Dispatcher_LevelupSupportReqestItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0xa78,"charac_no:%d, request_level:%d, error:%d",uVar4,iVar5,uVar2);
          }
          uVar4 = 0;
        }
        else {
          uVar4 = 0xa56;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x255,1);
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        LogManager::logFormat
                  (1,"PacketDispatcher_Impl_2.cpp",
                   "virtual int Dispatcher_LevelupSupportReqestItem::dispatch_sig(CUser*, PacketBuf&)"
                   ,0xa50,"charac_no:%d, error:%d",uVar4,1);
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}
```
