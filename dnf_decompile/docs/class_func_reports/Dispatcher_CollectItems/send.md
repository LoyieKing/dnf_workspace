# send

`_ZN23Dispatcher_CollectItems4sendEP5CUserR9ParamBase`

`Dispatcher_CollectItems::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CollectItems` | `0x081e360c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e360c  _ZN23Dispatcher_CollectItems4sendEP5CUserR9ParamBase
#           Dispatcher_CollectItems::send(CUser*, ParamBase&)
# range [0x081e360c, 0x081e3719]
081e360c +0x000:  push   %ebp
081e360d +0x001:  mov    %esp,%ebp
081e360f +0x003:  push   %esi
081e3610 +0x004:  push   %ebx
081e3611 +0x005:  sub    $0x20,%esp
081e3614 +0x008:  mov    0x10(%ebp),%eax
081e3617 +0x00b:  mov    %eax,-0xc(%ebp)
081e361a +0x00e:  mov    -0xc(%ebp),%eax
081e361d +0x011:  mov    0x4(%eax),%eax
081e3620 +0x014:  cmp    $0x7fffffff,%eax
081e3625 +0x019:  je     081e3712 <+0x106>
081e362b +0x01f:  mov    -0xc(%ebp),%eax
081e362e +0x022:  mov    0x4(%eax),%eax
081e3631 +0x025:  test   %eax,%eax
081e3633 +0x027:  je     081e365a <+0x4e>
081e3635 +0x029:  mov    -0xc(%ebp),%eax
081e3638 +0x02c:  mov    0x4(%eax),%eax
081e363b +0x02f:  movzbl %al,%eax
081e363e +0x032:  mov    %eax,0x8(%esp)
081e3642 +0x036:  movl   $0x1e3,0x4(%esp)
081e364a +0x03e:  mov    0xc(%ebp),%eax
081e364d +0x041:  mov    %eax,(%esp)
081e3650 +0x044:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e3655 +0x049:  jmp    081e3713 <+0x107>
081e365a +0x04e:  lea    -0x18(%ebp),%eax
081e365d +0x051:  mov    %eax,(%esp)
081e3660 +0x054:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e3665 +0x059:  movl   $0x1e3,0x8(%esp)
081e366d +0x061:  movl   $0x1,0x4(%esp)
081e3675 +0x069:  lea    -0x18(%ebp),%eax
081e3678 +0x06c:  mov    %eax,(%esp)
081e367b +0x06f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e3680 +0x074:  movl   $0x1,0x4(%esp)
081e3688 +0x07c:  lea    -0x18(%ebp),%eax
081e368b +0x07f:  mov    %eax,(%esp)
081e368e +0x082:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e3693 +0x087:  mov    -0xc(%ebp),%eax
081e3696 +0x08a:  movzwl 0x8(%eax),%eax
081e369a +0x08e:  cwtl
081e369b +0x08f:  mov    %eax,0x4(%esp)
081e369f +0x093:  lea    -0x18(%ebp),%eax
081e36a2 +0x096:  mov    %eax,(%esp)
081e36a5 +0x099:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e36aa +0x09e:  mov    -0xc(%ebp),%eax
081e36ad +0x0a1:  movzwl 0xa(%eax),%eax
081e36b1 +0x0a5:  movzwl %ax,%eax
081e36b4 +0x0a8:  mov    %eax,0x4(%esp)
081e36b8 +0x0ac:  lea    -0x18(%ebp),%eax
081e36bb +0x0af:  mov    %eax,(%esp)
081e36be +0x0b2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e36c3 +0x0b7:  movl   $0x1,0x4(%esp)
081e36cb +0x0bf:  lea    -0x18(%ebp),%eax
081e36ce +0x0c2:  mov    %eax,(%esp)
081e36d1 +0x0c5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e36d6 +0x0ca:  lea    -0x18(%ebp),%eax
081e36d9 +0x0cd:  mov    %eax,0x4(%esp)
081e36dd +0x0d1:  mov    0xc(%ebp),%eax
081e36e0 +0x0d4:  mov    %eax,(%esp)
081e36e3 +0x0d7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e36e8 +0x0dc:  jmp    081e3705 <+0xf9>
081e36ea +0x0de:  mov    %edx,%ebx
081e36ec +0x0e0:  mov    %eax,%esi
081e36ee +0x0e2:  lea    -0x18(%ebp),%eax
081e36f1 +0x0e5:  mov    %eax,(%esp)
081e36f4 +0x0e8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e36f9 +0x0ed:  mov    %esi,%eax
081e36fb +0x0ef:  mov    %ebx,%edx
081e36fd +0x0f1:  mov    %eax,(%esp)
081e3700 +0x0f4:  call   08ae3750 <_Unwind_Resume>
081e3705 +0x0f9:  lea    -0x18(%ebp),%eax
081e3708 +0x0fc:  mov    %eax,(%esp)
081e370b +0x0ff:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e3710 +0x104:  jmp    081e3713 <+0x107>
081e3712 +0x106:  nop
081e3713 +0x107:  add    $0x20,%esp
081e3716 +0x10a:  pop    %ebx
081e3717 +0x10b:  pop    %esi
081e3718 +0x10c:  pop    %ebp
081e3719 +0x10d:  ret
```

## 反编译 C

```c
// Dispatcher_CollectItems::send @ 0x81e360c

/* Dispatcher_CollectItems::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_CollectItems::send(Dispatcher_CollectItems *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) != 0x7fffffff) {
    if (*(int *)(param_2 + 4) == 0) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e367b to 081e36e7 has its CatchHandler @ 081e36ea */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1e3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 8));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 10))
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x1e3,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}
```
