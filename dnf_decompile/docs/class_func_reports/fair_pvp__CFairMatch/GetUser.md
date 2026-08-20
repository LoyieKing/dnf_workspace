# GetUser

`_ZN8fair_pvp10CFairMatch7GetUserEj`

`fair_pvp::CFairMatch::GetUser(unsigned int)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08565140` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08565140  _ZN8fair_pvp10CFairMatch7GetUserEj
#           fair_pvp::CFairMatch::GetUser(unsigned int)
# range [0x08565140, 0x08565183]
08565140 +0x00:  push   %ebp
08565141 +0x01:  mov    %esp,%ebp
08565143 +0x03:  cmpl   $0x3,0xc(%ebp)
08565147 +0x07:  jbe    08565150 <+0x10>
08565149 +0x09:  mov    $0x0,%eax
0856514e +0x0e:  jmp    08565182 <+0x42>
08565150 +0x10:  mov    0xc(%ebp),%edx
08565153 +0x13:  mov    0x8(%ebp),%eax
08565156 +0x16:  add    $0x1,%edx
08565159 +0x19:  shl    $0x4,%edx
0856515c +0x1c:  movzbl 0x18(%edx,%eax,1),%eax
08565161 +0x21:  xor    $0x1,%eax
08565164 +0x24:  test   %al,%al
08565166 +0x26:  je     0856516f <+0x2f>
08565168 +0x28:  mov    $0x0,%eax
0856516d +0x2d:  jmp    08565182 <+0x42>
0856516f +0x2f:  mov    0xc(%ebp),%edx
08565172 +0x32:  mov    0x8(%ebp),%eax
08565175 +0x35:  add    $0x1,%edx
08565178 +0x38:  shl    $0x4,%edx
0856517b +0x3b:  add    %edx,%eax
0856517d +0x3d:  add    $0x14,%eax
08565180 +0x40:  mov    (%eax),%eax
08565182 +0x42:  pop    %ebp
08565183 +0x43:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::GetUser @ 0x8565140

/* fair_pvp::CFairMatch::GetUser(unsigned int) */

undefined4 __thiscall fair_pvp::CFairMatch::GetUser(CFairMatch *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    if (this[(param_1 + 1) * 0x10 + 0x18] == (CFairMatch)0x1) {
      uVar1 = *(undefined4 *)(this + (param_1 + 1) * 0x10 + 0x14);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
