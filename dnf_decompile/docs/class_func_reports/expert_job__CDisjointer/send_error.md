# send_error

`_ZN10expert_job11CDisjointer10send_errorEP5CUseri`

`expert_job::CDisjointer::send_error(CUser*, int)`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d1e62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1e62  _ZN10expert_job11CDisjointer10send_errorEP5CUseri
#           expert_job::CDisjointer::send_error(CUser*, int)
# range [0x085d1e62, 0x085d1f09]
085d1e62 +0x00:  push   %ebp
085d1e63 +0x01:  mov    %esp,%ebp
085d1e65 +0x03:  push   %esi
085d1e66 +0x04:  push   %ebx
085d1e67 +0x05:  sub    $0x20,%esp
085d1e6a +0x08:  lea    -0x14(%ebp),%eax
085d1e6d +0x0b:  mov    %eax,(%esp)
085d1e70 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085d1e75 +0x13:  movl   $0xcb,0x8(%esp)
085d1e7d +0x1b:  movl   $0x0,0x4(%esp)
085d1e85 +0x23:  lea    -0x14(%ebp),%eax
085d1e88 +0x26:  mov    %eax,(%esp)
085d1e8b +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d1e90 +0x2e:  movl   $0x0,0x4(%esp)
085d1e98 +0x36:  lea    -0x14(%ebp),%eax
085d1e9b +0x39:  mov    %eax,(%esp)
085d1e9e +0x3c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d1ea3 +0x41:  mov    0x10(%ebp),%eax
085d1ea6 +0x44:  mov    %eax,0x4(%esp)
085d1eaa +0x48:  lea    -0x14(%ebp),%eax
085d1ead +0x4b:  mov    %eax,(%esp)
085d1eb0 +0x4e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d1eb5 +0x53:  movl   $0x1,0x4(%esp)
085d1ebd +0x5b:  lea    -0x14(%ebp),%eax
085d1ec0 +0x5e:  mov    %eax,(%esp)
085d1ec3 +0x61:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d1ec8 +0x66:  lea    -0x14(%ebp),%eax
085d1ecb +0x69:  mov    %eax,0x4(%esp)
085d1ecf +0x6d:  mov    0xc(%ebp),%eax
085d1ed2 +0x70:  mov    %eax,(%esp)
085d1ed5 +0x73:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085d1eda +0x78:  jmp    085d1ef7 <+0x95>
085d1edc +0x7a:  mov    %edx,%ebx
085d1ede +0x7c:  mov    %eax,%esi
085d1ee0 +0x7e:  lea    -0x14(%ebp),%eax
085d1ee3 +0x81:  mov    %eax,(%esp)
085d1ee6 +0x84:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d1eeb +0x89:  mov    %esi,%eax
085d1eed +0x8b:  mov    %ebx,%edx
085d1eef +0x8d:  mov    %eax,(%esp)
085d1ef2 +0x90:  call   08ae3750 <_Unwind_Resume>
085d1ef7 +0x95:  lea    -0x14(%ebp),%eax
085d1efa +0x98:  mov    %eax,(%esp)
085d1efd +0x9b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d1f02 +0xa0:  add    $0x20,%esp
085d1f05 +0xa3:  pop    %ebx
085d1f06 +0xa4:  pop    %esi
085d1f07 +0xa5:  pop    %ebp
085d1f08 +0xa6:  ret
085d1f09 +0xa7:  nop
```

## 反编译 C

```c
// expert_job::CDisjointer::send_error @ 0x85d1e62

/* expert_job::CDisjointer::send_error(CUser*, int) */

void __thiscall expert_job::CDisjointer::send_error(CDisjointer *this,CUser *param_1,int param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085d1e8b to 085d1ed9 has its CatchHandler @ 085d1edc */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xcb);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
