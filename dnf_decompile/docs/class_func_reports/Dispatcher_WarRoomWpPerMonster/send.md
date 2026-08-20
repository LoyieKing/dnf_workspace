# send

`_ZN30Dispatcher_WarRoomWpPerMonster4sendEP5CUserR9ParamBase`

`Dispatcher_WarRoomWpPerMonster::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_WarRoomWpPerMonster` | `0x081d5e82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d5e82  _ZN30Dispatcher_WarRoomWpPerMonster4sendEP5CUserR9ParamBase
#           Dispatcher_WarRoomWpPerMonster::send(CUser*, ParamBase&)
# range [0x081d5e82, 0x081d5eb9]
081d5e82 +0x00:  push   %ebp
081d5e83 +0x01:  mov    %esp,%ebp
081d5e85 +0x03:  sub    $0x28,%esp
081d5e88 +0x06:  mov    0x10(%ebp),%eax
081d5e8b +0x09:  mov    %eax,-0xc(%ebp)
081d5e8e +0x0c:  mov    -0xc(%ebp),%eax
081d5e91 +0x0f:  mov    0x4(%eax),%eax
081d5e94 +0x12:  test   %eax,%eax
081d5e96 +0x14:  je     081d5eb8 <+0x36>
081d5e98 +0x16:  mov    -0xc(%ebp),%eax
081d5e9b +0x19:  mov    0x4(%eax),%eax
081d5e9e +0x1c:  movzbl %al,%eax
081d5ea1 +0x1f:  mov    %eax,0x8(%esp)
081d5ea5 +0x23:  movl   $0x179,0x4(%esp)
081d5ead +0x2b:  mov    0xc(%ebp),%eax
081d5eb0 +0x2e:  mov    %eax,(%esp)
081d5eb3 +0x31:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d5eb8 +0x36:  leave
081d5eb9 +0x37:  ret
```

## 反编译 C

```c
// Dispatcher_WarRoomWpPerMonster::send @ 0x81d5e82

/* Dispatcher_WarRoomWpPerMonster::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_WarRoomWpPerMonster::send
          (Dispatcher_WarRoomWpPerMonster *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0x179,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
