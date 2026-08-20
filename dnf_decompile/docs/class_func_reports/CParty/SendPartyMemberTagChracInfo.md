# SendPartyMemberTagChracInfo

`_ZN6CParty27SendPartyMemberTagChracInfoEv`

`CParty::SendPartyMemberTagChracInfo()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085be05a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be05a  _ZN6CParty27SendPartyMemberTagChracInfoEv
#           CParty::SendPartyMemberTagChracInfo()
# range [0x085be05a, 0x085be177]
085be05a +0x000:  push   %ebp
085be05b +0x001:  mov    %esp,%ebp
085be05d +0x003:  push   %esi
085be05e +0x004:  push   %ebx
085be05f +0x005:  sub    $0x30,%esp
085be062 +0x008:  lea    -0x20(%ebp),%eax
085be065 +0x00b:  mov    %eax,(%esp)
085be068 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085be06d +0x013:  lea    -0x20(%ebp),%eax
085be070 +0x016:  mov    %eax,(%esp)
085be073 +0x019:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085be078 +0x01e:  movl   $0x19e,0x8(%esp)
085be080 +0x026:  movl   $0x0,0x4(%esp)
085be088 +0x02e:  lea    -0x20(%ebp),%eax
085be08b +0x031:  mov    %eax,(%esp)
085be08e +0x034:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085be093 +0x039:  lea    -0x20(%ebp),%eax
085be096 +0x03c:  mov    %eax,(%esp)
085be099 +0x03f:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
085be09e +0x044:  mov    %eax,-0x24(%ebp)
085be0a1 +0x047:  movl   $0x0,0x4(%esp)
085be0a9 +0x04f:  lea    -0x20(%ebp),%eax
085be0ac +0x052:  mov    %eax,(%esp)
085be0af +0x055:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085be0b4 +0x05a:  movl   $0x0,-0x14(%ebp)
085be0bb +0x061:  movl   $0x0,-0x10(%ebp)
085be0c2 +0x068:  jmp    085be100 <+0xa6>
085be0c4 +0x06a:  mov    -0x10(%ebp),%eax
085be0c7 +0x06d:  mov    %eax,0x4(%esp)
085be0cb +0x071:  mov    0x8(%ebp),%eax
085be0ce +0x074:  mov    %eax,(%esp)
085be0d1 +0x077:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085be0d6 +0x07c:  mov    %eax,-0xc(%ebp)
085be0d9 +0x07f:  cmpl   $0x0,-0xc(%ebp)
085be0dd +0x083:  je     085be0fb <+0xa1>
085be0df +0x085:  lea    -0x20(%ebp),%eax
085be0e2 +0x088:  mov    %eax,0x4(%esp)
085be0e6 +0x08c:  mov    -0xc(%ebp),%eax
085be0e9 +0x08f:  mov    %eax,(%esp)
085be0ec +0x092:  call   08690776 <_ZN5CUser17MakeTagCharacInfoER11PacketGuard>  ; CUser::MakeTagCharacInfo(PacketGuard&)
085be0f1 +0x097:  test   %al,%al
085be0f3 +0x099:  je     085be0fc <+0xa2>
085be0f5 +0x09b:  addl   $0x1,-0x14(%ebp)
085be0f9 +0x09f:  jmp    085be0fc <+0xa2>
085be0fb +0x0a1:  nop
085be0fc +0x0a2:  addl   $0x1,-0x10(%ebp)
085be100 +0x0a6:  cmpl   $0x3,-0x10(%ebp)
085be104 +0x0aa:  setle  %al
085be107 +0x0ad:  test   %al,%al
085be109 +0x0af:  jne    085be0c4 <+0x6a>
085be10b +0x0b1:  mov    -0x14(%ebp),%eax
085be10e +0x0b4:  mov    %eax,0x8(%esp)
085be112 +0x0b8:  lea    -0x24(%ebp),%eax
085be115 +0x0bb:  mov    %eax,0x4(%esp)
085be119 +0x0bf:  lea    -0x20(%ebp),%eax
085be11c +0x0c2:  mov    %eax,(%esp)
085be11f +0x0c5:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
085be124 +0x0ca:  movl   $0x1,0x4(%esp)
085be12c +0x0d2:  lea    -0x20(%ebp),%eax
085be12f +0x0d5:  mov    %eax,(%esp)
085be132 +0x0d8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085be137 +0x0dd:  lea    -0x20(%ebp),%eax
085be13a +0x0e0:  mov    %eax,0x4(%esp)
085be13e +0x0e4:  mov    0x8(%ebp),%eax
085be141 +0x0e7:  mov    %eax,(%esp)
085be144 +0x0ea:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085be149 +0x0ef:  jmp    085be166 <+0x10c>
085be14b +0x0f1:  mov    %edx,%ebx
085be14d +0x0f3:  mov    %eax,%esi
085be14f +0x0f5:  lea    -0x20(%ebp),%eax
085be152 +0x0f8:  mov    %eax,(%esp)
085be155 +0x0fb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085be15a +0x100:  mov    %esi,%eax
085be15c +0x102:  mov    %ebx,%edx
085be15e +0x104:  mov    %eax,(%esp)
085be161 +0x107:  call   08ae3750 <_Unwind_Resume>
085be166 +0x10c:  lea    -0x20(%ebp),%eax
085be169 +0x10f:  mov    %eax,(%esp)
085be16c +0x112:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085be171 +0x117:  add    $0x30,%esp
085be174 +0x11a:  pop    %ebx
085be175 +0x11b:  pop    %esi
085be176 +0x11c:  pop    %ebp
085be177 +0x11d:  ret
```

## 反编译 C

```c
// CParty::SendPartyMemberTagChracInfo @ 0x85be05a

/* CParty::SendPartyMemberTagChracInfo() */

void __thiscall CParty::SendPartyMemberTagChracInfo(CParty *this)

{
  char cVar1;
  int local_28;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 085be073 to 085be148 has its CatchHandler @ 085be14b */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x19e);
  local_28 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_24);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,0);
  local_18 = 0;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    local_10 = (CUser *)get_user(this,local_14);
    if (local_10 != (CUser *)0x0) {
      cVar1 = CUser::MakeTagCharacInfo(local_10,local_24);
      if (cVar1 != '\0') {
        local_18 = local_18 + 1;
      }
    }
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,&local_28,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  send_to_party(this,local_24);
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
