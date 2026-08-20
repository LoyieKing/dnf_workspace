# SendELPLPacket

`_ZN8WongWork10CBossTower14SendELPLPacketEv`

`WongWork::CBossTower::SendELPLPacket()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x081441d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081441d4  _ZN8WongWork10CBossTower14SendELPLPacketEv
#           WongWork::CBossTower::SendELPLPacket()
# range [0x081441d4, 0x08144325]
081441d4 +0x000:  push   %ebp
081441d5 +0x001:  mov    %esp,%ebp
081441d7 +0x003:  push   %esi
081441d8 +0x004:  push   %ebx
081441d9 +0x005:  sub    $0x30,%esp
081441dc +0x008:  movb   $0x1,-0x11(%ebp)
081441e0 +0x00c:  mov    0x8(%ebp),%eax
081441e3 +0x00f:  mov    0x4(%eax),%eax
081441e6 +0x012:  mov    0xcd8(%eax),%eax
081441ec +0x018:  cmp    $0x1,%eax
081441ef +0x01b:  je     08144287 <+0xb3>
081441f5 +0x021:  movl   $0x0,-0x10(%ebp)
081441fc +0x028:  jmp    08144278 <+0xa4>
081441fe +0x02a:  mov    0x8(%ebp),%eax
08144201 +0x02d:  mov    0x4(%eax),%eax
08144204 +0x030:  mov    -0x10(%ebp),%edx
08144207 +0x033:  mov    %edx,0x4(%esp)
0814420b +0x037:  mov    %eax,(%esp)
0814420e +0x03a:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08144213 +0x03f:  mov    %eax,-0xc(%ebp)
08144216 +0x042:  cmpl   $0x0,-0xc(%ebp)
0814421a +0x046:  je     08144238 <+0x64>
0814421c +0x048:  mov    0x8(%ebp),%eax
0814421f +0x04b:  mov    0x4(%eax),%eax
08144222 +0x04e:  mov    -0x10(%ebp),%edx
08144225 +0x051:  mov    %edx,0x4(%esp)
08144229 +0x055:  mov    %eax,(%esp)
0814422c +0x058:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08144231 +0x05d:  xor    $0x1,%eax
08144234 +0x060:  test   %al,%al
08144236 +0x062:  je     0814423f <+0x6b>
08144238 +0x064:  mov    $0x1,%eax
0814423d +0x069:  jmp    08144244 <+0x70>
0814423f +0x06b:  mov    $0x0,%eax
08144244 +0x070:  test   %al,%al
08144246 +0x072:  jne    08144273 <+0x9f>
08144248 +0x074:  movb   $0x0,-0x21(%ebp)
0814424c +0x078:  movl   $0x0,0x8(%esp)
08144254 +0x080:  lea    -0x21(%ebp),%eax
08144257 +0x083:  mov    %eax,0x4(%esp)
0814425b +0x087:  mov    0x8(%ebp),%eax
0814425e +0x08a:  mov    %eax,(%esp)
08144261 +0x08d:  call   08142fa6 <_ZN8WongWork10CBossTower23checkStartGameConditionERhb>  ; WongWork::CBossTower::checkStartGameCondition(unsigned char&, bool)
08144266 +0x092:  xor    $0x1,%eax
08144269 +0x095:  test   %al,%al
0814426b +0x097:  je     08144274 <+0xa0>
0814426d +0x099:  movb   $0x0,-0x11(%ebp)
08144271 +0x09d:  jmp    08144287 <+0xb3>
08144273 +0x09f:  nop
08144274 +0x0a0:  addl   $0x1,-0x10(%ebp)
08144278 +0x0a4:  cmpl   $0x3,-0x10(%ebp)
0814427c +0x0a8:  setle  %al
0814427f +0x0ab:  test   %al,%al
08144281 +0x0ad:  jne    081441fe <+0x2a>
08144287 +0x0b3:  lea    -0x20(%ebp),%eax
0814428a +0x0b6:  mov    %eax,(%esp)
0814428d +0x0b9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08144292 +0x0be:  movl   $0x1e4,0x8(%esp)
0814429a +0x0c6:  movl   $0x0,0x4(%esp)
081442a2 +0x0ce:  lea    -0x20(%ebp),%eax
081442a5 +0x0d1:  mov    %eax,(%esp)
081442a8 +0x0d4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081442ad +0x0d9:  cmpb   $0x0,-0x11(%ebp)
081442b1 +0x0dd:  je     081442ba <+0xe6>
081442b3 +0x0df:  mov    $0x1,%eax
081442b8 +0x0e4:  jmp    081442bf <+0xeb>
081442ba +0x0e6:  mov    $0x0,%eax
081442bf +0x0eb:  mov    %eax,0x4(%esp)
081442c3 +0x0ef:  lea    -0x20(%ebp),%eax
081442c6 +0x0f2:  mov    %eax,(%esp)
081442c9 +0x0f5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081442ce +0x0fa:  movl   $0x1,0x4(%esp)
081442d6 +0x102:  lea    -0x20(%ebp),%eax
081442d9 +0x105:  mov    %eax,(%esp)
081442dc +0x108:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081442e1 +0x10d:  mov    0x8(%ebp),%eax
081442e4 +0x110:  mov    0x4(%eax),%eax
081442e7 +0x113:  lea    -0x20(%ebp),%edx
081442ea +0x116:  mov    %edx,0x4(%esp)
081442ee +0x11a:  mov    %eax,(%esp)
081442f1 +0x11d:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081442f6 +0x122:  mov    $0x1,%ebx
081442fb +0x127:  lea    -0x20(%ebp),%eax
081442fe +0x12a:  mov    %eax,(%esp)
08144301 +0x12d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08144306 +0x132:  mov    %ebx,%eax
08144308 +0x134:  add    $0x30,%esp
0814430b +0x137:  pop    %ebx
0814430c +0x138:  pop    %esi
0814430d +0x139:  pop    %ebp
0814430e +0x13a:  ret
0814430f +0x13b:  mov    %edx,%ebx
08144311 +0x13d:  mov    %eax,%esi
08144313 +0x13f:  lea    -0x20(%ebp),%eax
08144316 +0x142:  mov    %eax,(%esp)
08144319 +0x145:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0814431e +0x14a:  mov    %esi,%eax
08144320 +0x14c:  mov    %ebx,%edx
08144322 +0x14e:  mov    %eax,(%esp)
08144325 +0x151:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// WongWork::CBossTower::SendELPLPacket @ 0x81441d4

/* WongWork::CBossTower::SendELPLPacket() */

undefined4 __thiscall WongWork::CBossTower::SendELPLPacket(CBossTower *this)

{
  bool bVar1;
  char cVar2;
  uchar local_25;
  PacketGuard local_24 [15];
  char local_15;
  int local_14;
  int local_10;
  
  local_15 = '\x01';
  if (*(int *)(*(int *)(this + 4) + 0xcd8) != 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = CParty::get_user(*(CParty **)(this + 4),local_14);
      if ((local_10 == 0) ||
         (cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_14), cVar2 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        local_25 = '\0';
        cVar2 = checkStartGameCondition(this,&local_25,false);
        if (cVar2 != '\x01') {
          local_15 = '\0';
          break;
        }
      }
    }
  }
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 081442a8 to 081442f5 has its CatchHandler @ 0814430f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x1e4);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)(local_15 != '\0'));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  CParty::send_to_party(*(CParty **)(this + 4),local_24);
  PacketGuard::~PacketGuard(local_24);
  return 1;
}
```
