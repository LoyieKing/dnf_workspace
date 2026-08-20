# send

`_ZN23Dispatcher_InformNotice4sendEP5CUserR9ParamBase`

`Dispatcher_InformNotice::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_InformNotice` | `0x081e3056` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e3056  _ZN23Dispatcher_InformNotice4sendEP5CUserR9ParamBase
#           Dispatcher_InformNotice::send(CUser*, ParamBase&)
# range [0x081e3056, 0x081e30a3]
081e3056 +0x00:  push   %ebp
081e3057 +0x01:  mov    %esp,%ebp
081e3059 +0x03:  sub    $0x28,%esp
081e305c +0x06:  mov    0x10(%ebp),%eax
081e305f +0x09:  mov    %eax,-0xc(%ebp)
081e3062 +0x0c:  mov    -0xc(%ebp),%eax
081e3065 +0x0f:  mov    0x4(%eax),%eax
081e3068 +0x12:  test   %eax,%eax
081e306a +0x14:  jne    081e3081 <+0x2b>
081e306c +0x16:  movl   $0x1de,0x4(%esp)
081e3074 +0x1e:  mov    0xc(%ebp),%eax
081e3077 +0x21:  mov    %eax,(%esp)
081e307a +0x24:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081e307f +0x29:  jmp    081e30a1 <+0x4b>
081e3081 +0x2b:  mov    -0xc(%ebp),%eax
081e3084 +0x2e:  mov    0x4(%eax),%eax
081e3087 +0x31:  movzbl %al,%eax
081e308a +0x34:  mov    %eax,0x8(%esp)
081e308e +0x38:  movl   $0x1de,0x4(%esp)
081e3096 +0x40:  mov    0xc(%ebp),%eax
081e3099 +0x43:  mov    %eax,(%esp)
081e309c +0x46:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e30a1 +0x4b:  leave
081e30a2 +0x4c:  ret
081e30a3 +0x4d:  nop
```

## 反编译 C

```c
// Dispatcher_InformNotice::send @ 0x81e3056

/* Dispatcher_InformNotice::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_InformNotice::send(Dispatcher_InformNotice *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1de);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1de,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
