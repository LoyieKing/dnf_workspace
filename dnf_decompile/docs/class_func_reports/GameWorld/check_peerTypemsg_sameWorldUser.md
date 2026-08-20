# check_peerTypemsg_sameWorldUser

`_ZN9GameWorld31check_peerTypemsg_sameWorldUserEP5CUserS1_cPci`

`GameWorld::check_peerTypemsg_sameWorldUser(CUser*, CUser*, char, char*, int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cab92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cab92  _ZN9GameWorld31check_peerTypemsg_sameWorldUserEP5CUserS1_cPci
#           GameWorld::check_peerTypemsg_sameWorldUser(CUser*, CUser*, char, char*, int)
# range [0x086cab92, 0x086cad67]
086cab92 +0x000:  push   %ebp
086cab93 +0x001:  mov    %esp,%ebp
086cab95 +0x003:  push   %ebx
086cab96 +0x004:  sub    $0x34,%esp
086cab99 +0x007:  mov    0x14(%ebp),%eax
086cab9c +0x00a:  mov    %al,-0xc(%ebp)
086cab9f +0x00d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086caba4 +0x012:  mov    %eax,(%esp)
086caba7 +0x015:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
086cabac +0x01a:  test   %al,%al
086cabae +0x01c:  je     086cabd3 <+0x41>
086cabb0 +0x01e:  mov    0xc(%ebp),%eax
086cabb3 +0x021:  mov    %eax,(%esp)
086cabb6 +0x024:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086cabbb +0x029:  mov    %eax,%ebx
086cabbd +0x02b:  mov    0x10(%ebp),%eax
086cabc0 +0x02e:  mov    %eax,(%esp)
086cabc3 +0x031:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086cabc8 +0x036:  cmp    %eax,%ebx
086cabca +0x038:  je     086cabd3 <+0x41>
086cabcc +0x03a:  mov    $0x1,%eax
086cabd1 +0x03f:  jmp    086cabd8 <+0x46>
086cabd3 +0x041:  mov    $0x0,%eax
086cabd8 +0x046:  test   %al,%al
086cabda +0x048:  je     086cac20 <+0x8e>
086cabdc +0x04a:  movsbl -0xc(%ebp),%eax
086cabe0 +0x04e:  mov    0x1c(%ebp),%edx
086cabe3 +0x051:  mov    %edx,0x1c(%esp)
086cabe7 +0x055:  mov    0x18(%ebp),%edx
086cabea +0x058:  mov    %edx,0x18(%esp)
086cabee +0x05c:  movl   $0x15,0x14(%esp)
086cabf6 +0x064:  movl   $0x15,0x10(%esp)
086cabfe +0x06c:  mov    %eax,0xc(%esp)
086cac02 +0x070:  mov    0xc(%ebp),%eax
086cac05 +0x073:  mov    %eax,0x8(%esp)
086cac09 +0x077:  mov    0x10(%ebp),%eax
086cac0c +0x07a:  mov    %eax,0x4(%esp)
086cac10 +0x07e:  mov    0x8(%ebp),%eax
086cac13 +0x081:  mov    %eax,(%esp)
086cac16 +0x084:  call   086d2ba4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x13d5>  ; global constructors keyed to MAX_VILLAGE_NUM+0x13d5
086cac1b +0x089:  jmp    086cad61 <+0x1cf>
086cac20 +0x08e:  movl   $0xffffffff,0x4(%esp)
086cac28 +0x096:  mov    0xc(%ebp),%eax
086cac2b +0x099:  mov    %eax,(%esp)
086cac2e +0x09c:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
086cac33 +0x0a1:  mov    %eax,0x4(%esp)
086cac37 +0x0a5:  mov    0x10(%ebp),%eax
086cac3a +0x0a8:  mov    %eax,(%esp)
086cac3d +0x0ab:  call   0867f104 <_ZN5CUser11isBlackUserEj>  ; CUser::isBlackUser(unsigned int)
086cac42 +0x0b0:  test   %al,%al
086cac44 +0x0b2:  jne    086cac6c <+0xda>
086cac46 +0x0b4:  movl   $0xffffffff,0x4(%esp)
086cac4e +0x0bc:  mov    0x10(%ebp),%eax
086cac51 +0x0bf:  mov    %eax,(%esp)
086cac54 +0x0c2:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
086cac59 +0x0c7:  mov    %eax,0x4(%esp)
086cac5d +0x0cb:  mov    0xc(%ebp),%eax
086cac60 +0x0ce:  mov    %eax,(%esp)
086cac63 +0x0d1:  call   0867f104 <_ZN5CUser11isBlackUserEj>  ; CUser::isBlackUser(unsigned int)
086cac68 +0x0d6:  test   %al,%al
086cac6a +0x0d8:  je     086cac73 <+0xe1>
086cac6c +0x0da:  mov    $0x1,%eax
086cac71 +0x0df:  jmp    086cac78 <+0xe6>
086cac73 +0x0e1:  mov    $0x0,%eax
086cac78 +0x0e6:  test   %al,%al
086cac7a +0x0e8:  je     086cacc0 <+0x12e>
086cac7c +0x0ea:  movsbl -0xc(%ebp),%eax
086cac80 +0x0ee:  mov    0x1c(%ebp),%edx
086cac83 +0x0f1:  mov    %edx,0x1c(%esp)
086cac87 +0x0f5:  mov    0x18(%ebp),%edx
086cac8a +0x0f8:  mov    %edx,0x18(%esp)
086cac8e +0x0fc:  movl   $0xfe,0x14(%esp)
086cac96 +0x104:  movl   $0x4d,0x10(%esp)
086cac9e +0x10c:  mov    %eax,0xc(%esp)
086caca2 +0x110:  mov    0xc(%ebp),%eax
086caca5 +0x113:  mov    %eax,0x8(%esp)
086caca9 +0x117:  mov    0x10(%ebp),%eax
086cacac +0x11a:  mov    %eax,0x4(%esp)
086cacb0 +0x11e:  mov    0x8(%ebp),%eax
086cacb3 +0x121:  mov    %eax,(%esp)
086cacb6 +0x124:  call   086d2ba4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x13d5>  ; global constructors keyed to MAX_VILLAGE_NUM+0x13d5
086cacbb +0x129:  jmp    086cad61 <+0x1cf>
086cacc0 +0x12e:  mov    0x10(%ebp),%eax
086cacc3 +0x131:  mov    %eax,(%esp)
086cacc6 +0x134:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086caccb +0x139:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
086cacd1 +0x13f:  mov    %eax,0x4(%esp)
086cacd5 +0x143:  mov    %edx,(%esp)
086cacd8 +0x146:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
086cacdd +0x14b:  test   %al,%al
086cacdf +0x14d:  je     086cad22 <+0x190>
086cace1 +0x14f:  movsbl -0xc(%ebp),%eax
086cace5 +0x153:  mov    0x1c(%ebp),%edx
086cace8 +0x156:  mov    %edx,0x1c(%esp)
086cacec +0x15a:  mov    0x18(%ebp),%edx
086cacef +0x15d:  mov    %edx,0x18(%esp)
086cacf3 +0x161:  movl   $0x20,0x14(%esp)
086cacfb +0x169:  movl   $0x5a,0x10(%esp)
086cad03 +0x171:  mov    %eax,0xc(%esp)
086cad07 +0x175:  mov    0xc(%ebp),%eax
086cad0a +0x178:  mov    %eax,0x8(%esp)
086cad0e +0x17c:  mov    0x10(%ebp),%eax
086cad11 +0x17f:  mov    %eax,0x4(%esp)
086cad15 +0x183:  mov    0x8(%ebp),%eax
086cad18 +0x186:  mov    %eax,(%esp)
086cad1b +0x189:  call   086d2ba4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x13d5>  ; global constructors keyed to MAX_VILLAGE_NUM+0x13d5
086cad20 +0x18e:  jmp    086cad61 <+0x1cf>
086cad22 +0x190:  movsbl -0xc(%ebp),%eax
086cad26 +0x194:  mov    0x1c(%ebp),%edx
086cad29 +0x197:  mov    %edx,0x1c(%esp)
086cad2d +0x19b:  mov    0x18(%ebp),%edx
086cad30 +0x19e:  mov    %edx,0x18(%esp)
086cad34 +0x1a2:  movl   $0x1,0x14(%esp)
086cad3c +0x1aa:  movl   $0x0,0x10(%esp)
086cad44 +0x1b2:  mov    %eax,0xc(%esp)
086cad48 +0x1b6:  mov    0x10(%ebp),%eax
086cad4b +0x1b9:  mov    %eax,0x8(%esp)
086cad4f +0x1bd:  mov    0xc(%ebp),%eax
086cad52 +0x1c0:  mov    %eax,0x4(%esp)
086cad56 +0x1c4:  mov    0x8(%ebp),%eax
086cad59 +0x1c7:  mov    %eax,(%esp)
086cad5c +0x1ca:  call   086d2ba4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x13d5>  ; global constructors keyed to MAX_VILLAGE_NUM+0x13d5
086cad61 +0x1cf:  add    $0x34,%esp
086cad64 +0x1d2:  pop    %ebx
086cad65 +0x1d3:  pop    %ebp
086cad66 +0x1d4:  ret
086cad67 +0x1d5:  nop
```

