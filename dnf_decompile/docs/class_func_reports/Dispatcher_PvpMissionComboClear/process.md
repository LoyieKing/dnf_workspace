# process

`_ZN31Dispatcher_PvpMissionComboClear7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_PvpMissionComboClear::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PvpMissionComboClear` | `0x081d5a5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d5a5e  _ZN31Dispatcher_PvpMissionComboClear7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_PvpMissionComboClear::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d5a5e, 0x081d5bcb]
081d5a5e +0x000:  push   %ebp
081d5a5f +0x001:  mov    %esp,%ebp
081d5a61 +0x003:  push   %edi
081d5a62 +0x004:  push   %ebx
081d5a63 +0x005:  sub    $0x130,%esp
081d5a69 +0x00b:  mov    0xc(%ebp),%eax
081d5a6c +0x00e:  mov    %eax,(%esp)
081d5a6f +0x011:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081d5a74 +0x016:  test   %eax,%eax
081d5a76 +0x018:  sete   %al
081d5a79 +0x01b:  test   %al,%al
081d5a7b +0x01d:  je     081d5aa6 <+0x48>
081d5a7d +0x01f:  movl   $0x0,0xc(%esp)
081d5a85 +0x027:  movl   $0x0,0x8(%esp)
081d5a8d +0x02f:  movl   $&_ZZN31Dispatcher_PvpMissionComboClear7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d5a95 +0x037:  movl   $0x3958,(%esp)
081d5a9c +0x03e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5aa1 +0x043:  jmp    081d5bc1 <+0x163>
081d5aa6 +0x048:  mov    0x10(%ebp),%eax
081d5aa9 +0x04b:  mov    %eax,-0xc(%ebp)
081d5aac +0x04e:  mov    -0xc(%ebp),%eax
081d5aaf +0x051:  movzbl 0xd(%eax),%eax
081d5ab3 +0x055:  cmp    $0x8,%al
081d5ab5 +0x057:  jbe    081d5b95 <+0x137>
081d5abb +0x05d:  lea    -0x11c(%ebp),%ebx
081d5ac1 +0x063:  mov    $0x0,%eax
081d5ac6 +0x068:  mov    $0x40,%edx
081d5acb +0x06d:  mov    %ebx,%edi
081d5acd +0x06f:  mov    %edx,%ecx
081d5acf +0x071:  rep stos %eax,%es:(%edi)
081d5ad1 +0x073:  mov    -0xc(%ebp),%eax
081d5ad4 +0x076:  movzbl 0xd(%eax),%eax
081d5ad8 +0x07a:  movzbl %al,%eax
081d5adb +0x07d:  mov    %eax,0xc(%esp)
081d5adf +0x081:  movl   $"[@missionSystem] invalid Combo Mission index:%d",0x8(%esp)
081d5ae7 +0x089:  movl   $0x100,0x4(%esp)
081d5aef +0x091:  lea    -0x11c(%ebp),%eax
081d5af5 +0x097:  mov    %eax,(%esp)
081d5af8 +0x09a:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
081d5afd +0x09f:  movl   $0x5,0xc(%esp)
081d5b05 +0x0a7:  movl   $0x3963,0x8(%esp)
081d5b0d +0x0af:  movl   $&_ZZN31Dispatcher_PvpMissionComboClear7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d5b15 +0x0b7:  lea    -0x1c(%ebp),%eax
081d5b18 +0x0ba:  mov    %eax,(%esp)
081d5b1b +0x0bd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081d5b20 +0x0c2:  lea    -0x11c(%ebp),%eax
081d5b26 +0x0c8:  mov    %eax,0x4(%esp)
081d5b2a +0x0cc:  lea    -0x1c(%ebp),%eax
081d5b2d +0x0cf:  mov    %eax,(%esp)
081d5b30 +0x0d2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081d5b35 +0x0d7:  mov    0xc(%ebp),%eax
081d5b38 +0x0da:  mov    %eax,(%esp)
081d5b3b +0x0dd:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
081d5b40 +0x0e2:  test   %al,%al
081d5b42 +0x0e4:  je     081d5b68 <+0x10a>
081d5b44 +0x0e6:  movl   $0x0,0x8(%esp)
081d5b4c +0x0ee:  lea    -0x11c(%ebp),%eax
081d5b52 +0x0f4:  mov    %eax,0x4(%esp)
081d5b56 +0x0f8:  mov    0xc(%ebp),%eax
081d5b59 +0x0fb:  mov    %eax,(%esp)
081d5b5c +0x0fe:  call   086886ce <_ZN5CUser21SendNotiPacketMessageEPKc17ENUM_MESSAGE_TYPE>  ; CUser::SendNotiPacketMessage(char const*, ENUM_MESSAGE_TYPE)
081d5b61 +0x103:  mov    $0x0,%eax
081d5b66 +0x108:  jmp    081d5bc1 <+0x163>
081d5b68 +0x10a:  mov    0xc(%ebp),%eax
081d5b6b +0x10d:  mov    %eax,(%esp)
081d5b6e +0x110:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d5b73 +0x115:  mov    %eax,0xc(%esp)
081d5b77 +0x119:  movl   $0x0,0x8(%esp)
081d5b7f +0x121:  movl   $&_ZZN31Dispatcher_PvpMissionComboClear7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d5b87 +0x129:  movl   $0x396a,(%esp)
081d5b8e +0x130:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5b93 +0x135:  jmp    081d5bc1 <+0x163>
081d5b95 +0x137:  mov    -0xc(%ebp),%eax
081d5b98 +0x13a:  movzbl 0xd(%eax),%eax
081d5b9c +0x13e:  movzbl %al,%edx
081d5b9f +0x141:  mov    -0xc(%ebp),%eax
081d5ba2 +0x144:  movzbl 0xe(%eax),%eax
081d5ba6 +0x148:  movzbl %al,%eax
081d5ba9 +0x14b:  mov    %edx,0x8(%esp)
081d5bad +0x14f:  mov    %eax,0x4(%esp)
081d5bb1 +0x153:  mov    0xc(%ebp),%eax
081d5bb4 +0x156:  mov    %eax,(%esp)
081d5bb7 +0x159:  call   0866280a <_ZN5CUser19Update_ComboMissionEis>  ; CUser::Update_ComboMission(int, short)
081d5bbc +0x15e:  mov    $0x0,%eax
081d5bc1 +0x163:  add    $0x130,%esp
081d5bc7 +0x169:  pop    %ebx
081d5bc8 +0x16a:  pop    %edi
081d5bc9 +0x16b:  pop    %ebp
081d5bca +0x16c:  ret
081d5bcb +0x16d:  nop
```

