# send

`_ZN28Dispatcher_ChangeHostWarRoom4sendEP5CUserR9ParamBase`

`Dispatcher_ChangeHostWarRoom::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeHostWarRoom` | `0x081d75b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d75b0  _ZN28Dispatcher_ChangeHostWarRoom4sendEP5CUserR9ParamBase
#           Dispatcher_ChangeHostWarRoom::send(CUser*, ParamBase&)
# range [0x081d75b0, 0x081d75e7]
081d75b0 +0x00:  push   %ebp
081d75b1 +0x01:  mov    %esp,%ebp
081d75b3 +0x03:  sub    $0x28,%esp
081d75b6 +0x06:  mov    0x10(%ebp),%eax
081d75b9 +0x09:  mov    %eax,-0xc(%ebp)
081d75bc +0x0c:  mov    -0xc(%ebp),%eax
081d75bf +0x0f:  mov    0x4(%eax),%eax
081d75c2 +0x12:  test   %eax,%eax
081d75c4 +0x14:  je     081d75e6 <+0x36>
081d75c6 +0x16:  mov    -0xc(%ebp),%eax
081d75c9 +0x19:  mov    0x4(%eax),%eax
081d75cc +0x1c:  movzbl %al,%eax
081d75cf +0x1f:  mov    %eax,0x8(%esp)
081d75d3 +0x23:  movl   $0x194,0x4(%esp)
081d75db +0x2b:  mov    0xc(%ebp),%eax
081d75de +0x2e:  mov    %eax,(%esp)
081d75e1 +0x31:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d75e6 +0x36:  leave
081d75e7 +0x37:  ret
```

## 反编译 C

```c
// Dispatcher_ChangeHostWarRoom::send @ 0x81d75b0

/* Dispatcher_ChangeHostWarRoom::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ChangeHostWarRoom::send
          (Dispatcher_ChangeHostWarRoom *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0x194,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
