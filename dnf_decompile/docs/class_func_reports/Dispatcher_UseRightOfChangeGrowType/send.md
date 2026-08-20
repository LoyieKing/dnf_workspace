# send

`_ZN35Dispatcher_UseRightOfChangeGrowType4sendEP5CUserR9ParamBase`

`Dispatcher_UseRightOfChangeGrowType::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseRightOfChangeGrowType` | `0x0825df24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825df24  _ZN35Dispatcher_UseRightOfChangeGrowType4sendEP5CUserR9ParamBase
#           Dispatcher_UseRightOfChangeGrowType::send(CUser*, ParamBase&)
# range [0x0825df24, 0x0825df71]
0825df24 +0x00:  push   %ebp
0825df25 +0x01:  mov    %esp,%ebp
0825df27 +0x03:  sub    $0x28,%esp
0825df2a +0x06:  mov    0x10(%ebp),%eax
0825df2d +0x09:  mov    %eax,-0xc(%ebp)
0825df30 +0x0c:  mov    -0xc(%ebp),%eax
0825df33 +0x0f:  mov    0x4(%eax),%eax
0825df36 +0x12:  test   %eax,%eax
0825df38 +0x14:  je     0825df5c <+0x38>
0825df3a +0x16:  mov    -0xc(%ebp),%eax
0825df3d +0x19:  mov    0x4(%eax),%eax
0825df40 +0x1c:  movzbl %al,%eax
0825df43 +0x1f:  mov    %eax,0x8(%esp)
0825df47 +0x23:  movl   $0x1f7,0x4(%esp)
0825df4f +0x2b:  mov    0xc(%ebp),%eax
0825df52 +0x2e:  mov    %eax,(%esp)
0825df55 +0x31:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0825df5a +0x36:  jmp    0825df6f <+0x4b>
0825df5c +0x38:  movl   $0x1f7,0x4(%esp)
0825df64 +0x40:  mov    0xc(%ebp),%eax
0825df67 +0x43:  mov    %eax,(%esp)
0825df6a +0x46:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
0825df6f +0x4b:  leave
0825df70 +0x4c:  ret
0825df71 +0x4d:  nop
```

## 反编译 C

```c
// Dispatcher_UseRightOfChangeGrowType::send @ 0x825df24

/* Dispatcher_UseRightOfChangeGrowType::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_UseRightOfChangeGrowType::send
          (Dispatcher_UseRightOfChangeGrowType *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1f7);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1f7,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
