# send

`_ZN21Dispatcher_BlueMarble4sendEP5CUserR9ParamBase`

`Dispatcher_BlueMarble::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BlueMarble` | `0x081e61f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e61f4  _ZN21Dispatcher_BlueMarble4sendEP5CUserR9ParamBase
#           Dispatcher_BlueMarble::send(CUser*, ParamBase&)
# range [0x081e61f4, 0x081e6241]
081e61f4 +0x00:  push   %ebp
081e61f5 +0x01:  mov    %esp,%ebp
081e61f7 +0x03:  sub    $0x28,%esp
081e61fa +0x06:  mov    0x10(%ebp),%eax
081e61fd +0x09:  mov    %eax,-0xc(%ebp)
081e6200 +0x0c:  mov    -0xc(%ebp),%eax
081e6203 +0x0f:  mov    0x4(%eax),%eax
081e6206 +0x12:  test   %eax,%eax
081e6208 +0x14:  jne    081e621f <+0x2b>
081e620a +0x16:  movl   $0x1f0,0x4(%esp)
081e6212 +0x1e:  mov    0xc(%ebp),%eax
081e6215 +0x21:  mov    %eax,(%esp)
081e6218 +0x24:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081e621d +0x29:  jmp    081e623f <+0x4b>
081e621f +0x2b:  mov    -0xc(%ebp),%eax
081e6222 +0x2e:  mov    0x4(%eax),%eax
081e6225 +0x31:  movzbl %al,%eax
081e6228 +0x34:  mov    %eax,0x8(%esp)
081e622c +0x38:  movl   $0x1f0,0x4(%esp)
081e6234 +0x40:  mov    0xc(%ebp),%eax
081e6237 +0x43:  mov    %eax,(%esp)
081e623a +0x46:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e623f +0x4b:  leave
081e6240 +0x4c:  ret
081e6241 +0x4d:  nop
```

## 反编译 C

```c
// Dispatcher_BlueMarble::send @ 0x81e61f4

/* Dispatcher_BlueMarble::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_BlueMarble::send(Dispatcher_BlueMarble *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1f0);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1f0,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
