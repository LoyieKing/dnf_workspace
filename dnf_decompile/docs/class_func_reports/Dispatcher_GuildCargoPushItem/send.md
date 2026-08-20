# send

`_ZN29Dispatcher_GuildCargoPushItem4sendEP5CUserR9ParamBase`

`Dispatcher_GuildCargoPushItem::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargoPushItem` | `0x081d1316` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d1316  _ZN29Dispatcher_GuildCargoPushItem4sendEP5CUserR9ParamBase
#           Dispatcher_GuildCargoPushItem::send(CUser*, ParamBase&)
# range [0x081d1316, 0x081d1387]
081d1316 +0x00:  push   %ebp
081d1317 +0x01:  mov    %esp,%ebp
081d1319 +0x03:  sub    $0x28,%esp
081d131c +0x06:  mov    0x10(%ebp),%eax
081d131f +0x09:  mov    %eax,-0xc(%ebp)
081d1322 +0x0c:  mov    -0xc(%ebp),%eax
081d1325 +0x0f:  mov    0x4(%eax),%eax
081d1328 +0x12:  test   %eax,%eax
081d132a +0x14:  je     081d1386 <+0x70>
081d132c +0x16:  mov    -0xc(%ebp),%eax
081d132f +0x19:  mov    0x4(%eax),%eax
081d1332 +0x1c:  cmp    $0x64,%eax
081d1335 +0x1f:  je     081d1344 <+0x2e>
081d1337 +0x21:  mov    -0xc(%ebp),%eax
081d133a +0x24:  mov    0x4(%eax),%eax
081d133d +0x27:  cmp    $0xb5,%eax
081d1342 +0x2c:  jne    081d1366 <+0x50>
081d1344 +0x2e:  mov    -0xc(%ebp),%eax
081d1347 +0x31:  mov    0x4(%eax),%eax
081d134a +0x34:  movzbl %al,%eax
081d134d +0x37:  mov    %eax,0x8(%esp)
081d1351 +0x3b:  movl   $0x109,0x4(%esp)
081d1359 +0x43:  mov    0xc(%ebp),%eax
081d135c +0x46:  mov    %eax,(%esp)
081d135f +0x49:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d1364 +0x4e:  jmp    081d1386 <+0x70>
081d1366 +0x50:  mov    -0xc(%ebp),%eax
081d1369 +0x53:  mov    0x4(%eax),%eax
081d136c +0x56:  movzbl %al,%eax
081d136f +0x59:  mov    %eax,0x8(%esp)
081d1373 +0x5d:  movl   $0xfb,0x4(%esp)
081d137b +0x65:  mov    0xc(%ebp),%eax
081d137e +0x68:  mov    %eax,(%esp)
081d1381 +0x6b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d1386 +0x70:  leave
081d1387 +0x71:  ret
```

## 反编译 C

```c
// Dispatcher_GuildCargoPushItem::send @ 0x81d1316

/* Dispatcher_GuildCargoPushItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GuildCargoPushItem::send
          (Dispatcher_GuildCargoPushItem *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    if ((*(int *)(param_2 + 4) == 100) || (*(int *)(param_2 + 4) == 0xb5)) {
      CUser::SendCmdErrorPacket(param_1,0x109,*(uint *)(param_2 + 4) & 0xff);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0xfb,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}
```
