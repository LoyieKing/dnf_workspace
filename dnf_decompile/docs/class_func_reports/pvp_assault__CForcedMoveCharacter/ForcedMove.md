# ForcedMove

`_ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv`

`pvp_assault::CForcedMoveCharacter::ForcedMove()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CForcedMoveCharacter` | `0x082e567c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e567c  _ZN11pvp_assault20CForcedMoveCharacter10ForcedMoveEv
#           pvp_assault::CForcedMoveCharacter::ForcedMove()
# range [0x082e567c, 0x082e5893]
082e567c +0x000:  push   %ebp
082e567d +0x001:  mov    %esp,%ebp
082e567f +0x003:  push   %edi
082e5680 +0x004:  push   %esi
082e5681 +0x005:  push   %ebx
082e5682 +0x006:  sub    $0x5c,%esp
082e5685 +0x009:  mov    0x8(%ebp),%eax
082e5688 +0x00c:  mov    0x8(%eax),%eax
082e568b +0x00f:  test   %eax,%eax
082e568d +0x011:  je     082e588c <+0x210>
082e5693 +0x017:  mov    0x8(%ebp),%eax
082e5696 +0x01a:  mov    0x8(%eax),%eax
082e5699 +0x01d:  mov    %eax,(%esp)
082e569c +0x020:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082e56a1 +0x025:  movsbl %al,%edx
082e56a4 +0x028:  mov    0x8(%ebp),%eax
082e56a7 +0x02b:  mov    0xc(%eax),%eax
082e56aa +0x02e:  cmp    %eax,%edx
082e56ac +0x030:  jne    082e56ce <+0x52>
082e56ae +0x032:  mov    0x8(%ebp),%eax
082e56b1 +0x035:  mov    0x8(%eax),%eax
082e56b4 +0x038:  movl   $0x0,0x4(%esp)
082e56bc +0x040:  mov    %eax,(%esp)
082e56bf +0x043:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
082e56c4 +0x048:  mov    0x8(%ebp),%edx
082e56c7 +0x04b:  mov    0x10(%edx),%edx
082e56ca +0x04e:  cmp    %edx,%eax
082e56cc +0x050:  je     082e56d5 <+0x59>
082e56ce +0x052:  mov    $0x1,%eax
082e56d3 +0x057:  jmp    082e56da <+0x5e>
082e56d5 +0x059:  mov    $0x0,%eax
082e56da +0x05e:  test   %al,%al
082e56dc +0x060:  je     082e575b <+0xdf>
082e56de +0x062:  mov    0x8(%ebp),%eax
082e56e1 +0x065:  mov    0x1c(%eax),%eax
082e56e4 +0x068:  mov    %eax,-0x34(%ebp)
082e56e7 +0x06b:  mov    0x8(%ebp),%eax
082e56ea +0x06e:  mov    0x18(%eax),%eax
082e56ed +0x071:  mov    %eax,-0x30(%ebp)
082e56f0 +0x074:  mov    0x8(%ebp),%eax
082e56f3 +0x077:  mov    0x14(%eax),%eax
082e56f6 +0x07a:  mov    %eax,-0x2c(%ebp)
082e56f9 +0x07d:  mov    0x8(%ebp),%eax
082e56fc +0x080:  mov    0x10(%eax),%edi
082e56ff +0x083:  mov    0x8(%ebp),%eax
082e5702 +0x086:  mov    0xc(%eax),%esi
082e5705 +0x089:  mov    0x8(%ebp),%eax
082e5708 +0x08c:  mov    0x8(%eax),%ebx
082e570b +0x08f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082e5710 +0x094:  movl   $0x0,0x28(%esp)
082e5718 +0x09c:  movl   $0x0,0x24(%esp)
082e5720 +0x0a4:  movl   $0x0,0x20(%esp)
082e5728 +0x0ac:  movl   $0x0,0x1c(%esp)
082e5730 +0x0b4:  mov    -0x34(%ebp),%edx
082e5733 +0x0b7:  mov    %edx,0x18(%esp)
082e5737 +0x0bb:  mov    -0x30(%ebp),%edx
082e573a +0x0be:  mov    %edx,0x14(%esp)
082e573e +0x0c2:  mov    -0x2c(%ebp),%edx
082e5741 +0x0c5:  mov    %edx,0x10(%esp)
082e5745 +0x0c9:  mov    %edi,0xc(%esp)
082e5749 +0x0cd:  mov    %esi,0x8(%esp)
082e574d +0x0d1:  mov    %ebx,0x4(%esp)
082e5751 +0x0d5:  mov    %eax,(%esp)
082e5754 +0x0d8:  call   086c5a84 <_ZN9GameWorld9move_areaEP5CUseriiiiibiii>  ; GameWorld::move_area(CUser*, int, int, int, int, int, bool, int, int, int)
082e5759 +0x0dd:  jmp    082e5790 <+0x114>
082e575b +0x0df:  mov    0x8(%ebp),%eax
082e575e +0x0e2:  mov    0x1c(%eax),%eax
082e5761 +0x0e5:  movsbl %al,%ebx
082e5764 +0x0e8:  mov    0x8(%ebp),%eax
082e5767 +0x0eb:  mov    0x18(%eax),%eax
082e576a +0x0ee:  movzwl %ax,%ecx
082e576d +0x0f1:  mov    0x8(%ebp),%eax
082e5770 +0x0f4:  mov    0x14(%eax),%eax
082e5773 +0x0f7:  movzwl %ax,%edx
082e5776 +0x0fa:  mov    0x8(%ebp),%eax
082e5779 +0x0fd:  mov    0x8(%eax),%eax
082e577c +0x100:  mov    %ebx,0xc(%esp)
082e5780 +0x104:  mov    %ecx,0x8(%esp)
082e5784 +0x108:  mov    %edx,0x4(%esp)
082e5788 +0x10c:  mov    %eax,(%esp)
082e578b +0x10f:  call   082f0e2a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xbae>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xbae
082e5790 +0x114:  lea    -0x24(%ebp),%eax
082e5793 +0x117:  mov    %eax,(%esp)
082e5796 +0x11a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082e579b +0x11f:  movl   $0x8a,0x8(%esp)
082e57a3 +0x127:  movl   $0x0,0x4(%esp)
082e57ab +0x12f:  lea    -0x24(%ebp),%eax
082e57ae +0x132:  mov    %eax,(%esp)
082e57b1 +0x135:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082e57b6 +0x13a:  mov    0x8(%ebp),%eax
082e57b9 +0x13d:  mov    0x8(%eax),%eax
082e57bc +0x140:  mov    %eax,(%esp)
082e57bf +0x143:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082e57c4 +0x148:  movzwl %ax,%eax
082e57c7 +0x14b:  mov    %eax,0x4(%esp)
082e57cb +0x14f:  lea    -0x24(%ebp),%eax
082e57ce +0x152:  mov    %eax,(%esp)
082e57d1 +0x155:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e57d6 +0x15a:  mov    0x8(%ebp),%eax
082e57d9 +0x15d:  mov    0x14(%eax),%eax
082e57dc +0x160:  mov    %eax,0x4(%esp)
082e57e0 +0x164:  lea    -0x24(%ebp),%eax
082e57e3 +0x167:  mov    %eax,(%esp)
082e57e6 +0x16a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e57eb +0x16f:  mov    0x8(%ebp),%eax
082e57ee +0x172:  mov    0x18(%eax),%eax
082e57f1 +0x175:  mov    %eax,0x4(%esp)
082e57f5 +0x179:  lea    -0x24(%ebp),%eax
082e57f8 +0x17c:  mov    %eax,(%esp)
082e57fb +0x17f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e5800 +0x184:  mov    0x8(%ebp),%eax
082e5803 +0x187:  mov    0x1c(%eax),%eax
082e5806 +0x18a:  mov    %eax,0x4(%esp)
082e580a +0x18e:  lea    -0x24(%ebp),%eax
082e580d +0x191:  mov    %eax,(%esp)
082e5810 +0x194:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e5815 +0x199:  movl   $0x1,0x4(%esp)
082e581d +0x1a1:  lea    -0x24(%ebp),%eax
082e5820 +0x1a4:  mov    %eax,(%esp)
082e5823 +0x1a7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082e5828 +0x1ac:  mov    0x8(%ebp),%eax
082e582b +0x1af:  mov    0xc(%eax),%eax
082e582e +0x1b2:  test   %eax,%eax
082e5830 +0x1b4:  jne    082e583c <+0x1c0>
082e5832 +0x1b6:  mov    0x8(%ebp),%eax
082e5835 +0x1b9:  mov    0x10(%eax),%eax
082e5838 +0x1bc:  test   %eax,%eax
082e583a +0x1be:  je     082e5864 <+0x1e8>
082e583c +0x1c0:  mov    0x8(%ebp),%eax
082e583f +0x1c3:  mov    0x10(%eax),%esi
082e5842 +0x1c6:  mov    0x8(%ebp),%eax
082e5845 +0x1c9:  mov    0xc(%eax),%ebx
082e5848 +0x1cc:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082e584d +0x1d1:  lea    -0x24(%ebp),%edx
082e5850 +0x1d4:  mov    %edx,0xc(%esp)
082e5854 +0x1d8:  mov    %esi,0x8(%esp)
082e5858 +0x1dc:  mov    %ebx,0x4(%esp)
082e585c +0x1e0:  mov    %eax,(%esp)
082e585f +0x1e3:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
082e5864 +0x1e8:  lea    -0x24(%ebp),%eax
082e5867 +0x1eb:  mov    %eax,(%esp)
082e586a +0x1ee:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e586f +0x1f3:  jmp    082e588c <+0x210>
082e5871 +0x1f5:  mov    %edx,%ebx
082e5873 +0x1f7:  mov    %eax,%esi
082e5875 +0x1f9:  lea    -0x24(%ebp),%eax
082e5878 +0x1fc:  mov    %eax,(%esp)
082e587b +0x1ff:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082e5880 +0x204:  mov    %esi,%eax
082e5882 +0x206:  mov    %ebx,%edx
082e5884 +0x208:  mov    %eax,(%esp)
082e5887 +0x20b:  call   08ae3750 <_Unwind_Resume>
082e588c +0x210:  add    $0x5c,%esp
082e588f +0x213:  pop    %ebx
082e5890 +0x214:  pop    %esi
082e5891 +0x215:  pop    %edi
082e5892 +0x216:  pop    %ebp
082e5893 +0x217:  ret
```

