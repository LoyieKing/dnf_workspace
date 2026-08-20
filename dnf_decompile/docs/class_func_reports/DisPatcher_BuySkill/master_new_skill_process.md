# master_new_skill_process

`_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo`

`DisPatcher_BuySkill::master_new_skill_process(CUser*, char, buySkillInfo&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_BuySkill` | `0x081bf952` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bf952  _ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo
#           DisPatcher_BuySkill::master_new_skill_process(CUser*, char, buySkillInfo&)
# range [0x081bf952, 0x081bfc5b]
081bf952 +0x000:  push   %ebp
081bf953 +0x001:  mov    %esp,%ebp
081bf955 +0x003:  push   %edi
081bf956 +0x004:  push   %esi
081bf957 +0x005:  push   %ebx
081bf958 +0x006:  sub    $0x7c,%esp
081bf95b +0x009:  mov    0x10(%ebp),%eax
081bf95e +0x00c:  mov    %al,-0x2c(%ebp)
081bf961 +0x00f:  mov    0x14(%ebp),%eax
081bf964 +0x012:  movzbl (%eax),%eax
081bf967 +0x015:  cmp    $0xc7,%al
081bf969 +0x017:  jbe    081bfb11 <+0x1bf>
081bf96f +0x01d:  mov    0x14(%ebp),%eax
081bf972 +0x020:  movzbl (%eax),%eax
081bf975 +0x023:  cmp    $0xd0,%al
081bf977 +0x025:  ja     081bfb11 <+0x1bf>
081bf97d +0x02b:  mov    0xc(%ebp),%eax
081bf980 +0x02e:  mov    %eax,(%esp)
081bf983 +0x031:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
081bf988 +0x036:  test   %al,%al
081bf98a +0x038:  jne    081bf99b <+0x49>
081bf98c +0x03a:  mov    0xc(%ebp),%eax
081bf98f +0x03d:  mov    %eax,(%esp)
081bf992 +0x040:  call   0866c414 <_ZN5CUser16IsSubGuildMasterEv>  ; CUser::IsSubGuildMaster()
081bf997 +0x045:  test   %al,%al
081bf999 +0x047:  je     081bf9a2 <+0x50>
081bf99b +0x049:  mov    $0x1,%eax
081bf9a0 +0x04e:  jmp    081bf9a7 <+0x55>
081bf9a2 +0x050:  mov    $0x0,%eax
081bf9a7 +0x055:  test   %al,%al
081bf9a9 +0x057:  je     081bfc01 <+0x2af>
081bf9af +0x05d:  mov    0xc(%ebp),%eax
081bf9b2 +0x060:  mov    %eax,(%esp)
081bf9b5 +0x063:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
081bf9ba +0x068:  movzwl 0x42(%eax),%eax
081bf9be +0x06c:  movzwl %ax,%ebx
081bf9c1 +0x06f:  mov    0x14(%ebp),%eax
081bf9c4 +0x072:  add    $0x8,%eax
081bf9c7 +0x075:  mov    %eax,-0x58(%ebp)
081bf9ca +0x078:  mov    0xc(%ebp),%eax
081bf9cd +0x07b:  mov    %eax,(%esp)
081bf9d0 +0x07e:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
081bf9d5 +0x083:  mov    %eax,-0x54(%ebp)
081bf9d8 +0x086:  mov    0xc(%ebp),%eax
081bf9db +0x089:  mov    %eax,(%esp)
081bf9de +0x08c:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
081bf9e3 +0x091:  mov    %eax,-0x50(%ebp)
081bf9e6 +0x094:  mov    0xc(%ebp),%eax
081bf9e9 +0x097:  mov    %eax,(%esp)
081bf9ec +0x09a:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
081bf9f1 +0x09f:  movsbl %al,%eax
081bf9f4 +0x0a2:  mov    %eax,-0x4c(%ebp)
081bf9f7 +0x0a5:  mov    0xc(%ebp),%eax
081bf9fa +0x0a8:  mov    %eax,(%esp)
081bf9fd +0x0ab:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
081bfa02 +0x0b0:  movsbl %al,%eax
081bfa05 +0x0b3:  mov    %eax,-0x48(%ebp)
081bfa08 +0x0b6:  mov    0xc(%ebp),%eax
081bfa0b +0x0b9:  mov    %eax,(%esp)
081bfa0e +0x0bc:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081bfa13 +0x0c1:  mov    %eax,%edi
081bfa15 +0x0c3:  mov    0x14(%ebp),%eax
081bfa18 +0x0c6:  movzbl (%eax),%eax
081bfa1b +0x0c9:  movzbl %al,%esi
081bfa1e +0x0cc:  mov    0xc(%ebp),%eax
081bfa21 +0x0cf:  mov    %eax,(%esp)
081bfa24 +0x0d2:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
081bfa29 +0x0d7:  mov    %eax,%edx
081bfa2b +0x0d9:  mov    %ebx,0x28(%esp)
081bfa2f +0x0dd:  lea    -0x22(%ebp),%eax
081bfa32 +0x0e0:  mov    %eax,0x24(%esp)
081bfa36 +0x0e4:  mov    -0x58(%ebp),%eax
081bfa39 +0x0e7:  mov    %eax,0x20(%esp)
081bfa3d +0x0eb:  lea    -0x20(%ebp),%eax
081bfa40 +0x0ee:  mov    %eax,0x1c(%esp)
081bfa44 +0x0f2:  mov    -0x54(%ebp),%eax
081bfa47 +0x0f5:  mov    %eax,0x18(%esp)
081bfa4b +0x0f9:  mov    -0x50(%ebp),%eax
081bfa4e +0x0fc:  mov    %eax,0x14(%esp)
081bfa52 +0x100:  mov    -0x4c(%ebp),%eax
081bfa55 +0x103:  mov    %eax,0x10(%esp)
081bfa59 +0x107:  mov    -0x48(%ebp),%eax
081bfa5c +0x10a:  mov    %eax,0xc(%esp)
081bfa60 +0x10e:  mov    %edi,0x8(%esp)
081bfa64 +0x112:  mov    %esi,0x4(%esp)
081bfa68 +0x116:  mov    %edx,(%esp)
081bfa6b +0x119:  call   086037c6 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi>  ; SkillSlot::master_new_guild_skill(int, int, int, int, STGuildDBInfoOnly const&, int, int&, int&, short&, int)
081bfa70 +0x11e:  mov    0x14(%ebp),%edx
081bfa73 +0x121:  mov    %eax,0x4(%edx)
081bfa76 +0x124:  mov    0x14(%ebp),%eax
081bfa79 +0x127:  mov    0x4(%eax),%eax
081bfa7c +0x12a:  test   %eax,%eax
081bfa7e +0x12c:  js     081bfc04 <+0x2b2>
081bfa84 +0x132:  mov    -0x20(%ebp),%eax
081bfa87 +0x135:  mov    %eax,-0x44(%ebp)
081bfa8a +0x138:  movzwl -0x22(%ebp),%eax
081bfa8e +0x13c:  cwtl
081bfa8f +0x13d:  mov    %eax,-0x40(%ebp)
081bfa92 +0x140:  mov    0x14(%ebp),%eax
081bfa95 +0x143:  mov    0x8(%eax),%eax
081bfa98 +0x146:  mov    %eax,-0x3c(%ebp)
081bfa9b +0x149:  mov    0x14(%ebp),%eax
081bfa9e +0x14c:  movzbl (%eax),%eax
081bfaa1 +0x14f:  movzbl %al,%edi
081bfaa4 +0x152:  mov    0xc(%ebp),%eax
081bfaa7 +0x155:  mov    %eax,(%esp)
081bfaaa +0x158:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081bfaaf +0x15d:  mov    %eax,%ebx
081bfab1 +0x15f:  movl   $0xffffffff,0x4(%esp)
081bfab9 +0x167:  mov    0xc(%ebp),%eax
081bfabc +0x16a:  mov    %eax,(%esp)
081bfabf +0x16d:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081bfac4 +0x172:  mov    %eax,%esi
081bfac6 +0x174:  mov    0xc(%ebp),%eax
081bfac9 +0x177:  mov    %eax,(%esp)
081bfacc +0x17a:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081bfad1 +0x17f:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081bfad7 +0x185:  mov    %eax,0x4(%esp)
081bfadb +0x189:  mov    %edx,(%esp)
081bfade +0x18c:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081bfae3 +0x191:  mov    -0x44(%ebp),%edx
081bfae6 +0x194:  mov    %edx,0x18(%esp)
081bfaea +0x198:  mov    -0x40(%ebp),%edx
081bfaed +0x19b:  mov    %edx,0x14(%esp)
081bfaf1 +0x19f:  mov    -0x3c(%ebp),%edx
081bfaf4 +0x1a2:  mov    %edx,0x10(%esp)
081bfaf8 +0x1a6:  mov    %edi,0xc(%esp)
081bfafc +0x1aa:  mov    %ebx,0x8(%esp)
081bfb00 +0x1ae:  mov    %esi,0x4(%esp)
081bfb04 +0x1b2:  mov    %eax,(%esp)
081bfb07 +0x1b5:  call   0846e026 <_ZN17CGuildServerProxy17SendBuyGuildSkillEjjiisj>  ; CGuildServerProxy::SendBuyGuildSkill(unsigned int, unsigned int, int, int, short, unsigned int)
081bfb0c +0x1ba:  jmp    081bfc05 <+0x2b3>
081bfb11 +0x1bf:  mov    0xc(%ebp),%eax
081bfb14 +0x1c2:  mov    %eax,(%esp)
081bfb17 +0x1c5:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
081bfb1c +0x1ca:  mov    %eax,-0x1c(%ebp)
081bfb1f +0x1cd:  mov    -0x1c(%ebp),%eax
081bfb22 +0x1d0:  cmp    $0xffffffff,%eax
081bfb25 +0x1d3:  je     081bfb2e <+0x1dc>
081bfb27 +0x1d5:  mov    -0x1c(%ebp),%eax
081bfb2a +0x1d8:  test   %eax,%eax
081bfb2c +0x1da:  jne    081bfb39 <+0x1e7>
081bfb2e +0x1dc:  cmpb   $0x1,-0x2c(%ebp)
081bfb32 +0x1e0:  jne    081bfb45 <+0x1f3>
081bfb34 +0x1e2:  jmp    081bfc54 <+0x302>
081bfb39 +0x1e7:  cmpb   $0x1,-0x2c(%ebp)
081bfb3d +0x1eb:  jne    081bfc50 <+0x2fe>
081bfb43 +0x1f1:  jmp    081bfb46 <+0x1f4>
081bfb45 +0x1f3:  nop
081bfb46 +0x1f4:  mov    0x14(%ebp),%eax
081bfb49 +0x1f7:  movzbl 0x1(%eax),%eax
081bfb4d +0x1fb:  movsbl %al,%eax
081bfb50 +0x1fe:  mov    %eax,-0x38(%ebp)
081bfb53 +0x201:  mov    0xc(%ebp),%eax
081bfb56 +0x204:  mov    %eax,(%esp)
081bfb59 +0x207:  call   0822f23c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48e6
081bfb5e +0x20c:  movsbl %al,%eax
081bfb61 +0x20f:  mov    %eax,-0x34(%ebp)
081bfb64 +0x212:  mov    0xc(%ebp),%eax
081bfb67 +0x215:  mov    %eax,(%esp)
081bfb6a +0x218:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
081bfb6f +0x21d:  movsbl %al,%eax
081bfb72 +0x220:  mov    %eax,-0x30(%ebp)
081bfb75 +0x223:  mov    0xc(%ebp),%eax
081bfb78 +0x226:  mov    %eax,(%esp)
081bfb7b +0x229:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081bfb80 +0x22e:  mov    %eax,%esi
081bfb82 +0x230:  mov    0xc(%ebp),%eax
081bfb85 +0x233:  mov    %eax,(%esp)
081bfb88 +0x236:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081bfb8d +0x23b:  mov    %eax,%ebx
081bfb8f +0x23d:  mov    0x14(%ebp),%eax
081bfb92 +0x240:  movzbl (%eax),%eax
081bfb95 +0x243:  movzbl %al,%edi
081bfb98 +0x246:  mov    0xc(%ebp),%eax
081bfb9b +0x249:  mov    %eax,(%esp)
081bfb9e +0x24c:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
081bfba3 +0x251:  mov    -0x38(%ebp),%edx
081bfba6 +0x254:  mov    %edx,0x18(%esp)
081bfbaa +0x258:  mov    -0x34(%ebp),%edx
081bfbad +0x25b:  mov    %edx,0x14(%esp)
081bfbb1 +0x25f:  mov    -0x30(%ebp),%edx
081bfbb4 +0x262:  mov    %edx,0x10(%esp)
081bfbb8 +0x266:  mov    %esi,0xc(%esp)
081bfbbc +0x26a:  mov    %ebx,0x8(%esp)
081bfbc0 +0x26e:  mov    %edi,0x4(%esp)
081bfbc4 +0x272:  mov    %eax,(%esp)
081bfbc7 +0x275:  call   08603a74 <_ZN9SkillSlot16master_new_skillEiiiiii>  ; SkillSlot::master_new_skill(int, int, int, int, int, int)
081bfbcc +0x27a:  mov    0x14(%ebp),%edx
081bfbcf +0x27d:  mov    %eax,0x4(%edx)
081bfbd2 +0x280:  mov    0x14(%ebp),%eax
081bfbd5 +0x283:  mov    0x4(%eax),%eax
081bfbd8 +0x286:  test   %eax,%eax
081bfbda +0x288:  js     081bfc05 <+0x2b3>
081bfbdc +0x28a:  mov    0x14(%ebp),%eax
081bfbdf +0x28d:  mov    0x4(%eax),%ebx
081bfbe2 +0x290:  mov    0xc(%ebp),%eax
081bfbe5 +0x293:  mov    %eax,(%esp)
081bfbe8 +0x296:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
081bfbed +0x29b:  mov    %ebx,0x4(%esp)
081bfbf1 +0x29f:  mov    %eax,(%esp)
081bfbf4 +0x2a2:  call   086068e6 <_ZNK9SkillSlot15get_skill_levelEi>  ; SkillSlot::get_skill_level(int) const
081bfbf9 +0x2a7:  mov    0x14(%ebp),%edx
081bfbfc +0x2aa:  mov    %eax,0x8(%edx)
081bfbff +0x2ad:  jmp    081bfc05 <+0x2b3>
081bfc01 +0x2af:  nop
081bfc02 +0x2b0:  jmp    081bfc05 <+0x2b3>
081bfc04 +0x2b2:  nop
081bfc05 +0x2b3:  mov    0x14(%ebp),%eax
081bfc08 +0x2b6:  mov    0x4(%eax),%eax
081bfc0b +0x2b9:  test   %eax,%eax
081bfc0d +0x2bb:  js     081bfc53 <+0x301>
081bfc0f +0x2bd:  mov    0x14(%ebp),%eax
081bfc12 +0x2c0:  mov    0x4(%eax),%ebx
081bfc15 +0x2c3:  mov    0xc(%ebp),%eax
081bfc18 +0x2c6:  mov    %eax,(%esp)
081bfc1b +0x2c9:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
081bfc20 +0x2ce:  mov    %ebx,0x4(%esp)
081bfc24 +0x2d2:  mov    %eax,(%esp)
081bfc27 +0x2d5:  call   086068e6 <_ZNK9SkillSlot15get_skill_levelEi>  ; SkillSlot::get_skill_level(int) const
081bfc2c +0x2da:  mov    0x14(%ebp),%edx
081bfc2f +0x2dd:  movzbl (%edx),%edx
081bfc32 +0x2e0:  movzbl %dl,%ecx
081bfc35 +0x2e3:  mov    0xc(%ebp),%edx
081bfc38 +0x2e6:  mov    0x796f8(%edx),%edx
081bfc3e +0x2ec:  mov    %eax,0x8(%esp)
081bfc42 +0x2f0:  mov    %ecx,0x4(%esp)
081bfc46 +0x2f4:  mov    %edx,(%esp)
081bfc49 +0x2f7:  call   084b9f24 <_ZN10HistoryLog15WriteLearnSkillEP8_IO_FILEii>  ; HistoryLog::WriteLearnSkill(_IO_FILE*, int, int)
081bfc4e +0x2fc:  jmp    081bfc54 <+0x302>
081bfc50 +0x2fe:  nop
081bfc51 +0x2ff:  jmp    081bfc54 <+0x302>
081bfc53 +0x301:  nop
081bfc54 +0x302:  add    $0x7c,%esp
081bfc57 +0x305:  pop    %ebx
081bfc58 +0x306:  pop    %esi
081bfc59 +0x307:  pop    %edi
081bfc5a +0x308:  pop    %ebp
081bfc5b +0x309:  ret
```

## 反编译 C

```c
// DisPatcher_BuySkill::master_new_skill_process @ 0x81bf952

