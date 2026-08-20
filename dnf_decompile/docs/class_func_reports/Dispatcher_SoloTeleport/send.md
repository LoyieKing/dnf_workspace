# send

`_ZN23Dispatcher_SoloTeleport4sendEP5CUserR9ParamBase`

`Dispatcher_SoloTeleport::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SoloTeleport` | `0x081e1ff6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e1ff6  _ZN23Dispatcher_SoloTeleport4sendEP5CUserR9ParamBase
#           Dispatcher_SoloTeleport::send(CUser*, ParamBase&)
# range [0x081e1ff6, 0x081e21cb]
081e1ff6 +0x000:  push   %ebp
081e1ff7 +0x001:  mov    %esp,%ebp
081e1ff9 +0x003:  push   %esi
081e1ffa +0x004:  push   %ebx
081e1ffb +0x005:  sub    $0x40,%esp
081e1ffe +0x008:  mov    0x10(%ebp),%eax
081e2001 +0x00b:  mov    %eax,-0xc(%ebp)
081e2004 +0x00e:  lea    -0x38(%ebp),%eax
081e2007 +0x011:  mov    %eax,(%esp)
081e200a +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e200f +0x019:  lea    -0x38(%ebp),%eax
081e2012 +0x01c:  mov    %eax,(%esp)
081e2015 +0x01f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081e201a +0x024:  movl   $0x1d7,0x8(%esp)
081e2022 +0x02c:  movl   $0x1,0x4(%esp)
081e202a +0x034:  lea    -0x38(%ebp),%eax
081e202d +0x037:  mov    %eax,(%esp)
081e2030 +0x03a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e2035 +0x03f:  mov    -0xc(%ebp),%eax
081e2038 +0x042:  mov    0x4(%eax),%eax
081e203b +0x045:  test   %eax,%eax
081e203d +0x047:  jne    081e212f <+0x139>
081e2043 +0x04d:  movl   $0x1,0x4(%esp)
081e204b +0x055:  lea    -0x38(%ebp),%eax
081e204e +0x058:  mov    %eax,(%esp)
081e2051 +0x05b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e2056 +0x060:  movl   $0x1,0x4(%esp)
081e205e +0x068:  lea    -0x38(%ebp),%eax
081e2061 +0x06b:  mov    %eax,(%esp)
081e2064 +0x06e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e2069 +0x073:  lea    -0x38(%ebp),%eax
081e206c +0x076:  mov    %eax,0x4(%esp)
081e2070 +0x07a:  mov    0xc(%ebp),%eax
081e2073 +0x07d:  mov    %eax,(%esp)
081e2076 +0x080:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e207b +0x085:  mov    -0xc(%ebp),%eax
081e207e +0x088:  mov    0xc(%eax),%eax
081e2081 +0x08b:  mov    0xc(%ebp),%edx
081e2084 +0x08e:  mov    %edx,0x4(%esp)
081e2088 +0x092:  mov    %eax,(%esp)
081e208b +0x095:  call   08283fb8 <_ZN8Teleport9move_areaEP5CUser>  ; Teleport::move_area(CUser*)
081e2090 +0x09a:  xor    $0x1,%eax
081e2093 +0x09d:  test   %al,%al
081e2095 +0x09f:  je     081e20e3 <+0xed>
081e2097 +0x0a1:  mov    0xc(%ebp),%eax
081e209a +0x0a4:  mov    %eax,(%esp)
081e209d +0x0a7:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081e20a2 +0x0ac:  mov    %eax,%ebx
081e20a4 +0x0ae:  movl   $0x5,0xc(%esp)
081e20ac +0x0b6:  movl   $0x57d9,0x8(%esp)
081e20b4 +0x0be:  movl   $&_ZZN23Dispatcher_SoloTeleport4sendEP5CUserR9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e20bc +0x0c6:  lea    -0x2c(%ebp),%eax
081e20bf +0x0c9:  mov    %eax,(%esp)
081e20c2 +0x0cc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081e20c7 +0x0d1:  mov    %ebx,0x8(%esp)
081e20cb +0x0d5:  movl   $"SOLO_TELEPORT : teleport_error:(char_no:%d)",0x4(%esp)
081e20d3 +0x0dd:  lea    -0x2c(%ebp),%eax
081e20d6 +0x0e0:  mov    %eax,(%esp)
081e20d9 +0x0e3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081e20de +0x0e8:  jmp    081e21b9 <+0x1c3>
081e20e3 +0x0ed:  mov    0xc(%ebp),%eax
081e20e6 +0x0f0:  mov    %eax,(%esp)
081e20e9 +0x0f3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081e20ee +0x0f8:  mov    %eax,%ebx
081e20f0 +0x0fa:  movl   $0x0,0xc(%esp)
081e20f8 +0x102:  movl   $0x57dd,0x8(%esp)
081e2100 +0x10a:  movl   $&_ZZN23Dispatcher_SoloTeleport4sendEP5CUserR9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e2108 +0x112:  lea    -0x1c(%ebp),%eax
081e210b +0x115:  mov    %eax,(%esp)
081e210e +0x118:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081e2113 +0x11d:  mov    %ebx,0x8(%esp)
081e2117 +0x121:  movl   $"SOLO_TELEPORT : teleport_success:(char_no:%d)",0x4(%esp)
081e211f +0x129:  lea    -0x1c(%ebp),%eax
081e2122 +0x12c:  mov    %eax,(%esp)
081e2125 +0x12f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081e212a +0x134:  jmp    081e21b9 <+0x1c3>
081e212f +0x139:  movl   $0x0,0x4(%esp)
081e2137 +0x141:  lea    -0x38(%ebp),%eax
081e213a +0x144:  mov    %eax,(%esp)
081e213d +0x147:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e2142 +0x14c:  mov    -0xc(%ebp),%eax
081e2145 +0x14f:  mov    0x4(%eax),%eax
081e2148 +0x152:  movsbl %al,%eax
081e214b +0x155:  mov    %eax,0x4(%esp)
081e214f +0x159:  lea    -0x38(%ebp),%eax
081e2152 +0x15c:  mov    %eax,(%esp)
081e2155 +0x15f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e215a +0x164:  mov    -0xc(%ebp),%eax
081e215d +0x167:  mov    0xc(%eax),%eax
081e2160 +0x16a:  mov    %eax,(%esp)
081e2163 +0x16d:  call   08283e24 <_ZN8Teleport17get_end_cool_timeEv>  ; Teleport::get_end_cool_time()
081e2168 +0x172:  mov    %eax,0x4(%esp)
081e216c +0x176:  lea    -0x38(%ebp),%eax
081e216f +0x179:  mov    %eax,(%esp)
081e2172 +0x17c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e2177 +0x181:  movl   $0x1,0x4(%esp)
081e217f +0x189:  lea    -0x38(%ebp),%eax
081e2182 +0x18c:  mov    %eax,(%esp)
081e2185 +0x18f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e218a +0x194:  lea    -0x38(%ebp),%eax
081e218d +0x197:  mov    %eax,0x4(%esp)
081e2191 +0x19b:  mov    0xc(%ebp),%eax
081e2194 +0x19e:  mov    %eax,(%esp)
081e2197 +0x1a1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e219c +0x1a6:  jmp    081e21b9 <+0x1c3>
081e219e +0x1a8:  mov    %edx,%ebx
081e21a0 +0x1aa:  mov    %eax,%esi
081e21a2 +0x1ac:  lea    -0x38(%ebp),%eax
081e21a5 +0x1af:  mov    %eax,(%esp)
081e21a8 +0x1b2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e21ad +0x1b7:  mov    %esi,%eax
081e21af +0x1b9:  mov    %ebx,%edx
081e21b1 +0x1bb:  mov    %eax,(%esp)
081e21b4 +0x1be:  call   08ae3750 <_Unwind_Resume>
081e21b9 +0x1c3:  lea    -0x38(%ebp),%eax
081e21bc +0x1c6:  mov    %eax,(%esp)
081e21bf +0x1c9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e21c4 +0x1ce:  add    $0x40,%esp
081e21c7 +0x1d1:  pop    %ebx
081e21c8 +0x1d2:  pop    %esi
081e21c9 +0x1d3:  pop    %ebp
081e21ca +0x1d4:  ret
081e21cb +0x1d5:  nop
```

