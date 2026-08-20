# make_packet_chat_msg_hyper_link

`_ZN9GameWorld31make_packet_chat_msg_hyper_linkER11PacketGuardP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKET`

`GameWorld::make_packet_chat_msg_hyper_link(PacketGuard&, CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086d0ea4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d0ea4  _ZN9GameWorld31make_packet_chat_msg_hyper_linkER11PacketGuardP5CUserR27MSG_ITEM_HYPER_LINK_MESSAGE15ENUM_NOTIPACKET
#           GameWorld::make_packet_chat_msg_hyper_link(PacketGuard&, CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&, ENUM_NOTIPACKET)
# range [0x086d0ea4, 0x086d1001]
086d0ea4 +0x000:  push   %ebp
086d0ea5 +0x001:  mov    %esp,%ebp
086d0ea7 +0x003:  sub    $0x28,%esp
086d0eaa +0x006:  mov    0xc(%ebp),%eax
086d0ead +0x009:  mov    %eax,(%esp)
086d0eb0 +0x00c:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086d0eb5 +0x011:  mov    0x18(%ebp),%edx
086d0eb8 +0x014:  mov    0xc(%ebp),%eax
086d0ebb +0x017:  mov    %edx,0x8(%esp)
086d0ebf +0x01b:  movl   $0x0,0x4(%esp)
086d0ec7 +0x023:  mov    %eax,(%esp)
086d0eca +0x026:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086d0ecf +0x02b:  mov    0x14(%ebp),%eax
086d0ed2 +0x02e:  movzbl 0xd(%eax),%eax
086d0ed6 +0x032:  movzbl %al,%edx
086d0ed9 +0x035:  mov    0xc(%ebp),%eax
086d0edc +0x038:  mov    %edx,0x4(%esp)
086d0ee0 +0x03c:  mov    %eax,(%esp)
086d0ee3 +0x03f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086d0ee8 +0x044:  cmpl   $0x0,0x10(%ebp)
086d0eec +0x048:  jne    086d0f16 <+0x72>
086d0eee +0x04a:  mov    0xc(%ebp),%eax
086d0ef1 +0x04d:  movl   $0x0,0x4(%esp)
086d0ef9 +0x055:  mov    %eax,(%esp)
086d0efc +0x058:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086d0f01 +0x05d:  mov    0xc(%ebp),%eax
086d0f04 +0x060:  movl   $0x0,0x4(%esp)
086d0f0c +0x068:  mov    %eax,(%esp)
086d0f0f +0x06b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086d0f14 +0x070:  jmp    086d0f4f <+0xab>
086d0f16 +0x072:  mov    0x10(%ebp),%eax
086d0f19 +0x075:  mov    %eax,(%esp)
086d0f1c +0x078:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086d0f21 +0x07d:  movzwl %ax,%edx
086d0f24 +0x080:  mov    0xc(%ebp),%eax
086d0f27 +0x083:  mov    %edx,0x4(%esp)
086d0f2b +0x087:  mov    %eax,(%esp)
086d0f2e +0x08a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086d0f33 +0x08f:  mov    0x10(%ebp),%eax
086d0f36 +0x092:  mov    %eax,(%esp)
086d0f39 +0x095:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086d0f3e +0x09a:  mov    %eax,%edx
086d0f40 +0x09c:  mov    0xc(%ebp),%eax
086d0f43 +0x09f:  mov    %edx,0x4(%esp)
086d0f47 +0x0a3:  mov    %eax,(%esp)
086d0f4a +0x0a6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086d0f4f +0x0ab:  mov    0x14(%ebp),%eax
086d0f52 +0x0ae:  mov    0x14(%eax),%edx
086d0f55 +0x0b1:  mov    0xc(%ebp),%eax
086d0f58 +0x0b4:  mov    %edx,0x4(%esp)
086d0f5c +0x0b8:  mov    %eax,(%esp)
086d0f5f +0x0bb:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086d0f64 +0x0c0:  mov    0x14(%ebp),%eax
086d0f67 +0x0c3:  mov    0x14(%eax),%edx
086d0f6a +0x0c6:  mov    0x14(%ebp),%eax
086d0f6d +0x0c9:  lea    0x18(%eax),%ecx
086d0f70 +0x0cc:  mov    0xc(%ebp),%eax
086d0f73 +0x0cf:  mov    %edx,0x8(%esp)
086d0f77 +0x0d3:  mov    %ecx,0x4(%esp)
086d0f7b +0x0d7:  mov    %eax,(%esp)
086d0f7e +0x0da:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
086d0f83 +0x0df:  mov    0x14(%ebp),%eax
086d0f86 +0x0e2:  movzbl 0x13b(%eax),%eax
086d0f8d +0x0e9:  movzbl %al,%edx
086d0f90 +0x0ec:  mov    0xc(%ebp),%eax
086d0f93 +0x0ef:  mov    %edx,0x4(%esp)
086d0f97 +0x0f3:  mov    %eax,(%esp)
086d0f9a +0x0f6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086d0f9f +0x0fb:  movl   $0x0,-0xc(%ebp)
086d0fa6 +0x102:  jmp    086d0fd6 <+0x132>
086d0fa8 +0x104:  mov    -0xc(%ebp),%eax
086d0fab +0x107:  imul   $0x68,%eax,%eax
086d0fae +0x10a:  add    $0x130,%eax
086d0fb3 +0x10f:  add    0x14(%ebp),%eax
086d0fb6 +0x112:  add    $0xc,%eax
086d0fb9 +0x115:  mov    %eax,%edx
086d0fbb +0x117:  mov    0xc(%ebp),%eax
086d0fbe +0x11a:  movl   $0x68,0x8(%esp)
086d0fc6 +0x122:  mov    %edx,0x4(%esp)
086d0fca +0x126:  mov    %eax,(%esp)
086d0fcd +0x129:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
086d0fd2 +0x12e:  addl   $0x1,-0xc(%ebp)
086d0fd6 +0x132:  mov    0x14(%ebp),%eax
086d0fd9 +0x135:  movzbl 0x13b(%eax),%eax
086d0fe0 +0x13c:  movzbl %al,%eax
086d0fe3 +0x13f:  cmp    -0xc(%ebp),%eax
086d0fe6 +0x142:  setg   %al
086d0fe9 +0x145:  test   %al,%al
086d0feb +0x147:  jne    086d0fa8 <+0x104>
086d0fed +0x149:  mov    0xc(%ebp),%eax
086d0ff0 +0x14c:  movl   $0x1,0x4(%esp)
086d0ff8 +0x154:  mov    %eax,(%esp)
086d0ffb +0x157:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086d1000 +0x15c:  leave
086d1001 +0x15d:  ret
```

