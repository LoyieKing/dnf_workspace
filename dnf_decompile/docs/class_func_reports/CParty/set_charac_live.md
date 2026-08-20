# set_charac_live

`_ZN6CParty15set_charac_liveEP5CUser23ENUM_USER_DUNGEON_STATE`

`CParty::set_charac_live(CUser*, ENUM_USER_DUNGEON_STATE)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b29bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b29bc  _ZN6CParty15set_charac_liveEP5CUser23ENUM_USER_DUNGEON_STATE
#           CParty::set_charac_live(CUser*, ENUM_USER_DUNGEON_STATE)
# range [0x085b29bc, 0x085b2b51]
085b29bc +0x000:  push   %ebp
085b29bd +0x001:  mov    %esp,%ebp
085b29bf +0x003:  push   %esi
085b29c0 +0x004:  push   %ebx
085b29c1 +0x005:  sub    $0x20,%esp
085b29c4 +0x008:  movl   $0x0,-0xc(%ebp)
085b29cb +0x00f:  jmp    085b2b3b <+0x17f>
085b29d0 +0x014:  mov    -0xc(%ebp),%eax
085b29d3 +0x017:  mov    %eax,0x4(%esp)
085b29d7 +0x01b:  mov    0x8(%ebp),%eax
085b29da +0x01e:  mov    %eax,(%esp)
085b29dd +0x021:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b29e2 +0x026:  xor    $0x1,%eax
085b29e5 +0x029:  test   %al,%al
085b29e7 +0x02b:  jne    085b2b36 <+0x17a>
085b29ed +0x031:  mov    -0xc(%ebp),%edx
085b29f0 +0x034:  mov    0x8(%ebp),%ecx
085b29f3 +0x037:  mov    %edx,%eax
085b29f5 +0x039:  add    %eax,%eax
085b29f7 +0x03b:  add    %edx,%eax
085b29f9 +0x03d:  shl    $0x3,%eax
085b29fc +0x040:  lea    (%ecx,%eax,1),%eax
085b29ff +0x043:  add    $0x78,%eax
085b2a02 +0x046:  mov    (%eax),%eax
085b2a04 +0x048:  cmp    0xc(%ebp),%eax
085b2a07 +0x04b:  jne    085b2b37 <+0x17b>
085b2a0d +0x051:  mov    0x10(%ebp),%eax
085b2a10 +0x054:  test   %eax,%eax
085b2a12 +0x056:  je     085b2a81 <+0xc5>
085b2a14 +0x058:  test   %eax,%eax
085b2a16 +0x05a:  js     085b2a92 <+0xd6>
085b2a18 +0x05c:  cmp    $0x2,%eax
085b2a1b +0x05f:  jg     085b2a92 <+0xd6>
085b2a1d +0x061:  mov    -0xc(%ebp),%eax
085b2a20 +0x064:  mov    0x8(%ebp),%edx
085b2a23 +0x067:  movb   $0x1,0x380(%edx,%eax,1)
085b2a2b +0x06f:  mov    -0xc(%ebp),%eax
085b2a2e +0x072:  mov    0x8(%ebp),%edx
085b2a31 +0x075:  movb   $0x1,0x384(%edx,%eax,1)
085b2a39 +0x07d:  mov    -0xc(%ebp),%eax
085b2a3c +0x080:  mov    0x8(%ebp),%edx
085b2a3f +0x083:  movb   $0x1,0x388(%edx,%eax,1)
085b2a47 +0x08b:  cmpl   $0x1,0x10(%ebp)
085b2a4b +0x08f:  jne    085b2a91 <+0xd5>
085b2a4d +0x091:  mov    -0xc(%ebp),%edx
085b2a50 +0x094:  mov    0x8(%ebp),%ecx
085b2a53 +0x097:  mov    %edx,%eax
085b2a55 +0x099:  add    %eax,%eax
085b2a57 +0x09b:  add    %edx,%eax
085b2a59 +0x09d:  shl    $0x3,%eax
085b2a5c +0x0a0:  lea    (%ecx,%eax,1),%eax
085b2a5f +0x0a3:  add    $0x8c,%eax
085b2a64 +0x0a8:  mov    (%eax),%eax
085b2a66 +0x0aa:  lea    0x1(%eax),%ecx
085b2a69 +0x0ad:  mov    0x8(%ebp),%ebx
085b2a6c +0x0b0:  mov    %edx,%eax
085b2a6e +0x0b2:  add    %eax,%eax
085b2a70 +0x0b4:  add    %edx,%eax
085b2a72 +0x0b6:  shl    $0x3,%eax
085b2a75 +0x0b9:  lea    (%ebx,%eax,1),%eax
085b2a78 +0x0bc:  add    $0x8c,%eax
085b2a7d +0x0c1:  mov    %ecx,(%eax)
085b2a7f +0x0c3:  jmp    085b2a92 <+0xd6>
085b2a81 +0x0c5:  mov    -0xc(%ebp),%eax
085b2a84 +0x0c8:  mov    0x8(%ebp),%edx
085b2a87 +0x0cb:  movb   $0x0,0x380(%edx,%eax,1)
085b2a8f +0x0d3:  jmp    085b2a92 <+0xd6>
085b2a91 +0x0d5:  nop
085b2a92 +0x0d6:  lea    -0x18(%ebp),%eax
085b2a95 +0x0d9:  mov    %eax,(%esp)
085b2a98 +0x0dc:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085b2a9d +0x0e1:  movl   $0x20,0x8(%esp)
085b2aa5 +0x0e9:  movl   $0x0,0x4(%esp)
085b2aad +0x0f1:  lea    -0x18(%ebp),%eax
085b2ab0 +0x0f4:  mov    %eax,(%esp)
085b2ab3 +0x0f7:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085b2ab8 +0x0fc:  mov    0xc(%ebp),%eax
085b2abb +0x0ff:  mov    %eax,(%esp)
085b2abe +0x102:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085b2ac3 +0x107:  movzwl %ax,%eax
085b2ac6 +0x10a:  mov    %eax,0x4(%esp)
085b2aca +0x10e:  lea    -0x18(%ebp),%eax
085b2acd +0x111:  mov    %eax,(%esp)
085b2ad0 +0x114:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085b2ad5 +0x119:  mov    0x10(%ebp),%eax
085b2ad8 +0x11c:  mov    %eax,0x4(%esp)
085b2adc +0x120:  lea    -0x18(%ebp),%eax
085b2adf +0x123:  mov    %eax,(%esp)
085b2ae2 +0x126:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085b2ae7 +0x12b:  movl   $0x1,0x4(%esp)
085b2aef +0x133:  lea    -0x18(%ebp),%eax
085b2af2 +0x136:  mov    %eax,(%esp)
085b2af5 +0x139:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085b2afa +0x13e:  lea    -0x18(%ebp),%eax
085b2afd +0x141:  mov    %eax,0x4(%esp)
085b2b01 +0x145:  mov    0x8(%ebp),%eax
085b2b04 +0x148:  mov    %eax,(%esp)
085b2b07 +0x14b:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085b2b0c +0x150:  jmp    085b2b29 <+0x16d>
085b2b0e +0x152:  mov    %edx,%ebx
085b2b10 +0x154:  mov    %eax,%esi
085b2b12 +0x156:  lea    -0x18(%ebp),%eax
085b2b15 +0x159:  mov    %eax,(%esp)
085b2b18 +0x15c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b2b1d +0x161:  mov    %esi,%eax
085b2b1f +0x163:  mov    %ebx,%edx
085b2b21 +0x165:  mov    %eax,(%esp)
085b2b24 +0x168:  call   08ae3750 <_Unwind_Resume>
085b2b29 +0x16d:  lea    -0x18(%ebp),%eax
085b2b2c +0x170:  mov    %eax,(%esp)
085b2b2f +0x173:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085b2b34 +0x178:  jmp    085b2b4a <+0x18e>
085b2b36 +0x17a:  nop
085b2b37 +0x17b:  addl   $0x1,-0xc(%ebp)
085b2b3b +0x17f:  cmpl   $0x3,-0xc(%ebp)
085b2b3f +0x183:  setle  %al
085b2b42 +0x186:  test   %al,%al
085b2b44 +0x188:  jne    085b29d0 <+0x14>
085b2b4a +0x18e:  add    $0x20,%esp
085b2b4d +0x191:  pop    %ebx
085b2b4e +0x192:  pop    %esi
085b2b4f +0x193:  pop    %ebp
085b2b50 +0x194:  ret
085b2b51 +0x195:  nop
```

