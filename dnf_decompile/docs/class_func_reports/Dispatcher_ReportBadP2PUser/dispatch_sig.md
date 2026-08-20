# dispatch_sig

`_ZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ReportBadP2PUser::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ReportBadP2PUser` | `0x081fd0a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081fd0a8  _ZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ReportBadP2PUser::dispatch_sig(CUser*, PacketBuf&)
# range [0x081fd0a8, 0x081fd25b]
081fd0a8 +0x000:  push   %ebp
081fd0a9 +0x001:  mov    %esp,%ebp
081fd0ab +0x003:  push   %esi
081fd0ac +0x004:  push   %ebx
081fd0ad +0x005:  sub    $0x40,%esp
081fd0b0 +0x008:  lea    -0x32(%ebp),%eax
081fd0b3 +0x00b:  mov    %eax,0x4(%esp)
081fd0b7 +0x00f:  mov    0x10(%ebp),%eax
081fd0ba +0x012:  mov    %eax,(%esp)
081fd0bd +0x015:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081fd0c2 +0x01a:  xor    $0x1,%eax
081fd0c5 +0x01d:  test   %al,%al
081fd0c7 +0x01f:  je     081fd0f2 <+0x4a>
081fd0c9 +0x021:  movl   $0x0,0xc(%esp)
081fd0d1 +0x029:  movl   $0x0,0x8(%esp)
081fd0d9 +0x031:  movl   $&_ZZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd0e1 +0x039:  movl   $0x8ddb,(%esp)
081fd0e8 +0x040:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081fd0ed +0x045:  jmp    081fd255 <+0x1ad>
081fd0f2 +0x04a:  movzbl -0x32(%ebp),%eax
081fd0f6 +0x04e:  movsbl %al,%esi
081fd0f9 +0x051:  mov    0xc(%ebp),%eax
081fd0fc +0x054:  mov    %eax,(%esp)
081fd0ff +0x057:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081fd104 +0x05c:  mov    %eax,%ebx
081fd106 +0x05e:  lea    -0x31(%ebp),%eax
081fd109 +0x061:  mov    %eax,(%esp)
081fd10c +0x064:  call   0822ad5a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x404>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x404
081fd111 +0x069:  mov    %esi,0xc(%esp)
081fd115 +0x06d:  mov    %ebx,0x8(%esp)
081fd119 +0x071:  movl   $"user %s Lack votes slot %d as Lack",0x4(%esp)
081fd121 +0x079:  lea    -0x31(%ebp),%eax
081fd124 +0x07c:  mov    %eax,(%esp)
081fd127 +0x07f:  call   0822ad60 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x40a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x40a
081fd12c +0x084:  mov    0xc(%ebp),%eax
081fd12f +0x087:  mov    %eax,(%esp)
081fd132 +0x08a:  call   0822fe5e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5508>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5508
081fd137 +0x08f:  test   %al,%al
081fd139 +0x091:  je     081fd1c0 <+0x118>
081fd13f +0x097:  mov    0xc(%ebp),%eax
081fd142 +0x09a:  mov    %eax,(%esp)
081fd145 +0x09d:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
081fd14a +0x0a2:  mov    %eax,-0x10(%ebp)
081fd14d +0x0a5:  cmpl   $0x0,-0x10(%ebp)
081fd151 +0x0a9:  jne    081fd19e <+0xf6>
081fd153 +0x0ab:  movl   $0x5,0xc(%esp)
081fd15b +0x0b3:  movl   $0x8de8,0x8(%esp)
081fd163 +0x0bb:  movl   $&_ZZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd16b +0x0c3:  lea    -0x30(%ebp),%eax
081fd16e +0x0c6:  mov    %eax,(%esp)
081fd171 +0x0c9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fd176 +0x0ce:  movl   $0x8de8,0xc(%esp)
081fd17e +0x0d6:  movl   $&_ZZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
081fd186 +0x0de:  movl   $"[%s][%d]_!pPVPRoom",0x4(%esp)
081fd18e +0x0e6:  lea    -0x30(%ebp),%eax
081fd191 +0x0e9:  mov    %eax,(%esp)
081fd194 +0x0ec:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fd199 +0x0f1:  jmp    081fd250 <+0x1a8>
081fd19e +0x0f6:  movzbl -0x32(%ebp),%eax
081fd1a2 +0x0fa:  movsbl %al,%eax
081fd1a5 +0x0fd:  mov    %eax,0x8(%esp)
081fd1a9 +0x101:  mov    0xc(%ebp),%eax
081fd1ac +0x104:  mov    %eax,0x4(%esp)
081fd1b0 +0x108:  mov    -0x10(%ebp),%eax
081fd1b3 +0x10b:  mov    %eax,(%esp)
081fd1b6 +0x10e:  call   085dcf1a <_ZN8PvP_Room12VoteLackUserEP5CUseri>  ; PvP_Room::VoteLackUser(CUser*, int)
081fd1bb +0x113:  jmp    081fd250 <+0x1a8>
081fd1c0 +0x118:  movl   $0x5,0x4(%esp)
081fd1c8 +0x120:  mov    0xc(%ebp),%eax
081fd1cb +0x123:  mov    %eax,(%esp)
081fd1ce +0x126:  call   082300d0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x577a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x577a
081fd1d3 +0x12b:  test   %al,%al
081fd1d5 +0x12d:  je     081fd250 <+0x1a8>
081fd1d7 +0x12f:  mov    0xc(%ebp),%eax
081fd1da +0x132:  mov    %eax,(%esp)
081fd1dd +0x135:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081fd1e2 +0x13a:  mov    %eax,-0xc(%ebp)
081fd1e5 +0x13d:  cmpl   $0x0,-0xc(%ebp)
081fd1e9 +0x141:  jne    081fd233 <+0x18b>
081fd1eb +0x143:  movl   $0x5,0xc(%esp)
081fd1f3 +0x14b:  movl   $0x8df8,0x8(%esp)
081fd1fb +0x153:  movl   $&_ZZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081fd203 +0x15b:  lea    -0x20(%ebp),%eax
081fd206 +0x15e:  mov    %eax,(%esp)
081fd209 +0x161:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081fd20e +0x166:  movl   $0x8df8,0xc(%esp)
081fd216 +0x16e:  movl   $&_ZZN27Dispatcher_ReportBadP2PUser12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
081fd21e +0x176:  movl   $"[%s][%d]_!pParty",0x4(%esp)
081fd226 +0x17e:  lea    -0x20(%ebp),%eax
081fd229 +0x181:  mov    %eax,(%esp)
081fd22c +0x184:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081fd231 +0x189:  jmp    081fd250 <+0x1a8>
081fd233 +0x18b:  movzbl -0x32(%ebp),%eax
081fd237 +0x18f:  movsbl %al,%eax
081fd23a +0x192:  mov    %eax,0x8(%esp)
081fd23e +0x196:  mov    0xc(%ebp),%eax
081fd241 +0x199:  mov    %eax,0x4(%esp)
081fd245 +0x19d:  mov    -0xc(%ebp),%eax
081fd248 +0x1a0:  mov    %eax,(%esp)
081fd24b +0x1a3:  call   085b3c90 <_ZN6CParty12VoteLackUserEP5CUseri>  ; CParty::VoteLackUser(CUser*, int)
081fd250 +0x1a8:  mov    $0x0,%eax
081fd255 +0x1ad:  add    $0x40,%esp
081fd258 +0x1b0:  pop    %ebx
081fd259 +0x1b1:  pop    %esi
081fd25a +0x1b2:  pop    %ebp
081fd25b +0x1b3:  ret
```

