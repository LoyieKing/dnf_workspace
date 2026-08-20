# dispatch_sig

`_ZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_RequestOnTimeEventReward::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestOnTimeEventReward` | `0x0822458c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0822458c  _ZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_RequestOnTimeEventReward::dispatch_sig(CUser*, PacketBuf&)
# range [0x0822458c, 0x08224909]
0822458c +0x000:  push   %ebp
0822458d +0x001:  mov    %esp,%ebp
0822458f +0x003:  push   %edi
08224590 +0x004:  push   %esi
08224591 +0x005:  push   %ebx
08224592 +0x006:  sub    $0x14c,%esp
08224598 +0x00c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0822459d +0x011:  mov    %eax,(%esp)
082245a0 +0x014:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
082245a5 +0x019:  test   %al,%al
082245a7 +0x01b:  je     082245b3 <+0x27>
082245a9 +0x01d:  mov    $0x0,%eax
082245ae +0x022:  jmp    082248fe <+0x372>
082245b3 +0x027:  mov    0xc(%ebp),%eax
082245b6 +0x02a:  mov    %eax,(%esp)
082245b9 +0x02d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082245be +0x032:  cmp    $0x3,%eax
082245c1 +0x035:  setne  %al
082245c4 +0x038:  test   %al,%al
082245c6 +0x03a:  je     082245ed <+0x61>
082245c8 +0x03c:  movl   $0xd8,0x8(%esp)
082245d0 +0x044:  movl   $0x120,0x4(%esp)
082245d8 +0x04c:  mov    0xc(%ebp),%eax
082245db +0x04f:  mov    %eax,(%esp)
082245de +0x052:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082245e3 +0x057:  mov    $0x0,%eax
082245e8 +0x05c:  jmp    082248fe <+0x372>
082245ed +0x061:  mov    &_ZN10GlobalData15s_event_managerE,%eax
082245f2 +0x066:  movl   $0x33,0x4(%esp)
082245fa +0x06e:  mov    %eax,(%esp)
082245fd +0x071:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08224602 +0x076:  mov    %eax,-0x1c(%ebp)
08224605 +0x079:  cmpl   $0x0,-0x1c(%ebp)
08224609 +0x07d:  je     08224708 <+0x17c>
0822460f +0x083:  mov    -0x1c(%ebp),%eax
08224612 +0x086:  mov    (%eax),%eax
08224614 +0x088:  add    $0x34,%eax
08224617 +0x08b:  mov    (%eax),%edx
08224619 +0x08d:  mov    -0x1c(%ebp),%eax
0822461c +0x090:  movl   $0x0,0x4(%esp)
08224624 +0x098:  mov    %eax,(%esp)
08224627 +0x09b:  call   *%edx
08224629 +0x09d:  xor    $0x1,%eax
0822462c +0x0a0:  test   %al,%al
0822462e +0x0a2:  je     08224712 <+0x186>
08224634 +0x0a8:  movl   $0x13,0x8(%esp)
0822463c +0x0b0:  movl   $0x120,0x4(%esp)
08224644 +0x0b8:  mov    0xc(%ebp),%eax
08224647 +0x0bb:  mov    %eax,(%esp)
0822464a +0x0be:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822464f +0x0c3:  lea    -0x134(%ebp),%ebx
08224655 +0x0c9:  mov    $0x0,%eax
0822465a +0x0ce:  mov    $0x40,%edx
0822465f +0x0d3:  mov    %ebx,%edi
08224661 +0x0d5:  mov    %edx,%ecx
08224663 +0x0d7:  rep stos %eax,%es:(%edi)
08224665 +0x0d9:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0822466a +0x0de:  mov    %eax,(%esp)
0822466d +0x0e1:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
08224672 +0x0e6:  mov    %eax,0x8(%esp)
08224676 +0x0ea:  movl   $"./log/%s/OnTimeEvent",0x4(%esp)
0822467e +0x0f2:  lea    -0x134(%ebp),%eax
08224684 +0x0f8:  mov    %eax,(%esp)
08224687 +0x0fb:  call   0807e440 <_init+0xd38>
0822468c +0x100:  movl   $0xffffffff,0x4(%esp)
08224694 +0x108:  mov    0xc(%ebp),%eax
08224697 +0x10b:  mov    %eax,(%esp)
0822469a +0x10e:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0822469f +0x113:  mov    %eax,%esi
082246a1 +0x115:  mov    0xc(%ebp),%eax
082246a4 +0x118:  mov    %eax,(%esp)
082246a7 +0x11b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
082246ac +0x120:  movl   $0x0,0x4(%esp)
082246b4 +0x128:  mov    %eax,(%esp)
082246b7 +0x12b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
082246bc +0x130:  mov    %eax,%ebx
082246be +0x132:  movl   $0xdf01,0x8(%esp)
082246c6 +0x13a:  movl   $&_ZZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082246ce +0x142:  lea    -0x34(%ebp),%eax
082246d1 +0x145:  mov    %eax,(%esp)
082246d4 +0x148:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
082246d9 +0x14d:  mov    %esi,0x10(%esp)
082246dd +0x151:  mov    %ebx,0xc(%esp)
082246e1 +0x155:  movl   $"On Time Event:Request Reward IsEventing error m_id(%s) charac_no(%u)",0x8(%esp)
082246e9 +0x15d:  lea    -0x134(%ebp),%eax
082246ef +0x163:  mov    %eax,0x4(%esp)
082246f3 +0x167:  lea    -0x34(%ebp),%eax
082246f6 +0x16a:  mov    %eax,(%esp)
082246f9 +0x16d:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
082246fe +0x172:  mov    $0x0,%eax
08224703 +0x177:  jmp    082248fe <+0x372>
08224708 +0x17c:  mov    $0x0,%eax
0822470d +0x181:  jmp    082248fe <+0x372>
08224712 +0x186:  mov    -0x1c(%ebp),%eax
08224715 +0x189:  mov    %eax,(%esp)
08224718 +0x18c:  call   081bb96c <_ZN12COnTimeEvent16get_reward_stateEv>  ; COnTimeEvent::get_reward_state()
0822471d +0x191:  test   %eax,%eax
0822471f +0x193:  setne  %al
08224722 +0x196:  test   %al,%al
08224724 +0x198:  je     082247fe <+0x272>
0822472a +0x19e:  movl   $0x13,0x8(%esp)
08224732 +0x1a6:  movl   $0x120,0x4(%esp)
0822473a +0x1ae:  mov    0xc(%ebp),%eax
0822473d +0x1b1:  mov    %eax,(%esp)
08224740 +0x1b4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08224745 +0x1b9:  lea    -0x134(%ebp),%ebx
0822474b +0x1bf:  mov    $0x0,%eax
08224750 +0x1c4:  mov    $0x40,%edx
08224755 +0x1c9:  mov    %ebx,%edi
08224757 +0x1cb:  mov    %edx,%ecx
08224759 +0x1cd:  rep stos %eax,%es:(%edi)
0822475b +0x1cf:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08224760 +0x1d4:  mov    %eax,(%esp)
08224763 +0x1d7:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
08224768 +0x1dc:  mov    %eax,0x8(%esp)
0822476c +0x1e0:  movl   $"./log/%s/OnTimeEvent",0x4(%esp)
08224774 +0x1e8:  lea    -0x134(%ebp),%eax
0822477a +0x1ee:  mov    %eax,(%esp)
0822477d +0x1f1:  call   0807e440 <_init+0xd38>
08224782 +0x1f6:  movl   $0xffffffff,0x4(%esp)
0822478a +0x1fe:  mov    0xc(%ebp),%eax
0822478d +0x201:  mov    %eax,(%esp)
08224790 +0x204:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08224795 +0x209:  mov    %eax,%esi
08224797 +0x20b:  mov    0xc(%ebp),%eax
0822479a +0x20e:  mov    %eax,(%esp)
0822479d +0x211:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
082247a2 +0x216:  movl   $0x0,0x4(%esp)
082247aa +0x21e:  mov    %eax,(%esp)
082247ad +0x221:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
082247b2 +0x226:  mov    %eax,%ebx
082247b4 +0x228:  movl   $0xdf14,0x8(%esp)
082247bc +0x230:  movl   $&_ZZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082247c4 +0x238:  lea    -0x2c(%ebp),%eax
082247c7 +0x23b:  mov    %eax,(%esp)
082247ca +0x23e:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
082247cf +0x243:  mov    %esi,0x10(%esp)
082247d3 +0x247:  mov    %ebx,0xc(%esp)
082247d7 +0x24b:  movl   $"On Time Event:Request Reward ENUM_ONTIME_EVENT_ON_REWARD_ON error m_id(%s) charac_no(%u)",0x8(%esp)
082247df +0x253:  lea    -0x134(%ebp),%eax
082247e5 +0x259:  mov    %eax,0x4(%esp)
082247e9 +0x25d:  lea    -0x2c(%ebp),%eax
082247ec +0x260:  mov    %eax,(%esp)
082247ef +0x263:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
082247f4 +0x268:  mov    $0x0,%eax
082247f9 +0x26d:  jmp    082248fe <+0x372>
082247fe +0x272:  mov    0xc(%ebp),%eax
08224801 +0x275:  mov    %eax,(%esp)
08224804 +0x278:  call   081bc130 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x1ca>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x1ca
08224809 +0x27d:  test   %eax,%eax
0822480b +0x27f:  sete   %al
0822480e +0x282:  test   %al,%al
08224810 +0x284:  je     082248e7 <+0x35b>
08224816 +0x28a:  movl   $0x2,0x8(%esp)
0822481e +0x292:  movl   $0x120,0x4(%esp)
08224826 +0x29a:  mov    0xc(%ebp),%eax
08224829 +0x29d:  mov    %eax,(%esp)
0822482c +0x2a0:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08224831 +0x2a5:  lea    -0x134(%ebp),%ebx
08224837 +0x2ab:  mov    $0x0,%eax
0822483c +0x2b0:  mov    $0x40,%edx
08224841 +0x2b5:  mov    %ebx,%edi
08224843 +0x2b7:  mov    %edx,%ecx
08224845 +0x2b9:  rep stos %eax,%es:(%edi)
08224847 +0x2bb:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0822484c +0x2c0:  mov    %eax,(%esp)
0822484f +0x2c3:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
08224854 +0x2c8:  mov    %eax,0x8(%esp)
08224858 +0x2cc:  movl   $"./log/%s/OnTimeEvent",0x4(%esp)
08224860 +0x2d4:  lea    -0x134(%ebp),%eax
08224866 +0x2da:  mov    %eax,(%esp)
08224869 +0x2dd:  call   0807e440 <_init+0xd38>
0822486e +0x2e2:  movl   $0xffffffff,0x4(%esp)
08224876 +0x2ea:  mov    0xc(%ebp),%eax
08224879 +0x2ed:  mov    %eax,(%esp)
0822487c +0x2f0:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08224881 +0x2f5:  mov    %eax,%esi
08224883 +0x2f7:  mov    0xc(%ebp),%eax
08224886 +0x2fa:  mov    %eax,(%esp)
08224889 +0x2fd:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0822488e +0x302:  movl   $0x0,0x4(%esp)
08224896 +0x30a:  mov    %eax,(%esp)
08224899 +0x30d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0822489e +0x312:  mov    %eax,%ebx
082248a0 +0x314:  movl   $0xdf20,0x8(%esp)
082248a8 +0x31c:  movl   $&_ZZN35Dispatcher_RequestOnTimeEventReward12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082248b0 +0x324:  lea    -0x24(%ebp),%eax
082248b3 +0x327:  mov    %eax,(%esp)
082248b6 +0x32a:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
082248bb +0x32f:  mov    %esi,0x10(%esp)
082248bf +0x333:  mov    %ebx,0xc(%esp)
082248c3 +0x337:  movl   $"On Time Event:Request Reward user db error m_id(%s) charac_no(%u)",0x8(%esp)
082248cb +0x33f:  lea    -0x134(%ebp),%eax
082248d1 +0x345:  mov    %eax,0x4(%esp)
082248d5 +0x349:  lea    -0x24(%ebp),%eax
082248d8 +0x34c:  mov    %eax,(%esp)
082248db +0x34f:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
082248e0 +0x354:  mov    $0x0,%eax
082248e5 +0x359:  jmp    082248fe <+0x372>
082248e7 +0x35b:  mov    0xc(%ebp),%eax
082248ea +0x35e:  mov    %eax,0x4(%esp)
082248ee +0x362:  mov    -0x1c(%ebp),%eax
082248f1 +0x365:  mov    %eax,(%esp)
082248f4 +0x368:  call   081bb9dc <_ZN12COnTimeEvent18insert_reward_userEP5CUser>  ; COnTimeEvent::insert_reward_user(CUser*)
082248f9 +0x36d:  mov    $0x0,%eax
082248fe +0x372:  add    $0x14c,%esp
08224904 +0x378:  pop    %ebx
08224905 +0x379:  pop    %esi
08224906 +0x37a:  pop    %edi
08224907 +0x37b:  pop    %ebp
08224908 +0x37c:  ret
08224909 +0x37d:  nop
```

