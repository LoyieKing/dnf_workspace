# send

`_ZN27Dispatcher_InformNotice_2nd4sendEP5CUserR9ParamBase`

`Dispatcher_InformNotice_2nd::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_InformNotice_2nd` | `0x081e31f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e31f4  _ZN27Dispatcher_InformNotice_2nd4sendEP5CUserR9ParamBase
#           Dispatcher_InformNotice_2nd::send(CUser*, ParamBase&)
# range [0x081e31f4, 0x081e3241]
081e31f4 +0x00:  push   %ebp
081e31f5 +0x01:  mov    %esp,%ebp
081e31f7 +0x03:  sub    $0x28,%esp
081e31fa +0x06:  mov    0x10(%ebp),%eax
081e31fd +0x09:  mov    %eax,-0xc(%ebp)
081e3200 +0x0c:  mov    -0xc(%ebp),%eax
081e3203 +0x0f:  mov    0x4(%eax),%eax
081e3206 +0x12:  test   %eax,%eax
081e3208 +0x14:  jne    081e321f <+0x2b>
081e320a +0x16:  movl   $0x1de,0x4(%esp)
081e3212 +0x1e:  mov    0xc(%ebp),%eax
081e3215 +0x21:  mov    %eax,(%esp)
081e3218 +0x24:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081e321d +0x29:  jmp    081e323f <+0x4b>
081e321f +0x2b:  mov    -0xc(%ebp),%eax
081e3222 +0x2e:  mov    0x4(%eax),%eax
081e3225 +0x31:  movzbl %al,%eax
081e3228 +0x34:  mov    %eax,0x8(%esp)
081e322c +0x38:  movl   $0x1de,0x4(%esp)
081e3234 +0x40:  mov    0xc(%ebp),%eax
081e3237 +0x43:  mov    %eax,(%esp)
081e323a +0x46:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e323f +0x4b:  leave
081e3240 +0x4c:  ret
081e3241 +0x4d:  nop
```

## 反编译 C

```c
// Dispatcher_InformNotice_2nd::send @ 0x81e31f4

/* Dispatcher_InformNotice_2nd::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_InformNotice_2nd::send
          (Dispatcher_InformNotice_2nd *this,CUser *param_1,ParamBase *param_2)

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
