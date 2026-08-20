# setPcRoomPlayTimeData

`_ZN5CUser21setPcRoomPlayTimeDataEjjh`

`CUser::setPcRoomPlayTimeData(unsigned int, unsigned int, unsigned char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f808` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f808  _ZN5CUser21setPcRoomPlayTimeDataEjjh
#           CUser::setPcRoomPlayTimeData(unsigned int, unsigned int, unsigned char)
# range [0x0868f808, 0x0868f83b]
0868f808 +0x00:  push   %ebp
0868f809 +0x01:  mov    %esp,%ebp
0868f80b +0x03:  sub    $0x4,%esp
0868f80e +0x06:  mov    0x14(%ebp),%eax
0868f811 +0x09:  mov    %al,-0x4(%ebp)
0868f814 +0x0c:  mov    0x8(%ebp),%eax
0868f817 +0x0f:  mov    0xc(%ebp),%edx
0868f81a +0x12:  mov    %edx,0x8eb9c(%eax)
0868f820 +0x18:  mov    0x8(%ebp),%eax
0868f823 +0x1b:  mov    0x10(%ebp),%edx
0868f826 +0x1e:  mov    %edx,0x8eba0(%eax)
0868f82c +0x24:  mov    0x8(%ebp),%eax
0868f82f +0x27:  movzbl -0x4(%ebp),%edx
0868f833 +0x2b:  mov    %dl,0x8eba4(%eax)
0868f839 +0x31:  leave
0868f83a +0x32:  ret
0868f83b +0x33:  nop
```

## 反编译 C

```c
// CUser::setPcRoomPlayTimeData @ 0x868f808

/* CUser::setPcRoomPlayTimeData(unsigned int, unsigned int, unsigned char) */

void __thiscall CUser::setPcRoomPlayTimeData(CUser *this,uint param_1,uint param_2,uchar param_3)

{
  *(uint *)(this + 0x8eb9c) = param_1;
  *(uint *)(this + 0x8eba0) = param_2;
  this[0x8eba4] = (CUser)param_3;
  return;
}
```
