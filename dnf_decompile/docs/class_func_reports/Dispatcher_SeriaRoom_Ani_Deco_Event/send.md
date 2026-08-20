# send

`_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event4sendEP5CUserR9ParamBase`

`Dispatcher_SeriaRoom_Ani_Deco_Event::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SeriaRoom_Ani_Deco_Event` | `0x081e8b64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e8b64  _ZN35Dispatcher_SeriaRoom_Ani_Deco_Event4sendEP5CUserR9ParamBase
#           Dispatcher_SeriaRoom_Ani_Deco_Event::send(CUser*, ParamBase&)
# range [0x081e8b64, 0x081e8c77]
081e8b64 +0x000:  push   %ebp
081e8b65 +0x001:  mov    %esp,%ebp
081e8b67 +0x003:  push   %esi
081e8b68 +0x004:  push   %ebx
081e8b69 +0x005:  sub    $0x30,%esp
081e8b6c +0x008:  mov    0x10(%ebp),%eax
081e8b6f +0x00b:  mov    %eax,-0xc(%ebp)
081e8b72 +0x00e:  lea    -0x1c(%ebp),%eax
081e8b75 +0x011:  mov    %eax,(%esp)
081e8b78 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e8b7d +0x019:  movl   $0x201,0x8(%esp)
081e8b85 +0x021:  movl   $0x1,0x4(%esp)
081e8b8d +0x029:  lea    -0x1c(%ebp),%eax
081e8b90 +0x02c:  mov    %eax,(%esp)
081e8b93 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e8b98 +0x034:  mov    -0xc(%ebp),%eax
081e8b9b +0x037:  mov    0x4(%eax),%eax
081e8b9e +0x03a:  test   %eax,%eax
081e8ba0 +0x03c:  jne    081e8bf9 <+0x95>
081e8ba2 +0x03e:  movl   $0x1,0x4(%esp)
081e8baa +0x046:  lea    -0x1c(%ebp),%eax
081e8bad +0x049:  mov    %eax,(%esp)
081e8bb0 +0x04c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e8bb5 +0x051:  mov    -0xc(%ebp),%eax
081e8bb8 +0x054:  movzwl 0x8(%eax),%eax
081e8bbc +0x058:  movzwl %ax,%eax
081e8bbf +0x05b:  mov    %eax,0x4(%esp)
081e8bc3 +0x05f:  lea    -0x1c(%ebp),%eax
081e8bc6 +0x062:  mov    %eax,(%esp)
081e8bc9 +0x065:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e8bce +0x06a:  mov    0xc(%ebp),%edx
081e8bd1 +0x06d:  lea    -0x10(%ebp),%eax
081e8bd4 +0x070:  mov    %edx,0x4(%esp)
081e8bd8 +0x074:  mov    %eax,(%esp)
081e8bdb +0x077:  call   0822fb96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5240>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5240
081e8be0 +0x07c:  sub    $0x4,%esp
081e8be3 +0x07f:  movzwl -0xe(%ebp),%eax
081e8be7 +0x083:  cwtl
081e8be8 +0x084:  mov    %eax,0x4(%esp)
081e8bec +0x088:  lea    -0x1c(%ebp),%eax
081e8bef +0x08b:  mov    %eax,(%esp)
081e8bf2 +0x08e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e8bf7 +0x093:  jmp    081e8c21 <+0xbd>
081e8bf9 +0x095:  movl   $0x0,0x4(%esp)
081e8c01 +0x09d:  lea    -0x1c(%ebp),%eax
081e8c04 +0x0a0:  mov    %eax,(%esp)
081e8c07 +0x0a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e8c0c +0x0a8:  mov    -0xc(%ebp),%eax
081e8c0f +0x0ab:  mov    0x4(%eax),%eax
081e8c12 +0x0ae:  mov    %eax,0x4(%esp)
081e8c16 +0x0b2:  lea    -0x1c(%ebp),%eax
081e8c19 +0x0b5:  mov    %eax,(%esp)
081e8c1c +0x0b8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e8c21 +0x0bd:  movl   $0x1,0x4(%esp)
081e8c29 +0x0c5:  lea    -0x1c(%ebp),%eax
081e8c2c +0x0c8:  mov    %eax,(%esp)
081e8c2f +0x0cb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e8c34 +0x0d0:  lea    -0x1c(%ebp),%eax
081e8c37 +0x0d3:  mov    %eax,0x4(%esp)
081e8c3b +0x0d7:  mov    0xc(%ebp),%eax
081e8c3e +0x0da:  mov    %eax,(%esp)
081e8c41 +0x0dd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e8c46 +0x0e2:  jmp    081e8c63 <+0xff>
081e8c48 +0x0e4:  mov    %edx,%ebx
081e8c4a +0x0e6:  mov    %eax,%esi
081e8c4c +0x0e8:  lea    -0x1c(%ebp),%eax
081e8c4f +0x0eb:  mov    %eax,(%esp)
081e8c52 +0x0ee:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e8c57 +0x0f3:  mov    %esi,%eax
081e8c59 +0x0f5:  mov    %ebx,%edx
081e8c5b +0x0f7:  mov    %eax,(%esp)
081e8c5e +0x0fa:  call   08ae3750 <_Unwind_Resume>
081e8c63 +0x0ff:  lea    -0x1c(%ebp),%eax
081e8c66 +0x102:  mov    %eax,(%esp)
081e8c69 +0x105:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e8c6e +0x10a:  lea    -0x8(%ebp),%esp
081e8c71 +0x10d:  add    $0x0,%esp
081e8c74 +0x110:  pop    %ebx
081e8c75 +0x111:  pop    %esi
081e8c76 +0x112:  pop    %ebp
081e8c77 +0x113:  ret
```

## 反编译 C

```c
// Dispatcher_SeriaRoom_Ani_Deco_Event::send @ 0x81e8b64

/* Dispatcher_SeriaRoom_Ani_Deco_Event::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SeriaRoom_Ani_Deco_Event::send
          (Dispatcher_SeriaRoom_Ani_Deco_Event *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_20 [14];
  short local_12;
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081e8b93 to 081e8c45 has its CatchHandler @ 081e8c48 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x201);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(uint)*(ushort *)(local_10 + 8));
    CUserCharacInfo::getSeriaRoomAniDecoInfo();
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(int)local_12);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
