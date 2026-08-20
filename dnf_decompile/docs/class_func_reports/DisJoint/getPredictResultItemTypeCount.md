# getPredictResultItemTypeCount

`_ZNK8DisJoint29getPredictResultItemTypeCountEi`

`DisJoint::getPredictResultItemTypeCount(int) const`

| 类 | 地址 |
|---|---|
| `DisJoint` | `0x08473148` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08473148  _ZNK8DisJoint29getPredictResultItemTypeCountEi
#           DisJoint::getPredictResultItemTypeCount(int) const
# range [0x08473148, 0x08473183]
08473148 +0x00:  push   %ebp
08473149 +0x01:  mov    %esp,%ebp
0847314b +0x03:  cmpl   $0x0,0xc(%ebp)
0847314f +0x07:  js     08473157 <+0xf>
08473151 +0x09:  cmpl   $0x5,0xc(%ebp)
08473155 +0x0d:  jle    0847315e <+0x16>
08473157 +0x0f:  mov    $0x1,%eax
0847315c +0x14:  jmp    08473181 <+0x39>
0847315e +0x16:  mov    0xc(%ebp),%edx
08473161 +0x19:  mov    0x8(%ebp),%eax
08473164 +0x1c:  add    $0x5c,%edx
08473167 +0x1f:  shl    $0x4,%edx
0847316a +0x22:  add    %edx,%eax
0847316c +0x24:  add    $0x8,%eax
0847316f +0x27:  mov    (%eax),%eax
08473171 +0x29:  test   %eax,%eax
08473173 +0x2b:  je     0847317c <+0x34>
08473175 +0x2d:  mov    $0x2,%eax
0847317a +0x32:  jmp    08473181 <+0x39>
0847317c +0x34:  mov    $0x1,%eax
08473181 +0x39:  pop    %ebp
08473182 +0x3a:  ret
08473183 +0x3b:  nop
```

## 反编译 C

```c
// DisJoint::getPredictResultItemTypeCount @ 0x8473148

/* DisJoint::getPredictResultItemTypeCount(int) const */

undefined4 __thiscall DisJoint::getPredictResultItemTypeCount(DisJoint *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (5 < param_1)) {
    uVar1 = 1;
  }
  else if (*(int *)(this + (param_1 + 0x5c) * 0x10 + 8) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}
```