## 反编译 C

```c
// Dispatcher_SoloTeleport::send @ 0x81e1ff6

/* Dispatcher_SoloTeleport::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SoloTeleport::send(Dispatcher_SoloTeleport *this,CUser *param_1,ParamBase *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  PacketGuard local_3c [12];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 081e2015 to 081e219b has its CatchHandler @ 081e219e */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_3c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0x1d7);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    CUser::Send(param_1,local_3c);
    cVar1 = Teleport::move_area(*(Teleport **)(local_10 + 0xc),param_1);
    if (cVar1 == '\x01') {
      uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_20,"virtual void Dispatcher_SoloTeleport::send(CUser*, ParamBase&)",
                         0x57dd,0);
      cMyTrace::operator()(local_20,"SOLO_TELEPORT : teleport_success:(char_no:%d)",uVar2);
    }
    else {
      uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_30,"virtual void Dispatcher_SoloTeleport::send(CUser*, ParamBase&)",
                         0x57d9,5);
      cMyTrace::operator()(local_30,"SOLO_TELEPORT : teleport_error:(char_no:%d)",uVar2);
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_3c,(int)(char)*(undefined4 *)(local_10 + 4));
    iVar3 = Teleport::get_end_cool_time(*(Teleport **)(local_10 + 0xc));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,iVar3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    CUser::Send(param_1,local_3c);
  }
  PacketGuard::~PacketGuard(local_3c);
  return;
}
```
