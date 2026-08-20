# GetRate

`_ZN15CEventCreateDnf7GetRateEv`

`CEventCreateDnf::GetRate()`

| 类 | 地址 |
|---|---|
| `CEventCreateDnf` | `0x08164260` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164260  _ZN15CEventCreateDnf7GetRateEv
#           CEventCreateDnf::GetRate()
# range [0x08164260, 0x0816426b]
08164260 +0x00:  push   %ebp
08164261 +0x01:  mov    %esp,%ebp
08164263 +0x03:  mov    0x8(%ebp),%eax
08164266 +0x06:  movzwl 0x16(%eax),%eax
0816426a +0x0a:  pop    %ebp
0816426b +0x0b:  ret
```

## 反编译 C

```c
// CEventCreateDnf::GetRate @ 0x8164260

/* CEventCreateDnf::GetRate() */

undefined2 __thiscall CEventCreateDnf::GetRate(CEventCreateDnf *this)

{
  return *(undefined2 *)(this + 0x16);
}
```
