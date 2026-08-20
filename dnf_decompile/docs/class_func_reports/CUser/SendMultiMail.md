# SendMultiMail

`_ZN5CUser13SendMultiMailEb`

`CUser::SendMultiMail(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868a2dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868a2dc  _ZN5CUser13SendMultiMailEb
#           CUser::SendMultiMail(bool)
# range [0x0868a2dc, 0x0868a4b5]
0868a2dc +0x000:  push   %ebp
0868a2dd +0x001:  mov    %esp,%ebp
0868a2df +0x003:  push   %ebx
0868a2e0 +0x004:  sub    $0x3fc4,%esp
0868a2e6 +0x00a:  mov    0xc(%ebp),%eax
0868a2e9 +0x00d:  mov    %al,-0x3fac(%ebp)
0868a2ef +0x013:  movzbl -0x3fac(%ebp),%eax
0868a2f6 +0x01a:  xor    $0x1,%eax
0868a2f9 +0x01d:  test   %al,%al
0868a2fb +0x01f:  je     0868a33d <+0x61>
0868a2fd +0x021:  movl   $0x87,0x8(%esp)
0868a305 +0x029:  movl   $0x13c,0x4(%esp)
0868a30d +0x031:  mov    0x8(%ebp),%eax
0868a310 +0x034:  mov    %eax,(%esp)
0868a313 +0x037:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0868a318 +0x03c:  mov    0x8(%ebp),%eax
0868a31b +0x03f:  add    $0x8e246,%eax
0868a320 +0x044:  movl   $0x1a6,0x8(%esp)
0868a328 +0x04c:  movl   $0x0,0x4(%esp)
0868a330 +0x054:  mov    %eax,(%esp)
0868a333 +0x057:  call   0807dcc0 <_init+0x5b8>
0868a338 +0x05c:  jmp    0868a4ac <+0x1d0>
0868a33d +0x061:  mov    0x8(%ebp),%eax
0868a340 +0x064:  add    $0x8e246,%eax
0868a345 +0x069:  mov    %eax,0x4(%esp)
0868a349 +0x06d:  lea    -0x3fa0(%ebp),%eax
0868a34f +0x073:  mov    %eax,(%esp)
0868a352 +0x076:  call   08238086 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd730>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd730
0868a357 +0x07b:  mov    0x8(%ebp),%eax
0868a35a +0x07e:  lea    0x8e257(%eax),%edx
0868a360 +0x084:  lea    -0x3fa0(%ebp),%eax
0868a366 +0x08a:  mov    %eax,0x8(%esp)
0868a36a +0x08e:  mov    %edx,0x4(%esp)
0868a36e +0x092:  mov    0x8(%ebp),%eax
0868a371 +0x095:  mov    %eax,(%esp)
0868a374 +0x098:  call   08555464 <_ZN8WongWork14CMailBoxHelper18ReqDBCheckReceiverEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER>  ; WongWork::CMailBoxHelper::ReqDBCheckReceiver(CUser*, char const*, MSG_CHECK_MAIL_RECEIVER*)
0868a379 +0x09d:  mov    %eax,-0x18(%ebp)
0868a37c +0x0a0:  cmpl   $0x0,-0x18(%ebp)
0868a380 +0x0a4:  je     0868a3a4 <+0xc8>
0868a382 +0x0a6:  mov    -0x18(%ebp),%eax
0868a385 +0x0a9:  movzbl %al,%eax
0868a388 +0x0ac:  mov    %eax,0x8(%esp)
0868a38c +0x0b0:  movl   $0x13c,0x4(%esp)
0868a394 +0x0b8:  mov    0x8(%ebp),%eax
0868a397 +0x0bb:  mov    %eax,(%esp)
0868a39a +0x0be:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0868a39f +0x0c3:  jmp    0868a48c <+0x1b0>
0868a3a4 +0x0c8:  movb   $0x0,-0x11(%ebp)
0868a3a8 +0x0cc:  movl   $0x0,-0x10(%ebp)
0868a3af +0x0d3:  jmp    0868a471 <+0x195>
0868a3b4 +0x0d8:  mov    -0x10(%ebp),%edx
0868a3b7 +0x0db:  mov    0x8(%ebp),%ecx
0868a3ba +0x0de:  mov    %edx,%eax
0868a3bc +0x0e0:  shl    $0x2,%eax
0868a3bf +0x0e3:  add    %edx,%eax
0868a3c1 +0x0e5:  add    %eax,%eax
0868a3c3 +0x0e7:  add    %edx,%eax
0868a3c5 +0x0e9:  lea    (%ecx,%eax,1),%eax
0868a3c8 +0x0ec:  add    $0x8e270,%eax
0868a3cd +0x0f1:  mov    0xd(%eax),%eax
0868a3d0 +0x0f4:  mov    %eax,%ebx
0868a3d2 +0x0f6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868a3d7 +0x0fb:  mov    %ebx,0x4(%esp)
0868a3db +0x0ff:  mov    %eax,(%esp)
0868a3de +0x102:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0868a3e3 +0x107:  mov    %eax,-0xc(%ebp)
0868a3e6 +0x10a:  cmpl   $0x0,-0xc(%ebp)
0868a3ea +0x10e:  je     0868a429 <+0x14d>
0868a3ec +0x110:  mov    -0xc(%ebp),%eax
0868a3ef +0x113:  mov    (%eax),%eax
0868a3f1 +0x115:  add    $0x10,%eax
0868a3f4 +0x118:  mov    (%eax),%edx
0868a3f6 +0x11a:  mov    -0xc(%ebp),%eax
0868a3f9 +0x11d:  mov    %eax,(%esp)
0868a3fc +0x120:  call   *%edx
0868a3fe +0x122:  xor    $0x1,%eax
0868a401 +0x125:  test   %al,%al
0868a403 +0x127:  je     0868a41c <+0x140>
0868a405 +0x129:  mov    -0xc(%ebp),%eax
0868a408 +0x12c:  mov    %eax,(%esp)
0868a40b +0x12f:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0868a410 +0x134:  cmp    $0x1,%eax
0868a413 +0x137:  jg     0868a41c <+0x140>
0868a415 +0x139:  mov    $0x1,%eax
0868a41a +0x13e:  jmp    0868a421 <+0x145>
0868a41c +0x140:  mov    $0x0,%eax
0868a421 +0x145:  test   %al,%al
0868a423 +0x147:  je     0868a429 <+0x14d>
0868a425 +0x149:  movb   $0x1,-0x11(%ebp)
0868a429 +0x14d:  mov    -0x10(%ebp),%edx
0868a42c +0x150:  mov    0x8(%ebp),%ecx
0868a42f +0x153:  mov    %edx,%eax
0868a431 +0x155:  shl    $0x2,%eax
0868a434 +0x158:  add    %edx,%eax
0868a436 +0x15a:  add    %eax,%eax
0868a438 +0x15c:  add    %edx,%eax
0868a43a +0x15e:  lea    (%ecx,%eax,1),%eax
0868a43d +0x161:  add    $0x8e270,%eax
0868a442 +0x166:  mov    0xd(%eax),%eax
0868a445 +0x169:  test   %eax,%eax
0868a447 +0x16b:  jne    0868a44d <+0x171>
0868a449 +0x16d:  movb   $0x1,-0x11(%ebp)
0868a44d +0x171:  movzbl -0x11(%ebp),%edx
0868a451 +0x175:  mov    0x8(%ebp),%eax
0868a454 +0x178:  mov    0x8e275(%eax),%eax
0868a45a +0x17e:  mov    %edx,0x8(%esp)
0868a45e +0x182:  mov    %eax,0x4(%esp)
0868a462 +0x186:  mov    0x8(%ebp),%eax
0868a465 +0x189:  mov    %eax,(%esp)
0868a468 +0x18c:  call   0864658a <_ZN5CUser18IncrementTradeGoldEji>  ; CUser::IncrementTradeGold(unsigned int, int)
0868a46d +0x191:  addl   $0x1,-0x10(%ebp)
0868a471 +0x195:  mov    0x8(%ebp),%eax
0868a474 +0x198:  movzbl 0x8e279(%eax),%eax
0868a47b +0x19f:  movzbl %al,%eax
0868a47e +0x1a2:  cmp    -0x10(%ebp),%eax
0868a481 +0x1a5:  setg   %al
0868a484 +0x1a8:  test   %al,%al
0868a486 +0x1aa:  jne    0868a3b4 <+0xd8>
0868a48c +0x1b0:  mov    0x8(%ebp),%eax
0868a48f +0x1b3:  add    $0x8e246,%eax
0868a494 +0x1b8:  movl   $0x1a6,0x8(%esp)
0868a49c +0x1c0:  movl   $0x0,0x4(%esp)
0868a4a4 +0x1c8:  mov    %eax,(%esp)
0868a4a7 +0x1cb:  call   0807dcc0 <_init+0x5b8>
0868a4ac +0x1d0:  add    $0x3fc4,%esp
0868a4b2 +0x1d6:  pop    %ebx
0868a4b3 +0x1d7:  pop    %ebp
0868a4b4 +0x1d8:  ret
0868a4b5 +0x1d9:  nop
```

