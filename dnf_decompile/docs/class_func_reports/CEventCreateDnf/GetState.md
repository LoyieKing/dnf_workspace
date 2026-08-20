# GetState

`_ZN15CEventCreateDnf8GetStateEv`

`CEventCreateDnf::GetState()`

| 类 | 地址 |
|---|---|
| `CEventCreateDnf` | `0x08164246` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164246  _ZN15CEventCreateDnf8GetStateEv
#           CEventCreateDnf::GetState()
# range [0x08164246, 0x08164251]
08164246 +0x00:  push   %ebp
08164247 +0x01:  mov    %esp,%ebp
08164249 +0x03:  mov    0x8(%ebp),%eax
0816424c +0x06:  mov    0xc(%eax),%eax
0816424f +0x09:  pop    %ebp
08164250 +0x0a:  ret
08164251 +0x0b:  nop
```

## 反编译 C

```c
// CEventCreateDnf::GetState @ 0x8164246

/* CEventCreateDnf::GetState() */

undefined4 __thiscall CEventCreateDnf::GetState(CEventCreateDnf *this)

{
  return *(undefined4 *)(this + 0xc);
}
```
