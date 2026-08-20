# send

`_ZN33Dispatcher_LogIngameAdvertisement4sendEP5CUserR9ParamBase`

`Dispatcher_LogIngameAdvertisement::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_LogIngameAdvertisement` | `0x081e4f04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e4f04  _ZN33Dispatcher_LogIngameAdvertisement4sendEP5CUserR9ParamBase
#           Dispatcher_LogIngameAdvertisement::send(CUser*, ParamBase&)
# range [0x081e4f04, 0x081e4f51]
081e4f04 +0x00:  push   %ebp
081e4f05 +0x01:  mov    %esp,%ebp
081e4f07 +0x03:  sub    $0x28,%esp
081e4f0a +0x06:  mov    0x10(%ebp),%eax
081e4f0d +0x09:  mov    %eax,-0xc(%ebp)
081e4f10 +0x0c:  mov    -0xc(%ebp),%eax
081e4f13 +0x0f:  mov    0x4(%eax),%eax
081e4f16 +0x12:  test   %eax,%eax
081e4f18 +0x14:  jne    081e4f2f <+0x2b>
081e4f1a +0x16:  movl   $0x1ea,0x4(%esp)
081e4f22 +0x1e:  mov    0xc(%ebp),%eax
081e4f25 +0x21:  mov    %eax,(%esp)
081e4f28 +0x24:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081e4f2d +0x29:  jmp    081e4f4f <+0x4b>
081e4f2f +0x2b:  mov    -0xc(%ebp),%eax
081e4f32 +0x2e:  mov    0x4(%eax),%eax
081e4f35 +0x31:  movzbl %al,%eax
081e4f38 +0x34:  mov    %eax,0x8(%esp)
081e4f3c +0x38:  movl   $0x1ea,0x4(%esp)
081e4f44 +0x40:  mov    0xc(%ebp),%eax
081e4f47 +0x43:  mov    %eax,(%esp)
081e4f4a +0x46:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e4f4f +0x4b:  leave
081e4f50 +0x4c:  ret
081e4f51 +0x4d:  nop
```

## 反编译 C

```c
// Dispatcher_LogIngameAdvertisement::send @ 0x81e4f04

/* Dispatcher_LogIngameAdvertisement::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_LogIngameAdvertisement::send
          (Dispatcher_LogIngameAdvertisement *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1ea);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1ea,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
