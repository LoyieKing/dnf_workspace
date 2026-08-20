# _MakeRevivalAssaultPlayer

`_ZN11pvp_assault13CAssaultPlace25_MakeRevivalAssaultPlayerEP11PacketGuardi`

`pvp_assault::CAssaultPlace::_MakeRevivalAssaultPlayer(PacketGuard*, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e8978` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e8978  _ZN11pvp_assault13CAssaultPlace25_MakeRevivalAssaultPlayerEP11PacketGuardi
#           pvp_assault::CAssaultPlace::_MakeRevivalAssaultPlayer(PacketGuard*, int)
# range [0x082e8978, 0x082e89bf]
082e8978 +0x00:  push   %ebp
082e8979 +0x01:  mov    %esp,%ebp
082e897b +0x03:  sub    $0x18,%esp
082e897e +0x06:  mov    0x8(%ebp),%eax
082e8981 +0x09:  movl   $0x85,0x8(%esp)
082e8989 +0x11:  movl   $0x0,0x4(%esp)
082e8991 +0x19:  mov    %eax,(%esp)
082e8994 +0x1c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082e8999 +0x21:  mov    0x8(%ebp),%eax
082e899c +0x24:  mov    0xc(%ebp),%edx
082e899f +0x27:  mov    %edx,0x4(%esp)
082e89a3 +0x2b:  mov    %eax,(%esp)
082e89a6 +0x2e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e89ab +0x33:  mov    0x8(%ebp),%eax
082e89ae +0x36:  movl   $0x1,0x4(%esp)
082e89b6 +0x3e:  mov    %eax,(%esp)
082e89b9 +0x41:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082e89be +0x46:  leave
082e89bf +0x47:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_MakeRevivalAssaultPlayer @ 0x82e8978

/* pvp_assault::CAssaultPlace::_MakeRevivalAssaultPlayer(PacketGuard*, int) */

void pvp_assault::CAssaultPlace::_MakeRevivalAssaultPlayer(PacketGuard *param_1,int param_2)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x85);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```
