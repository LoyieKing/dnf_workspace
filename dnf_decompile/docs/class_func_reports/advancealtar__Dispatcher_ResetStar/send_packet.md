# send_packet

`_ZN12advancealtar20Dispatcher_ResetStar11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE`

`advancealtar::Dispatcher_ResetStar::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_ResetStar` | `0x081411fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081411fc  _ZN12advancealtar20Dispatcher_ResetStar11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE
#           advancealtar::Dispatcher_ResetStar::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
# range [0x081411fc, 0x081412b1]
081411fc +0x00:  push   %ebp
081411fd +0x01:  mov    %esp,%ebp
081411ff +0x03:  push   %esi
08141200 +0x04:  push   %ebx
08141201 +0x05:  sub    $0x20,%esp
08141204 +0x08:  mov    0x10(%ebp),%eax
08141207 +0x0b:  mov    %eax,-0xc(%ebp)
0814120a +0x0e:  lea    -0x18(%ebp),%eax
0814120d +0x11:  mov    %eax,(%esp)
08141210 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08141215 +0x19:  movl   $0x244,0x8(%esp)
0814121d +0x21:  movl   $0x1,0x4(%esp)
08141225 +0x29:  lea    -0x18(%ebp),%eax
08141228 +0x2c:  mov    %eax,(%esp)
0814122b +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08141230 +0x34:  movl   $0x1,0x4(%esp)
08141238 +0x3c:  lea    -0x18(%ebp),%eax
0814123b +0x3f:  mov    %eax,(%esp)
0814123e +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08141243 +0x47:  mov    -0xc(%ebp),%eax
08141246 +0x4a:  movl   $0xc,0x8(%esp)
0814124e +0x52:  mov    %eax,0x4(%esp)
08141252 +0x56:  lea    -0x18(%ebp),%eax
08141255 +0x59:  mov    %eax,(%esp)
08141258 +0x5c:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
0814125d +0x61:  movl   $0x1,0x4(%esp)
08141265 +0x69:  lea    -0x18(%ebp),%eax
08141268 +0x6c:  mov    %eax,(%esp)
0814126b +0x6f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08141270 +0x74:  lea    -0x18(%ebp),%eax
08141273 +0x77:  mov    %eax,0x4(%esp)
08141277 +0x7b:  mov    0xc(%ebp),%eax
0814127a +0x7e:  mov    %eax,(%esp)
0814127d +0x81:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08141282 +0x86:  jmp    0814129f <+0xa3>
08141284 +0x88:  mov    %edx,%ebx
08141286 +0x8a:  mov    %eax,%esi
08141288 +0x8c:  lea    -0x18(%ebp),%eax
0814128b +0x8f:  mov    %eax,(%esp)
0814128e +0x92:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08141293 +0x97:  mov    %esi,%eax
08141295 +0x99:  mov    %ebx,%edx
08141297 +0x9b:  mov    %eax,(%esp)
0814129a +0x9e:  call   08ae3750 <_Unwind_Resume>
0814129f +0xa3:  lea    -0x18(%ebp),%eax
081412a2 +0xa6:  mov    %eax,(%esp)
081412a5 +0xa9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081412aa +0xae:  add    $0x20,%esp
081412ad +0xb1:  pop    %ebx
081412ae +0xb2:  pop    %esi
081412af +0xb3:  pop    %ebp
081412b0 +0xb4:  ret
081412b1 +0xb5:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_ResetStar::send_packet @ 0x81411fc

/* advancealtar::Dispatcher_ResetStar::send_packet(CUser*, CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_ResetStar::send_packet
          (Dispatcher_ResetStar *this,CUser *param_1,STBaseResponse *param_2)

{
  PacketGuard local_1c [12];
  STBaseResponse *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0814122b to 08141281 has its CatchHandler @ 08141284 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x244);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0xc);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
