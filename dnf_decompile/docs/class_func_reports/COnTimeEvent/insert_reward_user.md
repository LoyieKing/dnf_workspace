# insert_reward_user

`_ZN12COnTimeEvent18insert_reward_userEP5CUser`

`COnTimeEvent::insert_reward_user(CUser*)`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bb9dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb9dc  _ZN12COnTimeEvent18insert_reward_userEP5CUser
#           COnTimeEvent::insert_reward_user(CUser*)
# range [0x081bb9dc, 0x081bbc63]
081bb9dc +0x000:  push   %ebp
081bb9dd +0x001:  mov    %esp,%ebp
081bb9df +0x003:  push   %edi
081bb9e0 +0x004:  push   %esi
081bb9e1 +0x005:  push   %ebx
081bb9e2 +0x006:  sub    $0x24c,%esp
081bb9e8 +0x00c:  cmpl   $0x0,0xc(%ebp)
081bb9ec +0x010:  jne    081bb9f8 <+0x1c>
081bb9ee +0x012:  mov    $0x0,%eax
081bb9f3 +0x017:  jmp    081bbc58 <+0x27c>
081bb9f8 +0x01c:  lea    -0x128(%ebp),%ebx
081bb9fe +0x022:  mov    $0x0,%eax
081bba03 +0x027:  mov    $0x40,%edx
081bba08 +0x02c:  mov    %ebx,%edi
081bba0a +0x02e:  mov    %edx,%ecx
081bba0c +0x030:  rep stos %eax,%es:(%edi)
081bba0e +0x032:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081bba13 +0x037:  mov    %eax,(%esp)
081bba16 +0x03a:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
081bba1b +0x03f:  mov    %eax,0x8(%esp)
081bba1f +0x043:  movl   $"./log/%s/OnTimeEvent",0x4(%esp)
081bba27 +0x04b:  lea    -0x128(%ebp),%eax
081bba2d +0x051:  mov    %eax,(%esp)
081bba30 +0x054:  call   0807e440 <_init+0xd38>
081bba35 +0x059:  movl   $0xffffffff,0x4(%esp)
081bba3d +0x061:  mov    0xc(%ebp),%eax
081bba40 +0x064:  mov    %eax,(%esp)
081bba43 +0x067:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081bba48 +0x06c:  mov    %eax,%esi
081bba4a +0x06e:  mov    0xc(%ebp),%eax
081bba4d +0x071:  mov    %eax,(%esp)
081bba50 +0x074:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081bba55 +0x079:  movl   $0x0,0x4(%esp)
081bba5d +0x081:  mov    %eax,(%esp)
081bba60 +0x084:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081bba65 +0x089:  mov    %eax,%ebx
081bba67 +0x08b:  movl   $0x75,0x8(%esp)
081bba6f +0x093:  movl   $&_ZZN12COnTimeEvent18insert_reward_userEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
081bba77 +0x09b:  lea    -0x28(%ebp),%eax
081bba7a +0x09e:  mov    %eax,(%esp)
081bba7d +0x0a1:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
081bba82 +0x0a6:  mov    %esi,0x10(%esp)
081bba86 +0x0aa:  mov    %ebx,0xc(%esp)
081bba8a +0x0ae:  movl   $"On Time Event:On Request Reward m_id(%s) charac_no(%u)",0x8(%esp)
081bba92 +0x0b6:  lea    -0x128(%ebp),%eax
081bba98 +0x0bc:  mov    %eax,0x4(%esp)
081bba9c +0x0c0:  lea    -0x28(%ebp),%eax
081bba9f +0x0c3:  mov    %eax,(%esp)
081bbaa2 +0x0c6:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
081bbaa7 +0x0cb:  mov    0x8(%ebp),%eax
081bbaaa +0x0ce:  mov    %eax,(%esp)
081bbaad +0x0d1:  call   081bc0fa <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x194>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x194
081bbab2 +0x0d6:  mov    %eax,%ebx
081bbab4 +0x0d8:  mov    0xc(%ebp),%eax
081bbab7 +0x0db:  mov    %eax,(%esp)
081bbaba +0x0de:  call   081bc130 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x1ca>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x1ca
081bbabf +0x0e3:  cmp    %eax,%ebx
081bbac1 +0x0e5:  setg   %al
081bbac4 +0x0e8:  test   %al,%al
081bbac6 +0x0ea:  je     081bbb5d <+0x181>
081bbacc +0x0f0:  mov    0x8(%ebp),%eax
081bbacf +0x0f3:  mov    %eax,(%esp)
081bbad2 +0x0f6:  call   081bc0fa <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x194>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x194
081bbad7 +0x0fb:  mov    %eax,%esi
081bbad9 +0x0fd:  movl   $0xffffffff,0x4(%esp)
081bbae1 +0x105:  mov    0xc(%ebp),%eax
081bbae4 +0x108:  mov    %eax,(%esp)
081bbae7 +0x10b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081bbaec +0x110:  mov    %eax,%ebx
081bbaee +0x112:  mov    0xc(%ebp),%eax
081bbaf1 +0x115:  mov    %eax,(%esp)
081bbaf4 +0x118:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081bbaf9 +0x11d:  mov    0x8(%ebp),%edx
081bbafc +0x120:  add    $0x14,%edx
081bbaff +0x123:  mov    %esi,0xc(%esp)
081bbb03 +0x127:  mov    %ebx,0x8(%esp)
081bbb07 +0x12b:  mov    %eax,0x4(%esp)
081bbb0b +0x12f:  mov    %edx,(%esp)
081bbb0e +0x132:  call   081bb690 <_ZN15CRewardUserList6insertEjii>  ; CRewardUserList::insert(unsigned int, int, int)
081bbb13 +0x137:  mov    0x8(%ebp),%eax
081bbb16 +0x13a:  mov    %eax,(%esp)
081bbb19 +0x13d:  call   081bc0fa <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x194>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x194
081bbb1e +0x142:  mov    %eax,0x4(%esp)
081bbb22 +0x146:  mov    0xc(%ebp),%eax
081bbb25 +0x149:  mov    %eax,(%esp)
081bbb28 +0x14c:  call   081bc11e <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x1b8>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x1b8
081bbb2d +0x151:  mov    0xc(%ebp),%eax
081bbb30 +0x154:  mov    %eax,(%esp)
081bbb33 +0x157:  call   081bc13e <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x1d8>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x1d8
081bbb38 +0x15c:  movl   $0x0,0x8(%esp)
081bbb40 +0x164:  movl   $0x120,0x4(%esp)
081bbb48 +0x16c:  mov    0xc(%ebp),%eax
081bbb4b +0x16f:  mov    %eax,(%esp)
081bbb4e +0x172:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081bbb53 +0x177:  mov    $0x1,%eax
081bbb58 +0x17c:  jmp    081bbc58 <+0x27c>
081bbb5d +0x181:  lea    -0x228(%ebp),%ebx
081bbb63 +0x187:  mov    $0x0,%eax
081bbb68 +0x18c:  mov    $0x40,%edx
081bbb6d +0x191:  mov    %ebx,%edi
081bbb6f +0x193:  mov    %edx,%ecx
081bbb71 +0x195:  rep stos %eax,%es:(%edi)
081bbb73 +0x197:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081bbb78 +0x19c:  mov    %eax,(%esp)
081bbb7b +0x19f:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
081bbb80 +0x1a4:  mov    %eax,0x8(%esp)
081bbb84 +0x1a8:  movl   $"./log/%s/OnTimeEvent",0x4(%esp)
081bbb8c +0x1b0:  lea    -0x228(%ebp),%eax
081bbb92 +0x1b6:  mov    %eax,(%esp)
081bbb95 +0x1b9:  call   0807e440 <_init+0xd38>
081bbb9a +0x1be:  movl   $0xffffffff,0x4(%esp)
081bbba2 +0x1c6:  mov    0xc(%ebp),%eax
081bbba5 +0x1c9:  mov    %eax,(%esp)
081bbba8 +0x1cc:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081bbbad +0x1d1:  mov    %eax,-0x22c(%ebp)
081bbbb3 +0x1d7:  mov    0xc(%ebp),%eax
081bbbb6 +0x1da:  mov    %eax,(%esp)
081bbbb9 +0x1dd:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081bbbbe +0x1e2:  movl   $0x0,0x4(%esp)
081bbbc6 +0x1ea:  mov    %eax,(%esp)
081bbbc9 +0x1ed:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081bbbce +0x1f2:  mov    %eax,%edi
081bbbd0 +0x1f4:  mov    0xc(%ebp),%eax
081bbbd3 +0x1f7:  mov    %eax,(%esp)
081bbbd6 +0x1fa:  call   081bc130 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x1ca>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x1ca
081bbbdb +0x1ff:  mov    %eax,%esi
081bbbdd +0x201:  mov    0x8(%ebp),%eax
081bbbe0 +0x204:  mov    %eax,(%esp)
081bbbe3 +0x207:  call   081bc0fa <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x194>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x194
081bbbe8 +0x20c:  mov    %eax,%ebx
081bbbea +0x20e:  movl   $0x89,0x8(%esp)
081bbbf2 +0x216:  movl   $&_ZZN12COnTimeEvent18insert_reward_userEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
081bbbfa +0x21e:  lea    -0x20(%ebp),%eax
081bbbfd +0x221:  mov    %eax,(%esp)
081bbc00 +0x224:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
081bbc05 +0x229:  mov    -0x22c(%ebp),%eax
081bbc0b +0x22f:  mov    %eax,0x18(%esp)
081bbc0f +0x233:  mov    %edi,0x14(%esp)
081bbc13 +0x237:  mov    %esi,0x10(%esp)
081bbc17 +0x23b:  mov    %ebx,0xc(%esp)
081bbc1b +0x23f:  movl   $"On Time Event:Reward(no.%u user-%u)error m_id(%s)charac_no(%u)",0x8(%esp)
081bbc23 +0x247:  lea    -0x228(%ebp),%eax
081bbc29 +0x24d:  mov    %eax,0x4(%esp)
081bbc2d +0x251:  lea    -0x20(%ebp),%eax
081bbc30 +0x254:  mov    %eax,(%esp)
081bbc33 +0x257:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
081bbc38 +0x25c:  movl   $0x12,0x8(%esp)
081bbc40 +0x264:  movl   $0x120,0x4(%esp)
081bbc48 +0x26c:  mov    0xc(%ebp),%eax
081bbc4b +0x26f:  mov    %eax,(%esp)
081bbc4e +0x272:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081bbc53 +0x277:  mov    $0x0,%eax
081bbc58 +0x27c:  add    $0x24c,%esp
081bbc5e +0x282:  pop    %ebx
081bbc5f +0x283:  pop    %esi
081bbc60 +0x284:  pop    %edi
081bbc61 +0x285:  pop    %ebp
081bbc62 +0x286:  ret
081bbc63 +0x287:  nop
```

## 反编译 C

```c
// COnTimeEvent::insert_reward_user @ 0x81bb9dc

