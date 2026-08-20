# send

`_ZN22Dispatcher_RefundSkill4sendEP5CUserR9ParamBase`

`Dispatcher_RefundSkill::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RefundSkill` | `0x081dae0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dae0a  _ZN22Dispatcher_RefundSkill4sendEP5CUserR9ParamBase
#           Dispatcher_RefundSkill::send(CUser*, ParamBase&)
# range [0x081dae0a, 0x081dafa3]
081dae0a +0x000:  push   %ebp
081dae0b +0x001:  mov    %esp,%ebp
081dae0d +0x003:  push   %esi
081dae0e +0x004:  push   %ebx
081dae0f +0x005:  sub    $0x20,%esp
081dae12 +0x008:  mov    0x10(%ebp),%eax
081dae15 +0x00b:  mov    %eax,-0xc(%ebp)
081dae18 +0x00e:  mov    -0xc(%ebp),%eax
081dae1b +0x011:  mov    0x18(%eax),%eax
081dae1e +0x014:  test   %eax,%eax
081dae20 +0x016:  jne    081daf7c <+0x172>
081dae26 +0x01c:  lea    -0x18(%ebp),%eax
081dae29 +0x01f:  mov    %eax,(%esp)
081dae2c +0x022:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081dae31 +0x027:  lea    -0x18(%ebp),%eax
081dae34 +0x02a:  mov    %eax,(%esp)
081dae37 +0x02d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081dae3c +0x032:  movl   $0x1ab,0x8(%esp)
081dae44 +0x03a:  movl   $0x1,0x4(%esp)
081dae4c +0x042:  lea    -0x18(%ebp),%eax
081dae4f +0x045:  mov    %eax,(%esp)
081dae52 +0x048:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081dae57 +0x04d:  movl   $0x1,0x4(%esp)
081dae5f +0x055:  lea    -0x18(%ebp),%eax
081dae62 +0x058:  mov    %eax,(%esp)
081dae65 +0x05b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dae6a +0x060:  mov    -0xc(%ebp),%eax
081dae6d +0x063:  movzbl 0x5(%eax),%eax
081dae71 +0x067:  movsbl %al,%eax
081dae74 +0x06a:  mov    %eax,0x4(%esp)
081dae78 +0x06e:  lea    -0x18(%ebp),%eax
081dae7b +0x071:  mov    %eax,(%esp)
081dae7e +0x074:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dae83 +0x079:  mov    -0xc(%ebp),%eax
081dae86 +0x07c:  movzbl 0x4(%eax),%eax
081dae8a +0x080:  movsbl %al,%eax
081dae8d +0x083:  mov    %eax,0x4(%esp)
081dae91 +0x087:  lea    -0x18(%ebp),%eax
081dae94 +0x08a:  mov    %eax,(%esp)
081dae97 +0x08d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dae9c +0x092:  mov    -0xc(%ebp),%eax
081dae9f +0x095:  movzwl 0x6(%eax),%eax
081daea3 +0x099:  movzwl %ax,%eax
081daea6 +0x09c:  mov    %eax,0x4(%esp)
081daeaa +0x0a0:  lea    -0x18(%ebp),%eax
081daead +0x0a3:  mov    %eax,(%esp)
081daeb0 +0x0a6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081daeb5 +0x0ab:  mov    -0xc(%ebp),%eax
081daeb8 +0x0ae:  mov    0x8(%eax),%eax
081daebb +0x0b1:  movzbl %al,%eax
081daebe +0x0b4:  mov    %eax,0x4(%esp)
081daec2 +0x0b8:  lea    -0x18(%ebp),%eax
081daec5 +0x0bb:  mov    %eax,(%esp)
081daec8 +0x0be:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081daecd +0x0c3:  mov    -0xc(%ebp),%eax
081daed0 +0x0c6:  movzbl 0xc(%eax),%eax
081daed4 +0x0ca:  movzbl %al,%eax
081daed7 +0x0cd:  mov    %eax,0x4(%esp)
081daedb +0x0d1:  lea    -0x18(%ebp),%eax
081daede +0x0d4:  mov    %eax,(%esp)
081daee1 +0x0d7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081daee6 +0x0dc:  mov    -0xc(%ebp),%eax
081daee9 +0x0df:  movzbl 0xd(%eax),%eax
081daeed +0x0e3:  movzbl %al,%eax
081daef0 +0x0e6:  mov    %eax,0x4(%esp)
081daef4 +0x0ea:  lea    -0x18(%ebp),%eax
081daef7 +0x0ed:  mov    %eax,(%esp)
081daefa +0x0f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081daeff +0x0f5:  mov    -0xc(%ebp),%eax
081daf02 +0x0f8:  mov    0x10(%eax),%eax
081daf05 +0x0fb:  mov    %eax,0x4(%esp)
081daf09 +0x0ff:  lea    -0x18(%ebp),%eax
081daf0c +0x102:  mov    %eax,(%esp)
081daf0f +0x105:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081daf14 +0x10a:  mov    -0xc(%ebp),%eax
081daf17 +0x10d:  movzbl 0x14(%eax),%eax
081daf1b +0x111:  movzbl %al,%eax
081daf1e +0x114:  mov    %eax,0x4(%esp)
081daf22 +0x118:  lea    -0x18(%ebp),%eax
081daf25 +0x11b:  mov    %eax,(%esp)
081daf28 +0x11e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081daf2d +0x123:  movl   $0x1,0x4(%esp)
081daf35 +0x12b:  lea    -0x18(%ebp),%eax
081daf38 +0x12e:  mov    %eax,(%esp)
081daf3b +0x131:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081daf40 +0x136:  lea    -0x18(%ebp),%eax
081daf43 +0x139:  mov    %eax,0x4(%esp)
081daf47 +0x13d:  mov    0xc(%ebp),%eax
081daf4a +0x140:  mov    %eax,(%esp)
081daf4d +0x143:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081daf52 +0x148:  jmp    081daf6f <+0x165>
081daf54 +0x14a:  mov    %edx,%ebx
081daf56 +0x14c:  mov    %eax,%esi
081daf58 +0x14e:  lea    -0x18(%ebp),%eax
081daf5b +0x151:  mov    %eax,(%esp)
081daf5e +0x154:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081daf63 +0x159:  mov    %esi,%eax
081daf65 +0x15b:  mov    %ebx,%edx
081daf67 +0x15d:  mov    %eax,(%esp)
081daf6a +0x160:  call   08ae3750 <_Unwind_Resume>
081daf6f +0x165:  lea    -0x18(%ebp),%eax
081daf72 +0x168:  mov    %eax,(%esp)
081daf75 +0x16b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081daf7a +0x170:  jmp    081daf9c <+0x192>
081daf7c +0x172:  mov    -0xc(%ebp),%eax
081daf7f +0x175:  mov    0x18(%eax),%eax
081daf82 +0x178:  movzbl %al,%eax
081daf85 +0x17b:  mov    %eax,0x8(%esp)
081daf89 +0x17f:  movl   $0x1ab,0x4(%esp)
081daf91 +0x187:  mov    0xc(%ebp),%eax
081daf94 +0x18a:  mov    %eax,(%esp)
081daf97 +0x18d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081daf9c +0x192:  add    $0x20,%esp
081daf9f +0x195:  pop    %ebx
081dafa0 +0x196:  pop    %esi
081dafa1 +0x197:  pop    %ebp
081dafa2 +0x198:  ret
081dafa3 +0x199:  nop
```

## 反编译 C

```c
// Dispatcher_RefundSkill::send @ 0x81dae0a

/* Dispatcher_RefundSkill::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_RefundSkill::send(Dispatcher_RefundSkill *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 0x18) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081dae37 to 081daf51 has its CatchHandler @ 081daf54 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1ab);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[5]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[4]);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 6));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(uint *)(local_10 + 8) & 0xff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[0xc]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[0xd]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x10));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[0x14]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1ab,*(uint *)(param_2 + 0x18) & 0xff);
  }
  return;
}
```
