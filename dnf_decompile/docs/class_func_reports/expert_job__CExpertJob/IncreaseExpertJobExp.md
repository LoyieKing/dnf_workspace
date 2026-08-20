# IncreaseExpertJobExp

`_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri`

`expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)`

| 类 | 地址 |
|---|---|
| `expert_job::CExpertJob` | `0x0849ae40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849ae40  _ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri
#           expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)
# range [0x0849ae40, 0x0849b2e7]
0849ae40 +0x000:  push   %ebp
0849ae41 +0x001:  mov    %esp,%ebp
0849ae43 +0x003:  push   %edi
0849ae44 +0x004:  push   %esi
0849ae45 +0x005:  push   %ebx
0849ae46 +0x006:  sub    $0x7c,%esp
0849ae49 +0x009:  mov    0x8(%ebp),%eax
0849ae4c +0x00c:  mov    %eax,(%esp)
0849ae4f +0x00f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849ae54 +0x014:  test   %eax,%eax
0849ae56 +0x016:  setne  %al
0849ae59 +0x019:  test   %al,%al
0849ae5b +0x01b:  je     0849b2dc <+0x49c>
0849ae61 +0x021:  mov    0x8(%ebp),%eax
0849ae64 +0x024:  mov    %eax,(%esp)
0849ae67 +0x027:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0849ae6c +0x02c:  mov    %eax,%ebx
0849ae6e +0x02e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0849ae73 +0x033:  mov    %ebx,0x4(%esp)
0849ae77 +0x037:  mov    %eax,(%esp)
0849ae7a +0x03a:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
0849ae7f +0x03f:  mov    %eax,-0x3c(%ebp)
0849ae82 +0x042:  cmpl   $0x0,-0x3c(%ebp)
0849ae86 +0x046:  je     0849b2dc <+0x49c>
0849ae8c +0x04c:  mov    -0x3c(%ebp),%eax
0849ae8f +0x04f:  mov    %eax,(%esp)
0849ae92 +0x052:  call   0849f718 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x549>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x549
0849ae97 +0x057:  lea    -0x1(%eax),%edx
0849ae9a +0x05a:  mov    -0x3c(%ebp),%eax
0849ae9d +0x05d:  mov    %edx,0x4(%esp)
0849aea1 +0x061:  mov    %eax,(%esp)
0849aea4 +0x064:  call   0849f73a <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x56b>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x56b
0849aea9 +0x069:  mov    (%eax),%eax
0849aeab +0x06b:  mov    %eax,-0x38(%ebp)
0849aeae +0x06e:  mov    -0x38(%ebp),%eax
0849aeb1 +0x071:  cmp    0xc(%ebp),%eax
0849aeb4 +0x074:  jge    0849aebc <+0x7c>
0849aeb6 +0x076:  mov    -0x38(%ebp),%eax
0849aeb9 +0x079:  mov    %eax,0xc(%ebp)
0849aebc +0x07c:  movb   $0x0,-0x31(%ebp)
0849aec0 +0x080:  mov    0x8(%ebp),%eax
0849aec3 +0x083:  mov    %eax,(%esp)
0849aec6 +0x086:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0849aecb +0x08b:  mov    %eax,0x4(%esp)
0849aecf +0x08f:  mov    0x8(%ebp),%eax
0849aed2 +0x092:  mov    %eax,(%esp)
0849aed5 +0x095:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
0849aeda +0x09a:  mov    %eax,-0x30(%ebp)
0849aedd +0x09d:  mov    0xc(%ebp),%eax
0849aee0 +0x0a0:  mov    %eax,0x4(%esp)
0849aee4 +0x0a4:  mov    0x8(%ebp),%eax
0849aee7 +0x0a7:  mov    %eax,(%esp)
0849aeea +0x0aa:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
0849aeef +0x0af:  mov    %eax,-0x2c(%ebp)
0849aef2 +0x0b2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0849aef7 +0x0b7:  mov    %eax,(%esp)
0849aefa +0x0ba:  call   0849f516 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x347>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x347
0849aeff +0x0bf:  mov    %eax,-0x28(%ebp)
0849af02 +0x0c2:  mov    -0x30(%ebp),%eax
0849af05 +0x0c5:  cmp    -0x2c(%ebp),%eax
0849af08 +0x0c8:  je     0849af83 <+0x143>
0849af0a +0x0ca:  mov    -0x2c(%ebp),%eax
0849af0d +0x0cd:  mov    %al,-0x41(%ebp)
0849af10 +0x0d0:  mov    -0x28(%ebp),%edx
0849af13 +0x0d3:  lea    -0x48(%ebp),%eax
0849af16 +0x0d6:  lea    -0x41(%ebp),%ecx
0849af19 +0x0d9:  mov    %ecx,0x8(%esp)
0849af1d +0x0dd:  mov    %edx,0x4(%esp)
0849af21 +0x0e1:  mov    %eax,(%esp)
0849af24 +0x0e4:  call   0849fd46 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb77>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb77
0849af29 +0x0e9:  sub    $0x4,%esp
0849af2c +0x0ec:  mov    -0x28(%ebp),%edx
0849af2f +0x0ef:  lea    -0x40(%ebp),%eax
0849af32 +0x0f2:  mov    %edx,0x4(%esp)
0849af36 +0x0f6:  mov    %eax,(%esp)
0849af39 +0x0f9:  call   08450180 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d96>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d96
0849af3e +0x0fe:  sub    $0x4,%esp
0849af41 +0x101:  lea    -0x40(%ebp),%eax
0849af44 +0x104:  mov    %eax,0x4(%esp)
0849af48 +0x108:  lea    -0x48(%ebp),%eax
0849af4b +0x10b:  mov    %eax,(%esp)
0849af4e +0x10e:  call   084501a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dbc
0849af53 +0x113:  test   %al,%al
0849af55 +0x115:  je     0849afd1 <+0x191>
0849af57 +0x117:  lea    -0x48(%ebp),%eax
0849af5a +0x11a:  mov    %eax,(%esp)
0849af5d +0x11d:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
0849af62 +0x122:  movzwl 0x2(%eax),%eax
0849af66 +0x126:  movswl %ax,%ebx
0849af69 +0x129:  mov    0x8(%ebp),%eax
0849af6c +0x12c:  mov    %eax,(%esp)
0849af6f +0x12f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0849af74 +0x134:  cmp    %eax,%ebx
0849af76 +0x136:  setle  %al
0849af79 +0x139:  test   %al,%al
0849af7b +0x13b:  je     0849afd1 <+0x191>
0849af7d +0x13d:  movb   $0x1,-0x31(%ebp)
0849af81 +0x141:  jmp    0849afd1 <+0x191>
0849af83 +0x143:  mov    0xc(%ebp),%eax
0849af86 +0x146:  mov    %eax,0x4(%esp)
0849af8a +0x14a:  mov    -0x3c(%ebp),%eax
0849af8d +0x14d:  mov    %eax,(%esp)
0849af90 +0x150:  call   0849f420 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x251>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x251
0849af95 +0x155:  test   %al,%al
0849af97 +0x157:  je     0849afbe <+0x17e>
0849af99 +0x159:  mov    0x8(%ebp),%eax
0849af9c +0x15c:  mov    %eax,(%esp)
0849af9f +0x15f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0849afa4 +0x164:  mov    %eax,0x4(%esp)
0849afa8 +0x168:  mov    -0x28(%ebp),%eax
0849afab +0x16b:  mov    %eax,(%esp)
0849afae +0x16e:  call   0849f47c <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x2ad>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x2ad
0849afb3 +0x173:  test   %al,%al
0849afb5 +0x175:  je     0849afbe <+0x17e>
0849afb7 +0x177:  mov    $0x1,%eax
0849afbc +0x17c:  jmp    0849afc3 <+0x183>
0849afbe +0x17e:  mov    $0x0,%eax
0849afc3 +0x183:  test   %al,%al
0849afc5 +0x185:  je     0849afd1 <+0x191>
0849afc7 +0x187:  cmpl   $0xb,-0x30(%ebp)
0849afcb +0x18b:  je     0849afd1 <+0x191>
0849afcd +0x18d:  movb   $0x1,-0x31(%ebp)
0849afd1 +0x191:  mov    -0x30(%ebp),%eax
0849afd4 +0x194:  sub    $0x1,%eax
0849afd7 +0x197:  mov    %eax,%edx
0849afd9 +0x199:  mov    -0x3c(%ebp),%eax
0849afdc +0x19c:  mov    %edx,0x4(%esp)
0849afe0 +0x1a0:  mov    %eax,(%esp)
0849afe3 +0x1a3:  call   0849f73a <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x56b>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x56b
0849afe8 +0x1a8:  mov    (%eax),%eax
0849afea +0x1aa:  mov    %eax,-0x24(%ebp)
0849afed +0x1ad:  movzbl -0x31(%ebp),%eax
0849aff1 +0x1b1:  xor    $0x1,%eax
0849aff4 +0x1b4:  test   %al,%al
0849aff6 +0x1b6:  je     0849b006 <+0x1c6>
0849aff8 +0x1b8:  mov    0xc(%ebp),%eax
0849affb +0x1bb:  cmp    -0x24(%ebp),%eax
0849affe +0x1be:  jle    0849b006 <+0x1c6>
0849b000 +0x1c0:  mov    -0x24(%ebp),%eax
0849b003 +0x1c3:  mov    %eax,0xc(%ebp)
0849b006 +0x1c6:  cmpb   $0x0,-0x31(%ebp)
0849b00a +0x1ca:  jne    0849b01c <+0x1dc>
0849b00c +0x1cc:  mov    0x8(%ebp),%eax
0849b00f +0x1cf:  mov    %eax,(%esp)
0849b012 +0x1d2:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0849b017 +0x1d7:  cmp    0xc(%ebp),%eax
0849b01a +0x1da:  je     0849b023 <+0x1e3>
0849b01c +0x1dc:  mov    $0x1,%eax
0849b021 +0x1e1:  jmp    0849b028 <+0x1e8>
0849b023 +0x1e3:  mov    $0x0,%eax
0849b028 +0x1e8:  test   %al,%al
0849b02a +0x1ea:  je     0849b2dc <+0x49c>
0849b030 +0x1f0:  mov    0x8(%ebp),%eax
0849b033 +0x1f3:  mov    0xc(%ebp),%edx
0849b036 +0x1f6:  mov    %edx,0x4(%esp)
0849b03a +0x1fa:  mov    %eax,(%esp)
0849b03d +0x1fd:  call   0849f56a <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x39b>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x39b
0849b042 +0x202:  lea    -0x54(%ebp),%eax
0849b045 +0x205:  mov    %eax,(%esp)
0849b048 +0x208:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0849b04d +0x20d:  lea    -0x54(%ebp),%eax
0849b050 +0x210:  mov    %eax,(%esp)
0849b053 +0x213:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0849b058 +0x218:  movl   $0x2,0x8(%esp)
0849b060 +0x220:  movl   $0x0,0x4(%esp)
0849b068 +0x228:  lea    -0x54(%ebp),%eax
0849b06b +0x22b:  mov    %eax,(%esp)
0849b06e +0x22e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849b073 +0x233:  movl   $0x0,0x4(%esp)
0849b07b +0x23b:  lea    -0x54(%ebp),%eax
0849b07e +0x23e:  mov    %eax,(%esp)
0849b081 +0x241:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849b086 +0x246:  movl   $0x1,0x4(%esp)
0849b08e +0x24e:  lea    -0x54(%ebp),%eax
0849b091 +0x251:  mov    %eax,(%esp)
0849b094 +0x254:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849b099 +0x259:  lea    -0x54(%ebp),%eax
0849b09c +0x25c:  movl   $0x0,0x8(%esp)
0849b0a4 +0x264:  mov    %eax,0x4(%esp)
0849b0a8 +0x268:  mov    0x8(%ebp),%eax
0849b0ab +0x26b:  mov    %eax,(%esp)
0849b0ae +0x26e:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0849b0b3 +0x273:  movl   $0x1,0x4(%esp)
0849b0bb +0x27b:  lea    -0x54(%ebp),%eax
0849b0be +0x27e:  mov    %eax,(%esp)
0849b0c1 +0x281:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849b0c6 +0x286:  cmpb   $0x0,-0x31(%ebp)
0849b0ca +0x28a:  je     0849b2a2 <+0x462>
0849b0d0 +0x290:  mov    0x8(%ebp),%eax
0849b0d3 +0x293:  mov    %eax,(%esp)
0849b0d6 +0x296:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0849b0db +0x29b:  mov    %eax,0x4(%esp)
0849b0df +0x29f:  mov    0x8(%ebp),%eax
0849b0e2 +0x2a2:  mov    %eax,(%esp)
0849b0e5 +0x2a5:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
0849b0ea +0x2aa:  mov    %eax,-0x20(%ebp)
0849b0ed +0x2ad:  mov    0x8(%ebp),%eax
0849b0f0 +0x2b0:  mov    %eax,(%esp)
0849b0f3 +0x2b3:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0849b0f8 +0x2b8:  mov    %eax,%ebx
0849b0fa +0x2ba:  mov    0x8(%ebp),%eax
0849b0fd +0x2bd:  mov    %eax,(%esp)
0849b100 +0x2c0:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0849b105 +0x2c5:  mov    -0x20(%ebp),%edx
0849b108 +0x2c8:  mov    %edx,0x10(%esp)
0849b10c +0x2cc:  mov    %ebx,0xc(%esp)
0849b110 +0x2d0:  mov    %eax,0x8(%esp)
0849b114 +0x2d4:  movl   $"ExpertJobLv+,%d,%d,%d",0x4(%esp)
0849b11c +0x2dc:  mov    0x8(%ebp),%eax
0849b11f +0x2df:  mov    %eax,(%esp)
0849b122 +0x2e2:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0849b127 +0x2e7:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0849b12c +0x2ec:  mov    0x8(%ebp),%edx
0849b12f +0x2ef:  mov    %edx,0x8(%esp)
0849b133 +0x2f3:  lea    -0x54(%ebp),%edx
0849b136 +0x2f6:  mov    %edx,0x4(%esp)
0849b13a +0x2fa:  mov    %eax,(%esp)
0849b13d +0x2fd:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0849b142 +0x302:  movl   $0x0,-0x1c(%ebp)
0849b149 +0x309:  jmp    0849b220 <+0x3e0>
0849b14e +0x30e:  mov    0x8(%ebp),%eax
0849b151 +0x311:  mov    %eax,(%esp)
0849b154 +0x314:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0849b159 +0x319:  mov    %eax,0x4(%esp)
0849b15d +0x31d:  mov    0x8(%ebp),%eax
0849b160 +0x320:  mov    %eax,(%esp)
0849b163 +0x323:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
0849b168 +0x328:  mov    %eax,%esi
0849b16a +0x32a:  mov    -0x3c(%ebp),%eax
0849b16d +0x32d:  lea    0xc(%eax),%edx
0849b170 +0x330:  mov    -0x1c(%ebp),%eax
0849b173 +0x333:  mov    %eax,0x4(%esp)
0849b177 +0x337:  mov    %edx,(%esp)
0849b17a +0x33a:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0849b17f +0x33f:  mov    (%eax),%edi
0849b181 +0x341:  mov    0x8(%ebp),%eax
0849b184 +0x344:  mov    %eax,(%esp)
0849b187 +0x347:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0849b18c +0x34c:  mov    %eax,%ebx
0849b18e +0x34e:  mov    0x8(%ebp),%eax
0849b191 +0x351:  mov    %eax,(%esp)
0849b194 +0x354:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0849b199 +0x359:  movl   $0x0,0x10(%esp)
0849b1a1 +0x361:  mov    %esi,0xc(%esp)
0849b1a5 +0x365:  mov    %edi,0x8(%esp)
0849b1a9 +0x369:  mov    %ebx,0x4(%esp)
0849b1ad +0x36d:  mov    %eax,(%esp)
0849b1b0 +0x370:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
0849b1b5 +0x375:  mov    0x8(%ebp),%eax
0849b1b8 +0x378:  mov    %eax,(%esp)
0849b1bb +0x37b:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
0849b1c0 +0x380:  mov    %eax,0x4(%esp)
0849b1c4 +0x384:  mov    0x8(%ebp),%eax
0849b1c7 +0x387:  mov    %eax,(%esp)
0849b1ca +0x38a:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
0849b1cf +0x38f:  mov    %eax,%esi
0849b1d1 +0x391:  mov    -0x3c(%ebp),%eax
0849b1d4 +0x394:  lea    0xc(%eax),%edx
0849b1d7 +0x397:  mov    -0x1c(%ebp),%eax
0849b1da +0x39a:  mov    %eax,0x4(%esp)
0849b1de +0x39e:  mov    %edx,(%esp)
0849b1e1 +0x3a1:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0849b1e6 +0x3a6:  mov    (%eax),%edi
0849b1e8 +0x3a8:  mov    0x8(%ebp),%eax
0849b1eb +0x3ab:  mov    %eax,(%esp)
0849b1ee +0x3ae:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0849b1f3 +0x3b3:  mov    %eax,%ebx
0849b1f5 +0x3b5:  mov    0x8(%ebp),%eax
0849b1f8 +0x3b8:  mov    %eax,(%esp)
0849b1fb +0x3bb:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0849b200 +0x3c0:  movl   $0x1,0x10(%esp)
0849b208 +0x3c8:  mov    %esi,0xc(%esp)
0849b20c +0x3cc:  mov    %edi,0x8(%esp)
0849b210 +0x3d0:  mov    %ebx,0x4(%esp)
0849b214 +0x3d4:  mov    %eax,(%esp)
0849b217 +0x3d7:  call   086040bc <_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND>  ; SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
0849b21c +0x3dc:  addl   $0x1,-0x1c(%ebp)
0849b220 +0x3e0:  mov    -0x3c(%ebp),%eax
0849b223 +0x3e3:  add    $0xc,%eax
0849b226 +0x3e6:  mov    %eax,(%esp)
0849b229 +0x3e9:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0849b22e +0x3ee:  cmp    -0x1c(%ebp),%eax
0849b231 +0x3f1:  seta   %al
0849b234 +0x3f4:  test   %al,%al
0849b236 +0x3f6:  jne    0849b14e <+0x30e>
0849b23c +0x3fc:  mov    0x8(%ebp),%eax
0849b23f +0x3ff:  mov    %eax,(%esp)
0849b242 +0x402:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
0849b247 +0x407:  lea    -0x60(%ebp),%eax
0849b24a +0x40a:  mov    %eax,(%esp)
0849b24d +0x40d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0849b252 +0x412:  lea    -0x60(%ebp),%ebx
0849b255 +0x415:  mov    0x8(%ebp),%eax
0849b258 +0x418:  mov    %eax,(%esp)
0849b25b +0x41b:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0849b260 +0x420:  mov    %ebx,0x4(%esp)
0849b264 +0x424:  mov    %eax,(%esp)
0849b267 +0x427:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
0849b26c +0x42c:  lea    -0x60(%ebp),%eax
0849b26f +0x42f:  mov    %eax,0x4(%esp)
0849b273 +0x433:  mov    0x8(%ebp),%eax
0849b276 +0x436:  mov    %eax,(%esp)
0849b279 +0x439:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849b27e +0x43e:  jmp    0849b295 <+0x455>
0849b280 +0x440:  mov    %edx,%ebx
0849b282 +0x442:  mov    %eax,%esi
0849b284 +0x444:  lea    -0x60(%ebp),%eax
0849b287 +0x447:  mov    %eax,(%esp)
0849b28a +0x44a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849b28f +0x44f:  mov    %esi,%eax
0849b291 +0x451:  mov    %ebx,%edx
0849b293 +0x453:  jmp    0849b2b6 <+0x476>
0849b295 +0x455:  lea    -0x60(%ebp),%eax
0849b298 +0x458:  mov    %eax,(%esp)
0849b29b +0x45b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849b2a0 +0x460:  jmp    0849b2d1 <+0x491>
0849b2a2 +0x462:  lea    -0x54(%ebp),%eax
0849b2a5 +0x465:  mov    %eax,0x4(%esp)
0849b2a9 +0x469:  mov    0x8(%ebp),%eax
0849b2ac +0x46c:  mov    %eax,(%esp)
0849b2af +0x46f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849b2b4 +0x474:  jmp    0849b2d1 <+0x491>
0849b2b6 +0x476:  mov    %edx,%ebx
0849b2b8 +0x478:  mov    %eax,%esi
0849b2ba +0x47a:  lea    -0x54(%ebp),%eax
0849b2bd +0x47d:  mov    %eax,(%esp)
0849b2c0 +0x480:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849b2c5 +0x485:  mov    %esi,%eax
0849b2c7 +0x487:  mov    %ebx,%edx
0849b2c9 +0x489:  mov    %eax,(%esp)
0849b2cc +0x48c:  call   08ae3750 <_Unwind_Resume>
0849b2d1 +0x491:  lea    -0x54(%ebp),%eax
0849b2d4 +0x494:  mov    %eax,(%esp)
0849b2d7 +0x497:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849b2dc +0x49c:  lea    -0xc(%ebp),%esp
0849b2df +0x49f:  add    $0x0,%esp
0849b2e2 +0x4a2:  pop    %ebx
0849b2e3 +0x4a3:  pop    %esi
0849b2e4 +0x4a4:  pop    %edi
0849b2e5 +0x4a5:  pop    %ebp
0849b2e6 +0x4a6:  ret
0849b2e7 +0x4a7:  nop
```

