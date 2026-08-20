# _MakeCloseAssault

`_ZN11pvp_assault13CAssaultPlace17_MakeCloseAssaultEP11PacketGuardi`

`pvp_assault::CAssaultPlace::_MakeCloseAssault(PacketGuard*, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e88d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e88d6  _ZN11pvp_assault13CAssaultPlace17_MakeCloseAssaultEP11PacketGuardi
#           pvp_assault::CAssaultPlace::_MakeCloseAssault(PacketGuard*, int)
# range [0x082e88d6, 0x082e891d]
082e88d6 +0x00:  push   %ebp
082e88d7 +0x01:  mov    %esp,%ebp
082e88d9 +0x03:  sub    $0x18,%esp
082e88dc +0x06:  mov    0xc(%ebp),%eax
082e88df +0x09:  movl   $0x89,0x8(%esp)
082e88e7 +0x11:  movl   $0x0,0x4(%esp)
082e88ef +0x19:  mov    %eax,(%esp)
082e88f2 +0x1c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082e88f7 +0x21:  mov    0xc(%ebp),%eax
082e88fa +0x24:  mov    0x10(%ebp),%edx
082e88fd +0x27:  mov    %edx,0x4(%esp)
082e8901 +0x2b:  mov    %eax,(%esp)
082e8904 +0x2e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082e8909 +0x33:  mov    0xc(%ebp),%eax
082e890c +0x36:  movl   $0x1,0x4(%esp)
082e8914 +0x3e:  mov    %eax,(%esp)
082e8917 +0x41:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082e891c +0x46:  leave
082e891d +0x47:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_MakeCloseAssault @ 0x82e88d6

/* pvp_assault::CAssaultPlace::_MakeCloseAssault(PacketGuard*, int) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeCloseAssault(CAssaultPlace *this,PacketGuard *param_1,int param_2)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x89);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```