## 反编译 C

```c
// Dispatcher_RequestOnTimeEventReward::dispatch_sig @ 0x822458c

/* Dispatcher_RequestOnTimeEventReward::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_RequestOnTimeEventReward::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  GameWorld *this;
  int iVar2;
  CEnvironment *pCVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  byte bVar8;
  char local_138 [256];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  COnTimeEvent *local_20;
  
  bVar8 = 0;
  this = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPVPChannel(this);
  if (cVar1 == '\0') {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 3) {
      local_20 = (COnTimeEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x33);
      if (local_20 != (COnTimeEvent *)0x0) {
        cVar1 = (**(code **)(*(int *)local_20 + 0x34))(local_20,0);
        if (cVar1 == '\x01') {
          iVar2 = COnTimeEvent::get_reward_state(local_20);
          if (iVar2 == 0) {
            iVar2 = CUser::get_ontime_last_recv_idx((CUser *)param_2);
            if (iVar2 == 0) {
              CUser::SendCmdErrorPacket((CUser *)param_2,0x120,2);
              pcVar7 = local_138;
              for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
                pcVar7[0] = '\0';
                pcVar7[1] = '\0';
                pcVar7[2] = '\0';
                pcVar7[3] = '\0';
                pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
              }
              pCVar3 = (CEnvironment *)G_CEnvironment();
              uVar4 = CEnvironment::get_file_name(pCVar3);
              sprintf(local_138,"./log/%s/OnTimeEvent",uVar4);
              uVar4 = CUser::get_charac_no((CUser *)param_2,-1);
              uVar5 = CUser::get_acc_id((CUser *)param_2);
              uVar6 = NumberToString(uVar5,0);
              CMyFileLog::CMyFileLog
                        (local_28,
                         "virtual int Dispatcher_RequestOnTimeEventReward::dispatch_sig(CUser*, PacketBuf&)"
                         ,0xdf20);
              CMyFileLog::operator()
                        (local_28,local_138,
                         "On Time Event:Request Reward user db error m_id(%s) charac_no(%u)",uVar6,
                         uVar4);
            }
            else {
              COnTimeEvent::insert_reward_user(local_20,(CUser *)param_2);
            }
          }
          else {
            CUser::SendCmdErrorPacket((CUser *)param_2,0x120,0x13);
            pcVar7 = local_138;
            for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
              pcVar7[0] = '\0';
              pcVar7[1] = '\0';
              pcVar7[2] = '\0';
              pcVar7[3] = '\0';
              pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
            }
            pCVar3 = (CEnvironment *)G_CEnvironment();
            uVar4 = CEnvironment::get_file_name(pCVar3);
            sprintf(local_138,"./log/%s/OnTimeEvent",uVar4);
            uVar4 = CUser::get_charac_no((CUser *)param_2,-1);
            uVar5 = CUser::get_acc_id((CUser *)param_2);
            uVar6 = NumberToString(uVar5,0);
            CMyFileLog::CMyFileLog
                      (local_30,
                       "virtual int Dispatcher_RequestOnTimeEventReward::dispatch_sig(CUser*, PacketBuf&)"
                       ,0xdf14);
            CMyFileLog::operator()
                      (local_30,local_138,
                       "On Time Event:Request Reward ENUM_ONTIME_EVENT_ON_REWARD_ON error m_id(%s) charac_no(%u)"
                       ,uVar6,uVar4);
          }
        }
        else {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x120,0x13);
          pcVar7 = local_138;
          for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
            pcVar7[0] = '\0';
            pcVar7[1] = '\0';
            pcVar7[2] = '\0';
            pcVar7[3] = '\0';
            pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
          }
          pCVar3 = (CEnvironment *)G_CEnvironment();
          uVar4 = CEnvironment::get_file_name(pCVar3);
          sprintf(local_138,"./log/%s/OnTimeEvent",uVar4);
          uVar4 = CUser::get_charac_no((CUser *)param_2,-1);
          uVar5 = CUser::get_acc_id((CUser *)param_2);
          uVar6 = NumberToString(uVar5,0);
          CMyFileLog::CMyFileLog
                    (local_38,
                     "virtual int Dispatcher_RequestOnTimeEventReward::dispatch_sig(CUser*, PacketBuf&)"
                     ,0xdf01);
          CMyFileLog::operator()
                    (local_38,local_138,
                     "On Time Event:Request Reward IsEventing error m_id(%s) charac_no(%u)",uVar6,
                     uVar4);
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x120,0xd8);
    }
  }
  return 0;
}
```
