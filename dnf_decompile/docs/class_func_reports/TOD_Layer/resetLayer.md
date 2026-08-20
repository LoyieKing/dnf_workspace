# resetLayer

`_ZN9TOD_Layer10resetLayerEv`

`TOD_Layer::resetLayer()`

| 类 | 地址 |
|---|---|
| `TOD_Layer` | `0x085fe852` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe852  _ZN9TOD_Layer10resetLayerEv
#           TOD_Layer::resetLayer()
# range [0x085fe852, 0x085fe85f]
085fe852 +0x00:  push   %ebp
085fe853 +0x01:  mov    %esp,%ebp
085fe855 +0x03:  mov    0x8(%ebp),%eax
085fe858 +0x06:  movw   $0x1,(%eax)
085fe85d +0x0b:  pop    %ebp
085fe85e +0x0c:  ret
085fe85f +0x0d:  nop
```

## 反编译 C

```c
// TOD_Layer::resetLayer @ 0x85fe852

/* TOD_Layer::resetLayer() */

void __thiscall TOD_Layer::resetLayer(TOD_Layer *this)

{
  *(undefined2 *)this = 1;
  return;
}
```
