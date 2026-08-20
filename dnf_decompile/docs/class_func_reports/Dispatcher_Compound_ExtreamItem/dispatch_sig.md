# dispatch_sig

`_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Compound_ExtreamItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Compound_ExtreamItem` | `0x08225ec4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08225ec4  _ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Compound_ExtreamItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x08225ec4, 0x0822621b]
08225ec4 +0x000:  push   %ebp
08225ec5 +0x001:  mov    %esp,%ebp
08225ec7 +0x003:  push   %esi
08225ec8 +0x004:  push   %ebx
08225ec9 +0x005:  sub    $0x40,%esp
08225ecc +0x008:  mov    0xc(%ebp),%eax
08225ecf +0x00b:  mov    %eax,(%esp)
08225ed2 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08225ed7 +0x013:  cmp    $0x2,%eax
08225eda +0x016:  setle  %al
08225edd +0x019:  test   %al,%al
08225edf +0x01b:  je     08225eeb <+0x27>
08225ee1 +0x01d:  mov    $0x0,%eax
08225ee6 +0x022:  jmp    08226214 <+0x350>
08225eeb +0x027:  mov    0x8(%ebp),%eax
08225eee +0x02a:  mov    0xc(%ebp),%edx
08225ef1 +0x02d:  mov    %edx,0xd0(%eax)
08225ef7 +0x033:  movb   $0x0,-0xd(%ebp)
08225efb +0x037:  mov    0x10(%ebp),%eax
08225efe +0x03a:  mov    %eax,0x4(%esp)
08225f02 +0x03e:  mov    0x8(%ebp),%eax
08225f05 +0x041:  mov    %eax,(%esp)
08225f08 +0x044:  call   08225806 <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf>  ; Dispatcher_Compound_ExtreamItem::_read_packet(PacketBuf&)
08225f0d +0x049:  xor    $0x1,%eax
08225f10 +0x04c:  test   %al,%al
08225f12 +0x04e:  je     08225f3f <+0x7b>
08225f14 +0x050:  movzbl -0xd(%ebp),%edx
08225f18 +0x054:  mov    0x8(%ebp),%eax
08225f1b +0x057:  mov    0xd0(%eax),%eax
08225f21 +0x05d:  mov    %edx,0x8(%esp)
08225f25 +0x061:  movl   $0x146,0x4(%esp)
08225f2d +0x069:  mov    %eax,(%esp)
08225f30 +0x06c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08225f35 +0x071:  mov    $0x0,%eax
08225f3a +0x076:  jmp    08226214 <+0x350>
08225f3f +0x07b:  mov    0x8(%ebp),%eax
08225f42 +0x07e:  movzbl 0xd4(%eax),%eax
08225f49 +0x085:  movsbl %al,%edx
08225f4c +0x088:  mov    0x8(%ebp),%eax
08225f4f +0x08b:  lea    0x88(%eax),%ebx
08225f55 +0x091:  mov    0x8(%ebp),%eax
08225f58 +0x094:  lea    0xc(%eax),%ecx
08225f5b +0x097:  mov    &_ZN10GlobalData19s_pCompoundBindCubeE,%eax
08225f60 +0x09c:  mov    %edx,0xc(%esp)
08225f64 +0x0a0:  mov    %ebx,0x8(%esp)
08225f68 +0x0a4:  mov    %ecx,0x4(%esp)
08225f6c +0x0a8:  mov    %eax,(%esp)
08225f6f +0x0ab:  call   0832d7d6 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::checkCompoundable(Inven_Item*, CEquipItem const**, char) const
08225f74 +0x0b0:  mov    %al,-0xd(%ebp)
08225f77 +0x0b3:  cmpb   $0x0,-0xd(%ebp)
08225f7b +0x0b7:  setne  %al
08225f7e +0x0ba:  test   %al,%al
08225f80 +0x0bc:  je     08225fad <+0xe9>
08225f82 +0x0be:  movzbl -0xd(%ebp),%edx
08225f86 +0x0c2:  mov    0x8(%ebp),%eax
08225f89 +0x0c5:  mov    0xd0(%eax),%eax
08225f8f +0x0cb:  mov    %edx,0x8(%esp)
08225f93 +0x0cf:  movl   $0x146,0x4(%esp)
08225f9b +0x0d7:  mov    %eax,(%esp)
08225f9e +0x0da:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08225fa3 +0x0df:  mov    $0x0,%eax
08225fa8 +0x0e4:  jmp    08226214 <+0x350>
08225fad +0x0e9:  mov    0x8(%ebp),%eax
08225fb0 +0x0ec:  movzwl 0x8(%eax),%eax
08225fb4 +0x0f0:  movzwl %ax,%edx
08225fb7 +0x0f3:  mov    0x8(%ebp),%eax
08225fba +0x0f6:  mov    0xd0(%eax),%eax
08225fc0 +0x0fc:  mov    %edx,0x8(%esp)
08225fc4 +0x100:  movl   $0x1,0x4(%esp)
08225fcc +0x108:  mov    %eax,(%esp)
08225fcf +0x10b:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08225fd4 +0x110:  test   %al,%al
08225fd6 +0x112:  jne    08226003 <+0x13f>
08225fd8 +0x114:  mov    0x8(%ebp),%eax
08225fdb +0x117:  movzwl 0xa(%eax),%eax
08225fdf +0x11b:  movzwl %ax,%edx
08225fe2 +0x11e:  mov    0x8(%ebp),%eax
08225fe5 +0x121:  mov    0xd0(%eax),%eax
08225feb +0x127:  mov    %edx,0x8(%esp)
08225fef +0x12b:  movl   $0x1,0x4(%esp)
08225ff7 +0x133:  mov    %eax,(%esp)
08225ffa +0x136:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
08225fff +0x13b:  test   %al,%al
08226001 +0x13d:  je     0822600a <+0x146>
08226003 +0x13f:  mov    $0x1,%eax
08226008 +0x144:  jmp    0822600f <+0x14b>
0822600a +0x146:  mov    $0x0,%eax
0822600f +0x14b:  test   %al,%al
08226011 +0x14d:  je     0822603e <+0x17a>
08226013 +0x14f:  mov    0x8(%ebp),%eax
08226016 +0x152:  mov    0xd0(%eax),%eax
0822601c +0x158:  movl   $0xd5,0x8(%esp)
08226024 +0x160:  movl   $0x146,0x4(%esp)
0822602c +0x168:  mov    %eax,(%esp)
0822602f +0x16b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08226034 +0x170:  mov    $0x0,%eax
08226039 +0x175:  jmp    08226214 <+0x350>
0822603e +0x17a:  mov    0x8(%ebp),%eax
08226041 +0x17d:  mov    0xd0(%eax),%ebx
08226047 +0x183:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0822604c +0x188:  movl   $0xd,0xc(%esp)
08226054 +0x190:  movl   $0x1,0x8(%esp)
0822605c +0x198:  mov    %ebx,0x4(%esp)
08226060 +0x19c:  mov    %eax,(%esp)
08226063 +0x19f:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
08226068 +0x1a4:  test   %al,%al
0822606a +0x1a6:  je     08226097 <+0x1d3>
0822606c +0x1a8:  mov    0x8(%ebp),%eax
0822606f +0x1ab:  mov    0xd0(%eax),%eax
08226075 +0x1b1:  movl   $0xd1,0x8(%esp)
0822607d +0x1b9:  movl   $0x146,0x4(%esp)
08226085 +0x1c1:  mov    %eax,(%esp)
08226088 +0x1c4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822608d +0x1c9:  mov    $0x0,%eax
08226092 +0x1ce:  jmp    08226214 <+0x350>
08226097 +0x1d3:  mov    0x8(%ebp),%eax
0822609a +0x1d6:  movzbl 0xd4(%eax),%eax
082260a1 +0x1dd:  cmp    $0x3,%al
082260a3 +0x1df:  jne    082260ac <+0x1e8>
082260a5 +0x1e1:  mov    $0x1,%eax
082260aa +0x1e6:  jmp    082260b1 <+0x1ed>
082260ac +0x1e8:  mov    $0x0,%eax
082260b1 +0x1ed:  mov    %eax,-0xc(%ebp)
082260b4 +0x1f0:  mov    0x8(%ebp),%eax
082260b7 +0x1f3:  lea    0x90(%eax),%esi
082260bd +0x1f9:  mov    0x8(%ebp),%eax
082260c0 +0x1fc:  movzbl 0xcd(%eax),%eax
082260c7 +0x203:  movsbl %al,%edx
082260ca +0x206:  mov    0x8(%ebp),%eax
082260cd +0x209:  lea    0x88(%eax),%ebx
082260d3 +0x20f:  mov    &_ZN10GlobalData19s_pCompoundBindCubeE,%eax
082260d8 +0x214:  mov    -0xc(%ebp),%ecx
082260db +0x217:  mov    %ecx,0x10(%esp)
082260df +0x21b:  mov    %esi,0xc(%esp)
082260e3 +0x21f:  mov    %edx,0x8(%esp)
082260e7 +0x223:  mov    %ebx,0x4(%esp)
082260eb +0x227:  mov    %eax,(%esp)
082260ee +0x22a:  call   0832ccc0 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::makeCompoundItem(CEquipItem const**, char, Inven_Item&, ExtreamDungeon::eBindSphereType)
082260f3 +0x22f:  xor    $0x1,%eax
082260f6 +0x232:  test   %al,%al
082260f8 +0x234:  je     08226125 <+0x261>
082260fa +0x236:  mov    0x8(%ebp),%eax
082260fd +0x239:  mov    0xd0(%eax),%eax
08226103 +0x23f:  movl   $0x11,0x8(%esp)
0822610b +0x247:  movl   $0x146,0x4(%esp)
08226113 +0x24f:  mov    %eax,(%esp)
08226116 +0x252:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822611b +0x257:  mov    $0x0,%eax
08226120 +0x25c:  jmp    08226214 <+0x350>
08226125 +0x261:  mov    0x8(%ebp),%eax
08226128 +0x264:  add    $0xc,%eax
0822612b +0x267:  mov    %eax,(%esp)
0822612e +0x26a:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
08226133 +0x26f:  movzbl %al,%ebx
08226136 +0x272:  mov    0x8(%ebp),%eax
08226139 +0x275:  add    $0x49,%eax
0822613c +0x278:  mov    %eax,(%esp)
0822613f +0x27b:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
08226144 +0x280:  movzbl %al,%eax
08226147 +0x283:  lea    (%ebx,%eax,1),%eax
0822614a +0x286:  mov    %eax,-0x1c(%ebp)
0822614d +0x289:  fildl  -0x1c(%ebp)
08226150 +0x28c:  flds   &data#1c28ee03(.rodata)
08226156 +0x292:  fdivrp %st,%st(1)
08226158 +0x294:  flds   &data#77b1158e(.rodata)
0822615e +0x29a:  faddp  %st,%st(1)
08226160 +0x29c:  fnstcw -0x1e(%ebp)
08226163 +0x29f:  movzwl -0x1e(%ebp),%eax
08226167 +0x2a3:  mov    $0xc,%ah
08226169 +0x2a5:  mov    %ax,-0x20(%ebp)
0822616d +0x2a9:  fldcw  -0x20(%ebp)
08226170 +0x2ac:  fistps -0x22(%ebp)
08226173 +0x2af:  fldcw  -0x1e(%ebp)
08226176 +0x2b2:  movzwl -0x22(%ebp),%eax
0822617a +0x2b6:  movzbl %al,%eax
0822617d +0x2b9:  mov    0x8(%ebp),%edx
08226180 +0x2bc:  add    $0x90,%edx
08226186 +0x2c2:  mov    %eax,0x4(%esp)
0822618a +0x2c6:  mov    %edx,(%esp)
0822618d +0x2c9:  call   0822b466 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb10>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb10
08226192 +0x2ce:  mov    0x8(%ebp),%eax
08226195 +0x2d1:  mov    0x92(%eax),%eax
0822619b +0x2d7:  test   %eax,%eax
0822619d +0x2d9:  jne    082261c7 <+0x303>
0822619f +0x2db:  mov    0x8(%ebp),%eax
082261a2 +0x2de:  mov    0xd0(%eax),%eax
082261a8 +0x2e4:  movl   $0x11,0x8(%esp)
082261b0 +0x2ec:  movl   $0x146,0x4(%esp)
082261b8 +0x2f4:  mov    %eax,(%esp)
082261bb +0x2f7:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082261c0 +0x2fc:  mov    $0x0,%eax
082261c5 +0x301:  jmp    08226214 <+0x350>
082261c7 +0x303:  mov    0x8(%ebp),%eax
082261ca +0x306:  mov    %eax,(%esp)
082261cd +0x309:  call   08225a88 <_ZN31Dispatcher_Compound_ExtreamItem14_remove_victimEv>  ; Dispatcher_Compound_ExtreamItem::_remove_victim()
082261d2 +0x30e:  test   %al,%al
082261d4 +0x310:  je     082261ee <+0x32a>
082261d6 +0x312:  mov    0x8(%ebp),%eax
082261d9 +0x315:  mov    %eax,(%esp)
082261dc +0x318:  call   08225b54 <_ZN31Dispatcher_Compound_ExtreamItem13_push_newitemEv>  ; Dispatcher_Compound_ExtreamItem::_push_newitem()
082261e1 +0x31d:  mov    0x8(%ebp),%eax
082261e4 +0x320:  mov    %eax,(%esp)
082261e7 +0x323:  call   08225c54 <_ZN31Dispatcher_Compound_ExtreamItem12_send_resultEv>  ; Dispatcher_Compound_ExtreamItem::_send_result()
082261ec +0x328:  jmp    0822620f <+0x34b>
082261ee +0x32a:  mov    0x8(%ebp),%eax
082261f1 +0x32d:  mov    0xd0(%eax),%eax
082261f7 +0x333:  movl   $0x11,0x8(%esp)
082261ff +0x33b:  movl   $0x146,0x4(%esp)
08226207 +0x343:  mov    %eax,(%esp)
0822620a +0x346:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822620f +0x34b:  mov    $0x0,%eax
08226214 +0x350:  add    $0x40,%esp
08226217 +0x353:  pop    %ebx
08226218 +0x354:  pop    %esi
08226219 +0x355:  pop    %ebp
0822621a +0x356:  ret
0822621b +0x357:  nop
```

