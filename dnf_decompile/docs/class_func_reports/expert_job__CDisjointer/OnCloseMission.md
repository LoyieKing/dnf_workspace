# OnCloseMission

`_ZN10expert_job11CDisjointer14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE`

`expert_job::CDisjointer::OnCloseMission(CUser*, expert_job::ENUM_CLOSE_MISSION_TYPE)`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d2b74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d2b74  _ZN10expert_job11CDisjointer14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE
#           expert_job::CDisjointer::OnCloseMission(CUser*, expert_job::ENUM_CLOSE_MISSION_TYPE)
# range [0x085d2b74, 0x085d2cf1]
085d2b74 +0x000:  push   %ebp
085d2b75 +0x001:  mov    %esp,%ebp
085d2b77 +0x003:  push   %esi
085d2b78 +0x004:  push   %ebx
085d2b79 +0x005:  sub    $0x30,%esp
085d2b7c +0x008:  lea    -0x18(%ebp),%eax
085d2b7f +0x00b:  mov    %eax,(%esp)
085d2b82 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085d2b87 +0x013:  movl   $0xd9,0x8(%esp)
085d2b8f +0x01b:  movl   $0x0,0x4(%esp)
085d2b97 +0x023:  lea    -0x18(%ebp),%eax
085d2b9a +0x026:  mov    %eax,(%esp)
085d2b9d +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d2ba2 +0x02e:  mov    0xc(%ebp),%eax
085d2ba5 +0x031:  mov    %eax,(%esp)
085d2ba8 +0x034:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085d2bad +0x039:  movzwl %ax,%eax
085d2bb0 +0x03c:  mov    %eax,0x4(%esp)
085d2bb4 +0x040:  lea    -0x18(%ebp),%eax
085d2bb7 +0x043:  mov    %eax,(%esp)
085d2bba +0x046:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085d2bbf +0x04b:  movl   $0x1,0x4(%esp)
085d2bc7 +0x053:  lea    -0x18(%ebp),%eax
085d2bca +0x056:  mov    %eax,(%esp)
085d2bcd +0x059:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d2bd2 +0x05e:  movl   $0x0,0x4(%esp)
085d2bda +0x066:  mov    0xc(%ebp),%eax
085d2bdd +0x069:  mov    %eax,(%esp)
085d2be0 +0x06c:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085d2be5 +0x071:  mov    %eax,%ebx
085d2be7 +0x073:  mov    0xc(%ebp),%eax
085d2bea +0x076:  mov    %eax,(%esp)
085d2bed +0x079:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085d2bf2 +0x07e:  movsbl %al,%esi
085d2bf5 +0x081:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d2bfa +0x086:  lea    -0x18(%ebp),%edx
085d2bfd +0x089:  mov    %edx,0xc(%esp)
085d2c01 +0x08d:  mov    %ebx,0x8(%esp)
085d2c05 +0x091:  mov    %esi,0x4(%esp)
085d2c09 +0x095:  mov    %eax,(%esp)
085d2c0c +0x098:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
085d2c11 +0x09d:  mov    0x8(%ebp),%eax
085d2c14 +0x0a0:  lea    0x8(%eax),%esi
085d2c17 +0x0a3:  movl   $0x0,0x4(%esp)
085d2c1f +0x0ab:  mov    0xc(%ebp),%eax
085d2c22 +0x0ae:  mov    %eax,(%esp)
085d2c25 +0x0b1:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
085d2c2a +0x0b6:  movzbl %al,%ebx
085d2c2d +0x0b9:  mov    0xc(%ebp),%eax
085d2c30 +0x0bc:  mov    %eax,(%esp)
085d2c33 +0x0bf:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
085d2c38 +0x0c4:  movzbl %al,%eax
085d2c3b +0x0c7:  mov    %ebx,0x8(%esp)
085d2c3f +0x0cb:  mov    %eax,0x4(%esp)
085d2c43 +0x0cf:  lea    -0xa(%ebp),%eax
085d2c46 +0x0d2:  mov    %eax,(%esp)
085d2c49 +0x0d5:  call   085cb63a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x350>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x350
085d2c4e +0x0da:  mov    &_ZN10GlobalData18s_villageObjectMgrE,%eax
085d2c53 +0x0df:  mov    %esi,0x8(%esp)
085d2c57 +0x0e3:  movzwl -0xa(%ebp),%edx
085d2c5b +0x0e7:  mov    %dx,0x4(%esp)
085d2c60 +0x0ec:  mov    %eax,(%esp)
085d2c63 +0x0ef:  call   086b70d0 <_ZN14village_object17CVillageObjectMgr17unregister_objectENS_4ZoneEPNS_7IObjectE>  ; village_object::CVillageObjectMgr::unregister_object(village_object::Zone, village_object::IObject*)
085d2c68 +0x0f4:  xor    $0x1,%eax
085d2c6b +0x0f7:  test   %al,%al
085d2c6d +0x0f9:  je     085d2c9b <+0x127>
085d2c6f +0x0fb:  movl   $"unregister_object error",0x10(%esp)
085d2c77 +0x103:  movl   $0x15b,0xc(%esp)
085d2c7f +0x10b:  movl   $&_ZZN10expert_job11CDisjointer14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEEE19__PRETTY_FUNCTION__,0x8(%esp)
085d2c87 +0x113:  movl   $"ProfessionDisjointer.cpp",0x4(%esp)
085d2c8f +0x11b:  movl   $0x1,(%esp)
085d2c96 +0x122:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085d2c9b +0x127:  mov    0xc(%ebp),%eax
085d2c9e +0x12a:  movl   $0x0,0x4(%esp)
085d2ca6 +0x132:  mov    %eax,(%esp)
085d2ca9 +0x135:  call   0822f8b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f60
085d2cae +0x13a:  mov    0x8(%ebp),%edx
085d2cb1 +0x13d:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
085d2cb6 +0x142:  mov    %edx,0x4(%esp)
085d2cba +0x146:  mov    %eax,(%esp)
085d2cbd +0x149:  call   0849e1f8 <_ZN10expert_job13CExpertJobMgr13FreeExpertJobEPNS_10CExpertJobE>  ; expert_job::CExpertJobMgr::FreeExpertJob(expert_job::CExpertJob*)
085d2cc2 +0x14e:  jmp    085d2cdf <+0x16b>
085d2cc4 +0x150:  mov    %edx,%ebx
085d2cc6 +0x152:  mov    %eax,%esi
085d2cc8 +0x154:  lea    -0x18(%ebp),%eax
085d2ccb +0x157:  mov    %eax,(%esp)
085d2cce +0x15a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d2cd3 +0x15f:  mov    %esi,%eax
085d2cd5 +0x161:  mov    %ebx,%edx
085d2cd7 +0x163:  mov    %eax,(%esp)
085d2cda +0x166:  call   08ae3750 <_Unwind_Resume>
085d2cdf +0x16b:  lea    -0x18(%ebp),%eax
085d2ce2 +0x16e:  mov    %eax,(%esp)
085d2ce5 +0x171:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d2cea +0x176:  add    $0x30,%esp
085d2ced +0x179:  pop    %ebx
085d2cee +0x17a:  pop    %esi
085d2cef +0x17b:  pop    %ebp
085d2cf0 +0x17c:  ret
085d2cf1 +0x17d:  nop
```

## 反编译 C

```c
// expert_job::CDisjointer::OnCloseMission @ 0x85d2b74