/* COnTimeEvent::insert_reward_user(CUser*) */

undefined4 __thiscall COnTimeEvent::insert_reward_user(COnTimeEvent *this,CUser *param_1)

{
  undefined4 uVar1;
  CEnvironment *pCVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  char local_22c [256];
  char local_12c [256];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [20];
  
  bVar10 = 0;
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else {
    pcVar9 = local_12c;
    for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + 4;
    }
    pCVar2 = (CEnvironment *)G_CEnvironment();
    uVar1 = CEnvironment::get_file_name(pCVar2);
    sprintf(local_12c,"./log/%s/OnTimeEvent",uVar1);
    uVar1 = CUser::get_charac_no(param_1,-1);
    uVar3 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar3,0);
    CMyFileLog::CMyFileLog(local_2c,"bool COnTimeEvent::insert_reward_user(CUser*)",0x75);
    CMyFileLog::operator()
              (local_2c,local_12c,"On Time Event:On Request Reward m_id(%s) charac_no(%u)",uVar4,
               uVar1);
    iVar8 = get_ontime_id(this);
    iVar5 = CUser::get_ontime_last_recv_idx(param_1);
    if (iVar5 < iVar8) {
      iVar8 = get_ontime_id(this);
      iVar5 = CUser::get_charac_no(param_1,-1);
      uVar3 = CUser::get_acc_id(param_1);
      CRewardUserList::insert((CRewardUserList *)(this + 0x14),uVar3,iVar5,iVar8);
      iVar8 = get_ontime_id(this);
      CUser::set_ontime_last_recv_idx(param_1,iVar8);
      CUser::set_update_ontime_last_recv_idx(param_1);
      CUser::SendCmdErrorPacket(param_1,0x120,0);
      uVar1 = 1;
    }
    else {
      pcVar9 = local_22c;
      for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
      }
      pCVar2 = (CEnvironment *)G_CEnvironment();
      uVar1 = CEnvironment::get_file_name(pCVar2);
      sprintf(local_22c,"./log/%s/OnTimeEvent",uVar1);
      uVar1 = CUser::get_charac_no(param_1,-1);
      uVar3 = CUser::get_acc_id(param_1);
      uVar4 = NumberToString(uVar3,0);
      uVar6 = CUser::get_ontime_last_recv_idx(param_1);
      uVar7 = get_ontime_id(this);
      CMyFileLog::CMyFileLog(local_24,"bool COnTimeEvent::insert_reward_user(CUser*)",0x89);
      CMyFileLog::operator()
                (local_24,local_22c,"On Time Event:Reward(no.%u user-%u)error m_id(%s)charac_no(%u)"
                 ,uVar7,uVar6,uVar4,uVar1);
      CUser::SendCmdErrorPacket(param_1,0x120,0x12);
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
