# process

`_ZN19DisPatcher_UseSkill7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_UseSkill::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseSkill` | `0x081cadaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cadaa  _ZN19DisPatcher_UseSkill7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_UseSkill::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cadaa, 0x081caf27]
081cadaa +0x000:  push   %ebp
081cadab +0x001:  mov    %esp,%ebp
081cadad +0x003:  push   %edi
081cadae +0x004:  push   %esi
081cadaf +0x005:  push   %ebx
081cadb0 +0x006:  sub    $0x4c,%esp
081cadb3 +0x009:  mov    0x14(%ebp),%eax
081cadb6 +0x00c:  mov    %eax,-0x24(%ebp)
081cadb9 +0x00f:  mov    0x14(%ebp),%eax
081cadbc +0x012:  mov    %eax,0xc(%esp)
081cadc0 +0x016:  mov    0x10(%ebp),%eax
081cadc3 +0x019:  mov    %eax,0x8(%esp)
081cadc7 +0x01d:  mov    0xc(%ebp),%eax
081cadca +0x020:  mov    %eax,0x4(%esp)
081cadce +0x024:  mov    0x8(%ebp),%eax
081cadd1 +0x027:  mov    %eax,(%esp)
081cadd4 +0x02a:  call   081cad80 <_ZN19DisPatcher_UseSkill11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; DisPatcher_UseSkill::check_error(CUser*, MSG_BASE&, ParamBase&)
081cadd9 +0x02f:  mov    %eax,%edx
081caddb +0x031:  mov    -0x24(%ebp),%eax
081cadde +0x034:  mov    %edx,0x4(%eax)
081cade1 +0x037:  mov    -0x24(%ebp),%eax
081cade4 +0x03a:  mov    0x4(%eax),%eax
081cade7 +0x03d:  test   %eax,%eax
081cade9 +0x03f:  jle    081cadf5 <+0x4b>
081cadeb +0x041:  mov    $0x0,%eax
081cadf0 +0x046:  jmp    081caf1f <+0x175>
081cadf5 +0x04b:  mov    -0x24(%ebp),%eax
081cadf8 +0x04e:  mov    0x4(%eax),%eax
081cadfb +0x051:  test   %eax,%eax
081cadfd +0x053:  jns    081cae31 <+0x87>
081cadff +0x055:  mov    0xc(%ebp),%eax
081cae02 +0x058:  mov    %eax,(%esp)
081cae05 +0x05b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cae0a +0x060:  mov    -0x24(%ebp),%edx
081cae0d +0x063:  mov    0x4(%edx),%edx
081cae10 +0x066:  mov    %eax,0xc(%esp)
081cae14 +0x06a:  mov    %edx,0x8(%esp)
081cae18 +0x06e:  movl   $&_ZZN19DisPatcher_UseSkill7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cae20 +0x076:  movl   $0x1ff2,(%esp)
081cae27 +0x07d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cae2c +0x082:  jmp    081caf1f <+0x175>
081cae31 +0x087:  mov    0x10(%ebp),%eax
081cae34 +0x08a:  mov    %eax,-0x20(%ebp)
081cae37 +0x08d:  mov    0xc(%ebp),%eax
081cae3a +0x090:  mov    %eax,(%esp)
081cae3d +0x093:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
081cae42 +0x098:  movsbl %al,%edi
081cae45 +0x09b:  mov    0xc(%ebp),%eax
081cae48 +0x09e:  mov    %eax,(%esp)
081cae4b +0x0a1:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
081cae50 +0x0a6:  movsbl %al,%esi
081cae53 +0x0a9:  mov    -0x20(%ebp),%eax
081cae56 +0x0ac:  movzbl 0xe(%eax),%eax
081cae5a +0x0b0:  movzbl %al,%ebx
081cae5d +0x0b3:  mov    0xc(%ebp),%eax
081cae60 +0x0b6:  mov    %eax,(%esp)
081cae63 +0x0b9:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081cae68 +0x0be:  mov    %edi,0x10(%esp)
081cae6c +0x0c2:  mov    %esi,0xc(%esp)
081cae70 +0x0c6:  mov    %ebx,0x8(%esp)
081cae74 +0x0ca:  mov    %eax,0x4(%esp)
081cae78 +0x0ce:  lea    -0x2c(%ebp),%eax
081cae7b +0x0d1:  mov    %eax,(%esp)
081cae7e +0x0d4:  call   08234756 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e00
081cae83 +0x0d9:  lea    -0x2c(%ebp),%eax
081cae86 +0x0dc:  mov    %eax,(%esp)
081cae89 +0x0df:  call   082864fc <_ZN26CHackLog_InvalidUsingSkill17IsValidUsingSkillEPK25SKILL_USING_VALIDATE_INFO>  ; CHackLog_InvalidUsingSkill::IsValidUsingSkill(SKILL_USING_VALIDATE_INFO const*)
081cae8e +0x0e4:  xor    $0x1,%eax
081cae91 +0x0e7:  test   %al,%al
081cae93 +0x0e9:  je     081caed8 <+0x12e>
081cae95 +0x0eb:  mov    -0x20(%ebp),%eax
081cae98 +0x0ee:  movzbl 0xe(%eax),%eax
081cae9c +0x0f2:  movzbl %al,%esi
081cae9f +0x0f5:  call   08286656 <_ZN26CHackLog_InvalidUsingSkill11GetHackTypeEv>  ; CHackLog_InvalidUsingSkill::GetHackType()
081caea4 +0x0fa:  mov    %eax,%ebx
081caea6 +0x0fc:  mov    0xc(%ebp),%eax
081caea9 +0x0ff:  mov    %eax,(%esp)
081caeac +0x102:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081caeb1 +0x107:  movl   $0x0,0x14(%esp)
081caeb9 +0x10f:  mov    %esi,0x10(%esp)
081caebd +0x113:  movl   $0x1,0xc(%esp)
081caec5 +0x11b:  mov    %ebx,0x8(%esp)
081caec9 +0x11f:  mov    0xc(%ebp),%edx
081caecc +0x122:  mov    %edx,0x4(%esp)
081caed0 +0x126:  mov    %eax,(%esp)
081caed3 +0x129:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081caed8 +0x12e:  mov    0xc(%ebp),%eax
081caedb +0x131:  mov    %eax,(%esp)
081caede +0x134:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081caee3 +0x139:  mov    %eax,-0x1c(%ebp)
081caee6 +0x13c:  cmpl   $0x0,-0x1c(%ebp)
081caeea +0x140:  je     081caf1a <+0x170>
081caeec +0x142:  mov    -0x20(%ebp),%eax
081caeef +0x145:  movzwl 0xf(%eax),%eax
081caef3 +0x149:  movzwl %ax,%edx
081caef6 +0x14c:  mov    -0x20(%ebp),%eax
081caef9 +0x14f:  movzbl 0xe(%eax),%eax
081caefd +0x153:  movzbl %al,%eax
081caf00 +0x156:  mov    %edx,0xc(%esp)
081caf04 +0x15a:  mov    %eax,0x8(%esp)
081caf08 +0x15e:  mov    0xc(%ebp),%eax
081caf0b +0x161:  mov    %eax,0x4(%esp)
081caf0f +0x165:  mov    -0x1c(%ebp),%eax
081caf12 +0x168:  mov    %eax,(%esp)
081caf15 +0x16b:  call   085a77d8 <_ZN6CParty9use_skillEP5CUserii>  ; CParty::use_skill(CUser*, int, int)
081caf1a +0x170:  mov    $0x0,%eax
081caf1f +0x175:  add    $0x4c,%esp
081caf22 +0x178:  pop    %ebx
081caf23 +0x179:  pop    %esi
081caf24 +0x17a:  pop    %edi
081caf25 +0x17b:  pop    %ebp
081caf26 +0x17c:  ret
081caf27 +0x17d:  nop
```

