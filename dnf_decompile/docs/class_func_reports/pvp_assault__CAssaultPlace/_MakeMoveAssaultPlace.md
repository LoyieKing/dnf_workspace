# _MakeMoveAssaultPlace

`_ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard`

`pvp_assault::CAssaultPlace::_MakeMoveAssaultPlace(PacketGuard*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e852e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e852e  _ZN11pvp_assault13CAssaultPlace21_MakeMoveAssaultPlaceEP11PacketGuard
#           pvp_assault::CAssaultPlace::_MakeMoveAssaultPlace(PacketGuard*)
# range [0x082e852e, 0x082e880f]
082e852e +0x000:  push   %ebp
082e852f +0x001:  mov    %esp,%ebp
082e8531 +0x003:  push   %esi
082e8532 +0x004:  push   %ebx
082e8533 +0x005:  sub    $0x30,%esp
082e8536 +0x008:  mov    0xc(%ebp),%eax
082e8539 +0x00b:  movl   $0x80,0x8(%esp)
082e8541 +0x013:  movl   $0x0,0x4(%esp)
082e8549 +0x01b:  mov    %eax,(%esp)
082e854c +0x01e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082e8551 +0x023:  mov    0x8(%ebp),%eax
082e8554 +0x026:  mov    0x104(%eax),%eax
082e855a +0x02c:  mov    %eax,%edx
082e855c +0x02e:  mov    0xc(%ebp),%eax
082e855f +0x031:  mov    %edx,0x4(%esp)
082e8563 +0x035:  mov    %eax,(%esp)
082e8566 +0x038:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082e856b +0x03d:  mov    0x8(%ebp),%eax
082e856e +0x040:  mov    0x118(%eax),%edx
082e8574 +0x046:  mov    0xc(%ebp),%eax
082e8577 +0x049:  mov    %edx,0x4(%esp)
082e857b +0x04d:  mov    %eax,(%esp)
082e857e +0x050:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8583 +0x055:  mov    0x8(%ebp),%eax
082e8586 +0x058:  mov    0x11c(%eax),%edx
082e858c +0x05e:  mov    0xc(%ebp),%eax
082e858f +0x061:  mov    %edx,0x4(%esp)
082e8593 +0x065:  mov    %eax,(%esp)
082e8596 +0x068:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e859b +0x06d:  movw   $0x0,-0x14(%ebp)
082e85a1 +0x073:  mov    0x8(%ebp),%eax
082e85a4 +0x076:  mov    0x134(%eax),%eax
082e85aa +0x07c:  test   %eax,%eax
082e85ac +0x07e:  je     082e85c3 <+0x95>
082e85ae +0x080:  mov    0x8(%ebp),%eax
082e85b1 +0x083:  mov    0x134(%eax),%eax
082e85b7 +0x089:  mov    %eax,(%esp)
082e85ba +0x08c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082e85bf +0x091:  mov    %ax,-0x14(%ebp)
082e85c3 +0x095:  movzwl -0x14(%ebp),%edx
082e85c7 +0x099:  mov    0xc(%ebp),%eax
082e85ca +0x09c:  mov    %edx,0x4(%esp)
082e85ce +0x0a0:  mov    %eax,(%esp)
082e85d1 +0x0a3:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e85d6 +0x0a8:  movw   $0x0,-0x12(%ebp)
082e85dc +0x0ae:  mov    0x8(%ebp),%eax
082e85df +0x0b1:  mov    0x138(%eax),%eax
082e85e5 +0x0b7:  test   %eax,%eax
082e85e7 +0x0b9:  je     082e85fe <+0xd0>
082e85e9 +0x0bb:  mov    0x8(%ebp),%eax
082e85ec +0x0be:  mov    0x138(%eax),%eax
082e85f2 +0x0c4:  mov    %eax,(%esp)
082e85f5 +0x0c7:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082e85fa +0x0cc:  mov    %ax,-0x12(%ebp)
082e85fe +0x0d0:  movzwl -0x12(%ebp),%edx
082e8602 +0x0d4:  mov    0xc(%ebp),%eax
082e8605 +0x0d7:  mov    %edx,0x4(%esp)
082e8609 +0x0db:  mov    %eax,(%esp)
082e860c +0x0de:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e8611 +0x0e3:  movl   $0x0,-0x10(%ebp)
082e8618 +0x0ea:  movl   $0x0,-0xc(%ebp)
082e861f +0x0f1:  movl   $0x0,-0x18(%ebp)
082e8626 +0x0f8:  mov    0xc(%ebp),%eax
082e8629 +0x0fb:  mov    %eax,(%esp)
082e862c +0x0fe:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
082e8631 +0x103:  mov    %eax,-0x18(%ebp)
082e8634 +0x106:  mov    0xc(%ebp),%eax
082e8637 +0x109:  mov    -0xc(%ebp),%edx
082e863a +0x10c:  mov    %edx,0x4(%esp)
082e863e +0x110:  mov    %eax,(%esp)
082e8641 +0x113:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8646 +0x118:  movl   $0x0,-0x10(%ebp)
082e864d +0x11f:  jmp    082e86c7 <+0x199>
082e864f +0x121:  mov    -0x10(%ebp),%eax
082e8652 +0x124:  shl    $0x5,%eax
082e8655 +0x127:  add    0x8(%ebp),%eax
082e8658 +0x12a:  mov    %eax,(%esp)
082e865b +0x12d:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e8660 +0x132:  test   %al,%al
082e8662 +0x134:  jne    082e86c2 <+0x194>
082e8664 +0x136:  mov    -0x10(%ebp),%edx
082e8667 +0x139:  mov    0xc(%ebp),%eax
082e866a +0x13c:  mov    %edx,0x4(%esp)
082e866e +0x140:  mov    %eax,(%esp)
082e8671 +0x143:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8676 +0x148:  mov    -0x10(%ebp),%eax
082e8679 +0x14b:  shl    $0x5,%eax
082e867c +0x14e:  add    0x8(%ebp),%eax
082e867f +0x151:  mov    %eax,(%esp)
082e8682 +0x154:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e8687 +0x159:  lea    0x1(%eax),%edx
082e868a +0x15c:  mov    0xc(%ebp),%eax
082e868d +0x15f:  mov    %edx,0x4(%esp)
082e8691 +0x163:  mov    %eax,(%esp)
082e8694 +0x166:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8699 +0x16b:  mov    -0x10(%ebp),%eax
082e869c +0x16e:  shl    $0x5,%eax
082e869f +0x171:  add    0x8(%ebp),%eax
082e86a2 +0x174:  mov    %eax,(%esp)
082e86a5 +0x177:  call   082e6662 <_ZN11pvp_assault10CAssaulter15GetUserUniqueIdEv>  ; pvp_assault::CAssaulter::GetUserUniqueId()
082e86aa +0x17c:  movzwl %ax,%edx
082e86ad +0x17f:  mov    0xc(%ebp),%eax
082e86b0 +0x182:  mov    %edx,0x4(%esp)
082e86b4 +0x186:  mov    %eax,(%esp)
082e86b7 +0x189:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e86bc +0x18e:  addl   $0x1,-0xc(%ebp)
082e86c0 +0x192:  jmp    082e86c3 <+0x195>
082e86c2 +0x194:  nop
082e86c3 +0x195:  addl   $0x1,-0x10(%ebp)
082e86c7 +0x199:  cmpl   $0x7,-0x10(%ebp)
082e86cb +0x19d:  setbe  %al
082e86ce +0x1a0:  test   %al,%al
082e86d0 +0x1a2:  jne    082e864f <+0x121>
082e86d6 +0x1a8:  mov    0xc(%ebp),%eax
082e86d9 +0x1ab:  mov    -0xc(%ebp),%edx
082e86dc +0x1ae:  mov    %edx,0x8(%esp)
082e86e0 +0x1b2:  lea    -0x18(%ebp),%edx
082e86e3 +0x1b5:  mov    %edx,0x4(%esp)
082e86e7 +0x1b9:  mov    %eax,(%esp)
082e86ea +0x1bc:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
082e86ef +0x1c1:  movl   $0x0,-0x18(%ebp)
082e86f6 +0x1c8:  movl   $0x0,-0xc(%ebp)
082e86fd +0x1cf:  mov    0xc(%ebp),%eax
082e8700 +0x1d2:  mov    %eax,(%esp)
082e8703 +0x1d5:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
082e8708 +0x1da:  mov    %eax,-0x18(%ebp)
082e870b +0x1dd:  mov    0xc(%ebp),%eax
082e870e +0x1e0:  mov    -0xc(%ebp),%edx
082e8711 +0x1e3:  mov    %edx,0x4(%esp)
082e8715 +0x1e7:  mov    %eax,(%esp)
082e8718 +0x1ea:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e871d +0x1ef:  lea    -0x24(%ebp),%eax
082e8720 +0x1f2:  mov    %eax,(%esp)
082e8723 +0x1f5:  call   08168420 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x281>  ; global constructors keyed to HeroMissionValue::clear()+0x281
082e8728 +0x1fa:  mov    0x8(%ebp),%eax
082e872b +0x1fd:  mov    0x11c(%eax),%esi
082e8731 +0x203:  mov    0x8(%ebp),%eax
082e8734 +0x206:  mov    0x118(%eax),%ebx
082e873a +0x20c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082e873f +0x211:  lea    -0x24(%ebp),%edx
082e8742 +0x214:  mov    %edx,0xc(%esp)
082e8746 +0x218:  mov    %esi,0x8(%esp)
082e874a +0x21c:  mov    %ebx,0x4(%esp)
082e874e +0x220:  mov    %eax,(%esp)
082e8751 +0x223:  call   086c8316 <_ZN9GameWorld16get_user_id_listEiiRSt6vectorItSaItEE>  ; GameWorld::get_user_id_list(int, int, std::vector<unsigned short, std::allocator<unsigned short> >&)
082e8756 +0x228:  movl   $0x0,-0x10(%ebp)
082e875d +0x22f:  jmp    082e878e <+0x260>
082e875f +0x231:  mov    -0x10(%ebp),%eax
082e8762 +0x234:  mov    %eax,0x4(%esp)
082e8766 +0x238:  lea    -0x24(%ebp),%eax
082e8769 +0x23b:  mov    %eax,(%esp)
082e876c +0x23e:  call   081684ca <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x32b>  ; global constructors keyed to HeroMissionValue::clear()+0x32b
082e8771 +0x243:  movzwl (%eax),%eax
082e8774 +0x246:  movzwl %ax,%edx
082e8777 +0x249:  mov    0xc(%ebp),%eax
082e877a +0x24c:  mov    %edx,0x4(%esp)
082e877e +0x250:  mov    %eax,(%esp)
082e8781 +0x253:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e8786 +0x258:  addl   $0x1,-0xc(%ebp)
082e878a +0x25c:  addl   $0x1,-0x10(%ebp)
082e878e +0x260:  cmpl   $0x9,-0x10(%ebp)
082e8792 +0x264:  ja     082e87ab <+0x27d>
082e8794 +0x266:  lea    -0x24(%ebp),%eax
082e8797 +0x269:  mov    %eax,(%esp)
082e879a +0x26c:  call   081684dc <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x33d>  ; global constructors keyed to HeroMissionValue::clear()+0x33d
082e879f +0x271:  cmp    -0x10(%ebp),%eax
082e87a2 +0x274:  jbe    082e87ab <+0x27d>
082e87a4 +0x276:  mov    $0x1,%eax
082e87a9 +0x27b:  jmp    082e87b0 <+0x282>
082e87ab +0x27d:  mov    $0x0,%eax
082e87b0 +0x282:  test   %al,%al
082e87b2 +0x284:  jne    082e875f <+0x231>
082e87b4 +0x286:  mov    0xc(%ebp),%eax
082e87b7 +0x289:  mov    -0xc(%ebp),%edx
082e87ba +0x28c:  mov    %edx,0x8(%esp)
082e87be +0x290:  lea    -0x18(%ebp),%edx
082e87c1 +0x293:  mov    %edx,0x4(%esp)
082e87c5 +0x297:  mov    %eax,(%esp)
082e87c8 +0x29a:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
082e87cd +0x29f:  mov    0xc(%ebp),%eax
082e87d0 +0x2a2:  movl   $0x1,0x4(%esp)
082e87d8 +0x2aa:  mov    %eax,(%esp)
082e87db +0x2ad:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082e87e0 +0x2b2:  jmp    082e87fd <+0x2cf>
082e87e2 +0x2b4:  mov    %edx,%ebx
082e87e4 +0x2b6:  mov    %eax,%esi
082e87e6 +0x2b8:  lea    -0x24(%ebp),%eax
082e87e9 +0x2bb:  mov    %eax,(%esp)
082e87ec +0x2be:  call   08168350 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x1b1>  ; global constructors keyed to HeroMissionValue::clear()+0x1b1
082e87f1 +0x2c3:  mov    %esi,%eax
082e87f3 +0x2c5:  mov    %ebx,%edx
082e87f5 +0x2c7:  mov    %eax,(%esp)
082e87f8 +0x2ca:  call   08ae3750 <_Unwind_Resume>
082e87fd +0x2cf:  lea    -0x24(%ebp),%eax
082e8800 +0x2d2:  mov    %eax,(%esp)
082e8803 +0x2d5:  call   08168350 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x1b1>  ; global constructors keyed to HeroMissionValue::clear()+0x1b1
082e8808 +0x2da:  add    $0x30,%esp
082e880b +0x2dd:  pop    %ebx
082e880c +0x2de:  pop    %esi
082e880d +0x2df:  pop    %ebp
082e880e +0x2e0:  ret
082e880f +0x2e1:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_MakeMoveAssaultPlace @ 0x82e852e

/* pvp_assault::CAssaultPlace::_MakeMoveAssaultPlace(PacketGuard*) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeMoveAssaultPlace(CAssaultPlace *this,PacketGuard *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  GameWorld *this_00;
  ushort *puVar5;
  uint uVar6;
  vector<unsigned_short,std::allocator<unsigned_short>> local_28 [12];
  int local_1c;
  ushort local_18;
  ushort local_16;
  uint local_14;
  int local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x80);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x104));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x118));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x11c));
  local_18 = 0;
  if (*(int *)(this + 0x134) != 0) {
    local_18 = CUser::get_unique_id(*(CUser **)(this + 0x134));
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)local_18);
  local_16 = 0;
  if (*(int *)(this + 0x138) != 0) {
    local_16 = CUser::get_unique_id(*(CUser **)(this + 0x138));
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)local_16);
  local_14 = 0;
  local_10 = 0;
  local_1c = 0;
  local_1c = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_10);
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    cVar3 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
    if (cVar3 == '\0') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_14);
      iVar4 = CAssaulter::GetTeam((CAssaulter *)(this + local_14 * 0x20));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar4 + 1);
      uVar6 = CAssaulter::GetUserUniqueId((CAssaulter *)(this + local_14 * 0x20));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar6 & 0xffff);
      local_10 = local_10 + 1;
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,&local_1c,local_10);
  local_1c = 0;
  local_10 = 0;
  local_1c = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_10);
  std::vector<unsigned_short,std::allocator<unsigned_short>>::vector(local_28);
  iVar4 = *(int *)(this + 0x11c);
  iVar1 = *(int *)(this + 0x118);
                    /* try { // try from 082e873a to 082e87df has its CatchHandler @ 082e87e2 */
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::get_user_id_list(this_00,iVar1,iVar4,(vector *)local_28);
  local_14 = 0;
  do {
    if (local_14 < 10) {
      uVar6 = std::vector<unsigned_short,std::allocator<unsigned_short>>::size(local_28);
      if (uVar6 <= local_14) goto LAB_082e87ab;
      bVar2 = true;
    }
    else {
LAB_082e87ab:
      bVar2 = false;
    }
    if (!bVar2) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,&local_1c,local_10);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
      std::vector<unsigned_short,std::allocator<unsigned_short>>::~vector(local_28);
      return;
    }
    puVar5 = (ushort *)
             std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                       (local_28,local_14);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*puVar5);
    local_10 = local_10 + 1;
    local_14 = local_14 + 1;
  } while( true );
}
```
