# GetPredictResult

`_ZN8DisJoint16GetPredictResultEi`

`DisJoint::GetPredictResult(int)`

| 类 | 地址 |
|---|---|
| `DisJoint` | `0x08473116` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08473116  _ZN8DisJoint16GetPredictResultEi
#           DisJoint::GetPredictResult(int)
# range [0x08473116, 0x08473147]
08473116 +0x00:  push   %ebp
08473117 +0x01:  mov    %esp,%ebp
08473119 +0x03:  cmpl   $0x0,0xc(%ebp)
0847311d +0x07:  js     08473125 <+0xf>
0847311f +0x09:  cmpl   $0x5,0xc(%ebp)
08473123 +0x0d:  jle    0847312f <+0x19>
08473125 +0x0f:  mov    0x8(%ebp),%eax
08473128 +0x12:  add    $0x628,%eax
0847312d +0x17:  jmp    08473146 <+0x30>
0847312f +0x19:  mov    0xc(%ebp),%edx
08473132 +0x1c:  mov    %edx,%eax
08473134 +0x1e:  add    %eax,%eax
08473136 +0x20:  add    %edx,%eax
08473138 +0x22:  shl    $0x2,%eax
0847313b +0x25:  add    $0x620,%eax
08473140 +0x2a:  add    0x8(%ebp),%eax
08473143 +0x2d:  add    $0x8,%eax
08473146 +0x30:  pop    %ebp
08473147 +0x31:  ret
```

## 反编译 C

```c
// DisJoint::GetPredictResult @ 0x8473116

/* DisJoint::GetPredictResult(int) */

DisJoint * __thiscall DisJoint::GetPredictResult(DisJoint *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 6)) {
    this = this + param_1 * 0xc;
  }
  return this + 0x628;
}
```