## 反编译 C

```c
// CParty::set_charac_live @ 0x85b29bc

/* CParty::set_charac_live(CUser*, ENUM_USER_DUNGEON_STATE) */

void __thiscall CParty::set_charac_live(CParty *this,CUser *param_1,int param_3)

{
  char cVar1;
  uint uVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (3 < local_10) {
      return;
    }
    cVar1 = _checkValidUser(this,local_10);
    if ((cVar1 == '\x01') && (*(CUser **)(this + local_10 * 0x18 + 0x78) == param_1)) break;
    local_10 = local_10 + 1;
  }
  if (param_3 == 0) {
    this[local_10 + 0x380] = (CParty)0x0;
  }
  else if ((-1 < param_3) && (param_3 < 3)) {
    this[local_10 + 0x380] = (CParty)0x1;
    this[local_10 + 900] = (CParty)0x1;
    this[local_10 + 0x388] = (CParty)0x1;
    if (param_3 == 1) {
      *(int *)(this + local_10 * 0x18 + 0x8c) = *(int *)(this + local_10 * 0x18 + 0x8c) + 1;
    }
  }
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 085b2ab3 to 085b2b0b has its CatchHandler @ 085b2b0e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x20);
  uVar2 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar2 & 0xffff);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  send_to_party(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
