# _getJewelTypeIndex

`_ZNK25Dispatcher_DisJointAvatar18_getJewelTypeIndexEt`

`Dispatcher_DisJointAvatar::_getJewelTypeIndex(unsigned short) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_DisJointAvatar` | `0x0821857c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821857c  _ZNK25Dispatcher_DisJointAvatar18_getJewelTypeIndexEt
#           Dispatcher_DisJointAvatar::_getJewelTypeIndex(unsigned short) const
# range [0x0821857c, 0x08218597]
0821857c +0x00:  push   %ebp
0821857d +0x01:  mov    %esp,%ebp
0821857f +0x03:  sub    $0x28,%esp
08218582 +0x06:  mov    0xc(%ebp),%eax
08218585 +0x09:  mov    %ax,-0xc(%ebp)
08218589 +0x0d:  movzwl -0xc(%ebp),%eax
0821858d +0x11:  mov    %eax,(%esp)
08218590 +0x14:  call   0822a98c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x36>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x36
08218595 +0x19:  leave
08218596 +0x1a:  ret
08218597 +0x1b:  nop
```

## 反编译 C

```c
// Dispatcher_DisJointAvatar::_getJewelTypeIndex @ 0x821857c

/* Dispatcher_DisJointAvatar::_getJewelTypeIndex(unsigned short) const */

void __thiscall
Dispatcher_DisJointAvatar::_getJewelTypeIndex(Dispatcher_DisJointAvatar *this,ushort param_1)

{
  getAvatarEmblemTypeIdx(param_1);
  return;
}
```
