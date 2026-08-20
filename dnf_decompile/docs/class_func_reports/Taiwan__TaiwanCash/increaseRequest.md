# increaseRequest

`_ZN6Taiwan10TaiwanCash15increaseRequestEv`

`Taiwan::TaiwanCash::increaseRequest()`

| 类 | 地址 |
|---|---|
| `Taiwan::TaiwanCash` | `0x0817365a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817365a  _ZN6Taiwan10TaiwanCash15increaseRequestEv
#           Taiwan::TaiwanCash::increaseRequest()
# range [0x0817365a, 0x0817366d]
0817365a +0x00:  push   %ebp
0817365b +0x01:  mov    %esp,%ebp
0817365d +0x03:  mov    0x8(%ebp),%eax
08173660 +0x06:  mov    0x4(%eax),%eax
08173663 +0x09:  lea    0x1(%eax),%edx
08173666 +0x0c:  mov    0x8(%ebp),%eax
08173669 +0x0f:  mov    %edx,0x4(%eax)
0817366c +0x12:  pop    %ebp
0817366d +0x13:  ret
```

## 反编译 C

```c
// Taiwan::TaiwanCash::increaseRequest @ 0x817365a

/* Taiwan::TaiwanCash::increaseRequest() */

void __thiscall Taiwan::TaiwanCash::increaseRequest(TaiwanCash *this)

{
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}
```
