# execute

`_ZN11game_master19CChangeExpertJobCmd7executeEv`

`game_master::CChangeExpertJobCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CChangeExpertJobCmd` | `0x084a9900` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a9900  _ZN11game_master19CChangeExpertJobCmd7executeEv
#           game_master::CChangeExpertJobCmd::execute()
# range [0x084a9900, 0x084a9b97]
084a9900 +0x000:  push   %ebp
084a9901 +0x001:  mov    %esp,%ebp
084a9903 +0x003:  push   %edi
084a9904 +0x004:  push   %esi
084a9905 +0x005:  push   %ebx
084a9906 +0x006:  sub    $0x4c,%esp
084a9909 +0x009:  mov    0x8(%ebp),%eax
084a990c +0x00c:  mov    0x8(%eax),%ebx
084a990f +0x00f:  mov    0x8(%ebp),%eax
084a9912 +0x012:  mov    %eax,(%esp)
084a9915 +0x015:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a991a +0x01a:  mov    %ebx,0x4(%esp)
084a991e +0x01e:  mov    %eax,(%esp)
084a9921 +0x021:  call   0849f53e <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x36f>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x36f
084a9926 +0x026:  mov    0x8(%ebp),%eax
084a9929 +0x029:  mov    0x8(%eax),%ebx
084a992c +0x02c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a9931 +0x031:  mov    %ebx,0x4(%esp)
084a9935 +0x035:  mov    %eax,(%esp)
084a9938 +0x038:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
084a993d +0x03d:  mov    %eax,-0x20(%ebp)
084a9940 +0x040:  cmpl   $0x0,-0x20(%ebp)
084a9944 +0x044:  je     084a9ac1 <+0x1c1>
084a994a +0x04a:  movl   $0x0,-0x1c(%ebp)
084a9951 +0x051:  jmp    084a9a60 <+0x160>
084a9956 +0x056:  mov    0x8(%ebp),%eax
084a9959 +0x059:  mov    %eax,(%esp)
084a995c +0x05c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9961 +0x061:  mov    %eax,(%esp)
084a9964 +0x064:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084a9969 +0x069:  test   %eax,%eax
084a996b +0x06b:  setne  %al
084a996e +0x06e:  test   %al,%al
084a9970 +0x070:  je     084a9a5c <+0x15c>
084a9976 +0x076:  mov    -0x20(%ebp),%eax
084a9979 +0x079:  lea    0xc(%eax),%edx
084a997c +0x07c:  mov    -0x1c(%ebp),%eax
084a997f +0x07f:  mov    %eax,0x4(%esp)
084a9983 +0x083:  mov    %edx,(%esp)
084a9986 +0x086:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
084a998b +0x08b:  mov    0x4(%eax),%edi
084a998e +0x08e:  mov    -0x20(%ebp),%eax
084a9991 +0x091:  lea    0xc(%eax),%edx
084a9994 +0x094:  mov    -0x1c(%ebp),%eax
084a9997 +0x097:  mov    %eax,0x4(%esp)
084a999b +0x09b:  mov    %edx,(%esp)
084a999e +0x09e:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
084a99a3 +0x0a3:  mov    (%eax),%esi
084a99a5 +0x0a5:  mov    0x8(%ebp),%eax
084a99a8 +0x0a8:  mov    %eax,(%esp)
084a99ab +0x0ab:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a99b0 +0x0b0:  mov    %eax,(%esp)
084a99b3 +0x0b3:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
084a99b8 +0x0b8:  mov    %eax,%ebx
084a99ba +0x0ba:  mov    0x8(%ebp),%eax
084a99bd +0x0bd:  mov    %eax,(%esp)
084a99c0 +0x0c0:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a99c5 +0x0c5:  mov    %eax,(%esp)
084a99c8 +0x0c8:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
084a99cd +0x0cd:  movl   $0x0,0x10(%esp)
084a99d5 +0x0d5:  mov    %edi,0xc(%esp)
084a99d9 +0x0d9:  mov    %esi,0x8(%esp)
084a99dd +0x0dd:  mov    %ebx,0x4(%esp)
084a99e1 +0x0e1:  mov    %eax,(%esp)
084a99e4 +0x0e4:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
084a99e9 +0x0e9:  mov    -0x20(%ebp),%eax
084a99ec +0x0ec:  lea    0xc(%eax),%edx
084a99ef +0x0ef:  mov    -0x1c(%ebp),%eax
084a99f2 +0x0f2:  mov    %eax,0x4(%esp)
084a99f6 +0x0f6:  mov    %edx,(%esp)
084a99f9 +0x0f9:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
084a99fe +0x0fe:  mov    0x4(%eax),%edi
084a9a01 +0x101:  mov    -0x20(%ebp),%eax
084a9a04 +0x104:  lea    0xc(%eax),%edx
084a9a07 +0x107:  mov    -0x1c(%ebp),%eax
084a9a0a +0x10a:  mov    %eax,0x4(%esp)
084a9a0e +0x10e:  mov    %edx,(%esp)
084a9a11 +0x111:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
084a9a16 +0x116:  mov    (%eax),%esi
084a9a18 +0x118:  mov    0x8(%ebp),%eax
084a9a1b +0x11b:  mov    %eax,(%esp)
084a9a1e +0x11e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9a23 +0x123:  mov    %eax,(%esp)
084a9a26 +0x126:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
084a9a2b +0x12b:  mov    %eax,%ebx
084a9a2d +0x12d:  mov    0x8(%ebp),%eax
084a9a30 +0x130:  mov    %eax,(%esp)
084a9a33 +0x133:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9a38 +0x138:  mov    %eax,(%esp)
084a9a3b +0x13b:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
084a9a40 +0x140:  movl   $0x1,0x10(%esp)
084a9a48 +0x148:  mov    %edi,0xc(%esp)
084a9a4c +0x14c:  mov    %esi,0x8(%esp)
084a9a50 +0x150:  mov    %ebx,0x4(%esp)
084a9a54 +0x154:  mov    %eax,(%esp)
084a9a57 +0x157:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
084a9a5c +0x15c:  addl   $0x1,-0x1c(%ebp)
084a9a60 +0x160:  mov    -0x20(%ebp),%eax
084a9a63 +0x163:  add    $0xc,%eax
084a9a66 +0x166:  mov    %eax,(%esp)
084a9a69 +0x169:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
084a9a6e +0x16e:  cmp    -0x1c(%ebp),%eax
084a9a71 +0x171:  seta   %al
084a9a74 +0x174:  test   %al,%al
084a9a76 +0x176:  jne    084a9956 <+0x56>
084a9a7c +0x17c:  mov    0x8(%ebp),%eax
084a9a7f +0x17f:  mov    %eax,(%esp)
084a9a82 +0x182:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9a87 +0x187:  movl   $0x0,0x4(%esp)
084a9a8f +0x18f:  mov    %eax,(%esp)
084a9a92 +0x192:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084a9a97 +0x197:  mov    -0x20(%ebp),%edx
084a9a9a +0x19a:  mov    %edx,0x4(%esp)
084a9a9e +0x19e:  mov    %eax,(%esp)
084a9aa1 +0x1a1:  call   0832b36c <_ZN10expert_job16CCharacExpertJob10InitScriptEP17STExpertJobScript>  ; expert_job::CCharacExpertJob::InitScript(STExpertJobScript*)
084a9aa6 +0x1a6:  mov    0x8(%ebp),%eax
084a9aa9 +0x1a9:  mov    %eax,(%esp)
084a9aac +0x1ac:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9ab1 +0x1b1:  movl   $0x0,0x4(%esp)
084a9ab9 +0x1b9:  mov    %eax,(%esp)
084a9abc +0x1bc:  call   0849f56a <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x39b>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x39b
084a9ac1 +0x1c1:  lea    -0x2c(%ebp),%eax
084a9ac4 +0x1c4:  mov    %eax,(%esp)
084a9ac7 +0x1c7:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084a9acc +0x1cc:  movl   $0x2,0x8(%esp)
084a9ad4 +0x1d4:  movl   $0x0,0x4(%esp)
084a9adc +0x1dc:  lea    -0x2c(%ebp),%eax
084a9adf +0x1df:  mov    %eax,(%esp)
084a9ae2 +0x1e2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084a9ae7 +0x1e7:  movl   $0x0,0x4(%esp)
084a9aef +0x1ef:  lea    -0x2c(%ebp),%eax
084a9af2 +0x1f2:  mov    %eax,(%esp)
084a9af5 +0x1f5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a9afa +0x1fa:  movl   $0x1,0x4(%esp)
084a9b02 +0x202:  lea    -0x2c(%ebp),%eax
084a9b05 +0x205:  mov    %eax,(%esp)
084a9b08 +0x208:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084a9b0d +0x20d:  lea    -0x2c(%ebp),%ebx
084a9b10 +0x210:  mov    0x8(%ebp),%eax
084a9b13 +0x213:  mov    %eax,(%esp)
084a9b16 +0x216:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9b1b +0x21b:  movl   $0x0,0x8(%esp)
084a9b23 +0x223:  mov    %ebx,0x4(%esp)
084a9b27 +0x227:  mov    %eax,(%esp)
084a9b2a +0x22a:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
084a9b2f +0x22f:  movl   $0x1,0x4(%esp)
084a9b37 +0x237:  lea    -0x2c(%ebp),%eax
084a9b3a +0x23a:  mov    %eax,(%esp)
084a9b3d +0x23d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084a9b42 +0x242:  mov    0x8(%ebp),%eax
084a9b45 +0x245:  mov    %eax,(%esp)
084a9b48 +0x248:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9b4d +0x24d:  mov    %eax,%ebx
084a9b4f +0x24f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084a9b54 +0x254:  mov    %ebx,0x8(%esp)
084a9b58 +0x258:  lea    -0x2c(%ebp),%edx
084a9b5b +0x25b:  mov    %edx,0x4(%esp)
084a9b5f +0x25f:  mov    %eax,(%esp)
084a9b62 +0x262:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
084a9b67 +0x267:  jmp    084a9b84 <+0x284>
084a9b69 +0x269:  mov    %edx,%ebx
084a9b6b +0x26b:  mov    %eax,%esi
084a9b6d +0x26d:  lea    -0x2c(%ebp),%eax
084a9b70 +0x270:  mov    %eax,(%esp)
084a9b73 +0x273:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084a9b78 +0x278:  mov    %esi,%eax
084a9b7a +0x27a:  mov    %ebx,%edx
084a9b7c +0x27c:  mov    %eax,(%esp)
084a9b7f +0x27f:  call   08ae3750 <_Unwind_Resume>
084a9b84 +0x284:  lea    -0x2c(%ebp),%eax
084a9b87 +0x287:  mov    %eax,(%esp)
084a9b8a +0x28a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084a9b8f +0x28f:  add    $0x4c,%esp
084a9b92 +0x292:  pop    %ebx
084a9b93 +0x293:  pop    %esi
084a9b94 +0x294:  pop    %edi
084a9b95 +0x295:  pop    %ebp
084a9b96 +0x296:  ret
084a9b97 +0x297:  nop
```

## 反编译 C

```c
// game_master::CChangeExpertJobCmd::execute @ 0x84a9900

