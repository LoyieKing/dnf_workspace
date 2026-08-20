# GuildMailCheck

`_ZN23Dispatcher_MailBox_Send14GuildMailCheckEP5CUserR8MSG_BASE`

`Dispatcher_MailBox_Send::GuildMailCheck(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MailBox_Send` | `0x081cc8c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cc8c2  _ZN23Dispatcher_MailBox_Send14GuildMailCheckEP5CUserR8MSG_BASE
#           Dispatcher_MailBox_Send::GuildMailCheck(CUser*, MSG_BASE&)
# range [0x081cc8c2, 0x081cc957]
081cc8c2 +0x00:  push   %ebp
081cc8c3 +0x01:  mov    %esp,%ebp
081cc8c5 +0x03:  sub    $0x28,%esp
081cc8c8 +0x06:  mov    0xc(%ebp),%eax
081cc8cb +0x09:  mov    %eax,(%esp)
081cc8ce +0x0c:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081cc8d3 +0x11:  test   %eax,%eax
081cc8d5 +0x13:  sete   %al
081cc8d8 +0x16:  test   %al,%al
081cc8da +0x18:  je     081cc8e3 <+0x21>
081cc8dc +0x1a:  mov    $0x22,%eax
081cc8e1 +0x1f:  jmp    081cc955 <+0x93>
081cc8e3 +0x21:  mov    0xc(%ebp),%eax
081cc8e6 +0x24:  mov    %eax,(%esp)
081cc8e9 +0x27:  call   0866c414 <_ZN5CUser16IsSubGuildMasterEv>  ; CUser::IsSubGuildMaster()
081cc8ee +0x2c:  xor    $0x1,%eax
081cc8f1 +0x2f:  test   %al,%al
081cc8f3 +0x31:  je     081cc90e <+0x4c>
081cc8f5 +0x33:  mov    0xc(%ebp),%eax
081cc8f8 +0x36:  mov    %eax,(%esp)
081cc8fb +0x39:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
081cc900 +0x3e:  xor    $0x1,%eax
081cc903 +0x41:  test   %al,%al
081cc905 +0x43:  je     081cc90e <+0x4c>
081cc907 +0x45:  mov    $0x1,%eax
081cc90c +0x4a:  jmp    081cc913 <+0x51>
081cc90e +0x4c:  mov    $0x0,%eax
081cc913 +0x51:  test   %al,%al
081cc915 +0x53:  je     081cc91e <+0x5c>
081cc917 +0x55:  mov    $0x24,%eax
081cc91c +0x5a:  jmp    081cc955 <+0x93>
081cc91e +0x5c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081cc923 +0x61:  mov    0xa624(%eax),%eax
081cc929 +0x67:  mov    %eax,-0xc(%ebp)
081cc92c +0x6a:  mov    0xc(%ebp),%eax
081cc92f +0x6d:  mov    %eax,(%esp)
081cc932 +0x70:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081cc937 +0x75:  mov    %eax,(%esp)
081cc93a +0x78:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
081cc93f +0x7d:  cmp    -0xc(%ebp),%eax
081cc942 +0x80:  setl   %al
081cc945 +0x83:  test   %al,%al
081cc947 +0x85:  je     081cc950 <+0x8e>
081cc949 +0x87:  mov    $0x23,%eax
081cc94e +0x8c:  jmp    081cc955 <+0x93>
081cc950 +0x8e:  mov    $0x0,%eax
081cc955 +0x93:  leave
081cc956 +0x94:  ret
081cc957 +0x95:  nop
```

## 反编译 C

```c
// Dispatcher_MailBox_Send::GuildMailCheck @ 0x81cc8c2

/* Dispatcher_MailBox_Send::GuildMailCheck(CUser*, MSG_BASE&) */

undefined4 Dispatcher_MailBox_Send::GuildMailCheck(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CInventory *this;
  int iVar5;
  
  iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
  if (iVar3 != 0) {
    cVar2 = CUser::IsSubGuildMaster((CUser *)param_2);
    if ((cVar2 == '\x01') || (cVar2 = CUser::IsGuildMaster((CUser *)param_2), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0x24;
    }
    else {
      iVar3 = G_CDataManager();
      iVar3 = *(int *)(iVar3 + 0xa624);
      this = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      iVar5 = CInventory::get_money(this);
      if (iVar5 < iVar3) {
        uVar4 = 0x23;
      }
      else {
        uVar4 = 0;
      }
    }
    return uVar4;
  }
  return 0x22;
}
```
