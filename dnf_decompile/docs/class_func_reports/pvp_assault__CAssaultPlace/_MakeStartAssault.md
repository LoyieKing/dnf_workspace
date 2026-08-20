# _MakeStartAssault

`_ZN11pvp_assault13CAssaultPlace17_MakeStartAssaultEP11PacketGuard`

`pvp_assault::CAssaultPlace::_MakeStartAssault(PacketGuard*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e886a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e886a  _ZN11pvp_assault13CAssaultPlace17_MakeStartAssaultEP11PacketGuard
#           pvp_assault::CAssaultPlace::_MakeStartAssault(PacketGuard*)
# range [0x082e886a, 0x082e889f]
082e886a +0x00:  push   %ebp
082e886b +0x01:  mov    %esp,%ebp
082e886d +0x03:  sub    $0x18,%esp
082e8870 +0x06:  mov    0xc(%ebp),%eax
082e8873 +0x09:  movl   $0x82,0x8(%esp)
082e887b +0x11:  movl   $0x0,0x4(%esp)
082e8883 +0x19:  mov    %eax,(%esp)
082e8886 +0x1c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082e888b +0x21:  mov    0xc(%ebp),%eax
082e888e +0x24:  movl   $0x1,0x4(%esp)
082e8896 +0x2c:  mov    %eax,(%esp)
082e8899 +0x2f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082e889e +0x34:  leave
082e889f +0x35:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_MakeStartAssault @ 0x82e886a

/* pvp_assault::CAssaultPlace::_MakeStartAssault(PacketGuard*) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeStartAssault(CAssaultPlace *this,PacketGuard *param_1)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x82);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```
