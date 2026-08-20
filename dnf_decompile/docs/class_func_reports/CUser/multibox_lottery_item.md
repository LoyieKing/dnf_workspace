# multibox_lottery_item

`_ZN5CUser21multibox_lottery_itemEii`

`CUser::multibox_lottery_item(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08674968` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08674968  _ZN5CUser21multibox_lottery_itemEii
#           CUser::multibox_lottery_item(int, int)
# range [0x08674968, 0x08675ac5]
08674968 +0x0000:  push   %ebp
08674969 +0x0001:  mov    %esp,%ebp
0867496b +0x0003:  push   %edi
0867496c +0x0004:  push   %esi
0867496d +0x0005:  push   %ebx
0867496e +0x0006:  sub    $0x25c,%esp
08674974 +0x000c:  lea    -0x14d(%ebp),%eax
0867497a +0x0012:  mov    %eax,(%esp)
0867497d +0x0015:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08674982 +0x001a:  mov    0x8(%ebp),%eax
08674985 +0x001d:  mov    %eax,(%esp)
08674988 +0x0020:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867498d +0x0025:  lea    -0x218(%ebp),%edx
08674993 +0x002b:  mov    0xc(%ebp),%ecx
08674996 +0x002e:  mov    %ecx,0xc(%esp)
0867499a +0x0032:  movl   $0x1,0x8(%esp)
086749a2 +0x003a:  mov    %eax,0x4(%esp)
086749a6 +0x003e:  mov    %edx,(%esp)
086749a9 +0x0041:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
086749ae +0x0046:  sub    $0x4,%esp
086749b1 +0x0049:  mov    -0x218(%ebp),%eax
086749b7 +0x004f:  mov    %eax,-0x14d(%ebp)
086749bd +0x0055:  mov    -0x214(%ebp),%eax
086749c3 +0x005b:  mov    %eax,-0x149(%ebp)
086749c9 +0x0061:  mov    -0x210(%ebp),%eax
086749cf +0x0067:  mov    %eax,-0x145(%ebp)
086749d5 +0x006d:  mov    -0x20c(%ebp),%eax
086749db +0x0073:  mov    %eax,-0x141(%ebp)
086749e1 +0x0079:  mov    -0x208(%ebp),%eax
086749e7 +0x007f:  mov    %eax,-0x13d(%ebp)
086749ed +0x0085:  mov    -0x204(%ebp),%eax
086749f3 +0x008b:  mov    %eax,-0x139(%ebp)
086749f9 +0x0091:  mov    -0x200(%ebp),%eax
086749ff +0x0097:  mov    %eax,-0x135(%ebp)
08674a05 +0x009d:  mov    -0x1fc(%ebp),%eax
08674a0b +0x00a3:  mov    %eax,-0x131(%ebp)
08674a11 +0x00a9:  mov    -0x1f8(%ebp),%eax
08674a17 +0x00af:  mov    %eax,-0x12d(%ebp)
08674a1d +0x00b5:  mov    -0x1f4(%ebp),%eax
08674a23 +0x00bb:  mov    %eax,-0x129(%ebp)
08674a29 +0x00c1:  mov    -0x1f0(%ebp),%eax
08674a2f +0x00c7:  mov    %eax,-0x125(%ebp)
08674a35 +0x00cd:  mov    -0x1ec(%ebp),%eax
08674a3b +0x00d3:  mov    %eax,-0x121(%ebp)
08674a41 +0x00d9:  mov    -0x1e8(%ebp),%eax
08674a47 +0x00df:  mov    %eax,-0x11d(%ebp)
08674a4d +0x00e5:  mov    -0x1e4(%ebp),%eax
08674a53 +0x00eb:  mov    %eax,-0x119(%ebp)
08674a59 +0x00f1:  mov    -0x1e0(%ebp),%eax
08674a5f +0x00f7:  mov    %eax,-0x115(%ebp)
08674a65 +0x00fd:  movzbl -0x1dc(%ebp),%eax
08674a6c +0x0104:  mov    %al,-0x111(%ebp)
08674a72 +0x010a:  lea    -0x78(%ebp),%eax
08674a75 +0x010d:  mov    %eax,(%esp)
08674a78 +0x0110:  call   084b4a3c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xaef>  ; global constructors keyed to game_master::CMacro::Reset()+0xaef
08674a7d +0x0115:  movl   $0x0,-0x4c(%ebp)
08674a84 +0x011c:  mov    -0x14b(%ebp),%eax
08674a8a +0x0122:  cmp    $0x2061,%eax
08674a8f +0x0127:  je     08674a98 <+0x130>
08674a91 +0x0129:  cmp    $0x289843,%eax
08674a96 +0x012e:  jne    08674abd <+0x155>
08674a98 +0x0130:  lea    -0x78(%ebp),%eax
08674a9b +0x0133:  mov    %eax,0xc(%esp)
08674a9f +0x0137:  mov    0x10(%ebp),%eax
08674aa2 +0x013a:  mov    %eax,0x8(%esp)
08674aa6 +0x013e:  mov    0xc(%ebp),%eax
08674aa9 +0x0141:  mov    %eax,0x4(%esp)
08674aad +0x0145:  mov    0x8(%ebp),%eax
08674ab0 +0x0148:  mov    %eax,(%esp)
08674ab3 +0x014b:  call   08675d0c <_ZN5CUser29process_use_unlocked_multiboxEiiRSt6vectorISt4pairI10Inven_ItembESaIS3_EE>  ; CUser::process_use_unlocked_multibox(int, int, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&)
08674ab8 +0x0150:  mov    %eax,-0x4c(%ebp)
08674abb +0x0153:  jmp    08674ae0 <+0x178>
08674abd +0x0155:  lea    -0x78(%ebp),%eax
08674ac0 +0x0158:  mov    %eax,0xc(%esp)
08674ac4 +0x015c:  mov    0x10(%ebp),%eax
08674ac7 +0x015f:  mov    %eax,0x8(%esp)
08674acb +0x0163:  mov    0xc(%ebp),%eax
08674ace +0x0166:  mov    %eax,0x4(%esp)
08674ad2 +0x016a:  mov    0x8(%ebp),%eax
08674ad5 +0x016d:  mov    %eax,(%esp)
08674ad8 +0x0170:  call   08675ac6 <_ZN5CUser27process_use_locked_multiboxEiiRSt6vectorISt4pairI10Inven_ItembESaIS3_EE>  ; CUser::process_use_locked_multibox(int, int, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&)
08674add +0x0175:  mov    %eax,-0x4c(%ebp)
08674ae0 +0x0178:  cmpl   $0x0,-0x4c(%ebp)
08674ae4 +0x017c:  je     08674b2a <+0x1c2>
08674ae6 +0x017e:  cmpl   $0x13,-0x4c(%ebp)
08674aea +0x0182:  jne    08674b22 <+0x1ba>
08674aec +0x0184:  mov    -0x14b(%ebp),%ebx
08674af2 +0x018a:  movl   $0x11,0x4(%esp)
08674afa +0x0192:  mov    0x8(%ebp),%eax
08674afd +0x0195:  mov    %eax,(%esp)
08674b00 +0x0198:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08674b05 +0x019d:  mov    %ebx,0x8(%esp)
08674b09 +0x01a1:  mov    0x8(%ebp),%edx
08674b0c +0x01a4:  mov    %edx,0x4(%esp)
08674b10 +0x01a8:  mov    %eax,(%esp)
08674b13 +0x01ab:  call   080dd142 <_ZN12CBoosterGage23send_error_state_packetEP5CUserm>  ; CBoosterGage::send_error_state_packet(CUser*, unsigned long)
08674b18 +0x01b0:  mov    $0xffffffff,%ebx
08674b1d +0x01b5:  jmp    08675aad <+0x1145>
08674b22 +0x01ba:  mov    -0x4c(%ebp),%ebx
08674b25 +0x01bd:  jmp    08675aad <+0x1145>
08674b2a +0x01c2:  mov    -0x14b(%ebp),%ebx
08674b30 +0x01c8:  movl   $0x11,0x4(%esp)
08674b38 +0x01d0:  mov    0x8(%ebp),%eax
08674b3b +0x01d3:  mov    %eax,(%esp)
08674b3e +0x01d6:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08674b43 +0x01db:  mov    0x8(%ebp),%edx
08674b46 +0x01de:  mov    %edx,0x8(%esp)
08674b4a +0x01e2:  mov    %ebx,0x4(%esp)
08674b4e +0x01e6:  mov    %eax,(%esp)
08674b51 +0x01e9:  call   080dd134 <_ZN12CBoosterGage16cal_booster_gageEmP5CUser>  ; CBoosterGage::cal_booster_gage(unsigned long, CUser*)
08674b56 +0x01ee:  mov    %al,-0x45(%ebp)
08674b59 +0x01f1:  cmpb   $0x0,-0x45(%ebp)
08674b5d +0x01f5:  je     08674b88 <+0x220>
08674b5f +0x01f7:  movl   $0x11,0x4(%esp)
08674b67 +0x01ff:  mov    0x8(%ebp),%eax
08674b6a +0x0202:  mov    %eax,(%esp)
08674b6d +0x0205:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08674b72 +0x020a:  lea    -0x78(%ebp),%edx
08674b75 +0x020d:  mov    %edx,0x8(%esp)
08674b79 +0x0211:  mov    0x8(%ebp),%edx
08674b7c +0x0214:  mov    %edx,0x4(%esp)
08674b80 +0x0218:  mov    %eax,(%esp)
08674b83 +0x021b:  call   080dc9ca <_ZN12CBoosterGage29log_booster_gage_bonus_rewardEP5CUserRKSt6vectorISt4pairI10Inven_ItembESaIS5_EE>  ; CBoosterGage::log_booster_gage_bonus_reward(CUser*, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > > const&)
08674b88 +0x0220:  lea    -0x84(%ebp),%eax
08674b8e +0x0226:  mov    %eax,(%esp)
08674b91 +0x0229:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08674b96 +0x022e:  movl   $0xd3,0x8(%esp)
08674b9e +0x0236:  movl   $0x1,0x4(%esp)
08674ba6 +0x023e:  lea    -0x84(%ebp),%eax
08674bac +0x0244:  mov    %eax,(%esp)
08674baf +0x0247:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08674bb4 +0x024c:  movl   $0x1,0x4(%esp)
08674bbc +0x0254:  lea    -0x84(%ebp),%eax
08674bc2 +0x025a:  mov    %eax,(%esp)
08674bc5 +0x025d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08674bca +0x0262:  mov    0xc(%ebp),%eax
08674bcd +0x0265:  mov    %eax,0x4(%esp)
08674bd1 +0x0269:  lea    -0x84(%ebp),%eax
08674bd7 +0x026f:  mov    %eax,(%esp)
08674bda +0x0272:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08674bdf +0x0277:  mov    0x10(%ebp),%eax
08674be2 +0x027a:  mov    %eax,0x4(%esp)
08674be6 +0x027e:  lea    -0x84(%ebp),%eax
08674bec +0x0284:  mov    %eax,(%esp)
08674bef +0x0287:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08674bf4 +0x028c:  lea    -0x78(%ebp),%eax
08674bf7 +0x028f:  mov    %eax,(%esp)
08674bfa +0x0292:  call   084b4aca <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xb7d>  ; global constructors keyed to game_master::CMacro::Reset()+0xb7d
08674bff +0x0297:  mov    %eax,0x4(%esp)
08674c03 +0x029b:  lea    -0x84(%ebp),%eax
08674c09 +0x02a1:  mov    %eax,(%esp)
08674c0c +0x02a4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08674c11 +0x02a9:  lea    -0x90(%ebp),%eax
08674c17 +0x02af:  mov    %eax,(%esp)
08674c1a +0x02b2:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08674c1f +0x02b7:  lea    -0x94(%ebp),%eax
08674c25 +0x02bd:  lea    -0x78(%ebp),%edx
08674c28 +0x02c0:  mov    %edx,0x4(%esp)
08674c2c +0x02c4:  mov    %eax,(%esp)
08674c2f +0x02c7:  call   080fe240 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x56c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x56c
08674c34 +0x02cc:  sub    $0x4,%esp
08674c37 +0x02cf:  jmp    08675675 <+0xd0d>
08674c3c +0x02d4:  lea    -0x94(%ebp),%eax
08674c42 +0x02da:  mov    %eax,(%esp)
08674c45 +0x02dd:  call   080fe2b6 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5e2>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5e2
08674c4a +0x02e2:  mov    (%eax),%edx
08674c4c +0x02e4:  mov    %edx,-0x18b(%ebp)
08674c52 +0x02ea:  mov    0x4(%eax),%edx
08674c55 +0x02ed:  mov    %edx,-0x187(%ebp)
08674c5b +0x02f3:  mov    0x8(%eax),%edx
08674c5e +0x02f6:  mov    %edx,-0x183(%ebp)
08674c64 +0x02fc:  mov    0xc(%eax),%edx
08674c67 +0x02ff:  mov    %edx,-0x17f(%ebp)
08674c6d +0x0305:  mov    0x10(%eax),%edx
08674c70 +0x0308:  mov    %edx,-0x17b(%ebp)
08674c76 +0x030e:  mov    0x14(%eax),%edx
08674c79 +0x0311:  mov    %edx,-0x177(%ebp)
08674c7f +0x0317:  mov    0x18(%eax),%edx
08674c82 +0x031a:  mov    %edx,-0x173(%ebp)
08674c88 +0x0320:  mov    0x1c(%eax),%edx
08674c8b +0x0323:  mov    %edx,-0x16f(%ebp)
08674c91 +0x0329:  mov    0x20(%eax),%edx
08674c94 +0x032c:  mov    %edx,-0x16b(%ebp)
08674c9a +0x0332:  mov    0x24(%eax),%edx
08674c9d +0x0335:  mov    %edx,-0x167(%ebp)
08674ca3 +0x033b:  mov    0x28(%eax),%edx
08674ca6 +0x033e:  mov    %edx,-0x163(%ebp)
08674cac +0x0344:  mov    0x2c(%eax),%edx
08674caf +0x0347:  mov    %edx,-0x15f(%ebp)
08674cb5 +0x034d:  mov    0x30(%eax),%edx
08674cb8 +0x0350:  mov    %edx,-0x15b(%ebp)
08674cbe +0x0356:  mov    0x34(%eax),%edx
08674cc1 +0x0359:  mov    %edx,-0x157(%ebp)
08674cc7 +0x035f:  mov    0x38(%eax),%edx
08674cca +0x0362:  mov    %edx,-0x153(%ebp)
08674cd0 +0x0368:  movzwl 0x3c(%eax),%eax
08674cd4 +0x036c:  mov    %ax,-0x14f(%ebp)
08674cdb +0x0373:  movl   $0xffffffff,-0x44(%ebp)
08674ce2 +0x037a:  movl   $0x0,-0x9c(%ebp)
08674cec +0x0384:  mov    -0x189(%ebp),%eax
08674cf2 +0x038a:  cmp    $0x1,%eax
08674cf5 +0x038d:  jne    08674e83 <+0x51b>
08674cfb +0x0393:  mov    -0x184(%ebp),%eax
08674d01 +0x0399:  test   %eax,%eax
08674d03 +0x039b:  jle    08674e5e <+0x4f6>
08674d09 +0x03a1:  mov    -0x184(%ebp),%eax
08674d0f +0x03a7:  cmp    $0x3e7,%eax
08674d14 +0x03ac:  jg     08674e5e <+0x4f6>
08674d1a +0x03b2:  mov    -0x184(%ebp),%eax
08674d20 +0x03b8:  mov    %eax,-0x30(%ebp)
08674d23 +0x03bb:  cmpb   $0x0,-0x45(%ebp)
08674d27 +0x03bf:  je     08674d44 <+0x3dc>
08674d29 +0x03c1:  mov    -0x184(%ebp),%ebx
08674d2f +0x03c7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08674d34 +0x03cc:  movzbl 0x877e(%eax),%eax
08674d3b +0x03d3:  movzbl %al,%eax
08674d3e +0x03d6:  imul   %ebx,%eax
08674d41 +0x03d9:  mov    %eax,-0x30(%ebp)
08674d44 +0x03dc:  mov    0x8(%ebp),%eax
08674d47 +0x03df:  mov    %eax,(%esp)
08674d4a +0x03e2:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08674d4f +0x03e7:  mov    %eax,(%esp)
08674d52 +0x03ea:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
08674d57 +0x03ef:  mov    -0x30(%ebp),%edx
08674d5a +0x03f2:  lea    (%eax,%edx,1),%ebx
08674d5d +0x03f5:  mov    0x8(%ebp),%eax
08674d60 +0x03f8:  mov    %eax,(%esp)
08674d63 +0x03fb:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08674d68 +0x0400:  mov    %ebx,0x4(%esp)
08674d6c +0x0404:  mov    %eax,(%esp)
08674d6f +0x0407:  call   08110c86 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x198>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x198
08674d74 +0x040c:  mov    0x8(%ebp),%eax
08674d77 +0x040f:  mov    %eax,(%esp)
08674d7a +0x0412:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08674d7f +0x0417:  mov    %eax,(%esp)
08674d82 +0x041a:  call   08110c7a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18c
08674d87 +0x041f:  mov    0x8(%ebp),%edx
08674d8a +0x0422:  lea    0x79700(%edx),%ecx
08674d90 +0x0428:  movl   $0x2,0xc(%esp)
08674d98 +0x0430:  mov    -0x30(%ebp),%edx
08674d9b +0x0433:  mov    %edx,0x8(%esp)
08674d9f +0x0437:  mov    %eax,0x4(%esp)
08674da3 +0x043b:  mov    %ecx,(%esp)
08674da6 +0x043e:  call   08683c58 <_ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason>  ; cUserHistoryLog::EventCoinAdd(int, int, eCoinAddReason)
08674dab +0x0443:  mov    0x8(%ebp),%eax
08674dae +0x0446:  mov    %eax,(%esp)
08674db1 +0x0449:  call   086504d8 <_ZN5CUser13SaveMoneyCoinEv>  ; CUser::SaveMoneyCoin()
08674db6 +0x044e:  mov    0x8(%ebp),%eax
08674db9 +0x0451:  mov    %eax,(%esp)
08674dbc +0x0454:  call   08656808 <_ZN5CUser8SendCoinEv>  ; CUser::SendCoin()
08674dc1 +0x0459:  movl   $0xffffffff,0x4(%esp)
08674dc9 +0x0461:  lea    -0x84(%ebp),%eax
08674dcf +0x0467:  mov    %eax,(%esp)
08674dd2 +0x046a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08674dd7 +0x046f:  mov    -0x189(%ebp),%eax
08674ddd +0x0475:  mov    %eax,0x4(%esp)
08674de1 +0x0479:  lea    -0x84(%ebp),%eax
08674de7 +0x047f:  mov    %eax,(%esp)
08674dea +0x0482:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08674def +0x0487:  mov    -0x184(%ebp),%eax
08674df5 +0x048d:  mov    %eax,0x4(%esp)
08674df9 +0x0491:  lea    -0x84(%ebp),%eax
08674dff +0x0497:  mov    %eax,(%esp)
08674e02 +0x049a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08674e07 +0x049f:  movzwl -0x180(%ebp),%eax
08674e0e +0x04a6:  movzwl %ax,%eax
08674e11 +0x04a9:  mov    %eax,0x4(%esp)
08674e15 +0x04ad:  lea    -0x84(%ebp),%eax
08674e1b +0x04b3:  mov    %eax,(%esp)
08674e1e +0x04b6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08674e23 +0x04bb:  lea    -0x18b(%ebp),%eax
08674e29 +0x04c1:  mov    %eax,(%esp)
08674e2c +0x04c4:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
08674e31 +0x04c9:  movzbl %al,%eax
08674e34 +0x04cc:  mov    %eax,0x4(%esp)
08674e38 +0x04d0:  lea    -0x84(%ebp),%eax
08674e3e +0x04d6:  mov    %eax,(%esp)
08674e41 +0x04d9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08674e46 +0x04de:  lea    -0x18b(%ebp),%eax
08674e4c +0x04e4:  mov    %eax,0x4(%esp)
08674e50 +0x04e8:  lea    -0x84(%ebp),%eax
08674e56 +0x04ee:  mov    %eax,(%esp)
08674e59 +0x04f1:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
08674e5e +0x04f6:  lea    -0x68(%ebp),%eax
08674e61 +0x04f9:  movl   $0x0,0x8(%esp)
08674e69 +0x0501:  lea    -0x94(%ebp),%edx
08674e6f +0x0507:  mov    %edx,0x4(%esp)
08674e73 +0x050b:  mov    %eax,(%esp)
08674e76 +0x050e:  call   080fe2c0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5ec>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5ec
08674e7b +0x0513:  sub    $0x4,%esp
08674e7e +0x0516:  jmp    08675675 <+0xd0d>
08674e83 +0x051b:  movl   $0x0,-0x40(%ebp)
08674e8a +0x0522:  movl   $0x0,-0x3c(%ebp)
08674e91 +0x0529:  movb   $0x0,-0x35(%ebp)
08674e95 +0x052d:  mov    -0x189(%ebp),%eax
08674e9b +0x0533:  mov    %eax,%ebx
08674e9d +0x0535:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08674ea2 +0x053a:  mov    %ebx,0x4(%esp)
08674ea6 +0x053e:  mov    %eax,(%esp)
08674ea9 +0x0541:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08674eae +0x0546:  mov    %eax,-0x34(%ebp)
08674eb1 +0x0549:  cmpl   $0x0,-0x34(%ebp)
08674eb5 +0x054d:  jne    08674ec1 <+0x559>
08674eb7 +0x054f:  mov    $0x11,%ebx
08674ebc +0x0554:  jmp    08675a5a <+0x10f2>
08674ec1 +0x0559:  mov    -0x34(%ebp),%eax
08674ec4 +0x055c:  mov    (%eax),%eax
08674ec6 +0x055e:  add    $0x10,%eax
08674ec9 +0x0561:  mov    (%eax),%edx
08674ecb +0x0563:  mov    -0x34(%ebp),%eax
08674ece +0x0566:  mov    %eax,(%esp)
08674ed1 +0x0569:  call   *%edx
08674ed3 +0x056b:  test   %al,%al
08674ed5 +0x056d:  je     08674fc3 <+0x65b>
08674edb +0x0573:  lea    -0xb4(%ebp),%edx
08674ee1 +0x0579:  mov    $0x0,%ecx
08674ee6 +0x057e:  mov    $0x18,%eax
08674eeb +0x0583:  mov    %eax,%ebx
08674eed +0x0585:  and    $0xfffffffc,%ebx
08674ef0 +0x0588:  mov    $0x0,%eax
08674ef5 +0x058d:  mov    %ecx,(%edx,%eax,1)
08674ef8 +0x0590:  add    $0x4,%eax
08674efb +0x0593:  cmp    %ebx,%eax
08674efd +0x0595:  jb     08674ef5 <+0x58d>
08674eff +0x0597:  add    %eax,%edx
08674f01 +0x0599:  movl   $0x0,0x4(%esp)
08674f09 +0x05a1:  lea    -0x18b(%ebp),%eax
08674f0f +0x05a7:  mov    %eax,(%esp)
08674f12 +0x05aa:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
08674f17 +0x05af:  mov    0x8(%ebp),%eax
08674f1a +0x05b2:  mov    %eax,(%esp)
08674f1d +0x05b5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08674f22 +0x05ba:  lea    -0xb4(%ebp),%edx
08674f28 +0x05c0:  mov    %edx,0x8(%esp)
08674f2c +0x05c4:  mov    %eax,0x4(%esp)
08674f30 +0x05c8:  movl   $0x1,(%esp)
08674f37 +0x05cf:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
08674f3c +0x05d4:  mov    %eax,%esi
08674f3e +0x05d6:  mov    -0x34(%ebp),%eax
08674f41 +0x05d9:  mov    %eax,(%esp)
08674f44 +0x05dc:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
08674f49 +0x05e1:  mov    %eax,%ebx
08674f4b +0x05e3:  movzbl -0x45(%ebp),%edi
08674f4f +0x05e7:  movl   $0x11,0x4(%esp)
08674f57 +0x05ef:  mov    0x8(%ebp),%eax
08674f5a +0x05f2:  mov    %eax,(%esp)
08674f5d +0x05f5:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08674f62 +0x05fa:  lea    -0x9c(%ebp),%edx
08674f68 +0x0600:  mov    %edx,0x2c(%esp)
08674f6c +0x0604:  movl   $0x7,0x28(%esp)
08674f74 +0x060c:  mov    %esi,0x24(%esp)
08674f78 +0x0610:  movl   $0xffffffff,0x20(%esp)
08674f80 +0x0618:  movl   $0x0,0x1c(%esp)
08674f88 +0x0620:  movl   $0x0,0x18(%esp)
08674f90 +0x0628:  mov    %ebx,0x14(%esp)
08674f94 +0x062c:  lea    -0x18b(%ebp),%edx
08674f9a +0x0632:  mov    %edx,0x10(%esp)
08674f9e +0x0636:  mov    0x8(%ebp),%edx
08674fa1 +0x0639:  mov    %edx,0xc(%esp)
08674fa5 +0x063d:  mov    %edi,0x8(%esp)
08674fa9 +0x0641:  lea    -0x90(%ebp),%edx
08674faf +0x0647:  mov    %edx,0x4(%esp)
08674fb3 +0x064b:  mov    %eax,(%esp)
08674fb6 +0x064e:  call   080dcbd6 <_ZN12CBoosterGage13AddAvatarItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_ItemibccPKc20eAvatarItemAddReasonRi>  ; CBoosterGage::AddAvatarItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, CUser*, Inven_Item const&, int, bool, char, char, char const*, eAvatarItemAddReason, int&)
08674fbb +0x0653:  mov    %eax,-0x44(%ebp)
08674fbe +0x0656:  jmp    08675506 <+0xb9e>
08674fc3 +0x065b:  mov    -0x34(%ebp),%eax
08674fc6 +0x065e:  mov    (%eax),%eax
08674fc8 +0x0660:  add    $0x14,%eax
08674fcb +0x0663:  mov    (%eax),%edx
08674fcd +0x0665:  mov    -0x34(%ebp),%eax
08674fd0 +0x0668:  mov    %eax,(%esp)
08674fd3 +0x066b:  call   *%edx
08674fd5 +0x066d:  test   %al,%al
08674fd7 +0x066f:  je     08674ff7 <+0x68f>
08674fd9 +0x0671:  mov    -0x34(%ebp),%eax
08674fdc +0x0674:  mov    (%eax),%eax
08674fde +0x0676:  add    $0xc,%eax
08674fe1 +0x0679:  mov    (%eax),%edx
08674fe3 +0x067b:  mov    -0x34(%ebp),%eax
08674fe6 +0x067e:  mov    %eax,(%esp)
08674fe9 +0x0681:  call   *%edx
08674feb +0x0683:  cmp    $0x16,%eax
08674fee +0x0686:  jne    08674ff7 <+0x68f>
08674ff0 +0x0688:  mov    $0x1,%eax
08674ff5 +0x068d:  jmp    08674ffc <+0x694>
08674ff7 +0x068f:  mov    $0x0,%eax
08674ffc +0x0694:  test   %al,%al
08674ffe +0x0696:  je     0867511d <+0x7b5>
08675004 +0x069c:  movzbl -0x18a(%ebp),%eax
0867500b +0x06a3:  cmp    $0x5,%al
0867500d +0x06a5:  jne    08675111 <+0x7a9>
08675013 +0x06ab:  lea    -0x18b(%ebp),%eax
08675019 +0x06b1:  mov    %eax,(%esp)
0867501c +0x06b4:  call   08336eae <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item>  ; user_creature::CCreatureItemConverter::SetEggItem(Inven_Item*)
08675021 +0x06b9:  xor    $0x1,%eax
08675024 +0x06bc:  test   %al,%al
08675026 +0x06be:  je     08675034 <+0x6cc>
08675028 +0x06c0:  movl   $0xffffffff,-0x44(%ebp)
0867502f +0x06c7:  jmp    08675506 <+0xb9e>
08675034 +0x06cc:  lea    -0xcc(%ebp),%edx
0867503a +0x06d2:  mov    $0x0,%ecx
0867503f +0x06d7:  mov    $0x18,%eax
08675044 +0x06dc:  mov    %eax,%ebx
08675046 +0x06de:  and    $0xfffffffc,%ebx
08675049 +0x06e1:  mov    $0x0,%eax
0867504e +0x06e6:  mov    %ecx,(%edx,%eax,1)
08675051 +0x06e9:  add    $0x4,%eax
08675054 +0x06ec:  cmp    %ebx,%eax
08675056 +0x06ee:  jb     0867504e <+0x6e6>
08675058 +0x06f0:  add    %eax,%edx
0867505a +0x06f2:  mov    0x8(%ebp),%eax
0867505d +0x06f5:  mov    %eax,(%esp)
08675060 +0x06f8:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08675065 +0x06fd:  lea    -0xcc(%ebp),%edx
0867506b +0x0703:  mov    %edx,0x8(%esp)
0867506f +0x0707:  mov    %eax,0x4(%esp)
08675073 +0x070b:  movl   $0x1,(%esp)
0867507a +0x0712:  call   084b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>  ; WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
0867507f +0x0717:  mov    %eax,%edi
08675081 +0x0719:  mov    -0x34(%ebp),%eax
08675084 +0x071c:  mov    %eax,(%esp)
08675087 +0x071f:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0867508c +0x0724:  mov    %eax,%esi
0867508e +0x0726:  mov    -0x34(%ebp),%eax
08675091 +0x0729:  mov    %eax,(%esp)
08675094 +0x072c:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
08675099 +0x0731:  mov    %eax,%ebx
0867509b +0x0733:  movzbl -0x45(%ebp),%eax
0867509f +0x0737:  mov    %eax,-0x220(%ebp)
086750a5 +0x073d:  movl   $0x11,0x4(%esp)
086750ad +0x0745:  mov    0x8(%ebp),%eax
086750b0 +0x0748:  mov    %eax,(%esp)
086750b3 +0x074b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
086750b8 +0x0750:  mov    %edi,0x28(%esp)
086750bc +0x0754:  mov    %esi,0x24(%esp)
086750c0 +0x0758:  mov    %ebx,0x20(%esp)
086750c4 +0x075c:  movl   $0x0,0x1c(%esp)
086750cc +0x0764:  movl   $0x1,0x18(%esp)
086750d4 +0x076c:  movl   $0x3,0x14(%esp)
086750dc +0x0774:  lea    -0x18b(%ebp),%edx
086750e2 +0x077a:  mov    %edx,0x10(%esp)
086750e6 +0x077e:  mov    0x8(%ebp),%edx
086750e9 +0x0781:  mov    %edx,0xc(%esp)
086750ed +0x0785:  mov    -0x220(%ebp),%edx
086750f3 +0x078b:  mov    %edx,0x8(%esp)
086750f7 +0x078f:  lea    -0x90(%ebp),%edx
086750fd +0x0795:  mov    %edx,0x4(%esp)
08675101 +0x0799:  mov    %eax,(%esp)
08675104 +0x079c:  call   080dcd8c <_ZN12CBoosterGage18InsertCreatureItemERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonbbiiPKc>  ; CBoosterGage::InsertCreatureItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, CUser*, Inven_Item const&, eItemAddReason, bool, bool, int, int, char const*)
08675109 +0x07a1:  mov    %eax,-0x44(%ebp)
0867510c +0x07a4:  jmp    08675506 <+0xb9e>
08675111 +0x07a9:  movl   $0xffffffff,-0x44(%ebp)
08675118 +0x07b0:  jmp    08675506 <+0xb9e>
0867511d +0x07b5:  movl   $0xffffffff,-0x44(%ebp)
08675124 +0x07bc:  movl   $0x0,-0xd0(%ebp)
0867512e +0x07c6:  movl   $0x0,-0xd4(%ebp)
08675138 +0x07d0:  movb   $0x0,-0xd5(%ebp)
0867513f +0x07d7:  mov    -0x189(%ebp),%eax
08675145 +0x07dd:  mov    %eax,%edx
08675147 +0x07df:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
0867514c +0x07e4:  lea    -0xd5(%ebp),%ecx
08675152 +0x07ea:  mov    %ecx,0x10(%esp)
08675156 +0x07ee:  lea    -0xd4(%ebp),%ecx
0867515c +0x07f4:  mov    %ecx,0xc(%esp)
08675160 +0x07f8:  lea    -0xd0(%ebp),%ecx
08675166 +0x07fe:  mov    %ecx,0x8(%esp)
0867516a +0x0802:  mov    %edx,0x4(%esp)
0867516e +0x0806:  mov    %eax,(%esp)
08675171 +0x0809:  call   08324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>  ; WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&)
08675176 +0x080e:  test   %al,%al
08675178 +0x0810:  je     086753e9 <+0xa81>
0867517e +0x0816:  mov    -0x189(%ebp),%eax
08675184 +0x081c:  mov    %eax,%ebx
08675186 +0x081e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867518b +0x0823:  mov    %ebx,0x4(%esp)
0867518f +0x0827:  mov    %eax,(%esp)
08675192 +0x082a:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08675197 +0x082f:  mov    %eax,-0x2c(%ebp)
0867519a +0x0832:  mov    -0x2c(%ebp),%eax
0867519d +0x0835:  mov    (%eax),%eax
0867519f +0x0837:  add    $0xc,%eax
086751a2 +0x083a:  mov    (%eax),%edx
086751a4 +0x083c:  mov    -0x2c(%ebp),%eax
086751a7 +0x083f:  mov    %eax,(%esp)
086751aa +0x0842:  call   *%edx
086751ac +0x0844:  cmp    $0x10,%eax
086751af +0x0847:  je     086751cf <+0x867>
086751b1 +0x0849:  mov    -0x2c(%ebp),%eax
086751b4 +0x084c:  mov    (%eax),%eax
086751b6 +0x084e:  add    $0xc,%eax
086751b9 +0x0851:  mov    (%eax),%edx
086751bb +0x0853:  mov    -0x2c(%ebp),%eax
086751be +0x0856:  mov    %eax,(%esp)
086751c1 +0x0859:  call   *%edx
086751c3 +0x085b:  cmp    $0x22,%eax
086751c6 +0x085e:  je     086751cf <+0x867>
086751c8 +0x0860:  mov    $0x1,%eax
086751cd +0x0865:  jmp    086751d4 <+0x86c>
086751cf +0x0867:  mov    $0x0,%eax
086751d4 +0x086c:  test   %al,%al
086751d6 +0x086e:  je     08675396 <+0xa2e>
086751dc +0x0874:  movl   $0x0,-0xdc(%ebp)
086751e6 +0x087e:  mov    -0x189(%ebp),%eax
086751ec +0x0884:  mov    %eax,%ebx
086751ee +0x0886:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086751f3 +0x088b:  mov    0xc(%eax),%eax
086751f6 +0x088e:  mov    %ebx,0x4(%esp)
086751fa +0x0892:  mov    %eax,(%esp)
086751fd +0x0895:  call   0817a10c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x18a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x18a
08675202 +0x089a:  mov    %eax,-0x28(%ebp)
08675205 +0x089d:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0867520c +0x08a4:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08675211 +0x08a9:  mov    %eax,-0x24(%ebp)
08675214 +0x08ac:  lea    -0xe8(%ebp),%eax
0867521a +0x08b2:  mov    %eax,(%esp)
0867521d +0x08b5:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
08675222 +0x08ba:  lea    -0x100(%ebp),%eax
08675228 +0x08c0:  mov    %eax,(%esp)
0867522b +0x08c3:  call   0817a244 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x2c2>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x2c2
08675230 +0x08c8:  movzbl -0x45(%ebp),%ecx
08675234 +0x08cc:  mov    -0x189(%ebp),%eax
0867523a +0x08d2:  mov    %eax,%edx
0867523c +0x08d4:  mov    &_ZN10GlobalData11s_pCeraShopE,%eax
08675241 +0x08d9:  movl   $0x1,0x30(%esp)
08675249 +0x08e1:  mov    %ecx,0x2c(%esp)
0867524d +0x08e5:  movl   $0x0,0x28(%esp)
08675255 +0x08ed:  movl   $0x0,0x24(%esp)
0867525d +0x08f5:  lea    -0x100(%ebp),%ecx
08675263 +0x08fb:  mov    %ecx,0x20(%esp)
08675267 +0x08ff:  lea    -0xe8(%ebp),%ecx
0867526d +0x0905:  mov    %ecx,0x1c(%esp)
08675271 +0x0909:  movl   $0x1,0x18(%esp)
08675279 +0x0911:  mov    -0x24(%ebp),%ecx
0867527c +0x0914:  mov    %ecx,0x14(%esp)
08675280 +0x0918:  lea    -0xdc(%ebp),%ecx
08675286 +0x091e:  mov    %ecx,0x10(%esp)
0867528a +0x0922:  mov    -0x28(%ebp),%ecx
0867528d +0x0925:  mov    %ecx,0xc(%esp)
08675291 +0x0929:  mov    %edx,0x8(%esp)
08675295 +0x092d:  mov    0x8(%ebp),%edx
08675298 +0x0930:  mov    %edx,0x4(%esp)
0867529c +0x0934:  mov    %eax,(%esp)
0867529f +0x0937:  call   0832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>  ; WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int)
086752a4 +0x093c:  test   %al,%al
086752a6 +0x093e:  je     08675339 <+0x9d1>
086752ac +0x0944:  mov    -0xdc(%ebp),%eax
086752b2 +0x094a:  test   %eax,%eax
086752b4 +0x094c:  je     086752bd <+0x955>
086752b6 +0x094e:  movl   $0xffffffff,-0x44(%ebp)
086752bd +0x0955:  cmpl   $0x0,-0x28(%ebp)
086752c1 +0x0959:  je     086752e3 <+0x97b>
086752c3 +0x095b:  mov    -0x28(%ebp),%eax
086752c6 +0x095e:  mov    %eax,0x4(%esp)
086752ca +0x0962:  mov    0x8(%ebp),%eax
086752cd +0x0965:  mov    %eax,(%esp)
086752d0 +0x0968:  call   0864d878 <_ZN5CUser17IsRestrictedGoodsEi>  ; CUser::IsRestrictedGoods(int)
086752d5 +0x096d:  xor    $0x1,%eax
086752d8 +0x0970:  test   %al,%al
086752da +0x0972:  je     086752e3 <+0x97b>
086752dc +0x0974:  mov    $0x1,%eax
086752e1 +0x0979:  jmp    086752e8 <+0x980>
086752e3 +0x097b:  mov    $0x0,%eax
086752e8 +0x0980:  test   %al,%al
086752ea +0x0982:  je     08675339 <+0x9d1>
086752ec +0x0984:  mov    -0x28(%ebp),%eax
086752ef +0x0987:  mov    %eax,0x4(%esp)
086752f3 +0x098b:  mov    0x8(%ebp),%eax
086752f6 +0x098e:  mov    %eax,(%esp)
086752f9 +0x0991:  call   0864d84e <_ZN5CUser18SetRestrictedGoodsEi>  ; CUser::SetRestrictedGoods(int)
086752fe +0x0996:  movl   $0x0,0xc(%esp)
08675306 +0x099e:  mov    -0x24(%ebp),%eax
08675309 +0x09a1:  mov    %eax,0x8(%esp)
0867530d +0x09a5:  mov    -0x28(%ebp),%eax
08675310 +0x09a8:  mov    %eax,0x4(%esp)
08675314 +0x09ac:  mov    0x8(%ebp),%eax
08675317 +0x09af:  mov    %eax,(%esp)
0867531a +0x09b2:  call   08325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>  ; WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int)
0867531f +0x09b7:  mov    -0x28(%ebp),%eax
08675322 +0x09ba:  mov    %eax,0x8(%esp)
08675326 +0x09be:  movl   $0x1,0x4(%esp)
0867532e +0x09c6:  mov    0x8(%ebp),%eax
08675331 +0x09c9:  mov    %eax,(%esp)
08675334 +0x09cc:  call   0864d9a4 <_ZN5CUser19SendRestrictedGoodsEbi>  ; CUser::SendRestrictedGoods(bool, int)
08675339 +0x09d1:  movl   $0xffff,-0x44(%ebp)
08675340 +0x09d8:  lea    -0x100(%ebp),%eax
08675346 +0x09de:  mov    %eax,(%esp)
08675349 +0x09e1:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
0867534e +0x09e6:  jmp    08675383 <+0xa1b>
08675350 +0x09e8:  mov    %edx,%ebx
08675352 +0x09ea:  mov    %eax,%esi
08675354 +0x09ec:  lea    -0x100(%ebp),%eax
0867535a +0x09f2:  mov    %eax,(%esp)
0867535d +0x09f5:  call   0817a2fc <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x37a>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x37a
08675362 +0x09fa:  mov    %esi,%eax
08675364 +0x09fc:  mov    %ebx,%edx
08675366 +0x09fe:  jmp    08675368 <+0xa00>
08675368 +0x0a00:  mov    %edx,%ebx
0867536a +0x0a02:  mov    %eax,%esi
0867536c +0x0a04:  lea    -0xe8(%ebp),%eax
08675372 +0x0a0a:  mov    %eax,(%esp)
08675375 +0x0a0d:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
0867537a +0x0a12:  mov    %esi,%eax
0867537c +0x0a14:  mov    %ebx,%edx
0867537e +0x0a16:  jmp    08675a42 <+0x10da>
08675383 +0x0a1b:  lea    -0xe8(%ebp),%eax
08675389 +0x0a21:  mov    %eax,(%esp)
0867538c +0x0a24:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
08675391 +0x0a29:  jmp    0867543a <+0xad2>
08675396 +0x0a2e:  movzbl -0x45(%ebp),%ebx
0867539a +0x0a32:  movl   $0x11,0x4(%esp)
086753a2 +0x0a3a:  mov    0x8(%ebp),%eax
086753a5 +0x0a3d:  mov    %eax,(%esp)
086753a8 +0x0a40:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
086753ad +0x0a45:  movl   $0x1,0x18(%esp)
086753b5 +0x0a4d:  movl   $0x3,0x14(%esp)
086753bd +0x0a55:  lea    -0x18b(%ebp),%edx
086753c3 +0x0a5b:  mov    %edx,0x10(%esp)
086753c7 +0x0a5f:  mov    0x8(%ebp),%edx
086753ca +0x0a62:  mov    %edx,0xc(%esp)
086753ce +0x0a66:  mov    %ebx,0x8(%esp)
086753d2 +0x0a6a:  lea    -0x90(%ebp),%edx
086753d8 +0x0a70:  mov    %edx,0x4(%esp)
086753dc +0x0a74:  mov    %eax,(%esp)
086753df +0x0a77:  call   080dcf56 <_ZN12CBoosterGage23insertItemIntoInventoryERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonb>  ; CBoosterGage::insertItemIntoInventory(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, CUser*, Inven_Item const&, eItemAddReason, bool)
086753e4 +0x0a7c:  mov    %eax,-0x44(%ebp)
086753e7 +0x0a7f:  jmp    0867543a <+0xad2>
086753e9 +0x0a81:  movzbl -0x45(%ebp),%ebx
086753ed +0x0a85:  movl   $0x11,0x4(%esp)
086753f5 +0x0a8d:  mov    0x8(%ebp),%eax
086753f8 +0x0a90:  mov    %eax,(%esp)
086753fb +0x0a93:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08675400 +0x0a98:  movl   $0x1,0x18(%esp)
08675408 +0x0aa0:  movl   $0x3,0x14(%esp)
08675410 +0x0aa8:  lea    -0x18b(%ebp),%edx
08675416 +0x0aae:  mov    %edx,0x10(%esp)
0867541a +0x0ab2:  mov    0x8(%ebp),%edx
0867541d +0x0ab5:  mov    %edx,0xc(%esp)
08675421 +0x0ab9:  mov    %ebx,0x8(%esp)
08675425 +0x0abd:  lea    -0x90(%ebp),%edx
0867542b +0x0ac3:  mov    %edx,0x4(%esp)
0867542f +0x0ac7:  mov    %eax,(%esp)
08675432 +0x0aca:  call   080dcf56 <_ZN12CBoosterGage23insertItemIntoInventoryERSt6vectorISt4pairIiiESaIS2_EEbP5CUserRK10Inven_Item14eItemAddReasonb>  ; CBoosterGage::insertItemIntoInventory(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, bool, CUser*, Inven_Item const&, eItemAddReason, bool)
08675437 +0x0acf:  mov    %eax,-0x44(%ebp)
0867543a +0x0ad2:  cmpl   $0xffffffff,-0x44(%ebp)
0867543e +0x0ad6:  jne    0867544c <+0xae4>
08675440 +0x0ad8:  movl   $0xffffffff,-0x44(%ebp)
08675447 +0x0adf:  jmp    08675506 <+0xb9e>
0867544c +0x0ae4:  lea    -0x18b(%ebp),%eax
08675452 +0x0aea:  mov    %eax,(%esp)
08675455 +0x0aed:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0867545a +0x0af2:  mov    %eax,-0x9c(%ebp)
08675460 +0x0af8:  cmpl   $0x0,-0x34(%ebp)
08675464 +0x0afc:  je     086754ff <+0xb97>
0867546a +0x0b02:  movl   $0x0,-0x104(%ebp)
08675474 +0x0b0c:  mov    -0x184(%ebp),%eax
0867547a +0x0b12:  movswl %ax,%ebx
0867547d +0x0b15:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
08675482 +0x0b1a:  lea    -0x104(%ebp),%edx
08675488 +0x0b20:  mov    %edx,0x14(%esp)
0867548c +0x0b24:  movl   $0x0,0x10(%esp)
08675494 +0x0b2c:  mov    %ebx,0xc(%esp)
08675498 +0x0b30:  mov    -0x34(%ebp),%edx
0867549b +0x0b33:  mov    %edx,0x8(%esp)
0867549f +0x0b37:  lea    -0x18b(%ebp),%edx
086754a5 +0x0b3d:  mov    %edx,0x4(%esp)
086754a9 +0x0b41:  mov    %eax,(%esp)
086754ac +0x0b44:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
086754b1 +0x0b49:  cmpb   $0x0,-0x45(%ebp)
086754b5 +0x0b4d:  je     086754d5 <+0xb6d>
086754b7 +0x0b4f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086754bc +0x0b54:  movzbl 0x877e(%eax),%eax
086754c3 +0x0b5b:  movzbl %al,%edx
086754c6 +0x0b5e:  mov    -0x104(%ebp),%eax
086754cc +0x0b64:  imul   %edx,%eax
086754cf +0x0b67:  mov    %eax,-0x104(%ebp)
086754d5 +0x0b6d:  mov    -0x104(%ebp),%eax
086754db +0x0b73:  mov    %eax,%ebx
086754dd +0x0b75:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
086754e2 +0x0b7a:  mov    %ebx,0xc(%esp)
086754e6 +0x0b7e:  mov    0x8(%ebp),%edx
086754e9 +0x0b81:  mov    %edx,0x8(%esp)
086754ed +0x0b85:  movl   $0x7,0x4(%esp)
086754f5 +0x0b8d:  mov    %eax,(%esp)
086754f8 +0x0b90:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
086754fd +0x0b95:  jmp    08675506 <+0xb9e>
086754ff +0x0b97:  movl   $0xffffffff,-0x44(%ebp)
08675506 +0x0b9e:  cmpl   $0xffffffff,-0x44(%ebp)
0867550a +0x0ba2:  jne    086755b9 <+0xc51>
08675510 +0x0ba8:  mov    -0x44(%ebp),%eax
08675513 +0x0bab:  mov    %eax,0x4(%esp)
08675517 +0x0baf:  lea    -0x84(%ebp),%eax
0867551d +0x0bb5:  mov    %eax,(%esp)
08675520 +0x0bb8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08675525 +0x0bbd:  mov    -0x189(%ebp),%eax
0867552b +0x0bc3:  mov    %eax,0x4(%esp)
0867552f +0x0bc7:  lea    -0x84(%ebp),%eax
08675535 +0x0bcd:  mov    %eax,(%esp)
08675538 +0x0bd0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867553d +0x0bd5:  lea    -0x18b(%ebp),%eax
08675543 +0x0bdb:  mov    %eax,(%esp)
08675546 +0x0bde:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0867554b +0x0be3:  mov    %eax,0x4(%esp)
0867554f +0x0be7:  lea    -0x84(%ebp),%eax
08675555 +0x0bed:  mov    %eax,(%esp)
08675558 +0x0bf0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867555d +0x0bf5:  movzwl -0x180(%ebp),%eax
08675564 +0x0bfc:  movzwl %ax,%eax
08675567 +0x0bff:  mov    %eax,0x4(%esp)
0867556b +0x0c03:  lea    -0x84(%ebp),%eax
08675571 +0x0c09:  mov    %eax,(%esp)
08675574 +0x0c0c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08675579 +0x0c11:  lea    -0x18b(%ebp),%eax
0867557f +0x0c17:  mov    %eax,(%esp)
08675582 +0x0c1a:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
08675587 +0x0c1f:  movzbl %al,%eax
0867558a +0x0c22:  mov    %eax,0x4(%esp)
0867558e +0x0c26:  lea    -0x84(%ebp),%eax
08675594 +0x0c2c:  mov    %eax,(%esp)
08675597 +0x0c2f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867559c +0x0c34:  lea    -0x18b(%ebp),%eax
086755a2 +0x0c3a:  mov    %eax,0x4(%esp)
086755a6 +0x0c3e:  lea    -0x84(%ebp),%eax
086755ac +0x0c44:  mov    %eax,(%esp)
086755af +0x0c47:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
086755b4 +0x0c4c:  jmp    08675655 <+0xced>
086755b9 +0x0c51:  mov    -0x44(%ebp),%eax
086755bc +0x0c54:  mov    %eax,0x4(%esp)
086755c0 +0x0c58:  lea    -0x84(%ebp),%eax
086755c6 +0x0c5e:  mov    %eax,(%esp)
086755c9 +0x0c61:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086755ce +0x0c66:  mov    -0x189(%ebp),%eax
086755d4 +0x0c6c:  mov    %eax,0x4(%esp)
086755d8 +0x0c70:  lea    -0x84(%ebp),%eax
086755de +0x0c76:  mov    %eax,(%esp)
086755e1 +0x0c79:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086755e6 +0x0c7e:  mov    -0x9c(%ebp),%eax
086755ec +0x0c84:  mov    %eax,0x4(%esp)
086755f0 +0x0c88:  lea    -0x84(%ebp),%eax
086755f6 +0x0c8e:  mov    %eax,(%esp)
086755f9 +0x0c91:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086755fe +0x0c96:  movzwl -0x180(%ebp),%eax
08675605 +0x0c9d:  movzwl %ax,%eax
08675608 +0x0ca0:  mov    %eax,0x4(%esp)
0867560c +0x0ca4:  lea    -0x84(%ebp),%eax
08675612 +0x0caa:  mov    %eax,(%esp)
08675615 +0x0cad:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867561a +0x0cb2:  lea    -0x18b(%ebp),%eax
08675620 +0x0cb8:  mov    %eax,(%esp)
08675623 +0x0cbb:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
08675628 +0x0cc0:  movzbl %al,%eax
0867562b +0x0cc3:  mov    %eax,0x4(%esp)
0867562f +0x0cc7:  lea    -0x84(%ebp),%eax
08675635 +0x0ccd:  mov    %eax,(%esp)
08675638 +0x0cd0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867563d +0x0cd5:  lea    -0x18b(%ebp),%eax
08675643 +0x0cdb:  mov    %eax,0x4(%esp)
08675647 +0x0cdf:  lea    -0x84(%ebp),%eax
0867564d +0x0ce5:  mov    %eax,(%esp)
08675650 +0x0ce8:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
08675655 +0x0ced:  lea    -0x64(%ebp),%eax
08675658 +0x0cf0:  movl   $0x0,0x8(%esp)
08675660 +0x0cf8:  lea    -0x94(%ebp),%edx
08675666 +0x0cfe:  mov    %edx,0x4(%esp)
0867566a +0x0d02:  mov    %eax,(%esp)
0867566d +0x0d05:  call   080fe2c0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5ec>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5ec
08675672 +0x0d0a:  sub    $0x4,%esp
08675675 +0x0d0d:  lea    -0x6c(%ebp),%eax
08675678 +0x0d10:  lea    -0x78(%ebp),%edx
0867567b +0x0d13:  mov    %edx,0x4(%esp)
0867567f +0x0d17:  mov    %eax,(%esp)
08675682 +0x0d1a:  call   080fe264 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x590>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x590
08675687 +0x0d1f:  sub    $0x4,%esp
0867568a +0x0d22:  lea    -0x6c(%ebp),%eax
0867568d +0x0d25:  mov    %eax,0x4(%esp)
08675691 +0x0d29:  lea    -0x94(%ebp),%eax
08675697 +0x0d2f:  mov    %eax,(%esp)
0867569a +0x0d32:  call   080fe28a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5b6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5b6
0867569f +0x0d37:  test   %al,%al
086756a1 +0x0d39:  jne    08674c3c <+0x2d4>
086756a7 +0x0d3f:  cmpb   $0x0,-0x45(%ebp)
086756ab +0x0d43:  je     086756b4 <+0xd4c>
086756ad +0x0d45:  mov    $0x1,%eax
086756b2 +0x0d4a:  jmp    086756b9 <+0xd51>
086756b4 +0x0d4c:  mov    $0x0,%eax
086756b9 +0x0d51:  mov    %eax,0x4(%esp)
086756bd +0x0d55:  lea    -0x84(%ebp),%eax
086756c3 +0x0d5b:  mov    %eax,(%esp)
086756c6 +0x0d5e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086756cb +0x0d63:  movl   $0x1,0x4(%esp)
086756d3 +0x0d6b:  lea    -0x84(%ebp),%eax
086756d9 +0x0d71:  mov    %eax,(%esp)
086756dc +0x0d74:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086756e1 +0x0d79:  lea    -0x84(%ebp),%eax
086756e7 +0x0d7f:  mov    %eax,0x4(%esp)
086756eb +0x0d83:  mov    0x8(%ebp),%eax
086756ee +0x0d86:  mov    %eax,(%esp)
086756f1 +0x0d89:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086756f6 +0x0d8e:  lea    -0x60(%ebp),%eax
086756f9 +0x0d91:  lea    -0x90(%ebp),%edx
086756ff +0x0d97:  mov    %edx,0x4(%esp)
08675703 +0x0d9b:  mov    %eax,(%esp)
08675706 +0x0d9e:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0867570b +0x0da3:  sub    $0x4,%esp
0867570e +0x0da6:  lea    -0x60(%ebp),%eax
08675711 +0x0da9:  mov    %eax,0x4(%esp)
08675715 +0x0dad:  lea    -0x98(%ebp),%eax
0867571b +0x0db3:  mov    %eax,(%esp)
0867571e +0x0db6:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
08675723 +0x0dbb:  jmp    0867578d <+0xe25>
08675725 +0x0dbd:  lea    -0x98(%ebp),%eax
0867572b +0x0dc3:  mov    %eax,(%esp)
0867572e +0x0dc6:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08675733 +0x0dcb:  mov    (%eax),%eax
08675735 +0x0dcd:  mov    %eax,-0x20(%ebp)
08675738 +0x0dd0:  lea    -0x98(%ebp),%eax
0867573e +0x0dd6:  mov    %eax,(%esp)
08675741 +0x0dd9:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
08675746 +0x0dde:  mov    0x4(%eax),%eax
08675749 +0x0de1:  mov    %eax,-0x1c(%ebp)
0867574c +0x0de4:  mov    -0x1c(%ebp),%eax
0867574f +0x0de7:  mov    -0x20(%ebp),%edx
08675752 +0x0dea:  mov    %edx,0xc(%esp)
08675756 +0x0dee:  mov    %eax,0x8(%esp)
0867575a +0x0df2:  movl   $0x1,0x4(%esp)
08675762 +0x0dfa:  mov    0x8(%ebp),%eax
08675765 +0x0dfd:  mov    %eax,(%esp)
08675768 +0x0e00:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0867576d +0x0e05:  lea    -0x58(%ebp),%eax
08675770 +0x0e08:  movl   $0x0,0x8(%esp)
08675778 +0x0e10:  lea    -0x98(%ebp),%edx
0867577e +0x0e16:  mov    %edx,0x4(%esp)
08675782 +0x0e1a:  mov    %eax,(%esp)
08675785 +0x0e1d:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
0867578a +0x0e22:  sub    $0x4,%esp
0867578d +0x0e25:  lea    -0x5c(%ebp),%eax
08675790 +0x0e28:  lea    -0x90(%ebp),%edx
08675796 +0x0e2e:  mov    %edx,0x4(%esp)
0867579a +0x0e32:  mov    %eax,(%esp)
0867579d +0x0e35:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
086757a2 +0x0e3a:  sub    $0x4,%esp
086757a5 +0x0e3d:  lea    -0x5c(%ebp),%eax
086757a8 +0x0e40:  mov    %eax,0x4(%esp)
086757ac +0x0e44:  lea    -0x98(%ebp),%eax
086757b2 +0x0e4a:  mov    %eax,(%esp)
086757b5 +0x0e4d:  call   0838793c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173dc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173dc
086757ba +0x0e52:  test   %al,%al
086757bc +0x0e54:  jne    08675725 <+0xdbd>
086757c2 +0x0e5a:  call   080fc9e9 <_Z23InGameADManagerInstancev>  ; InGameADManagerInstance()
086757c7 +0x0e5f:  lea    -0x78(%ebp),%edx
086757ca +0x0e62:  mov    %edx,0x8(%esp)
086757ce +0x0e66:  mov    0x8(%ebp),%edx
086757d1 +0x0e69:  mov    %edx,0x4(%esp)
086757d5 +0x0e6d:  mov    %eax,(%esp)
086757d8 +0x0e70:  call   080fcb3e <_ZN27CInGameAdvertisementManager24CheckFailMultiBoxLotteryEP5CUserRSt6vectorISt4pairI10Inven_ItembESaIS5_EE>  ; CInGameAdvertisementManager::CheckFailMultiBoxLottery(CUser*, std::vector<std::pair<Inven_Item, bool>, std::allocator<std::pair<Inven_Item, bool> > >&)
086757dd +0x0e75:  lea    -0x21c(%ebp),%eax
086757e3 +0x0e7b:  lea    -0x78(%ebp),%edx
086757e6 +0x0e7e:  mov    %edx,0x4(%esp)
086757ea +0x0e82:  mov    %eax,(%esp)
086757ed +0x0e85:  call   080fe240 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x56c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x56c
086757f2 +0x0e8a:  sub    $0x4,%esp
086757f5 +0x0e8d:  mov    -0x21c(%ebp),%eax
086757fb +0x0e93:  mov    %eax,-0x94(%ebp)
08675801 +0x0e99:  jmp    086759f4 <+0x108c>
08675806 +0x0e9e:  lea    -0x94(%ebp),%eax
0867580c +0x0ea4:  mov    %eax,(%esp)
0867580f +0x0ea7:  call   080fe2b6 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5e2>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5e2
08675814 +0x0eac:  mov    (%eax),%edx
08675816 +0x0eae:  mov    %edx,-0x1c9(%ebp)
0867581c +0x0eb4:  mov    0x4(%eax),%edx
0867581f +0x0eb7:  mov    %edx,-0x1c5(%ebp)
08675825 +0x0ebd:  mov    0x8(%eax),%edx
08675828 +0x0ec0:  mov    %edx,-0x1c1(%ebp)
0867582e +0x0ec6:  mov    0xc(%eax),%edx
08675831 +0x0ec9:  mov    %edx,-0x1bd(%ebp)
08675837 +0x0ecf:  mov    0x10(%eax),%edx
0867583a +0x0ed2:  mov    %edx,-0x1b9(%ebp)
08675840 +0x0ed8:  mov    0x14(%eax),%edx
08675843 +0x0edb:  mov    %edx,-0x1b5(%ebp)
08675849 +0x0ee1:  mov    0x18(%eax),%edx
0867584c +0x0ee4:  mov    %edx,-0x1b1(%ebp)
08675852 +0x0eea:  mov    0x1c(%eax),%edx
08675855 +0x0eed:  mov    %edx,-0x1ad(%ebp)
0867585b +0x0ef3:  mov    0x20(%eax),%edx
0867585e +0x0ef6:  mov    %edx,-0x1a9(%ebp)
08675864 +0x0efc:  mov    0x24(%eax),%edx
08675867 +0x0eff:  mov    %edx,-0x1a5(%ebp)
0867586d +0x0f05:  mov    0x28(%eax),%edx
08675870 +0x0f08:  mov    %edx,-0x1a1(%ebp)
08675876 +0x0f0e:  mov    0x2c(%eax),%edx
08675879 +0x0f11:  mov    %edx,-0x19d(%ebp)
0867587f +0x0f17:  mov    0x30(%eax),%edx
08675882 +0x0f1a:  mov    %edx,-0x199(%ebp)
08675888 +0x0f20:  mov    0x34(%eax),%edx
0867588b +0x0f23:  mov    %edx,-0x195(%ebp)
08675891 +0x0f29:  mov    0x38(%eax),%edx
08675894 +0x0f2c:  mov    %edx,-0x191(%ebp)
0867589a +0x0f32:  movzwl 0x3c(%eax),%eax
0867589e +0x0f36:  mov    %ax,-0x18d(%ebp)
086758a5 +0x0f3d:  movzbl -0x18c(%ebp),%eax
086758ac +0x0f44:  test   %al,%al
086758ae +0x0f46:  je     086759d4 <+0x106c>
086758b4 +0x0f4c:  lea    -0x110(%ebp),%eax
086758ba +0x0f52:  mov    %eax,(%esp)
086758bd +0x0f55:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086758c2 +0x0f5a:  movl   $0x56,0x8(%esp)
086758ca +0x0f62:  movl   $0x0,0x4(%esp)
086758d2 +0x0f6a:  lea    -0x110(%ebp),%eax
086758d8 +0x0f70:  mov    %eax,(%esp)
086758db +0x0f73:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086758e0 +0x0f78:  movl   $0x4,0x4(%esp)
086758e8 +0x0f80:  lea    -0x110(%ebp),%eax
086758ee +0x0f86:  mov    %eax,(%esp)
086758f1 +0x0f89:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086758f6 +0x0f8e:  movl   $0x1,0x4(%esp)
086758fe +0x0f96:  lea    -0x110(%ebp),%eax
08675904 +0x0f9c:  mov    %eax,(%esp)
08675907 +0x0f9f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867590c +0x0fa4:  mov    0x8(%ebp),%eax
0867590f +0x0fa7:  mov    %eax,(%esp)
08675912 +0x0faa:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08675917 +0x0faf:  movzwl %ax,%eax
0867591a +0x0fb2:  mov    %eax,0x4(%esp)
0867591e +0x0fb6:  lea    -0x110(%ebp),%eax
08675924 +0x0fbc:  mov    %eax,(%esp)
08675927 +0x0fbf:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0867592c +0x0fc4:  mov    -0x1c7(%ebp),%eax
08675932 +0x0fca:  mov    %eax,0x4(%esp)
08675936 +0x0fce:  lea    -0x110(%ebp),%eax
0867593c +0x0fd4:  mov    %eax,(%esp)
0867593f +0x0fd7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08675944 +0x0fdc:  mov    -0x14b(%ebp),%eax
0867594a +0x0fe2:  mov    %eax,0x4(%esp)
0867594e +0x0fe6:  lea    -0x110(%ebp),%eax
08675954 +0x0fec:  mov    %eax,(%esp)
08675957 +0x0fef:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867595c +0x0ff4:  lea    -0x1c9(%ebp),%eax
08675962 +0x0ffa:  mov    %eax,(%esp)
08675965 +0x0ffd:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0867596a +0x1002:  movzbl %al,%eax
0867596d +0x1005:  mov    %eax,0x4(%esp)
08675971 +0x1009:  lea    -0x110(%ebp),%eax
08675977 +0x100f:  mov    %eax,(%esp)
0867597a +0x1012:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0867597f +0x1017:  movl   $0x1,0x4(%esp)
08675987 +0x101f:  lea    -0x110(%ebp),%eax
0867598d +0x1025:  mov    %eax,(%esp)
08675990 +0x1028:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08675995 +0x102d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0867599a +0x1032:  lea    -0x110(%ebp),%edx
086759a0 +0x1038:  mov    %edx,0x4(%esp)
086759a4 +0x103c:  mov    %eax,(%esp)
086759a7 +0x103f:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
086759ac +0x1044:  jmp    086759c6 <+0x105e>
086759ae +0x1046:  mov    %edx,%ebx
086759b0 +0x1048:  mov    %eax,%esi
086759b2 +0x104a:  lea    -0x110(%ebp),%eax
086759b8 +0x1050:  mov    %eax,(%esp)
086759bb +0x1053:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086759c0 +0x1058:  mov    %esi,%eax
086759c2 +0x105a:  mov    %ebx,%edx
086759c4 +0x105c:  jmp    08675a42 <+0x10da>
086759c6 +0x105e:  lea    -0x110(%ebp),%eax
086759cc +0x1064:  mov    %eax,(%esp)
086759cf +0x1067:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086759d4 +0x106c:  lea    -0x50(%ebp),%eax
086759d7 +0x106f:  movl   $0x0,0x8(%esp)
086759df +0x1077:  lea    -0x94(%ebp),%edx
086759e5 +0x107d:  mov    %edx,0x4(%esp)
086759e9 +0x1081:  mov    %eax,(%esp)
086759ec +0x1084:  call   080fe2c0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5ec>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5ec
086759f1 +0x1089:  sub    $0x4,%esp
086759f4 +0x108c:  lea    -0x54(%ebp),%eax
086759f7 +0x108f:  lea    -0x78(%ebp),%edx
086759fa +0x1092:  mov    %edx,0x4(%esp)
086759fe +0x1096:  mov    %eax,(%esp)
08675a01 +0x1099:  call   080fe264 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x590>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x590
08675a06 +0x109e:  sub    $0x4,%esp
08675a09 +0x10a1:  lea    -0x54(%ebp),%eax
08675a0c +0x10a4:  mov    %eax,0x4(%esp)
08675a10 +0x10a8:  lea    -0x94(%ebp),%eax
08675a16 +0x10ae:  mov    %eax,(%esp)
08675a19 +0x10b1:  call   080fe28a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x5b6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x5b6
08675a1e +0x10b6:  test   %al,%al
08675a20 +0x10b8:  jne    08675806 <+0xe9e>
08675a26 +0x10be:  mov    -0x14b(%ebp),%eax
08675a2c +0x10c4:  mov    %eax,0x4(%esp)
08675a30 +0x10c8:  mov    0x8(%ebp),%eax
08675a33 +0x10cb:  mov    %eax,(%esp)
08675a36 +0x10ce:  call   086767d2 <_ZN5CUser22use_multibox_statisticEj>  ; CUser::use_multibox_statistic(unsigned int)
08675a3b +0x10d3:  mov    $0x0,%ebx
08675a40 +0x10d8:  jmp    08675a5a <+0x10f2>
08675a42 +0x10da:  mov    %edx,%ebx
08675a44 +0x10dc:  mov    %eax,%esi
08675a46 +0x10de:  lea    -0x90(%ebp),%eax
08675a4c +0x10e4:  mov    %eax,(%esp)
08675a4f +0x10e7:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08675a54 +0x10ec:  mov    %esi,%eax
08675a56 +0x10ee:  mov    %ebx,%edx
08675a58 +0x10f0:  jmp    08675a6a <+0x1102>
08675a5a +0x10f2:  lea    -0x90(%ebp),%eax
08675a60 +0x10f8:  mov    %eax,(%esp)
08675a63 +0x10fb:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08675a68 +0x1100:  jmp    08675a82 <+0x111a>
08675a6a +0x1102:  mov    %edx,%ebx
08675a6c +0x1104:  mov    %eax,%esi
08675a6e +0x1106:  lea    -0x84(%ebp),%eax
08675a74 +0x110c:  mov    %eax,(%esp)
08675a77 +0x110f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08675a7c +0x1114:  mov    %esi,%eax
08675a7e +0x1116:  mov    %ebx,%edx
08675a80 +0x1118:  jmp    08675a92 <+0x112a>
08675a82 +0x111a:  lea    -0x84(%ebp),%eax
08675a88 +0x1120:  mov    %eax,(%esp)
08675a8b +0x1123:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08675a90 +0x1128:  jmp    08675aad <+0x1145>
08675a92 +0x112a:  mov    %edx,%ebx
08675a94 +0x112c:  mov    %eax,%esi
08675a96 +0x112e:  lea    -0x78(%ebp),%eax
08675a99 +0x1131:  mov    %eax,(%esp)
08675a9c +0x1134:  call   084b4a50 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xb03>  ; global constructors keyed to game_master::CMacro::Reset()+0xb03
08675aa1 +0x1139:  mov    %esi,%eax
08675aa3 +0x113b:  mov    %ebx,%edx
08675aa5 +0x113d:  mov    %eax,(%esp)
08675aa8 +0x1140:  call   08ae3750 <_Unwind_Resume>
08675aad +0x1145:  lea    -0x78(%ebp),%eax
08675ab0 +0x1148:  mov    %eax,(%esp)
08675ab3 +0x114b:  call   084b4a50 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xb03>  ; global constructors keyed to game_master::CMacro::Reset()+0xb03
08675ab8 +0x1150:  mov    %ebx,%eax
08675aba +0x1152:  lea    -0xc(%ebp),%esp
08675abd +0x1155:  add    $0x0,%esp
08675ac0 +0x1158:  pop    %ebx
08675ac1 +0x1159:  pop    %esi
08675ac2 +0x115a:  pop    %edi
08675ac3 +0x115b:  pop    %ebp
08675ac4 +0x115c:  ret
08675ac5 +0x115d:  nop
```

## 反编译 C

```c
// CUser::multibox_lottery_item @ 0x8674968

