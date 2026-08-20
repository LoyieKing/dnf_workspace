# process

`_ZN27Dispatcher_SaveGameOption_17processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SaveGameOption_1::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveGameOption_1` | `0x081ceb38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ceb38  _ZN27Dispatcher_SaveGameOption_17processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SaveGameOption_1::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ceb38, 0x081ced4d]
081ceb38 +0x000:  push   %ebp
081ceb39 +0x001:  mov    %esp,%ebp
081ceb3b +0x003:  push   %esi
081ceb3c +0x004:  push   %ebx
081ceb3d +0x005:  sub    $0x30,%esp
081ceb40 +0x008:  mov    0x10(%ebp),%eax
081ceb43 +0x00b:  mov    %eax,0x8(%esp)
081ceb47 +0x00f:  mov    0xc(%ebp),%eax
081ceb4a +0x012:  mov    %eax,0x4(%esp)
081ceb4e +0x016:  mov    0x8(%ebp),%eax
081ceb51 +0x019:  mov    %eax,(%esp)
081ceb54 +0x01c:  call   081ced4e <_ZN27Dispatcher_SaveGameOption_111check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_SaveGameOption_1::check_error(CUser*, MSG_BASE&)
081ceb59 +0x021:  mov    %eax,-0x18(%ebp)
081ceb5c +0x024:  cmpl   $0x0,-0x18(%ebp)
081ceb60 +0x028:  jle    081ceb6a <+0x32>
081ceb62 +0x02a:  mov    -0x18(%ebp),%ebx
081ceb65 +0x02d:  jmp    081ced44 <+0x20c>
081ceb6a +0x032:  cmpl   $0x0,-0x18(%ebp)
081ceb6e +0x036:  jns    081ceb7a <+0x42>
081ceb70 +0x038:  mov    $0xffffffff,%ebx
081ceb75 +0x03d:  jmp    081ced44 <+0x20c>
081ceb7a +0x042:  mov    0x10(%ebp),%eax
081ceb7d +0x045:  mov    %eax,-0x14(%ebp)
081ceb80 +0x048:  mov    -0x14(%ebp),%eax
081ceb83 +0x04b:  add    $0x11,%eax
081ceb86 +0x04e:  movl   $0x1,0x4(%esp)
081ceb8e +0x056:  mov    %eax,(%esp)
081ceb91 +0x059:  call   0822ab72 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21c
081ceb96 +0x05e:  movswl %ax,%ebx
081ceb99 +0x061:  mov    0xc(%ebp),%eax
081ceb9c +0x064:  mov    %eax,(%esp)
081ceb9f +0x067:  call   0868beb4 <_ZN15CUserCharacInfo30get_charac_visible_grow_avatarEv>  ; CUserCharacInfo::get_charac_visible_grow_avatar()
081ceba4 +0x06c:  movzbl %al,%eax
081ceba7 +0x06f:  cmp    %eax,%ebx
081ceba9 +0x071:  setne  %al
081cebac +0x074:  test   %al,%al
081cebae +0x076:  je     081cebf9 <+0xc1>
081cebb0 +0x078:  mov    -0x14(%ebp),%eax
081cebb3 +0x07b:  add    $0x11,%eax
081cebb6 +0x07e:  movl   $0x1,0x4(%esp)
081cebbe +0x086:  mov    %eax,(%esp)
081cebc1 +0x089:  call   0822ab72 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x21c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x21c
081cebc6 +0x08e:  test   %ax,%ax
081cebc9 +0x091:  setne  %al
081cebcc +0x094:  movzbl %al,%edx
081cebcf +0x097:  mov    0xc(%ebp),%eax
081cebd2 +0x09a:  mov    %edx,0x4(%esp)
081cebd6 +0x09e:  mov    %eax,(%esp)
081cebd9 +0x0a1:  call   0868be30 <_ZN15CUserCharacInfo30set_charac_visible_grow_avatarEb>  ; CUserCharacInfo::set_charac_visible_grow_avatar(bool)
081cebde +0x0a6:  mov    0xc(%ebp),%eax
081cebe1 +0x0a9:  mov    %eax,(%esp)
081cebe4 +0x0ac:  call   0868bf98 <_ZN5CUser24send_charac_visible_dataEv>  ; CUser::send_charac_visible_data()
081cebe9 +0x0b1:  mov    0xc(%ebp),%eax
081cebec +0x0b4:  add    $0x796f4,%eax
081cebf1 +0x0b9:  mov    %eax,(%esp)
081cebf4 +0x0bc:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
081cebf9 +0x0c1:  mov    0xc(%ebp),%eax
081cebfc +0x0c4:  mov    %eax,(%esp)
081cebff +0x0c7:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
081cec04 +0x0cc:  mov    %eax,-0x10(%ebp)
081cec07 +0x0cf:  mov    -0x14(%ebp),%eax
081cec0a +0x0d2:  add    $0x11,%eax
081cec0d +0x0d5:  mov    %eax,0x4(%esp)
081cec11 +0x0d9:  mov    -0x10(%ebp),%eax
081cec14 +0x0dc:  mov    %eax,(%esp)
081cec17 +0x0df:  call   084b6f46 <_ZN11CGameOption18IsEtcOptionChangedER10CETCOption>  ; CGameOption::IsEtcOptionChanged(CETCOption&)
081cec1c +0x0e4:  xor    $0x1,%eax
081cec1f +0x0e7:  test   %al,%al
081cec21 +0x0e9:  je     081cec2d <+0xf5>
081cec23 +0x0eb:  mov    $0x0,%ebx
081cec28 +0x0f0:  jmp    081ced44 <+0x20c>
081cec2d +0x0f5:  mov    -0x14(%ebp),%eax
081cec30 +0x0f8:  add    $0x11,%eax
081cec33 +0x0fb:  mov    %eax,0x4(%esp)
081cec37 +0x0ff:  mov    -0x10(%ebp),%eax
081cec3a +0x102:  mov    %eax,(%esp)
081cec3d +0x105:  call   084b6df4 <_ZN11CGameOption12SetEtcOptionER10CETCOption>  ; CGameOption::SetEtcOption(CETCOption&)
081cec42 +0x10a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081cec47 +0x10f:  movl   $0x2899,0x8(%esp)
081cec4f +0x117:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081cec57 +0x11f:  mov    %eax,(%esp)
081cec5a +0x122:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081cec5f +0x127:  movl   $0x1,0x8(%esp)
081cec67 +0x12f:  mov    %eax,0x4(%esp)
081cec6b +0x133:  lea    -0x20(%ebp),%eax
081cec6e +0x136:  mov    %eax,(%esp)
081cec71 +0x139:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081cec76 +0x13e:  lea    -0x20(%ebp),%eax
081cec79 +0x141:  mov    %eax,(%esp)
081cec7c +0x144:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081cec81 +0x149:  movl   $0x130,0x4(%esp)
081cec89 +0x151:  mov    %eax,(%esp)
081cec8c +0x154:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081cec91 +0x159:  mov    0xc(%ebp),%eax
081cec94 +0x15c:  mov    %eax,(%esp)
081cec97 +0x15f:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081cec9c +0x164:  mov    %eax,%ebx
081cec9e +0x166:  lea    -0x20(%ebp),%eax
081ceca1 +0x169:  mov    %eax,(%esp)
081ceca4 +0x16c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081ceca9 +0x171:  mov    %ebx,0x4(%esp)
081cecad +0x175:  mov    %eax,(%esp)
081cecb0 +0x178:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081cecb5 +0x17d:  lea    -0x20(%ebp),%eax
081cecb8 +0x180:  mov    %eax,(%esp)
081cecbb +0x183:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081cecc0 +0x188:  mov    %eax,(%esp)
081cecc3 +0x18b:  call   08236e9e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc548>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc548
081cecc8 +0x190:  mov    %eax,-0xc(%ebp)
081ceccb +0x193:  mov    0xc(%ebp),%eax
081cecce +0x196:  mov    %eax,(%esp)
081cecd1 +0x199:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cecd6 +0x19e:  mov    -0xc(%ebp),%edx
081cecd9 +0x1a1:  mov    %eax,(%edx)
081cecdb +0x1a3:  mov    -0x14(%ebp),%eax
081cecde +0x1a6:  lea    0x11(%eax),%edx
081cece1 +0x1a9:  mov    -0xc(%ebp),%eax
081cece4 +0x1ac:  add    $0x4,%eax
081cece7 +0x1af:  movl   $0x48,0x8(%esp)
081cecef +0x1b7:  mov    %edx,0x4(%esp)
081cecf3 +0x1bb:  mov    %eax,(%esp)
081cecf6 +0x1be:  call   0807d8a0 <_init+0x198>
081cecfb +0x1c3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081ced00 +0x1c8:  lea    -0x20(%ebp),%edx
081ced03 +0x1cb:  mov    %edx,0x8(%esp)
081ced07 +0x1cf:  movl   $0x2,0x4(%esp)
081ced0f +0x1d7:  mov    %eax,(%esp)
081ced12 +0x1da:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081ced17 +0x1df:  mov    $0x0,%ebx
081ced1c +0x1e4:  lea    -0x20(%ebp),%eax
081ced1f +0x1e7:  mov    %eax,(%esp)
081ced22 +0x1ea:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081ced27 +0x1ef:  jmp    081ced44 <+0x20c>
081ced29 +0x1f1:  mov    %edx,%ebx
081ced2b +0x1f3:  mov    %eax,%esi
081ced2d +0x1f5:  lea    -0x20(%ebp),%eax
081ced30 +0x1f8:  mov    %eax,(%esp)
081ced33 +0x1fb:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081ced38 +0x200:  mov    %esi,%eax
081ced3a +0x202:  mov    %ebx,%edx
081ced3c +0x204:  mov    %eax,(%esp)
081ced3f +0x207:  call   08ae3750 <_Unwind_Resume>
081ced44 +0x20c:  mov    %ebx,%eax
081ced46 +0x20e:  add    $0x30,%esp
081ced49 +0x211:  pop    %ebx
081ced4a +0x212:  pop    %esi
081ced4b +0x213:  pop    %ebp
081ced4c +0x214:  ret
081ced4d +0x215:  nop
```

