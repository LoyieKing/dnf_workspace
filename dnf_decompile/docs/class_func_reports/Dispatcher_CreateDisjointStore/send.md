# send

`_ZN30Dispatcher_CreateDisjointStore4sendEP5CUserR9ParamBase`

`Dispatcher_CreateDisjointStore::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CreateDisjointStore` | `0x081cfaf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cfaf0  _ZN30Dispatcher_CreateDisjointStore4sendEP5CUserR9ParamBase
#           Dispatcher_CreateDisjointStore::send(CUser*, ParamBase&)
# range [0x081cfaf0, 0x081cfb27]
081cfaf0 +0x00:  push   %ebp
081cfaf1 +0x01:  mov    %esp,%ebp
081cfaf3 +0x03:  sub    $0x28,%esp
081cfaf6 +0x06:  mov    0x10(%ebp),%eax
081cfaf9 +0x09:  mov    %eax,-0xc(%ebp)
081cfafc +0x0c:  mov    -0xc(%ebp),%eax
081cfaff +0x0f:  mov    0x4(%eax),%eax
081cfb02 +0x12:  test   %eax,%eax
081cfb04 +0x14:  je     081cfb26 <+0x36>
081cfb06 +0x16:  mov    -0xc(%ebp),%eax
081cfb09 +0x19:  mov    0x4(%eax),%eax
081cfb0c +0x1c:  movzbl %al,%eax
081cfb0f +0x1f:  mov    %eax,0x8(%esp)
081cfb13 +0x23:  movl   $0xee,0x4(%esp)
081cfb1b +0x2b:  mov    0xc(%ebp),%eax
081cfb1e +0x2e:  mov    %eax,(%esp)
081cfb21 +0x31:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081cfb26 +0x36:  leave
081cfb27 +0x37:  ret
```

## 反编译 C

```c
// Dispatcher_CreateDisjointStore::send @ 0x81cfaf0

/* Dispatcher_CreateDisjointStore::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_CreateDisjointStore::send
          (Dispatcher_CreateDisjointStore *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0xee,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