/* game_master::CChangeExpertJobCmd::execute() */

void __thiscall game_master::CChangeExpertJobCmd::execute(CChangeExpertJobCmd *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CUserCharacInfo *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  SkillSlot *pSVar7;
  uint uVar8;
  CUser *pCVar9;
  CCharacExpertJob *this_00;
  GameWorld *this_01;
  PacketGuard local_30 [12];
  STExpertJobScript *local_24;
  uint local_20;
  
  iVar4 = *(int *)(this + 8);
  pCVar3 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  CUserCharacInfo::SetCurCharacExpertJobType(pCVar3,iVar4);
  iVar4 = G_CDataManager();
  local_24 = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar4);
  if (local_24 != (STExpertJobScript *)0x0) {
    local_20 = 0;
    while( true ) {
      uVar8 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (local_24 + 0xc));
      if (uVar8 <= local_20) break;
      pCVar3 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
      iVar4 = CUserCharacInfo::getCurCharacR(pCVar3);
      if (iVar4 != 0) {
        iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_24 + 0xc),local_20);
        uVar1 = *(undefined4 *)(iVar4 + 4);
        puVar5 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            (local_24 + 0xc),local_20);
        uVar2 = *puVar5;
        pCVar3 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
        uVar6 = CUserCharacInfo::get_charac_job(pCVar3);
        pCVar3 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
        pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(pCVar3);
        SkillSlot::growtype_skill(pSVar7,uVar6,uVar2,uVar1,0);
        iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_24 + 0xc),local_20);
        uVar1 = *(undefined4 *)(iVar4 + 4);
        puVar5 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            (local_24 + 0xc),local_20);
        uVar2 = *puVar5;
        pCVar3 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
        uVar6 = CUserCharacInfo::get_charac_job(pCVar3);
        pCVar3 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
        pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW(pCVar3);
        SkillSlot::growtype_skill(pSVar7,uVar6,uVar2,uVar1,1);
      }
      local_20 = local_20 + 1;
    }
    pCVar9 = (CUser *)CCommand::GetUser((CCommand *)this);
    this_00 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar9,0);
    expert_job::CCharacExpertJob::InitScript(this_00,local_24);
    pCVar3 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
    CUserCharacInfo::SetCurCharacExpertJobExp(pCVar3,0);
  }
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084a9ae2 to 084a9b66 has its CatchHandler @ 084a9b69 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,1);
  pCVar9 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::make_basic_info(pCVar9,(char *)local_30,'\0');
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  pCVar9 = (CUser *)CCommand::GetUser((CCommand *)this);
  this_01 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_01,local_30,pCVar9);
  PacketGuard::~PacketGuard(local_30);
  return;
}
```
