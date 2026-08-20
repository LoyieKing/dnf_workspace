# send

`_ZN33Dispatcher_CharacSlotExtendEffect4sendEP5CUserR9ParamBase`

`Dispatcher_CharacSlotExtendEffect::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CharacSlotExtendEffect` | `0x081d81e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d81e6  _ZN33Dispatcher_CharacSlotExtendEffect4sendEP5CUserR9ParamBase
#           Dispatcher_CharacSlotExtendEffect::send(CUser*, ParamBase&)
# range [0x081d81e6, 0x081d82e7]
081d81e6 +0x000:  push   %ebp
081d81e7 +0x001:  mov    %esp,%ebp
081d81e9 +0x003:  push   %esi
081d81ea +0x004:  push   %ebx
081d81eb +0x005:  sub    $0x20,%esp
081d81ee +0x008:  mov    0x10(%ebp),%eax
081d81f1 +0x00b:  mov    %eax,-0xc(%ebp)
081d81f4 +0x00e:  lea    -0x18(%ebp),%eax
081d81f7 +0x011:  mov    %eax,(%esp)
081d81fa +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d81ff +0x019:  movl   $0x19f,0x8(%esp)
081d8207 +0x021:  movl   $0x1,0x4(%esp)
081d820f +0x029:  lea    -0x18(%ebp),%eax
081d8212 +0x02c:  mov    %eax,(%esp)
081d8215 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d821a +0x034:  mov    -0xc(%ebp),%eax
081d821d +0x037:  mov    0x4(%eax),%eax
081d8220 +0x03a:  test   %eax,%eax
081d8222 +0x03c:  jne    081d826b <+0x85>
081d8224 +0x03e:  movl   $0x1,0x4(%esp)
081d822c +0x046:  lea    -0x18(%ebp),%eax
081d822f +0x049:  mov    %eax,(%esp)
081d8232 +0x04c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d8237 +0x051:  mov    -0xc(%ebp),%eax
081d823a +0x054:  movzbl 0x9(%eax),%eax
081d823e +0x058:  movzbl %al,%eax
081d8241 +0x05b:  mov    %eax,0x4(%esp)
081d8245 +0x05f:  lea    -0x18(%ebp),%eax
081d8248 +0x062:  mov    %eax,(%esp)
081d824b +0x065:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d8250 +0x06a:  mov    -0xc(%ebp),%eax
081d8253 +0x06d:  movzbl 0x8(%eax),%eax
081d8257 +0x071:  movzbl %al,%eax
081d825a +0x074:  mov    %eax,0x4(%esp)
081d825e +0x078:  lea    -0x18(%ebp),%eax
081d8261 +0x07b:  mov    %eax,(%esp)
081d8264 +0x07e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d8269 +0x083:  jmp    081d8293 <+0xad>
081d826b +0x085:  movl   $0x0,0x4(%esp)
081d8273 +0x08d:  lea    -0x18(%ebp),%eax
081d8276 +0x090:  mov    %eax,(%esp)
081d8279 +0x093:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d827e +0x098:  mov    -0xc(%ebp),%eax
081d8281 +0x09b:  mov    0x4(%eax),%eax
081d8284 +0x09e:  mov    %eax,0x4(%esp)
081d8288 +0x0a2:  lea    -0x18(%ebp),%eax
081d828b +0x0a5:  mov    %eax,(%esp)
081d828e +0x0a8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d8293 +0x0ad:  movl   $0x1,0x4(%esp)
081d829b +0x0b5:  lea    -0x18(%ebp),%eax
081d829e +0x0b8:  mov    %eax,(%esp)
081d82a1 +0x0bb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d82a6 +0x0c0:  lea    -0x18(%ebp),%eax
081d82a9 +0x0c3:  mov    %eax,0x4(%esp)
081d82ad +0x0c7:  mov    0xc(%ebp),%eax
081d82b0 +0x0ca:  mov    %eax,(%esp)
081d82b3 +0x0cd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d82b8 +0x0d2:  jmp    081d82d5 <+0xef>
081d82ba +0x0d4:  mov    %edx,%ebx
081d82bc +0x0d6:  mov    %eax,%esi
081d82be +0x0d8:  lea    -0x18(%ebp),%eax
081d82c1 +0x0db:  mov    %eax,(%esp)
081d82c4 +0x0de:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d82c9 +0x0e3:  mov    %esi,%eax
081d82cb +0x0e5:  mov    %ebx,%edx
081d82cd +0x0e7:  mov    %eax,(%esp)
081d82d0 +0x0ea:  call   08ae3750 <_Unwind_Resume>
081d82d5 +0x0ef:  lea    -0x18(%ebp),%eax
081d82d8 +0x0f2:  mov    %eax,(%esp)
081d82db +0x0f5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d82e0 +0x0fa:  add    $0x20,%esp
081d82e3 +0x0fd:  pop    %ebx
081d82e4 +0x0fe:  pop    %esi
081d82e5 +0x0ff:  pop    %ebp
081d82e6 +0x100:  ret
081d82e7 +0x101:  nop
```

## 反编译 C

```c
// Dispatcher_CharacSlotExtendEffect::send @ 0x81d81e6

/* Dispatcher_CharacSlotExtendEffect::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_CharacSlotExtendEffect::send
          (Dispatcher_CharacSlotExtendEffect *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d8215 to 081d82b7 has its CatchHandler @ 081d82ba */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x19f);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[9]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[8]);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
