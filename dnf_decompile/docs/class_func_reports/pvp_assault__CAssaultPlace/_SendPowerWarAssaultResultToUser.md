# _SendPowerWarAssaultResultToUser

`_ZN11pvp_assault13CAssaultPlace32_SendPowerWarAssaultResultToUserEP5CUseri`

`pvp_assault::CAssaultPlace::_SendPowerWarAssaultResultToUser(CUser*, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ec808` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ec808  _ZN11pvp_assault13CAssaultPlace32_SendPowerWarAssaultResultToUserEP5CUseri
#           pvp_assault::CAssaultPlace::_SendPowerWarAssaultResultToUser(CUser*, int)
# range [0x082ec808, 0x082ec89b]
082ec808 +0x00:  push   %ebp
082ec809 +0x01:  mov    %esp,%ebp
082ec80b +0x03:  push   %esi
082ec80c +0x04:  push   %ebx
082ec80d +0x05:  sub    $0x20,%esp
082ec810 +0x08:  lea    -0x14(%ebp),%eax
082ec813 +0x0b:  mov    %eax,(%esp)
082ec816 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ec81b +0x13:  movl   $0xc8,0x8(%esp)
082ec823 +0x1b:  movl   $0x0,0x4(%esp)
082ec82b +0x23:  lea    -0x14(%ebp),%eax
082ec82e +0x26:  mov    %eax,(%esp)
082ec831 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082ec836 +0x2e:  mov    0x10(%ebp),%eax
082ec839 +0x31:  mov    %eax,0x4(%esp)
082ec83d +0x35:  lea    -0x14(%ebp),%eax
082ec840 +0x38:  mov    %eax,(%esp)
082ec843 +0x3b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082ec848 +0x40:  movl   $0x1,0x4(%esp)
082ec850 +0x48:  lea    -0x14(%ebp),%eax
082ec853 +0x4b:  mov    %eax,(%esp)
082ec856 +0x4e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082ec85b +0x53:  lea    -0x14(%ebp),%eax
082ec85e +0x56:  mov    %eax,0x4(%esp)
082ec862 +0x5a:  mov    0xc(%ebp),%eax
082ec865 +0x5d:  mov    %eax,(%esp)
082ec868 +0x60:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082ec86d +0x65:  jmp    082ec88a <+0x82>
082ec86f +0x67:  mov    %edx,%ebx
082ec871 +0x69:  mov    %eax,%esi
082ec873 +0x6b:  lea    -0x14(%ebp),%eax
082ec876 +0x6e:  mov    %eax,(%esp)
082ec879 +0x71:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ec87e +0x76:  mov    %esi,%eax
082ec880 +0x78:  mov    %ebx,%edx
082ec882 +0x7a:  mov    %eax,(%esp)
082ec885 +0x7d:  call   08ae3750 <_Unwind_Resume>
082ec88a +0x82:  lea    -0x14(%ebp),%eax
082ec88d +0x85:  mov    %eax,(%esp)
082ec890 +0x88:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ec895 +0x8d:  add    $0x20,%esp
082ec898 +0x90:  pop    %ebx
082ec899 +0x91:  pop    %esi
082ec89a +0x92:  pop    %ebp
082ec89b +0x93:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SendPowerWarAssaultResultToUser @ 0x82ec808

/* pvp_assault::CAssaultPlace::_SendPowerWarAssaultResultToUser(CUser*, int) */

void __thiscall
pvp_assault::CAssaultPlace::_SendPowerWarAssaultResultToUser
          (CAssaultPlace *this,CUser *param_1,int param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 082ec831 to 082ec86c has its CatchHandler @ 082ec86f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,200);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
