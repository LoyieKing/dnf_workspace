# put_packet

`_ZN9PacketBuf10put_packetERK10Inven_Item`

`PacketBuf::put_packet(Inven_Item const&)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858dc2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858dc2e  _ZN9PacketBuf10put_packetERK10Inven_Item
#           PacketBuf::put_packet(Inven_Item const&)
# range [0x0858dc2e, 0x0858dcd1]
0858dc2e +0x00:  push   %ebp
0858dc2f +0x01:  mov    %esp,%ebp
0858dc31 +0x03:  sub    $0x18,%esp
0858dc34 +0x06:  mov    0xc(%ebp),%eax
0858dc37 +0x09:  lea    0x25(%eax),%edx
0858dc3a +0x0c:  mov    0x8(%ebp),%eax
0858dc3d +0x0f:  mov    %eax,0x4(%esp)
0858dc41 +0x13:  mov    %edx,(%esp)
0858dc44 +0x16:  call   0858e3ec <_GLOBAL__I__ZN9PacketBufC2Ev+0x1c1>  ; global constructors keyed to PacketBuf::PacketBuf()+0x1c1
0858dc49 +0x1b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0858dc4e +0x20:  mov    %eax,(%esp)
0858dc51 +0x23:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
0858dc56 +0x28:  test   %al,%al
0858dc58 +0x2a:  je     0858dc72 <+0x44>
0858dc5a +0x2c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0858dc5f +0x31:  mov    %eax,(%esp)
0858dc62 +0x34:  call   084e930a <_GLOBAL__I__Z7getUserj+0x2bc>  ; global constructors keyed to getUser(unsigned int)+0x2bc
0858dc67 +0x39:  test   %eax,%eax
0858dc69 +0x3b:  jne    0858dc72 <+0x44>
0858dc6b +0x3d:  mov    $0x1,%eax
0858dc70 +0x42:  jmp    0858dc77 <+0x49>
0858dc72 +0x44:  mov    $0x0,%eax
0858dc77 +0x49:  test   %al,%al
0858dc79 +0x4b:  je     0858dc90 <+0x62>
0858dc7b +0x4d:  movl   $0x0,0x4(%esp)
0858dc83 +0x55:  mov    0x8(%ebp),%eax
0858dc86 +0x58:  mov    %eax,(%esp)
0858dc89 +0x5b:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0858dc8e +0x60:  jmp    0858dcb0 <+0x82>
0858dc90 +0x62:  mov    0xc(%ebp),%eax
0858dc93 +0x65:  add    $0x33,%eax
0858dc96 +0x68:  mov    %eax,(%esp)
0858dc99 +0x6b:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0858dc9e +0x70:  movzbl %al,%eax
0858dca1 +0x73:  mov    %eax,0x4(%esp)
0858dca5 +0x77:  mov    0x8(%ebp),%eax
0858dca8 +0x7a:  mov    %eax,(%esp)
0858dcab +0x7d:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0858dcb0 +0x82:  mov    0xc(%ebp),%eax
0858dcb3 +0x85:  add    $0x33,%eax
0858dcb6 +0x88:  mov    %eax,(%esp)
0858dcb9 +0x8b:  call   08110b0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1c
0858dcbe +0x90:  movzbl %al,%eax
0858dcc1 +0x93:  mov    %eax,0x4(%esp)
0858dcc5 +0x97:  mov    0x8(%ebp),%eax
0858dcc8 +0x9a:  mov    %eax,(%esp)
0858dccb +0x9d:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
0858dcd0 +0xa2:  leave
0858dcd1 +0xa3:  ret
```

## 反编译 C

```c
// PacketBuf::put_packet @ 0x858dc2e

/* PacketBuf::put_packet(Inven_Item const&) */

void __thiscall PacketBuf::put_packet(PacketBuf *this,Inven_Item *param_1)

{
  bool bVar1;
  char cVar2;
  GameWorld *this_00;
  CDataManager *this_01;
  int iVar3;
  uint uVar4;
  
  RandomOption::put_packet_random_option<PacketBuf>((RandomOption *)(param_1 + 0x25),this);
  this_00 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
  if (cVar2 != '\0') {
    this_01 = (CDataManager *)G_CDataManager();
    iVar3 = CDataManager::GetUpgradeRevisionPvPChannel(this_01);
    if (iVar3 == 0) {
      bVar1 = true;
      goto LAB_0858dc77;
    }
  }
  bVar1 = false;
LAB_0858dc77:
  if (bVar1) {
    put_byte(this,0);
  }
  else {
    uVar4 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(param_1 + 0x33));
    put_byte(this,uVar4 & 0xff);
  }
  uVar4 = UpgradeSeparateInfo::IsTradeRestriction((UpgradeSeparateInfo *)(param_1 + 0x33));
  put_byte(this,uVar4 & 0xff);
  return;
}
```