## 反编译 C

```c
// CUser::SendMultiMail @ 0x868a2dc

/* CUser::SendMultiMail(bool) */

void __thiscall CUser::SendMultiMail(CUser *this,bool param_1)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  int iVar3;
  MSG_CHECK_MAIL_RECEIVER local_3fa4 [16264];
  uint local_1c;
  byte local_15;
  int local_14;
  CItem *local_10;
  
  if (param_1) {
    MSG_CHECK_MAIL_RECEIVER::
    set<(MSG_CHECK_MAIL_RECEIVER::ENUM_MAILBOX_CHECKTYPE)2,MSG_MULTI_MAILBOX_SEND>
              (local_3fa4,(MSG_MULTI_MAILBOX_SEND *)(this + 0x8e246));
    local_1c = WongWork::CMailBoxHelper::ReqDBCheckReceiver
                         (this,(char *)(this + 0x8e257),local_3fa4);
    if (local_1c == 0) {
      local_15 = 0;
      for (local_14 = 0; local_14 < (int)(uint)(byte)this[0x8e279]; local_14 = local_14 + 1) {
        iVar3 = *(int *)(this + local_14 * 0xb + 0x8e27d);
        this_00 = (CDataManager *)G_CDataManager();
        local_10 = (CItem *)CDataManager::find_item(this_00,iVar3);
        if (local_10 != (CItem *)0x0) {
          cVar2 = (**(code **)(*(int *)local_10 + 0x10))(local_10);
          if (cVar2 == '\x01') {
LAB_0868a41c:
            bVar1 = false;
          }
          else {
            iVar3 = CItem::get_rarity(local_10);
            if (1 < iVar3) goto LAB_0868a41c;
            bVar1 = true;
          }
          if (bVar1) {
            local_15 = 1;
          }
        }
        if (*(int *)(this + local_14 * 0xb + 0x8e27d) == 0) {
          local_15 = 1;
        }
        IncrementTradeGold(this,*(uint *)(this + 0x8e275),(uint)local_15);
      }
    }
    else {
      SendCmdErrorPacket(this,0x13c,local_1c & 0xff);
    }
    memset(this + 0x8e246,0,0x1a6);
  }
  else {
    SendCmdErrorPacket(this,0x13c,0x87);
    memset(this + 0x8e246,0,0x1a6);
  }
  return;
}
```
