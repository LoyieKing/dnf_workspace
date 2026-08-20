# CheckCondition

`_ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE`

`EmblemCompoundServer::CheckCondition(CUser*, arad::SigAradEmblemCompound*)`

| 类 | 地址 |
|---|---|
| `EmblemCompoundServer` | `0x08191636` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08191636  _ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE
#           EmblemCompoundServer::CheckCondition(CUser*, arad::SigAradEmblemCompound*)
# range [0x08191636, 0x08191817]
08191636 +0x000:  push   %ebp
08191637 +0x001:  mov    %esp,%ebp
08191639 +0x003:  push   %esi
0819163a +0x004:  push   %ebx
0819163b +0x005:  sub    $0x30,%esp
0819163e +0x008:  movl   $0x0,0xc(%esp)
08191646 +0x010:  mov    0x10(%ebp),%eax
08191649 +0x013:  mov    %eax,0x8(%esp)
0819164d +0x017:  mov    0xc(%ebp),%eax
08191650 +0x01a:  mov    %eax,0x4(%esp)
08191654 +0x01e:  mov    0x8(%ebp),%eax
08191657 +0x021:  mov    %eax,(%esp)
0819165a +0x024:  call   08191818 <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi>  ; EmblemCompoundServer::GetEmblemInfo(CUser*, arad::SigAradEmblemCompound*, int)
0819165f +0x029:  xor    $0x1,%eax
08191662 +0x02c:  test   %al,%al
08191664 +0x02e:  je     08191670 <+0x3a>
08191666 +0x030:  mov    $0x0,%eax
0819166b +0x035:  jmp    08191811 <+0x1db>
08191670 +0x03a:  movl   $0x1,0xc(%esp)
08191678 +0x042:  mov    0x10(%ebp),%eax
0819167b +0x045:  mov    %eax,0x8(%esp)
0819167f +0x049:  mov    0xc(%ebp),%eax
08191682 +0x04c:  mov    %eax,0x4(%esp)
08191686 +0x050:  mov    0x8(%ebp),%eax
08191689 +0x053:  mov    %eax,(%esp)
0819168c +0x056:  call   08191818 <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi>  ; EmblemCompoundServer::GetEmblemInfo(CUser*, arad::SigAradEmblemCompound*, int)
08191691 +0x05b:  xor    $0x1,%eax
08191694 +0x05e:  test   %al,%al
08191696 +0x060:  je     081916a2 <+0x6c>
08191698 +0x062:  mov    $0x0,%eax
0819169d +0x067:  jmp    08191811 <+0x1db>
081916a2 +0x06c:  mov    0x10(%ebp),%eax
081916a5 +0x06f:  movzwl 0x2(%eax),%eax
081916a9 +0x073:  cwtl
081916aa +0x074:  mov    %eax,-0xc(%ebp)
081916ad +0x077:  mov    0x10(%ebp),%eax
081916b0 +0x07a:  movzwl 0xa(%eax),%eax
081916b4 +0x07e:  movswl %ax,%edx
081916b7 +0x081:  mov    -0xc(%ebp),%eax
081916ba +0x084:  cmp    %eax,%edx
081916bc +0x086:  jne    081916c6 <+0x90>
081916be +0x088:  mov    -0xc(%ebp),%eax
081916c1 +0x08b:  cmp    $0x6,%eax
081916c4 +0x08e:  jle    08191742 <+0x10c>
081916c6 +0x090:  movl   $0xd8,0x8(%esp)
081916ce +0x098:  movl   $0x24e,0x4(%esp)
081916d6 +0x0a0:  mov    0xc(%ebp),%eax
081916d9 +0x0a3:  mov    %eax,(%esp)
081916dc +0x0a6:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081916e1 +0x0ab:  mov    0xc(%ebp),%eax
081916e4 +0x0ae:  mov    %eax,(%esp)
081916e7 +0x0b1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081916ec +0x0b6:  mov    0x10(%ebp),%edx
081916ef +0x0b9:  movzwl 0xa(%edx),%edx
081916f3 +0x0bd:  movswl %dx,%ecx
081916f6 +0x0c0:  mov    0x10(%ebp),%edx
081916f9 +0x0c3:  movzwl 0x2(%edx),%edx
081916fd +0x0c7:  movswl %dx,%edx
08191700 +0x0ca:  mov    %eax,0x1c(%esp)
08191704 +0x0ce:  mov    %ecx,0x18(%esp)
08191708 +0x0d2:  mov    %edx,0x14(%esp)
0819170c +0x0d6:  movl   $"EMBLEM COMPOUND : [grade1:%d] [grade2:%d] [charac_no:%d]",0x10(%esp)
08191714 +0x0de:  movl   $0x1e8,0xc(%esp)
0819171c +0x0e6:  movl   $&_ZZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundEE19__PRETTY_FUNCTION__,0x8(%esp)
08191724 +0x0ee:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
0819172c +0x0f6:  movl   $0x1,(%esp)
08191733 +0x0fd:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08191738 +0x102:  mov    $0x0,%eax
0819173d +0x107:  jmp    08191811 <+0x1db>
08191742 +0x10c:  mov    0xc(%ebp),%eax
08191745 +0x10f:  mov    %eax,(%esp)
08191748 +0x112:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0819174d +0x117:  mov    %eax,(%esp)
08191750 +0x11a:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08191755 +0x11f:  mov    %eax,%ebx
08191757 +0x121:  mov    0x8(%ebp),%eax
0819175a +0x124:  lea    0x4(%eax),%edx
0819175d +0x127:  lea    -0xc(%ebp),%eax
08191760 +0x12a:  mov    %eax,0x4(%esp)
08191764 +0x12e:  mov    %edx,(%esp)
08191767 +0x131:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
0819176c +0x136:  mov    (%eax),%eax
0819176e +0x138:  cmp    %eax,%ebx
08191770 +0x13a:  setl   %al
08191773 +0x13d:  test   %al,%al
08191775 +0x13f:  je     0819180c <+0x1d6>
0819177b +0x145:  movl   $0xa,0x8(%esp)
08191783 +0x14d:  movl   $0x24e,0x4(%esp)
0819178b +0x155:  mov    0xc(%ebp),%eax
0819178e +0x158:  mov    %eax,(%esp)
08191791 +0x15b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08191796 +0x160:  mov    0xc(%ebp),%eax
08191799 +0x163:  mov    %eax,(%esp)
0819179c +0x166:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081917a1 +0x16b:  mov    %eax,%ebx
081917a3 +0x16d:  mov    0x8(%ebp),%eax
081917a6 +0x170:  lea    0x4(%eax),%edx
081917a9 +0x173:  lea    -0xc(%ebp),%eax
081917ac +0x176:  mov    %eax,0x4(%esp)
081917b0 +0x17a:  mov    %edx,(%esp)
081917b3 +0x17d:  call   081934ac <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x114>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x114
081917b8 +0x182:  mov    (%eax),%esi
081917ba +0x184:  mov    0xc(%ebp),%eax
081917bd +0x187:  mov    %eax,(%esp)
081917c0 +0x18a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081917c5 +0x18f:  mov    %eax,(%esp)
081917c8 +0x192:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
081917cd +0x197:  mov    %ebx,0x1c(%esp)
081917d1 +0x19b:  mov    %esi,0x18(%esp)
081917d5 +0x19f:  mov    %eax,0x14(%esp)
081917d9 +0x1a3:  movl   $"EMBLEM COMPOUND : [money:%d] [need:%d] [charac_no:%d]",0x10(%esp)
081917e1 +0x1ab:  movl   $0x1f0,0xc(%esp)
081917e9 +0x1b3:  movl   $&_ZZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundEE19__PRETTY_FUNCTION__,0x8(%esp)
081917f1 +0x1bb:  movl   $"localjapan/Arad_EmblemReformServer.cpp",0x4(%esp)
081917f9 +0x1c3:  movl   $0x1,(%esp)
08191800 +0x1ca:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08191805 +0x1cf:  mov    $0x0,%eax
0819180a +0x1d4:  jmp    08191811 <+0x1db>
0819180c +0x1d6:  mov    $0x1,%eax
08191811 +0x1db:  add    $0x30,%esp
08191814 +0x1de:  pop    %ebx
08191815 +0x1df:  pop    %esi
08191816 +0x1e0:  pop    %ebp
08191817 +0x1e1:  ret
```

## 反编译 C

```c
// EmblemCompoundServer::CheckCondition @ 0x8191636

