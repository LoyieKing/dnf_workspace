# setLastPacketID

`_ZN5CUser15setLastPacketIDEi`

`CUser::setLastPacketID(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867cbc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867cbc4  _ZN5CUser15setLastPacketIDEi
#           CUser::setLastPacketID(int)
# range [0x0867cbc4, 0x0867cbd5]
0867cbc4 +0x00:  push   %ebp
0867cbc5 +0x01:  mov    %esp,%ebp
0867cbc7 +0x03:  mov    0x8(%ebp),%eax
0867cbca +0x06:  mov    0xc(%ebp),%edx
0867cbcd +0x09:  mov    %edx,0x8cf08(%eax)
0867cbd3 +0x0f:  pop    %ebp
0867cbd4 +0x10:  ret
0867cbd5 +0x11:  nop
```

## 反编译 C

```c
// CUser::setLastPacketID @ 0x867cbc4

/* CUser::setLastPacketID(int) */

void __thiscall CUser::setLastPacketID(CUser *this,int param_1)

{
  *(int *)(this + 0x8cf08) = param_1;
  return;
}
```
