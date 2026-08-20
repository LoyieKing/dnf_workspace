# setCurCharChangingGrowthType

`_ZN15CUserCharacInfo28setCurCharChangingGrowthTypeEcc`

`CUserCharacInfo::setCurCharChangingGrowthType(char, char)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864e34e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864e34e  _ZN15CUserCharacInfo28setCurCharChangingGrowthTypeEcc
#           CUserCharacInfo::setCurCharChangingGrowthType(char, char)
# range [0x0864e34e, 0x0864e3b9]
0864e34e +0x00:  push   %ebp
0864e34f +0x01:  mov    %esp,%ebp
0864e351 +0x03:  sub    $0x8,%esp
0864e354 +0x06:  mov    0xc(%ebp),%edx
0864e357 +0x09:  mov    0x10(%ebp),%eax
0864e35a +0x0c:  mov    %dl,-0x4(%ebp)
0864e35d +0x0f:  mov    %al,-0x8(%ebp)
0864e360 +0x12:  cmpb   $0x6,-0x4(%ebp)
0864e364 +0x16:  jg     0864e3b3 <+0x65>
0864e366 +0x18:  cmpb   $0x2,-0x8(%ebp)
0864e36a +0x1c:  jg     0864e3b6 <+0x68>
0864e36c +0x1e:  mov    0x8(%ebp),%eax
0864e36f +0x21:  mov    0x10(%eax),%edx
0864e372 +0x24:  movzbl -0x4(%ebp),%eax
0864e376 +0x28:  shl    $0x4,%eax
0864e379 +0x2b:  sar    $0x4,%al
0864e37c +0x2e:  mov    %eax,%ecx
0864e37e +0x30:  and    $0xf,%ecx
0864e381 +0x33:  movzbl 0x2a(%edx),%eax
0864e385 +0x37:  and    $0xfffffff0,%eax
0864e388 +0x3a:  or     %ecx,%eax
0864e38a +0x3c:  mov    %al,0x2a(%edx)
0864e38d +0x3f:  mov    0x8(%ebp),%eax
0864e390 +0x42:  mov    0x10(%eax),%edx
0864e393 +0x45:  movzbl -0x8(%ebp),%eax
0864e397 +0x49:  shl    $0x5,%eax
0864e39a +0x4c:  sar    $0x5,%al
0864e39d +0x4f:  and    $0x7,%eax
0864e3a0 +0x52:  mov    %eax,%ecx
0864e3a2 +0x54:  shl    $0x4,%ecx
0864e3a5 +0x57:  movzbl 0x2a(%edx),%eax
0864e3a9 +0x5b:  and    $0xffffff8f,%eax
0864e3ac +0x5e:  or     %ecx,%eax
0864e3ae +0x60:  mov    %al,0x2a(%edx)
0864e3b1 +0x63:  jmp    0864e3b7 <+0x69>
0864e3b3 +0x65:  nop
0864e3b4 +0x66:  jmp    0864e3b7 <+0x69>
0864e3b6 +0x68:  nop
0864e3b7 +0x69:  leave
0864e3b8 +0x6a:  ret
0864e3b9 +0x6b:  nop
```

## 反编译 C

```c
// CUserCharacInfo::setCurCharChangingGrowthType @ 0x864e34e

/* CUserCharacInfo::setCurCharChangingGrowthType(char, char) */

void __thiscall
CUserCharacInfo::setCurCharChangingGrowthType(CUserCharacInfo *this,char param_1,char param_2)

{
  if ((param_1 < '\a') && (param_2 < '\x03')) {
    *(byte *)(*(int *)(this + 0x10) + 0x2a) =
         *(byte *)(*(int *)(this + 0x10) + 0x2a) & 0xf0 | (char)(param_1 << 4) >> 4 & 0xfU;
    *(byte *)(*(int *)(this + 0x10) + 0x2a) =
         *(byte *)(*(int *)(this + 0x10) + 0x2a) & 0x8f | ((char)(param_2 << 5) >> 5 & 7U) << 4;
  }
  return;
}
```
