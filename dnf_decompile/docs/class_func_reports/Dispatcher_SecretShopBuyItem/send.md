# send

`_ZN28Dispatcher_SecretShopBuyItem4sendEP5CUserR9ParamBase`

`Dispatcher_SecretShopBuyItem::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecretShopBuyItem` | `0x081d27ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d27ec  _ZN28Dispatcher_SecretShopBuyItem4sendEP5CUserR9ParamBase
#           Dispatcher_SecretShopBuyItem::send(CUser*, ParamBase&)
# range [0x081d27ec, 0x081d2833]
081d27ec +0x00:  push   %ebp
081d27ed +0x01:  mov    %esp,%ebp
081d27ef +0x03:  sub    $0x28,%esp
081d27f2 +0x06:  mov    0x10(%ebp),%eax
081d27f5 +0x09:  mov    %eax,-0xc(%ebp)
081d27f8 +0x0c:  mov    -0xc(%ebp),%eax
081d27fb +0x0f:  mov    0x4(%eax),%eax
081d27fe +0x12:  cmp    $0x7fffffff,%eax
081d2803 +0x17:  je     081d2831 <+0x45>
081d2805 +0x19:  mov    -0xc(%ebp),%eax
081d2808 +0x1c:  mov    0x4(%eax),%eax
081d280b +0x1f:  test   %eax,%eax
081d280d +0x21:  je     081d2832 <+0x46>
081d280f +0x23:  mov    -0xc(%ebp),%eax
081d2812 +0x26:  mov    0x4(%eax),%eax
081d2815 +0x29:  movzbl %al,%eax
081d2818 +0x2c:  mov    %eax,0x8(%esp)
081d281c +0x30:  movl   $0x129,0x4(%esp)
081d2824 +0x38:  mov    0xc(%ebp),%eax
081d2827 +0x3b:  mov    %eax,(%esp)
081d282a +0x3e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d282f +0x43:  jmp    081d2832 <+0x46>
081d2831 +0x45:  nop
081d2832 +0x46:  leave
081d2833 +0x47:  ret
```

## 反编译 C

```c
// Dispatcher_SecretShopBuyItem::send @ 0x81d27ec

/* Dispatcher_SecretShopBuyItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SecretShopBuyItem::send
          (Dispatcher_SecretShopBuyItem *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0x129,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
