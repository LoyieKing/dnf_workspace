# send

`_ZN34Dispatcher_Write_On_The_GuildBoard4sendEP5CUserR9ParamBase`

`Dispatcher_Write_On_The_GuildBoard::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Write_On_The_GuildBoard` | `0x081d3320` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d3320  _ZN34Dispatcher_Write_On_The_GuildBoard4sendEP5CUserR9ParamBase
#           Dispatcher_Write_On_The_GuildBoard::send(CUser*, ParamBase&)
# range [0x081d3320, 0x081d334d]
081d3320 +0x00:  push   %ebp
081d3321 +0x01:  mov    %esp,%ebp
081d3323 +0x03:  sub    $0x28,%esp
081d3326 +0x06:  mov    0x10(%ebp),%eax
081d3329 +0x09:  mov    %eax,-0xc(%ebp)
081d332c +0x0c:  mov    -0xc(%ebp),%eax
081d332f +0x0f:  mov    0x4(%eax),%eax
081d3332 +0x12:  movzbl %al,%eax
081d3335 +0x15:  mov    %eax,0x8(%esp)
081d3339 +0x19:  movl   $0x156,0x4(%esp)
081d3341 +0x21:  mov    0xc(%ebp),%eax
081d3344 +0x24:  mov    %eax,(%esp)
081d3347 +0x27:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d334c +0x2c:  leave
081d334d +0x2d:  ret
```

## 反编译 C

```c
// Dispatcher_Write_On_The_GuildBoard::send @ 0x81d3320

/* Dispatcher_Write_On_The_GuildBoard::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Write_On_The_GuildBoard::send
          (Dispatcher_Write_On_The_GuildBoard *this,CUser *param_1,ParamBase *param_2)

{
  CUser::SendCmdErrorPacket(param_1,0x156,*(uint *)(param_2 + 4) & 0xff);
  return;
}
```