## 反编译 C

```c
// DisPatcher_UseSkill::process @ 0x81cadaa

/* DisPatcher_UseSkill::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_UseSkill::process
          (DisPatcher_UseSkill *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  CHackAnalyzer *pCVar7;
  SKILL_USING_VALIDATE_INFO local_30 [8];
  ParamBase *local_28;
  MSG_BASE *local_24;
  CUser *local_20;
  
  local_28 = param_3;
  uVar4 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_28 + 4) = uVar4;
  if (*(int *)(local_28 + 4) < 1) {
    if (*(int *)(local_28 + 4) < 0) {
      uVar5 = CUser::get_acc_id(param_1);
      uVar4 = LineFunc(0x1ff2,
                       "virtual int DisPatcher_UseSkill::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(local_28 + 4),uVar5);
    }
    else {
      local_24 = param_2;
      cVar2 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
      cVar3 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
      MVar1 = local_24[0xe];
      iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      SKILL_USING_VALIDATE_INFO::SKILL_USING_VALIDATE_INFO(local_30,iVar6,(uchar)MVar1,cVar3,cVar2);
      cVar2 = CHackLog_InvalidUsingSkill::IsValidUsingSkill(local_30);
      if (cVar2 != '\x01') {
        MVar1 = local_24[0xe];
        uVar4 = CHackLog_InvalidUsingSkill::GetHackType();
        pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,uVar4,1,MVar1,0);
      }
      local_20 = (CUser *)CUser::GetParty(param_1);
      if (local_20 != (CUser *)0x0) {
        CParty::use_skill(local_20,(int)param_1,(uint)(byte)local_24[0xe]);
      }
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
