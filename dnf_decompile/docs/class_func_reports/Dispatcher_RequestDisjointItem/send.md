# send

`_ZN30Dispatcher_RequestDisjointItem4sendEP5CUserR9ParamBase`

`Dispatcher_RequestDisjointItem::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestDisjointItem` | `0x081cfd9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cfd9a  _ZN30Dispatcher_RequestDisjointItem4sendEP5CUserR9ParamBase
#           Dispatcher_RequestDisjointItem::send(CUser*, ParamBase&)
# range [0x081cfd9a, 0x081cfdd1]
081cfd9a +0x00:  push   %ebp
081cfd9b +0x01:  mov    %esp,%ebp
081cfd9d +0x03:  sub    $0x28,%esp
081cfda0 +0x06:  mov    0x10(%ebp),%eax
081cfda3 +0x09:  mov    %eax,-0xc(%ebp)
081cfda6 +0x0c:  mov    -0xc(%ebp),%eax
081cfda9 +0x0f:  mov    0x4(%eax),%eax
081cfdac +0x12:  test   %eax,%eax
081cfdae +0x14:  je     081cfdd0 <+0x36>
081cfdb0 +0x16:  mov    -0xc(%ebp),%eax
081cfdb3 +0x19:  mov    0x4(%eax),%eax
081cfdb6 +0x1c:  movzbl %al,%eax
081cfdb9 +0x1f:  mov    %eax,0x8(%esp)
081cfdbd +0x23:  movl   $0xef,0x4(%esp)
081cfdc5 +0x2b:  mov    0xc(%ebp),%eax
081cfdc8 +0x2e:  mov    %eax,(%esp)
081cfdcb +0x31:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081cfdd0 +0x36:  leave
081cfdd1 +0x37:  ret
```

## 反编译 C

```c
// Dispatcher_RequestDisjointItem::send @ 0x81cfd9a

/* Dispatcher_RequestDisjointItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_RequestDisjointItem::send
          (Dispatcher_RequestDisjointItem *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0xef,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
