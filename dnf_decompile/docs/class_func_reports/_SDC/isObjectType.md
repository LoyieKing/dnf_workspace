# isObjectType

`_ZN4_SDC12isObjectTypeEii`

`_SDC::isObjectType(int, int)`

| 类 | 地址 |
|---|---|
| `_SDC` | `0x080950e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080950e8  _ZN4_SDC12isObjectTypeEii
#           _SDC::isObjectType(int, int)
# range [0x080950e8, 0x080950fa]
080950e8 +0x00:  push   %ebp
080950e9 +0x01:  mov    %esp,%ebp
080950eb +0x03:  mov    0xc(%ebp),%eax
080950ee +0x06:  mov    0x8(%ebp),%edx
080950f1 +0x09:  and    %edx,%eax
080950f3 +0x0b:  cmp    0xc(%ebp),%eax
080950f6 +0x0e:  sete   %al
080950f9 +0x11:  pop    %ebp
080950fa +0x12:  ret
```

## 反编译 C

```c
// _SDC::isObjectType @ 0x80950e8

/* _SDC::isObjectType(int, int) */

undefined4 _SDC::isObjectType(int param_1,int param_2)

{
  return CONCAT31((int3)((uint)(param_2 & param_1) >> 8),(param_2 & param_1) == param_2);
}
```