## 反编译 C

```c
// Dispatcher_SaveGameOption_1::process @ 0x81ceb38

/* Dispatcher_SaveGameOption_1::process(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_SaveGameOption_1::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  undefined4 uVar8;
  ParamBase *pPVar9;
  CStreamGuard local_24 [8];
  int local_1c;
  ParamBase *local_18;
  CGameOption *local_14;
  SIG_SAVE_GAME_OPTION_1 *local_10;
  
  pPVar9 = param_3;
  iVar5 = check_error(param_1,param_2);
  if (iVar5 < 1) {
    if (iVar5 < 0) {
      iVar5 = -1;
    }
    else {
      local_18 = param_3;
      local_1c = iVar5;
      uVar2 = CETCOption::getETCOption((CETCOption *)(param_3 + 0x11),1,pPVar9);
      uVar3 = CUserCharacInfo::get_charac_visible_grow_avatar((CUserCharacInfo *)param_2);
      if (uVar2 != (uVar3 & 0xff)) {
        sVar4 = CETCOption::getETCOption((CETCOption *)(local_18 + 0x11),1,pPVar9);
        CUserCharacInfo::set_charac_visible_grow_avatar((CUserCharacInfo *)param_2,sVar4 != 0);
        CUser::send_charac_visible_data((CUser *)param_2);
        CCharacterView::enableSaveCharacView((CCharacterView *)(param_2 + 0x796f4));
      }
      local_14 = (CGameOption *)CUser::GetGameOptionRef((CUser *)param_2);
      cVar1 = CGameOption::IsEtcOptionChanged(local_14,(CETCOption *)(local_18 + 0x11));
      if (cVar1 == '\x01') {
        CGameOption::SetEtcOption(local_14,(CETCOption *)(local_18 + 0x11));
        pSVar6 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x2899)
        ;
        CStreamGuard::CStreamGuard(local_24,pSVar6,true);
        pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 081cec8c to 081ced16 has its CatchHandler @ 081ced29 */
        CStreamGuard::operator<<(pCVar7,0x130);
        iVar5 = CUser::GetUID((CUser *)param_2);
        pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_24);
        CStreamGuard::operator<<(pCVar7,iVar5);
        pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_24);
        local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_GAME_OPTION_1>(pCVar7);
        uVar8 = CUser::get_acc_id((CUser *)param_2);
        *(undefined4 *)local_10 = uVar8;
        memcpy(local_10 + 4,local_18 + 0x11,0x48);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
        iVar5 = 0;
        CStreamGuard::~CStreamGuard(local_24);
      }
      else {
        iVar5 = 0;
      }
    }
  }
  return iVar5;
}
```