/* DisPatcher_BuySkill::master_new_skill_process(CUser*, char, buySkillInfo&) */

void __thiscall
DisPatcher_BuySkill::master_new_skill_process
          (DisPatcher_BuySkill *this,CUser *param_1,char param_2,buySkillInfo *param_3)

{
  buySkillInfo bVar1;
  buySkillInfo bVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  STGuildDBInfoOnly *pSVar8;
  int iVar9;
  SkillSlot *pSVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  CGuildServerProxy *this_00;
  short local_26;
  uint local_24;
  int local_20;
  
  if (((byte)*param_3 < 200) || (0xd0 < (byte)*param_3)) {
    local_20 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    if ((local_20 == -1) || (local_20 == 0)) {
      if (param_2 == '\x01') {
        return;
      }
    }
    else if (param_2 != '\x01') {
      return;
    }
    bVar1 = param_3[1];
    cVar5 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
    cVar6 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    iVar7 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    iVar9 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    bVar2 = *param_3;
    pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    uVar11 = SkillSlot::master_new_skill
                       (pSVar10,(uint)(byte)bVar2,iVar9,iVar7,(int)cVar6,(int)cVar5,(int)(char)bVar1
                       );
    *(undefined4 *)(param_3 + 4) = uVar11;
    if (-1 < *(int *)(param_3 + 4)) {
      iVar7 = *(int *)(param_3 + 4);
      pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      uVar11 = SkillSlot::get_skill_level(pSVar10,iVar7);
      *(undefined4 *)(param_3 + 8) = uVar11;
    }
  }
  else {
    cVar5 = CUser::IsGuildMaster(param_1);
    if ((cVar5 == '\0') && (cVar5 = CUser::IsSubGuildMaster(param_1), cVar5 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      iVar7 = CUser::GetGuildDBInfo(param_1);
      uVar3 = *(ushort *)(iVar7 + 0x42);
      iVar7 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
      pSVar8 = (STGuildDBInfoOnly *)CUser::GetGuildDBInfo(param_1);
      cVar5 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
      cVar6 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
      iVar9 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      bVar1 = *param_3;
      pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      uVar11 = SkillSlot::master_new_guild_skill
                         (pSVar10,(uint)(byte)bVar1,iVar9,(int)cVar6,(int)cVar5,pSVar8,iVar7,
                          (int *)&local_24,(int *)(param_3 + 8),&local_26,(uint)uVar3);
      *(undefined4 *)(param_3 + 4) = uVar11;
      if (-1 < *(int *)(param_3 + 4)) {
        iVar7 = *(int *)(param_3 + 8);
        bVar1 = *param_3;
        uVar12 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
        uVar13 = CUser::get_charac_no(param_1,-1);
        uVar11 = CUser::GetServerGroup(param_1);
        this_00 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                            (GlobalData::s_guild_proxy_mgr,uVar11);
        CGuildServerProxy::SendBuyGuildSkill
                  (this_00,uVar13,uVar12,(uint)(byte)bVar1,iVar7,local_26,local_24);
      }
    }
  }
  if (-1 < *(int *)(param_3 + 4)) {
    iVar7 = *(int *)(param_3 + 4);
    pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    iVar7 = SkillSlot::get_skill_level(pSVar10,iVar7);
    HistoryLog::WriteLearnSkill(*(_IO_FILE **)(param_1 + 0x796f8),(uint)(byte)*param_3,iVar7);
  }
  return;
}
```
