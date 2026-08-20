# send

`_ZN20Dispatcher_BingoQuiz4sendEP5CUserR9ParamBase`

`Dispatcher_BingoQuiz::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BingoQuiz` | `0x0825eb92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825eb92  _ZN20Dispatcher_BingoQuiz4sendEP5CUserR9ParamBase
#           Dispatcher_BingoQuiz::send(CUser*, ParamBase&)
# range [0x0825eb92, 0x0825ed05]
0825eb92 +0x000:  push   %ebp
0825eb93 +0x001:  mov    %esp,%ebp
0825eb95 +0x003:  push   %esi
0825eb96 +0x004:  push   %ebx
0825eb97 +0x005:  sub    $0x30,%esp
0825eb9a +0x008:  mov    0x10(%ebp),%eax
0825eb9d +0x00b:  mov    %eax,-0xc(%ebp)
0825eba0 +0x00e:  mov    -0xc(%ebp),%eax
0825eba3 +0x011:  mov    0x4(%eax),%eax
0825eba6 +0x014:  test   %eax,%eax
0825eba8 +0x016:  jne    0825ec4e <+0xbc>
0825ebae +0x01c:  lea    -0x18(%ebp),%eax
0825ebb1 +0x01f:  mov    %eax,(%esp)
0825ebb4 +0x022:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0825ebb9 +0x027:  movl   $0x203,0x8(%esp)
0825ebc1 +0x02f:  movl   $0x1,0x4(%esp)
0825ebc9 +0x037:  lea    -0x18(%ebp),%eax
0825ebcc +0x03a:  mov    %eax,(%esp)
0825ebcf +0x03d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0825ebd4 +0x042:  movl   $0x1,0x4(%esp)
0825ebdc +0x04a:  lea    -0x18(%ebp),%eax
0825ebdf +0x04d:  mov    %eax,(%esp)
0825ebe2 +0x050:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0825ebe7 +0x055:  mov    -0xc(%ebp),%eax
0825ebea +0x058:  mov    0x8(%eax),%eax
0825ebed +0x05b:  mov    %eax,0x4(%esp)
0825ebf1 +0x05f:  lea    -0x18(%ebp),%eax
0825ebf4 +0x062:  mov    %eax,(%esp)
0825ebf7 +0x065:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0825ebfc +0x06a:  movl   $0x1,0x4(%esp)
0825ec04 +0x072:  lea    -0x18(%ebp),%eax
0825ec07 +0x075:  mov    %eax,(%esp)
0825ec0a +0x078:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0825ec0f +0x07d:  lea    -0x18(%ebp),%eax
0825ec12 +0x080:  mov    %eax,0x4(%esp)
0825ec16 +0x084:  mov    0xc(%ebp),%eax
0825ec19 +0x087:  mov    %eax,(%esp)
0825ec1c +0x08a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0825ec21 +0x08f:  jmp    0825ec3e <+0xac>
0825ec23 +0x091:  mov    %edx,%ebx
0825ec25 +0x093:  mov    %eax,%esi
0825ec27 +0x095:  lea    -0x18(%ebp),%eax
0825ec2a +0x098:  mov    %eax,(%esp)
0825ec2d +0x09b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0825ec32 +0x0a0:  mov    %esi,%eax
0825ec34 +0x0a2:  mov    %ebx,%edx
0825ec36 +0x0a4:  mov    %eax,(%esp)
0825ec39 +0x0a7:  call   08ae3750 <_Unwind_Resume>
0825ec3e +0x0ac:  lea    -0x18(%ebp),%eax
0825ec41 +0x0af:  mov    %eax,(%esp)
0825ec44 +0x0b2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0825ec49 +0x0b7:  jmp    0825ecfe <+0x16c>
0825ec4e +0x0bc:  lea    -0x24(%ebp),%eax
0825ec51 +0x0bf:  mov    %eax,(%esp)
0825ec54 +0x0c2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0825ec59 +0x0c7:  movl   $0x203,0x8(%esp)
0825ec61 +0x0cf:  movl   $0x1,0x4(%esp)
0825ec69 +0x0d7:  lea    -0x24(%ebp),%eax
0825ec6c +0x0da:  mov    %eax,(%esp)
0825ec6f +0x0dd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0825ec74 +0x0e2:  movl   $0x0,0x4(%esp)
0825ec7c +0x0ea:  lea    -0x24(%ebp),%eax
0825ec7f +0x0ed:  mov    %eax,(%esp)
0825ec82 +0x0f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0825ec87 +0x0f5:  mov    -0xc(%ebp),%eax
0825ec8a +0x0f8:  mov    0x4(%eax),%eax
0825ec8d +0x0fb:  mov    %eax,0x4(%esp)
0825ec91 +0x0ff:  lea    -0x24(%ebp),%eax
0825ec94 +0x102:  mov    %eax,(%esp)
0825ec97 +0x105:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0825ec9c +0x10a:  mov    -0xc(%ebp),%eax
0825ec9f +0x10d:  mov    0x8(%eax),%eax
0825eca2 +0x110:  mov    %eax,0x4(%esp)
0825eca6 +0x114:  lea    -0x24(%ebp),%eax
0825eca9 +0x117:  mov    %eax,(%esp)
0825ecac +0x11a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0825ecb1 +0x11f:  movl   $0x1,0x4(%esp)
0825ecb9 +0x127:  lea    -0x24(%ebp),%eax
0825ecbc +0x12a:  mov    %eax,(%esp)
0825ecbf +0x12d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0825ecc4 +0x132:  lea    -0x24(%ebp),%eax
0825ecc7 +0x135:  mov    %eax,0x4(%esp)
0825eccb +0x139:  mov    0xc(%ebp),%eax
0825ecce +0x13c:  mov    %eax,(%esp)
0825ecd1 +0x13f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0825ecd6 +0x144:  jmp    0825ecf3 <+0x161>
0825ecd8 +0x146:  mov    %edx,%ebx
0825ecda +0x148:  mov    %eax,%esi
0825ecdc +0x14a:  lea    -0x24(%ebp),%eax
0825ecdf +0x14d:  mov    %eax,(%esp)
0825ece2 +0x150:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0825ece7 +0x155:  mov    %esi,%eax
0825ece9 +0x157:  mov    %ebx,%edx
0825eceb +0x159:  mov    %eax,(%esp)
0825ecee +0x15c:  call   08ae3750 <_Unwind_Resume>
0825ecf3 +0x161:  lea    -0x24(%ebp),%eax
0825ecf6 +0x164:  mov    %eax,(%esp)
0825ecf9 +0x167:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0825ecfe +0x16c:  add    $0x30,%esp
0825ed01 +0x16f:  pop    %ebx
0825ed02 +0x170:  pop    %esi
0825ed03 +0x171:  pop    %ebp
0825ed04 +0x172:  ret
0825ed05 +0x173:  nop
```

## 反编译 C

```c
// Dispatcher_BingoQuiz::send @ 0x825eb92

/* Dispatcher_BingoQuiz::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_BingoQuiz::send(Dispatcher_BingoQuiz *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0825ebcf to 0825ec20 has its CatchHandler @ 0825ec23 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x203);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0825ec6f to 0825ecd5 has its CatchHandler @ 0825ecd8 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x203);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,*(int *)(local_10 + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(local_10 + 8));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}
```
