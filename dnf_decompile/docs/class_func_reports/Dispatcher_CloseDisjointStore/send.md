# send

`_ZN29Dispatcher_CloseDisjointStore4sendEP5CUserR9ParamBase`

`Dispatcher_CloseDisjointStore::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CloseDisjointStore` | `0x081d0412` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d0412  _ZN29Dispatcher_CloseDisjointStore4sendEP5CUserR9ParamBase
#           Dispatcher_CloseDisjointStore::send(CUser*, ParamBase&)
# range [0x081d0412, 0x081d0449]
081d0412 +0x00:  push   %ebp
081d0413 +0x01:  mov    %esp,%ebp
081d0415 +0x03:  sub    $0x28,%esp
081d0418 +0x06:  mov    0x10(%ebp),%eax
081d041b +0x09:  mov    %eax,-0xc(%ebp)
081d041e +0x0c:  mov    -0xc(%ebp),%eax
081d0421 +0x0f:  mov    0x4(%eax),%eax
081d0424 +0x12:  test   %eax,%eax
081d0426 +0x14:  je     081d0448 <+0x36>
081d0428 +0x16:  mov    -0xc(%ebp),%eax
081d042b +0x19:  mov    0x4(%eax),%eax
081d042e +0x1c:  movzbl %al,%eax
081d0431 +0x1f:  mov    %eax,0x8(%esp)
081d0435 +0x23:  movl   $0xf6,0x4(%esp)
081d043d +0x2b:  mov    0xc(%ebp),%eax
081d0440 +0x2e:  mov    %eax,(%esp)
081d0443 +0x31:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d0448 +0x36:  leave
081d0449 +0x37:  ret
```

## 反编译 C

```c
// Dispatcher_CloseDisjointStore::send @ 0x81d0412

/* Dispatcher_CloseDisjointStore::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_CloseDisjointStore::send
          (Dispatcher_CloseDisjointStore *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0xf6,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
