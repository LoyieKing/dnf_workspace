# dispatch_sig

`_ZN27Dispatcher_PvPBuddyConnList12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_PvPBuddyConnList::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PvPBuddyConnList` | `0x08224e08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08224e08  _ZN27Dispatcher_PvPBuddyConnList12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_PvPBuddyConnList::dispatch_sig(CUser*, PacketBuf&)
# range [0x08224e08, 0x08224e63]
08224e08 +0x00:  push   %ebp
08224e09 +0x01:  mov    %esp,%ebp
08224e0b +0x03:  push   %ebx
08224e0c +0x04:  sub    $0x14,%esp
08224e0f +0x07:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08224e14 +0x0c:  mov    %eax,(%esp)
08224e17 +0x0f:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
08224e1c +0x14:  xor    $0x1,%eax
08224e1f +0x17:  test   %al,%al
08224e21 +0x19:  je     08224e2a <+0x22>
08224e23 +0x1b:  mov    $0x0,%eax
08224e28 +0x20:  jmp    08224e5d <+0x55>
08224e2a +0x22:  mov    0xc(%ebp),%eax
08224e2d +0x25:  mov    %eax,(%esp)
08224e30 +0x28:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08224e35 +0x2d:  mov    %eax,%ebx
08224e37 +0x2f:  mov    0xc(%ebp),%eax
08224e3a +0x32:  mov    %eax,(%esp)
08224e3d +0x35:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08224e42 +0x3a:  mov    &_ZN10GlobalData17s_community_proxyE,%edx
08224e48 +0x40:  mov    %ebx,0x8(%esp)
08224e4c +0x44:  mov    %eax,0x4(%esp)
08224e50 +0x48:  mov    %edx,(%esp)
08224e53 +0x4b:  call   0846cb80 <_ZN21CCommunityServerProxy16SendPvPBuddyListEjj>  ; CCommunityServerProxy::SendPvPBuddyList(unsigned int, unsigned int)
08224e58 +0x50:  mov    $0x0,%eax
08224e5d +0x55:  add    $0x14,%esp
08224e60 +0x58:  pop    %ebx
08224e61 +0x59:  pop    %ebp
08224e62 +0x5a:  ret
08224e63 +0x5b:  nop
```

## 反编译 C

```c
// Dispatcher_PvPBuddyConnList::dispatch_sig @ 0x8224e08

/* Dispatcher_PvPBuddyConnList::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_PvPBuddyConnList::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  GameWorld *this;
  uint uVar2;
  uint uVar3;
  
  this = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this);
  if (cVar1 == '\x01') {
    uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    uVar3 = CUser::get_acc_id((CUser *)param_2);
    CCommunityServerProxy::SendPvPBuddyList(GlobalData::s_community_proxy,uVar3,uVar2);
  }
  return 0;
}
```