## 反编译 C

```c
// Dispatcher_Compound_ExtreamItem::dispatch_sig @ 0x8225ec4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dispatcher_Compound_ExtreamItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Compound_ExtreamItem::dispatch_sig
          (Dispatcher_Compound_ExtreamItem *this,CUser *param_1,PacketBuf *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ServiceRestrictManager *pSVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = CUser::get_state(param_1);
  if (2 < iVar4) {
    *(CUser **)(this + 0xd0) = param_1;
    cVar3 = _read_packet(this,param_2);
    if (cVar3 == '\x01') {
      cVar3 = ExtreamDungeon::CCompound_ExtreamDun_Item::checkCompoundable
                        (GlobalData::s_pCompoundBindCube,(Inven_Item *)(this + 0xc),
                         (CEquipItem **)(this + 0x88),(char)this[0xd4]);
      if (cVar3 == '\0') {
        cVar3 = CUser::CheckItemLock(*(CUser **)(this + 0xd0),1,(uint)*(ushort *)(this + 8));
        if ((cVar3 == '\0') &&
           (cVar3 = CUser::CheckItemLock(*(CUser **)(this + 0xd0),1,(uint)*(ushort *)(this + 10)),
           cVar3 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          CUser::SendCmdErrorPacket(*(CUser **)(this + 0xd0),0x146,0xd5);
        }
        else {
          uVar1 = *(undefined4 *)(this + 0xd0);
          pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar3 = ServiceRestrictManager::isRestricted(pSVar5,uVar1,1,0xd);
          if (cVar3 == '\0') {
            cVar3 = ExtreamDungeon::CCompound_ExtreamDun_Item::makeCompoundItem
                              (GlobalData::s_pCompoundBindCube,this + 0x88,(int)(char)this[0xcd],
                               this + 0x90,this[0xd4] == (Dispatcher_Compound_ExtreamItem)0x3);
            if (cVar3 == '\x01') {
              uVar6 = Inven_Item::GetReSealCount((Inven_Item *)(this + 0xc));
              uVar7 = Inven_Item::GetReSealCount((Inven_Item *)(this + 0x49));
              Inven_Item::SetReSealCount
                        ((Inven_Item *)(this + 0x90),
                         (uchar)(short)ROUND(_DAT_08bd634c +
                                             (float)((uVar6 & 0xff) + (uVar7 & 0xff)) /
                                             _DAT_08bd6348));
              if (*(int *)(this + 0x92) == 0) {
                CUser::SendCmdErrorPacket(*(CUser **)(this + 0xd0),0x146,0x11);
              }
              else {
                cVar3 = _remove_victim(this);
                if (cVar3 == '\0') {
                  CUser::SendCmdErrorPacket(*(CUser **)(this + 0xd0),0x146,0x11);
                }
                else {
                  _push_newitem(this);
                  _send_result(this);
                }
              }
            }
            else {
              CUser::SendCmdErrorPacket(*(CUser **)(this + 0xd0),0x146,0x11);
            }
          }
          else {
            CUser::SendCmdErrorPacket(*(CUser **)(this + 0xd0),0x146,0xd1);
          }
        }
      }
      else {
        CUser::SendCmdErrorPacket(*(CUser **)(this + 0xd0),0x146,cVar3);
      }
    }
    else {
      CUser::SendCmdErrorPacket(*(CUser **)(this + 0xd0),0x146,0);
    }
  }
  return 0;
}
```