## 反编译 C

```c
// GameWorld::check_peerTypemsg_sameWorldUser @ 0x86cab92

/* GameWorld::check_peerTypemsg_sameWorldUser(CUser*, CUser*, char, char*, int) */

void __thiscall
GameWorld::check_peerTypemsg_sameWorldUser
          (GameWorld *this,CUser *param_1,CUser *param_2,char param_3,char *param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  GameWorld *this_00;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  this_00 = (GameWorld *)G_GameWorld();
  cVar2 = IsIntegratedPvPBaseChannel(this_00);
  if (cVar2 == '\0') {
LAB_086cabd3:
    bVar1 = false;
  }
  else {
    iVar3 = CUser::GetServerGroup(param_1);
    iVar4 = CUser::GetServerGroup(param_2);
    if (iVar3 == iVar4) goto LAB_086cabd3;
    bVar1 = true;
  }
  if (bVar1) {
    send_peerTypemsg_sameWorldUser(this,param_2,param_1,param_3,0x15,0x15,param_4,param_5);
    return;
  }
  uVar5 = CUser::get_charac_no(param_1,-1);
  cVar2 = CUser::isBlackUser(param_2,uVar5);
  if (cVar2 == '\0') {
    uVar5 = CUser::get_charac_no(param_2,-1);
    cVar2 = CUser::isBlackUser(param_1,uVar5);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_086cac78;
    }
  }
  bVar1 = true;
LAB_086cac78:
  if (bVar1) {
    send_peerTypemsg_sameWorldUser(this,param_2,param_1,param_3,0x4d,0xfe,param_4,param_5);
  }
  else {
    uVar5 = CUser::get_acc_id(param_2);
    cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,uVar5);
    if (cVar2 == '\0') {
      send_peerTypemsg_sameWorldUser(this,param_1,param_2,param_3,0,1,param_4,param_5);
    }
    else {
      send_peerTypemsg_sameWorldUser(this,param_2,param_1,param_3,0x5a,0x20,param_4,param_5);
    }
  }
  return;
}
```