## 反编译 C

```c
// Dispatcher_PvpMissionComboClear::process @ 0x81d5a5e

/* Dispatcher_PvpMissionComboClear::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_PvpMissionComboClear::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  char local_120 [256];
  cMyTrace local_20 [16];
  ParamBase *local_10;
  
  bVar6 = 0;
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar2 == 0) {
    uVar3 = LineFunc(0x3958,
                     "virtual int Dispatcher_PvpMissionComboClear::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,0,0);
  }
  else {
    local_10 = param_3;
    if ((byte)param_3[0xd] < 9) {
      CUser::Update_ComboMission
                ((CUser *)param_2,(uint)(byte)param_3[0xe],(ushort)(byte)param_3[0xd]);
      uVar3 = 0;
    }
    else {
      pcVar5 = local_120;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
      }
      OS_API::snprintf(local_120,0x100,"[@missionSystem] invalid Combo Mission index:%d",
                       (uint)(byte)local_10[0xd]);
      cMyTrace::cMyTrace(local_20,
                         "virtual int Dispatcher_PvpMissionComboClear::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0x3963,5);
      cMyTrace::operator()(local_20,local_120);
      cVar1 = CUser::isGMUser((CUser *)param_2);
      if (cVar1 == '\0') {
        uVar4 = CUser::get_acc_id((CUser *)param_2);
        uVar3 = LineFunc(0x396a,
                         "virtual int Dispatcher_PvpMissionComboClear::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar4);
      }
      else {
        CUser::SendNotiPacketMessage((CUser *)param_2,local_120,0);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
```
