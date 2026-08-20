# SendEventMailAlaramTooltip

`_ZN5CUser26SendEventMailAlaramTooltipEv`

`CUser::SendEventMailAlaramTooltip()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08690e36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08690e36  _ZN5CUser26SendEventMailAlaramTooltipEv
#           CUser::SendEventMailAlaramTooltip()
# range [0x08690e36, 0x08690eb7]
08690e36 +0x00:  push   %ebp
08690e37 +0x01:  mov    %esp,%ebp
08690e39 +0x03:  push   %esi
08690e3a +0x04:  push   %ebx
08690e3b +0x05:  sub    $0x20,%esp
08690e3e +0x08:  lea    -0x14(%ebp),%eax
08690e41 +0x0b:  mov    %eax,(%esp)
08690e44 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08690e49 +0x13:  movl   $0x1ad,0x8(%esp)
08690e51 +0x1b:  movl   $0x0,0x4(%esp)
08690e59 +0x23:  lea    -0x14(%ebp),%eax
08690e5c +0x26:  mov    %eax,(%esp)
08690e5f +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08690e64 +0x2e:  movl   $0x1,0x4(%esp)
08690e6c +0x36:  lea    -0x14(%ebp),%eax
08690e6f +0x39:  mov    %eax,(%esp)
08690e72 +0x3c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08690e77 +0x41:  lea    -0x14(%ebp),%eax
08690e7a +0x44:  mov    %eax,0x4(%esp)
08690e7e +0x48:  mov    0x8(%ebp),%eax
08690e81 +0x4b:  mov    %eax,(%esp)
08690e84 +0x4e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08690e89 +0x53:  jmp    08690ea6 <+0x70>
08690e8b +0x55:  mov    %edx,%ebx
08690e8d +0x57:  mov    %eax,%esi
08690e8f +0x59:  lea    -0x14(%ebp),%eax
08690e92 +0x5c:  mov    %eax,(%esp)
08690e95 +0x5f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08690e9a +0x64:  mov    %esi,%eax
08690e9c +0x66:  mov    %ebx,%edx
08690e9e +0x68:  mov    %eax,(%esp)
08690ea1 +0x6b:  call   08ae3750 <_Unwind_Resume>
08690ea6 +0x70:  lea    -0x14(%ebp),%eax
08690ea9 +0x73:  mov    %eax,(%esp)
08690eac +0x76:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08690eb1 +0x7b:  add    $0x20,%esp
08690eb4 +0x7e:  pop    %ebx
08690eb5 +0x7f:  pop    %esi
08690eb6 +0x80:  pop    %ebp
08690eb7 +0x81:  ret
```

## 反编译 C

```c
// CUser::SendEventMailAlaramTooltip @ 0x8690e36

/* CUser::SendEventMailAlaramTooltip() */

void __thiscall CUser::SendEventMailAlaramTooltip(CUser *this)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08690e5f to 08690e88 has its CatchHandler @ 08690e8b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1ad);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