## 反编译 C

```c
// pvp_assault::CForcedMoveCharacter::ForcedMove @ 0x82e567c

/* pvp_assault::CForcedMoveCharacter::ForcedMove() */

void __thiscall pvp_assault::CForcedMoveCharacter::ForcedMove(CForcedMoveCharacter *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CUser *pCVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  GameWorld *pGVar9;
  uint uVar10;
  PacketGuard local_28 [24];
  
  if (*(int *)(this + 8) != 0) {
    cVar7 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)(this + 8));
    if (((int)cVar7 == *(int *)(this + 0xc)) &&
       (iVar8 = CUser::get_area(*(CUser **)(this + 8),false), iVar8 == *(int *)(this + 0x10))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      iVar8 = *(int *)(this + 0x1c);
      iVar1 = *(int *)(this + 0x18);
      iVar2 = *(int *)(this + 0x14);
      iVar3 = *(int *)(this + 0x10);
      iVar4 = *(int *)(this + 0xc);
      pCVar5 = *(CUser **)(this + 8);
      pGVar9 = (GameWorld *)G_GameWorld();
      GameWorld::move_area(pGVar9,pCVar5,iVar4,iVar3,iVar2,iVar1,iVar8,false,0,0,0);
    }
    else {
      CUser::set_position(*(CUser **)(this + 8),(ushort)*(undefined4 *)(this + 0x14),
                          (ushort)*(undefined4 *)(this + 0x18),(char)*(undefined4 *)(this + 0x1c));
    }
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 082e57b1 to 082e5863 has its CatchHandler @ 082e5871 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x8a);
    uVar10 = CUser::get_unique_id(*(CUser **)(this + 8));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar10 & 0xffff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*(int *)(this + 0x14));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*(int *)(this + 0x18));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,*(int *)(this + 0x1c));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    if ((*(int *)(this + 0xc) != 0) || (*(int *)(this + 0x10) != 0)) {
      iVar8 = *(int *)(this + 0x10);
      iVar1 = *(int *)(this + 0xc);
      pGVar9 = (GameWorld *)G_GameWorld();
      GameWorld::send_to_area(pGVar9,iVar1,iVar8,local_28);
    }
    PacketGuard::~PacketGuard(local_28);
    return;
  }
  return;
}
```
