# SendNotifyMoney

`_ZN13CAccountCargo15SendNotifyMoneyE14ENUM_CMDPACKET`

`CAccountCargo::SendNotifyMoney(ENUM_CMDPACKET)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828a7dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828a7dc  _ZN13CAccountCargo15SendNotifyMoneyE14ENUM_CMDPACKET
#           CAccountCargo::SendNotifyMoney(ENUM_CMDPACKET)
# range [0x0828a7dc, 0x0828a889]
0828a7dc +0x00:  push   %ebp
0828a7dd +0x01:  mov    %esp,%ebp
0828a7df +0x03:  push   %esi
0828a7e0 +0x04:  push   %ebx
0828a7e1 +0x05:  sub    $0x20,%esp
0828a7e4 +0x08:  lea    -0x14(%ebp),%eax
0828a7e7 +0x0b:  mov    %eax,(%esp)
0828a7ea +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0828a7ef +0x13:  mov    0xc(%ebp),%eax
0828a7f2 +0x16:  mov    %eax,0x8(%esp)
0828a7f6 +0x1a:  movl   $0x1,0x4(%esp)
0828a7fe +0x22:  lea    -0x14(%ebp),%eax
0828a801 +0x25:  mov    %eax,(%esp)
0828a804 +0x28:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0828a809 +0x2d:  movl   $0x1,0x4(%esp)
0828a811 +0x35:  lea    -0x14(%ebp),%eax
0828a814 +0x38:  mov    %eax,(%esp)
0828a817 +0x3b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828a81c +0x40:  mov    0x8(%ebp),%eax
0828a81f +0x43:  mov    0xd5c(%eax),%eax
0828a825 +0x49:  mov    %eax,0x4(%esp)
0828a829 +0x4d:  lea    -0x14(%ebp),%eax
0828a82c +0x50:  mov    %eax,(%esp)
0828a82f +0x53:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828a834 +0x58:  movl   $0x1,0x4(%esp)
0828a83c +0x60:  lea    -0x14(%ebp),%eax
0828a83f +0x63:  mov    %eax,(%esp)
0828a842 +0x66:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0828a847 +0x6b:  mov    0x8(%ebp),%eax
0828a84a +0x6e:  mov    (%eax),%eax
0828a84c +0x70:  lea    -0x14(%ebp),%edx
0828a84f +0x73:  mov    %edx,0x4(%esp)
0828a853 +0x77:  mov    %eax,(%esp)
0828a856 +0x7a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0828a85b +0x7f:  jmp    0828a878 <+0x9c>
0828a85d +0x81:  mov    %edx,%ebx
0828a85f +0x83:  mov    %eax,%esi
0828a861 +0x85:  lea    -0x14(%ebp),%eax
0828a864 +0x88:  mov    %eax,(%esp)
0828a867 +0x8b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0828a86c +0x90:  mov    %esi,%eax
0828a86e +0x92:  mov    %ebx,%edx
0828a870 +0x94:  mov    %eax,(%esp)
0828a873 +0x97:  call   08ae3750 <_Unwind_Resume>
0828a878 +0x9c:  lea    -0x14(%ebp),%eax
0828a87b +0x9f:  mov    %eax,(%esp)
0828a87e +0xa2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0828a883 +0xa7:  add    $0x20,%esp
0828a886 +0xaa:  pop    %ebx
0828a887 +0xab:  pop    %esi
0828a888 +0xac:  pop    %ebp
0828a889 +0xad:  ret
```

## 反编译 C

```c
// CAccountCargo::SendNotifyMoney @ 0x828a7dc

/* CAccountCargo::SendNotifyMoney(ENUM_CMDPACKET) */

void __thiscall CAccountCargo::SendNotifyMoney(CAccountCargo *this,int param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0828a804 to 0828a85a has its CatchHandler @ 0828a85d */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(this + 0xd5c));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(*(CUser **)this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