## 反编译 C

```c
// expert_job::CExpertJob::IncreaseExpertJobExp @ 0x849ae40

/* expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int) */

void expert_job::CExpertJob::IncreaseExpertJobExp(CUser *param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  CDataManager *this;
  undefined4 uVar6;
  undefined4 uVar7;
  GameWorld *this_00;
  undefined4 *puVar8;
  undefined4 uVar9;
  SkillSlot *pSVar10;
  uint uVar11;
  UserQuest *this_01;
  PacketGuard local_64 [12];
  PacketGuard local_58 [12];
  _Rb_tree_iterator<std::pair<unsigned_char_const,short>> local_4c [7];
  undefined1 local_45;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_44 [4];
  vector<ExpertJobExp,std::allocator<ExpertJobExp>> *local_40;
  int local_3c;
  char local_35;
  int local_34;
  int local_30;
  STExpertJobEtcScript *local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar4 == 0) {
    return;
  }
  CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  iVar4 = G_CDataManager();
  local_40 = (vector<ExpertJobExp,std::allocator<ExpertJobExp>> *)
             CDataManager::GetExpertJobScript(iVar4);
  if (local_40 == (vector<ExpertJobExp,std::allocator<ExpertJobExp>> *)0x0) {
    return;
  }
  iVar4 = std::vector<ExpertJobExp,std::allocator<ExpertJobExp>>::size(local_40);
  piVar5 = (int *)std::vector<ExpertJobExp,std::allocator<ExpertJobExp>>::operator[]
                            (local_40,iVar4 - 1);
  local_3c = *piVar5;
  if (local_3c < param_2) {
    param_2 = local_3c;
  }
  local_35 = '\0';
  iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
  local_34 = CUser::GetCurExpertJobLevel(param_1,iVar4);
  local_30 = CUser::GetCurExpertJobLevel(param_1,param_2);
  this = (CDataManager *)G_CDataManager();
  local_2c = (STExpertJobEtcScript *)CDataManager::GetExpertJobEtcScript(this);
  if (local_34 != local_30) {
    local_45 = (undefined1)local_30;
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::find((uchar *)local_4c);
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::end(local_44);
    cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      (local_4c,(_Rb_tree_iterator *)local_44);
    if (cVar3 != '\0') {
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->(local_4c);
      sVar1 = *(short *)(iVar4 + 2);
      iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      if (sVar1 <= iVar4) {
        local_35 = '\x01';
      }
    }
    goto LAB_0849afd1;
  }
  cVar3 = STExpertJobScript::isBoundaryExpValue((STExpertJobScript *)local_40,param_2);
  if (cVar3 == '\0') {
LAB_0849afbe:
    bVar2 = false;
  }
  else {
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    cVar3 = STExpertJobEtcScript::isExpertJobLimitLevel(local_2c,iVar4);
    if (cVar3 == '\0') goto LAB_0849afbe;
    bVar2 = true;
  }
  if ((bVar2) && (local_34 != 0xb)) {
    local_35 = '\x01';
  }
LAB_0849afd1:
  piVar5 = (int *)std::vector<ExpertJobExp,std::allocator<ExpertJobExp>>::operator[]
                            (local_40,local_34 - 1);
  local_28 = *piVar5;
  if ((local_35 != '\x01') && (local_28 < param_2)) {
    param_2 = local_28;
  }
  if ((local_35 == '\0') &&
     (iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1),
     iVar4 == param_2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    CUserCharacInfo::SetCurCharacExpertJobExp((CUserCharacInfo *)param_1,param_2);
    PacketGuard::PacketGuard(local_58);
                    /* try { // try from 0849b053 to 0849b251 has its CatchHandler @ 0849b2b6 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_58);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_58,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_58,1);
    CUser::make_basic_info(param_1,(char *)local_58,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_58,true);
    if (local_35 == '\0') {
      CUser::Send(param_1,local_58);
    }
    else {
      iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
      local_24 = CUser::GetCurExpertJobLevel(param_1,iVar4);
      uVar6 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
      uVar7 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      CUser::LogHistory(param_1,"ExpertJobLv+,%d,%d,%d",uVar7,uVar6,local_24);
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this_00,local_58,param_1);
      local_20 = 0;
      while (uVar11 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                 (local_40 + 0xc)), local_20 < uVar11) {
        iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
        uVar7 = CUser::GetCurExpertJobLevel(param_1,iVar4);
        puVar8 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            (local_40 + 0xc),local_20);
        uVar6 = *puVar8;
        uVar9 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
        SkillSlot::growtype_skill(pSVar10,uVar9,uVar6,uVar7,0);
        iVar4 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
        uVar7 = CUser::GetCurExpertJobLevel(param_1,iVar4);
        puVar8 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            (local_40 + 0xc),local_20);
        uVar6 = *puVar8;
        uVar9 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
        SkillSlot::growtype_skill(pSVar10,uVar9,uVar6,uVar7,1);
        local_20 = local_20 + 1;
      }
      CUser::send_skill_info(param_1);
      PacketGuard::PacketGuard(local_64);
      this_01 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
                    /* try { // try from 0849b267 to 0849b27d has its CatchHandler @ 0849b280 */
      UserQuest::get_quest_info(this_01,(char *)local_64);
      CUser::Send(param_1,local_64);
                    /* try { // try from 0849b29b to 0849b2b3 has its CatchHandler @ 0849b2b6 */
      PacketGuard::~PacketGuard(local_64);
    }
    PacketGuard::~PacketGuard(local_58);
  }
  return;
}
```