/* CUser::multibox_lottery_item(int, int) */

int __thiscall CUser::multibox_lottery_item(CUser *this,int param_1,int param_2)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  CBoosterGage *pCVar7;
  ulong uVar8;
  CUser *pCVar9;
  int iVar10;
  CInventory *pCVar11;
  undefined4 uVar12;
  CDataManager *pCVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  Store *this_00;
  CValueStatistic *pCVar16;
  undefined4 *puVar17;
  uint uVar18;
  GameWorld *this_01;
  CUser *pCVar19;
  undefined1 local_21c [8];
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0;
  undefined2 local_1cd;
  undefined2 uStack_1cb;
  undefined2 local_1c9;
  undefined2 uStack_1c7;
  undefined4 local_1c5;
  undefined4 local_1c1;
  undefined4 local_1bd;
  undefined4 local_1b9;
  undefined4 local_1b5;
  undefined4 local_1b1;
  undefined4 local_1ad;
  undefined4 local_1a9;
  undefined4 local_1a5;
  undefined4 local_1a1;
  undefined4 local_19d;
  undefined4 local_199;
  undefined4 local_195;
  undefined2 local_191;
  Inven_Item local_18f;
  char cStack_18e;
  undefined2 uStack_18d;
  undefined2 local_18b;
  undefined1 uStack_189;
  int iStack_188;
  undefined1 uStack_184;
  undefined4 uStack_183;
  undefined4 local_17f;
  undefined4 local_17b;
  undefined4 local_177;
  undefined4 local_173;
  undefined4 local_16f;
  undefined4 local_16b;
  undefined4 local_167;
  undefined4 local_163;
  undefined4 local_15f;
  undefined4 local_15b;
  undefined4 local_157;
  undefined2 local_153;
  undefined2 local_151;
  undefined2 uStack_14f;
  undefined2 local_14d;
  undefined2 uStack_14b;
  undefined4 local_149;
  undefined4 local_145;
  undefined4 local_141;
  undefined4 local_13d;
  undefined4 local_139;
  undefined4 local_135;
  undefined4 local_131;
  undefined4 local_12d;
  undefined4 local_129;
  undefined4 local_125;
  undefined4 local_121;
  undefined4 local_11d;
  undefined4 local_119;
  undefined1 local_115;
  PacketGuard local_114 [12];
  int local_108;
  stCeraShopItemParam_t local_104 [24];
  vector<Inven_Item,std::allocator<Inven_Item>> local_ec [12];
  int local_e0;
  bool local_d9;
  int local_d8 [8];
  undefined4 local_b8 [6];
  int local_a0;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_9c [4];
  __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_98 [4];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_94 [12];
  PacketGuard local_88 [12];
  vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>> local_7c [12];
  __normal_iterator local_70 [4];
  __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_6c [4];
  __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_68 [4];
  __normal_iterator local_64 [4];
  __normal_iterator local_60 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_5c [4];
  __normal_iterator local_58 [4];
  __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
  local_54 [4];
  int local_50;
  bool local_49;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_39;
  CItem *local_38;
  int local_34;
  int *local_30;
  int local_2c;
  long local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  Inven_Item::Inven_Item((Inven_Item *)&local_151);
  iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  CInventory::GetInvenSlot((int)local_21c,iVar6);
  local_151 = (undefined2)local_21c._0_4_;
  uStack_14f = SUB42(local_21c._0_4_,2);
  local_14d = (undefined2)local_21c._4_4_;
  uStack_14b = SUB42(local_21c._4_4_,2);
  local_149 = local_214;
  local_145 = local_210;
  local_141 = local_20c;
  local_13d = local_208;
  local_139 = local_204;
  local_135 = local_200;
  local_131 = local_1fc;
  local_12d = local_1f8;
  local_129 = local_1f4;
  local_125 = local_1f0;
  local_121 = local_1ec;
  local_11d = local_1e8;
  local_119 = local_1e4;
  local_115 = local_1e0;
  std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::vector
            (local_7c);
  local_50 = 0;
  if ((CONCAT22(local_14d,uStack_14f) == 0x2061) || (CONCAT22(local_14d,uStack_14f) == 0x289843)) {
                    /* try { // try from 08674ab3 to 08674b95 has its CatchHandler @ 08675a92 */
    local_50 = process_use_unlocked_multibox(this,param_1,param_2,(vector *)local_7c);
  }
  else {
    local_50 = process_use_locked_multibox(this,param_1,param_2,(vector *)local_7c);
  }
  if (local_50 == 0) {
    pCVar9 = (CUser *)CONCAT22(local_14d,uStack_14f);
    uVar8 = GetCharacExpandData(this,0x11);
    pCVar19 = this;
    local_49 = (bool)CBoosterGage::cal_booster_gage(uVar8,pCVar9);
    if (local_49 != false) {
      pCVar9 = (CUser *)GetCharacExpandData(this,0x11,pCVar19);
      CBoosterGage::log_booster_gage_bonus_reward(pCVar9,(vector *)this);
    }
    PacketGuard::PacketGuard(local_88);
                    /* try { // try from 08674baf to 08674c1e has its CatchHandler @ 08675a6a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_88,1,0xd3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_88,param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_88,param_2);
    iVar6 = std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::size
                      (local_7c);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_88,iVar6);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_94);
                    /* try { // try from 08674c2f to 08675221 has its CatchHandler @ 08675a42 */
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::begin();
    while( true ) {
      std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::end();
      bVar4 = __gnu_cxx::operator!=(local_98,local_70);
      if (!bVar4) break;
      puVar17 = (undefined4 *)
                __gnu_cxx::
                __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
                ::operator*(local_98);
      uVar12 = *puVar17;
      local_18f = SUB41(uVar12,0);
      cStack_18e = (char)((uint)uVar12 >> 8);
      uStack_18d = (undefined2)((uint)uVar12 >> 0x10);
      uVar12 = puVar17[1];
      local_18b = (undefined2)uVar12;
      uStack_189 = (undefined1)((uint)uVar12 >> 0x10);
      iStack_188._1_3_ = (undefined3)puVar17[2];
      iVar6 = CONCAT31(iStack_188._1_3_,(char)((uint)uVar12 >> 0x18));
      uStack_184 = (undefined1)((uint)puVar17[2] >> 0x18);
      uStack_183 = puVar17[3];
      local_17f = puVar17[4];
      local_17b = puVar17[5];
      local_177 = puVar17[6];
      local_173 = puVar17[7];
      local_16f = puVar17[8];
      local_16b = puVar17[9];
      local_167 = puVar17[10];
      local_163 = puVar17[0xb];
      local_15f = puVar17[0xc];
      local_15b = puVar17[0xd];
      local_157 = puVar17[0xe];
      local_153 = *(undefined2 *)(puVar17 + 0xf);
      local_48 = -1;
      local_a0 = 0;
      iStack_188 = iVar6;
      if (CONCAT22(local_18b,uStack_18d) == 1) {
        if ((0 < iVar6) && (iVar6 < 1000)) {
          local_34 = iVar6;
          if (local_49 != false) {
            iVar10 = G_CDataManager();
            local_34 = (uint)*(byte *)(iVar10 + 0x877e) * iVar6;
          }
          pCVar11 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
          iVar6 = CInventory::GetEventCoin(pCVar11);
          uVar18 = iVar6 + local_34;
          pCVar11 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
          CInventory::SetEventCoin(pCVar11,uVar18);
          pCVar11 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
          uVar12 = CInventory::GetEventCoin(pCVar11);
          cUserHistoryLog::EventCoinAdd((cUserHistoryLog *)(this + 0x79700),uVar12,local_34,2);
          SaveMoneyCoin(this);
          SendCoin(this);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_88,-1);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,CONCAT22(local_18b,uStack_18d))
          ;
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,iStack_188);
          InterfacePacketBuf::put_short
                    ((InterfacePacketBuf *)local_88,
                     (uint)CONCAT11((undefined1)uStack_183,uStack_184));
          uVar18 = Inven_Item::GetItemAttr(&local_18f);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,uVar18 & 0xff);
          InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_88,&local_18f);
        }
        __gnu_cxx::
        __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
        ::operator++(local_6c,(int)local_98);
      }
      else {
        local_44 = 0;
        local_40 = 0;
        local_39 = 0;
        iVar6 = CONCAT22(local_18b,uStack_18d);
        pCVar13 = (CDataManager *)G_CDataManager();
        local_38 = (CItem *)CDataManager::find_item(pCVar13,iVar6);
        if (local_38 == (CItem *)0x0) {
          iVar6 = 0x11;
          goto LAB_08675a5a;
        }
        cVar3 = (**(code **)(*(int *)local_38 + 0x10))(local_38);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*(int *)local_38 + 0x14))(local_38);
          if ((cVar3 == '\0') ||
             (iVar6 = (**(code **)(*(int *)local_38 + 0xc))(local_38), iVar6 != 0x16)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            if (cStack_18e == '\x05') {
              cVar3 = user_creature::CCreatureItemConverter::SetEggItem(&local_18f);
              if (cVar3 == '\x01') {
                uVar18 = 0;
                do {
                  *(undefined4 *)((int)local_d8 + uVar18 + 8) = 0;
                  uVar18 = uVar18 + 4;
                } while (uVar18 < 0x18);
                uVar12 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
                uVar12 = WongWork::CGenUniqueNo::genIPGNo(1,uVar12,local_d8 + 2);
                uVar14 = CItem::getExpirationDate(local_38);
                uVar15 = CItem::getUsablePeriod(local_38);
                bVar4 = local_49;
                pCVar7 = (CBoosterGage *)GetCharacExpandData(this,0x11);
                local_48 = CBoosterGage::InsertCreatureItem
                                     (pCVar7,local_94,bVar4,this,&local_18f,3,1,0,uVar15,uVar14,
                                      uVar12);
              }
              else {
                local_48 = -1;
              }
            }
            else {
              local_48 = -1;
            }
          }
          else {
            local_48 = 0xffffffff;
            local_d8[1] = 0;
            local_d8[0] = 0;
            local_d9 = false;
            cVar3 = WongWork::CCeraShop::IsSpecialItem
                              (GlobalData::s_pCeraShop,CONCAT22(local_18b,uStack_18d),local_d8 + 1,
                               local_d8,&local_d9);
            bVar4 = local_49;
            if (cVar3 == '\0') {
              pCVar7 = (CBoosterGage *)GetCharacExpandData(this,0x11);
              local_48 = CBoosterGage::insertItemIntoInventory
                                   (pCVar7,local_94,bVar4,this,&local_18f,3,1);
            }
            else {
              iVar6 = CONCAT22(local_18b,uStack_18d);
              pCVar13 = (CDataManager *)G_CDataManager();
              local_30 = (int *)CDataManager::find_item(pCVar13,iVar6);
              iVar6 = (**(code **)(*local_30 + 0xc))(local_30);
              if ((iVar6 == 0x10) ||
                 (iVar6 = (**(code **)(*local_30 + 0xc))(local_30), iVar6 == 0x22)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              bVar2 = local_49;
              if (bVar4) {
                local_e0 = 0;
                iVar6 = CONCAT22(local_18b,uStack_18d);
                iVar10 = G_CDataManager();
                local_2c = CItemList::GetRestrictCode(*(CItemList **)(iVar10 + 0xc),iVar6);
                local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_ec);
                    /* try { // try from 0867522b to 0867522f has its CatchHandler @ 08675368 */
                WongWork::CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_104);
                    /* try { // try from 0867529f to 08675338 has its CatchHandler @ 08675350 */
                cVar3 = WongWork::CCeraShop::ProcessSpecialItem
                                  (GlobalData::s_pCeraShop,this,CONCAT22(local_18b,uStack_18d),
                                   local_2c,&local_e0,local_28,true,(vector *)local_ec,local_104,
                                   '\0','\0',local_49,1);
                if (cVar3 != '\0') {
                  if (local_e0 != 0) {
                    local_48 = 0xffffffff;
                  }
                  if ((local_2c == 0) || (cVar3 = IsRestrictedGoods(this,local_2c), cVar3 == '\x01')
                     ) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if (bVar4) {
                    SetRestrictedGoods(this,local_2c);
                    WongWork::CCeraShop::SaveFeaturedIdx(this,local_2c,local_28,0);
                    SendRestrictedGoods(this,true,local_2c);
                  }
                }
                local_48 = 0xffff;
                    /* try { // try from 08675349 to 0867534d has its CatchHandler @ 08675368 */
                WongWork::CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_104);
                    /* try { // try from 0867538c to 086758c1 has its CatchHandler @ 08675a42 */
                std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_ec);
              }
              else {
                pCVar7 = (CBoosterGage *)GetCharacExpandData(this,0x11);
                local_48 = CBoosterGage::insertItemIntoInventory
                                     (pCVar7,local_94,bVar2,this,&local_18f,3,1);
              }
            }
            if (local_48 == -1) {
              local_48 = -1;
            }
            else {
              local_a0 = Inven_Item::get_add_info(&local_18f);
              if (local_38 == (CItem *)0x0) {
                local_48 = -1;
              }
              else {
                local_108 = 0;
                sVar5 = (short)iStack_188;
                this_00 = (Store *)G_Store();
                Store::GetSellItemPrice(this_00,&local_18f,local_38,sVar5,false,&local_108);
                if (local_49 != false) {
                  iVar6 = G_CDataManager();
                  local_108 = local_108 * (uint)*(byte *)(iVar6 + 0x877e);
                }
                iVar6 = local_108;
                pCVar16 = (CValueStatistic *)GetInstanceValueStatistic();
                CValueStatistic::AddValueStatistic(pCVar16,7,this,iVar6);
              }
            }
          }
        }
        else {
          uVar18 = 0;
          do {
            *(undefined4 *)((int)local_b8 + uVar18) = 0;
            uVar18 = uVar18 + 4;
          } while (uVar18 < 0x18);
          Inven_Item::SetUpgrade(&local_18f,'\0');
          uVar12 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
          uVar12 = WongWork::CGenUniqueNo::genIPGNo(1,uVar12,local_b8);
          uVar14 = CItem::getUsablePeriod(local_38);
          bVar4 = local_49;
          pCVar7 = (CBoosterGage *)GetCharacExpandData(this,0x11);
          local_48 = CBoosterGage::AddAvatarItem
                               (pCVar7,local_94,bVar4,this,&local_18f,uVar14,0,0,0xffffffff,uVar12,7
                                ,&local_a0);
        }
        if (local_48 == -1) {
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_88,-1);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,CONCAT22(local_18b,uStack_18d))
          ;
          iVar6 = Inven_Item::get_add_info(&local_18f);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,iVar6);
          InterfacePacketBuf::put_short
                    ((InterfacePacketBuf *)local_88,
                     (uint)CONCAT11((undefined1)uStack_183,uStack_184));
          uVar18 = Inven_Item::GetItemAttr(&local_18f);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,uVar18 & 0xff);
          InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_88,&local_18f);
        }
        else {
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_88,local_48);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,CONCAT22(local_18b,uStack_18d))
          ;
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,local_a0);
          InterfacePacketBuf::put_short
                    ((InterfacePacketBuf *)local_88,
                     (uint)CONCAT11((undefined1)uStack_183,uStack_184));
          uVar18 = Inven_Item::GetItemAttr(&local_18f);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,uVar18 & 0xff);
          InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_88,&local_18f);
        }
        __gnu_cxx::
        __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
        ::operator++(local_68,(int)local_98);
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,(uint)(local_49 != false));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_88,true);
    Send(this,local_88);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator<std::pair<int,int>*>(local_9c,local_64);
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar4 = __gnu_cxx::operator!=(local_9c,local_60);
      if (!bVar4) break;
      puVar17 = (undefined4 *)
                __gnu_cxx::
                __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator->(local_9c);
      local_24 = *puVar17;
      iVar6 = __gnu_cxx::
              __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
              ::operator->(local_9c);
      local_20 = *(undefined4 *)(iVar6 + 4);
      SendUpdateItem(this,1,local_20,local_24);
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_5c,(int)local_9c);
    }
    pCVar9 = (CUser *)InGameADManagerInstance();
    CInGameAdvertisementManager::CheckFailMultiBoxLottery(pCVar9,(vector *)this);
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::begin();
    while( true ) {
      std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::end();
      bVar4 = __gnu_cxx::operator!=(local_98,local_58);
      if (!bVar4) break;
      puVar17 = (undefined4 *)
                __gnu_cxx::
                __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
                ::operator*(local_98);
      local_1cd = (undefined2)*puVar17;
      uStack_1cb = (undefined2)((uint)*puVar17 >> 0x10);
      local_1c9 = (undefined2)puVar17[1];
      uStack_1c7 = (undefined2)((uint)puVar17[1] >> 0x10);
      local_1c5 = puVar17[2];
      local_1c1 = puVar17[3];
      local_1bd = puVar17[4];
      local_1b9 = puVar17[5];
      local_1b5 = puVar17[6];
      local_1b1 = puVar17[7];
      local_1ad = puVar17[8];
      local_1a9 = puVar17[9];
      local_1a5 = puVar17[10];
      local_1a1 = puVar17[0xb];
      local_19d = puVar17[0xc];
      local_199 = puVar17[0xd];
      local_195 = puVar17[0xe];
      uVar1 = *(undefined2 *)(puVar17 + 0xf);
      local_191._1_1_ = (char)((ushort)uVar1 >> 8);
      bVar4 = local_191._1_1_ != '\0';
      local_191 = uVar1;
      if (bVar4) {
        PacketGuard::PacketGuard(local_114);
                    /* try { // try from 086758db to 086759ab has its CatchHandler @ 086759ae */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_114,0,0x56);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_114,4);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_114,1);
        uVar18 = get_unique_id(this);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_114,uVar18 & 0xffff);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_114,CONCAT22(local_1c9,uStack_1cb));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_114,CONCAT22(local_14d,uStack_14f));
        uVar18 = Inven_Item::GetUpgrade((Inven_Item *)&local_1cd);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_114,uVar18 & 0xff);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_114,true);
        this_01 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this_01,local_114);
                    /* try { // try from 086759cf to 08675a3a has its CatchHandler @ 08675a42 */
        PacketGuard::~PacketGuard(local_114);
      }
      __gnu_cxx::
      __normal_iterator<std::pair<Inven_Item,bool>*,std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>>
      ::operator++(local_54,(int)local_98);
    }
    use_multibox_statistic(this,CONCAT22(local_14d,uStack_14f));
    iVar6 = 0;
LAB_08675a5a:
                    /* try { // try from 08675a63 to 08675a67 has its CatchHandler @ 08675a6a */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_94);
                    /* try { // try from 08675a8b to 08675a8f has its CatchHandler @ 08675a92 */
    PacketGuard::~PacketGuard(local_88);
  }
  else {
    iVar6 = local_50;
    if (local_50 == 0x13) {
      uVar8 = CONCAT22(local_14d,uStack_14f);
      pCVar7 = (CBoosterGage *)GetCharacExpandData(this,0x11);
      CBoosterGage::send_error_state_packet(pCVar7,this,uVar8);
      iVar6 = -1;
    }
  }
  std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::~vector
            (local_7c);
  return iVar6;
}
```
