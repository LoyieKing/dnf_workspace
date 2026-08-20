# getLastPacketID

`_ZN5CUser15getLastPacketIDEv`

`CUser::getLastPacketID()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867cbd6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867cbd6  _ZN5CUser15getLastPacketIDEv
#           CUser::getLastPacketID()
# range [0x0867cbd6, 0x0867cbe3]
0867cbd6 +0x00:  push   %ebp
0867cbd7 +0x01:  mov    %esp,%ebp
0867cbd9 +0x03:  mov    0x8(%ebp),%eax
0867cbdc +0x06:  mov    0x8cf08(%eax),%eax
0867cbe2 +0x0c:  pop    %ebp
0867cbe3 +0x0d:  ret
```

## 反编译 C

```c
// CUser::getLastPacketID @ 0x867cbd6

/* CUser::getLastPacketID() */

undefined4 __thiscall CUser::getLastPacketID(CUser *this)

{
  return *(undefined4 *)(this + 0x8cf08);
}
```
