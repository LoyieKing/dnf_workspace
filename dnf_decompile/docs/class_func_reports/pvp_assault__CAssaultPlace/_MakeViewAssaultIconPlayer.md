# _MakeViewAssaultIconPlayer

`_ZN11pvp_assault13CAssaultPlace26_MakeViewAssaultIconPlayerEP11PacketGuardb`

`pvp_assault::CAssaultPlace::_MakeViewAssaultIconPlayer(PacketGuard*, bool)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e8afc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e8afc  _ZN11pvp_assault13CAssaultPlace26_MakeViewAssaultIconPlayerEP11PacketGuardb
#           pvp_assault::CAssaultPlace::_MakeViewAssaultIconPlayer(PacketGuard*, bool)
# range [0x082e8afc, 0x082e8b65]
082e8afc +0x00:  push   %ebp
082e8afd +0x01:  mov    %esp,%ebp
082e8aff +0x03:  sub    $0x28,%esp
082e8b02 +0x06:  mov    0x10(%ebp),%eax
082e8b05 +0x09:  mov    %al,-0xc(%ebp)
082e8b08 +0x0c:  mov    0xc(%ebp),%eax
082e8b0b +0x0f:  movl   $0x86,0x8(%esp)
082e8b13 +0x17:  movl   $0x0,0x4(%esp)
082e8b1b +0x1f:  mov    %eax,(%esp)
082e8b1e +0x22:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082e8b23 +0x27:  mov    0xc(%ebp),%eax
082e8b26 +0x2a:  movl   $0x1,0x4(%esp)
082e8b2e +0x32:  mov    %eax,(%esp)
082e8b31 +0x35:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082e8b36 +0x3a:  movzbl -0xc(%ebp),%eax
082e8b3a +0x3e:  mov    %eax,0x8(%esp)
082e8b3e +0x42:  mov    0xc(%ebp),%eax
082e8b41 +0x45:  mov    %eax,0x4(%esp)
082e8b45 +0x49:  mov    0x8(%ebp),%eax
082e8b48 +0x4c:  mov    %eax,(%esp)
082e8b4b +0x4f:  call   082e89c0 <_ZN11pvp_assault13CAssaultPlace28MakeViewAssaultIconOnePlayerEP11PacketGuardb>  ; pvp_assault::CAssaultPlace::MakeViewAssaultIconOnePlayer(PacketGuard*, bool)
082e8b50 +0x54:  mov    0xc(%ebp),%eax
082e8b53 +0x57:  movl   $0x1,0x4(%esp)
082e8b5b +0x5f:  mov    %eax,(%esp)
082e8b5e +0x62:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082e8b63 +0x67:  leave
082e8b64 +0x68:  ret
082e8b65 +0x69:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_MakeViewAssaultIconPlayer @ 0x82e8afc

/* pvp_assault::CAssaultPlace::_MakeViewAssaultIconPlayer(PacketGuard*, bool) */

void __thiscall
pvp_assault::CAssaultPlace::_MakeViewAssaultIconPlayer
          (CAssaultPlace *this,PacketGuard *param_1,bool param_2)

{
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x86);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,1);
  MakeViewAssaultIconOnePlayer(this,param_1,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```