/* expert_job::CDisjointer::OnCloseMission(CUser*, expert_job::ENUM_CLOSE_MISSION_TYPE) */

void expert_job::CDisjointer::OnCloseMission(CExpertJob *param_1,CUser *param_2)

{
  char cVar1;
  uchar uVar2;
  uchar uVar3;
  uint uVar4;
  int iVar5;
  GameWorld *this;
  undefined2 uVar6;
  PacketGuard local_1c [14];
  undefined2 local_e;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 085d2b9d to 085d2cc1 has its CatchHandler @ 085d2cc4 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xd9);
  uVar4 = CUser::get_unique_id(param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar4 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  iVar5 = CUser::get_area(param_2,false);
  cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_to_area(this,(int)cVar1,iVar5,local_1c);
  uVar2 = CUser::get_area(param_2,false);
  uVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
  uVar6 = 0;
  village_object::Zone::Zone((Zone *)&local_e,uVar3,uVar2);
  cVar1 = village_object::CVillageObjectMgr::unregister_object
                    (GlobalData::s_villageObjectMgr,CONCAT22(uVar6,local_e),param_1 + 8);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"ProfessionDisjointer.cpp",
               "virtual void expert_job::CDisjointer::OnCloseMission(CUser*, expert_job::ENUM_CLOSE_MISSION_TYPE)"
               ,0x15b,"unregister_object error");
  }
  CUserCharacInfo::SetCurCharacExpertJob((CUserCharacInfo *)param_2,(CExpertJob *)0x0);
  CExpertJobMgr::FreeExpertJob(GlobalData::s_ExpertJobMgr,param_1);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
