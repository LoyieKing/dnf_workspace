# Destory

`_ZN4ARAD20Arad_GMCommandManger7DestoryEv`

`ARAD::Arad_GMCommandManger::Destory()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_GMCommandManger` | `0x0819823a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819823a  _ZN4ARAD20Arad_GMCommandManger7DestoryEv
#           ARAD::Arad_GMCommandManger::Destory()
# range [0x0819823a, 0x0819823f]
0819823a +0x00:  push   %ebp
0819823b +0x01:  mov    %esp,%ebp
0819823d +0x03:  pop    %ebp
0819823e +0x04:  ret
0819823f +0x05:  nop
```

## 反编译 C

```c
// ARAD::Arad_GMCommandManger::Destory @ 0x819823a

/* ARAD::Arad_GMCommandManger::Destory() */

void ARAD::Arad_GMCommandManger::Destory(void)

{
  return;
}
```