/* EmblemCompoundServer::CheckCondition(CUser*, arad::SigAradEmblemCompound*) */

undefined4 __thiscall
EmblemCompoundServer::CheckCondition
          (EmblemCompoundServer *this,CUser *param_1,SigAradEmblemCompound *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CInventory *pCVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int local_10;
  
  cVar1 = GetEmblemInfo(this,param_1,param_2,0);
  if (cVar1 == '\x01') {
    cVar1 = GetEmblemInfo(this,param_1,param_2,1);
    if (cVar1 == '\x01') {
      local_10 = (int)*(short *)(param_2 + 2);
      if ((*(short *)(param_2 + 10) == local_10) && (local_10 < 7)) {
        pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        iVar4 = CInventory::get_money(pCVar3);
        piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                    *)(this + 4),&local_10);
        if (iVar4 < *piVar5) {
          CUser::SendCmdErrorPacket(param_1,0x24e,10);
          uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          puVar7 = (undefined4 *)
                   std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                   operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                               *)(this + 4),&local_10);
          uVar2 = *puVar7;
          pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          uVar8 = CInventory::get_money(pCVar3);
          LogManager::logFormat
                    (1,"localjapan/Arad_EmblemReformServer.cpp",
                     "bool EmblemCompoundServer::CheckCondition(CUser*, arad::SigAradEmblemCompound*)"
                     ,0x1f0,"EMBLEM COMPOUND : [money:%d] [need:%d] [charac_no:%d]",uVar8,uVar2,
                     uVar6);
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x24e,0xd8);
        uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        LogManager::logFormat
                  (1,"localjapan/Arad_EmblemReformServer.cpp",
                   "bool EmblemCompoundServer::CheckCondition(CUser*, arad::SigAradEmblemCompound*)"
                   ,0x1e8,"EMBLEM COMPOUND : [grade1:%d] [grade2:%d] [charac_no:%d]",
                   (int)*(short *)(param_2 + 2),(int)*(short *)(param_2 + 10),uVar2);
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
