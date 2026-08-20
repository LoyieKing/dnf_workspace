# send

`_ZN35Dispatcher_Enchant_3rdChronicleItem4sendEP5CUserR9ParamBase`

`Dispatcher_Enchant_3rdChronicleItem::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Enchant_3rdChronicleItem` | `0x081d387e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d387e  _ZN35Dispatcher_Enchant_3rdChronicleItem4sendEP5CUserR9ParamBase
#           Dispatcher_Enchant_3rdChronicleItem::send(CUser*, ParamBase&)
# range [0x081d387e, 0x081d38b9]
081d387e +0x00:  push   %ebp
081d387f +0x01:  mov    %esp,%ebp
081d3881 +0x03:  sub    $0x28,%esp
081d3884 +0x06:  mov    0x10(%ebp),%eax
081d3887 +0x09:  mov    %eax,-0xc(%ebp)
081d388a +0x0c:  mov    -0xc(%ebp),%eax
081d388d +0x0f:  mov    0x4(%eax),%eax
081d3890 +0x12:  test   %eax,%eax
081d3892 +0x14:  je     081d38b6 <+0x38>
081d3894 +0x16:  mov    -0xc(%ebp),%eax
081d3897 +0x19:  mov    0x4(%eax),%eax
081d389a +0x1c:  movzbl %al,%eax
081d389d +0x1f:  mov    %eax,0x8(%esp)
081d38a1 +0x23:  movl   $0x173,0x4(%esp)
081d38a9 +0x2b:  mov    0xc(%ebp),%eax
081d38ac +0x2e:  mov    %eax,(%esp)
081d38af +0x31:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d38b4 +0x36:  jmp    081d38b7 <+0x39>
081d38b6 +0x38:  nop
081d38b7 +0x39:  leave
081d38b8 +0x3a:  ret
081d38b9 +0x3b:  nop
```

## 反编译 C

```c
// Dispatcher_Enchant_3rdChronicleItem::send @ 0x81d387e

/* Dispatcher_Enchant_3rdChronicleItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Enchant_3rdChronicleItem::send
          (Dispatcher_Enchant_3rdChronicleItem *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0x173,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