## 反编译 C

```c
// Dispatcher_ReportBadP2PUser::dispatch_sig @ 0x81fd0a8

/* Dispatcher_ReportBadP2PUser::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ReportBadP2PUser::dispatch_sig
          (Dispatcher_ReportBadP2PUser *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_36;
  cMyTraceNoop local_35;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  PvP_Room *local_14;
  CParty *local_10;
  
  cVar1 = PacketBuf::get_byte(param_2,&local_36);
  if (cVar1 == '\x01') {
    iVar3 = (int)local_36;
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    cMyTraceNoop::cMyTraceNoop(&local_35);
    cMyTraceNoop::operator()((char *)&local_35,"user %s Lack votes slot %d as Lack",uVar2,iVar3);
    cVar1 = CUser::CheckInPvp(param_1);
    if (cVar1 == '\0') {
      cVar1 = CUser::IsState(param_1,5);
      if (cVar1 != '\0') {
        local_10 = (CParty *)CUser::GetParty(param_1);
        if (local_10 == (CParty *)0x0) {
          cMyTrace::cMyTrace(local_24,
                             "virtual int Dispatcher_ReportBadP2PUser::dispatch_sig(CUser*, PacketBuf&)"
                             ,0x8df8,5);
          cMyTrace::operator()
                    (local_24,"[%s][%d]_!pParty",
                     "virtual int Dispatcher_ReportBadP2PUser::dispatch_sig(CUser*, PacketBuf&)",
                     0x8df8);
        }
        else {
          CParty::VoteLackUser(local_10,param_1,(int)local_36);
        }
      }
    }
    else {
      local_14 = (PvP_Room *)CUser::GetPVPRoom(param_1);
      if (local_14 == (PvP_Room *)0x0) {
        cMyTrace::cMyTrace(local_34,
                           "virtual int Dispatcher_ReportBadP2PUser::dispatch_sig(CUser*, PacketBuf&)"
                           ,0x8de8,5);
        cMyTrace::operator()
                  (local_34,"[%s][%d]_!pPVPRoom",
                   "virtual int Dispatcher_ReportBadP2PUser::dispatch_sig(CUser*, PacketBuf&)",
                   0x8de8);
      }
      else {
        PvP_Room::VoteLackUser(local_14,param_1,(int)local_36);
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x8ddb,
                     "virtual int Dispatcher_ReportBadP2PUser::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  return uVar2;
}
```