## 反编译 C

```c
// GameWorld::make_packet_chat_msg_hyper_link @ 0x86d0ea4

/* GameWorld::make_packet_chat_msg_hyper_link(PacketGuard&, CUser*, MSG_ITEM_HYPER_LINK_MESSAGE&,
   ENUM_NOTIPACKET) */

void __thiscall
GameWorld::make_packet_chat_msg_hyper_link
          (undefined4 this,InterfacePacketBuf *param_1,CUser *param_2,int param_3,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 local_10;
  
  InterfacePacketBuf::clear(param_1);
  InterfacePacketBuf::put_header(param_1,0,param_5);
  InterfacePacketBuf::put_byte(param_1,(uint)*(byte *)(param_3 + 0xd));
  if (param_2 == (CUser *)0x0) {
    InterfacePacketBuf::put_short(param_1,0);
    InterfacePacketBuf::put_byte(param_1,0);
  }
  else {
    uVar1 = CUser::get_unique_id(param_2);
    InterfacePacketBuf::put_short(param_1,uVar1 & 0xffff);
    iVar2 = CUser::GetServerGroup(param_2);
    InterfacePacketBuf::put_byte(param_1,iVar2);
  }
  InterfacePacketBuf::put_int(param_1,*(int *)(param_3 + 0x14));
  InterfacePacketBuf::put_str(param_1,(char *)(param_3 + 0x18),*(int *)(param_3 + 0x14));
  InterfacePacketBuf::put_byte(param_1,(uint)*(byte *)(param_3 + 0x13b));
  for (local_10 = 0; local_10 < (int)(uint)*(byte *)(param_3 + 0x13b); local_10 = local_10 + 1) {
    InterfacePacketBuf::put_binary(param_1,(char *)(local_10 * 0x68 + param_3 + 0x13c),0x68);
  }
  InterfacePacketBuf::finalize(param_1,true);
  return;
}
```
