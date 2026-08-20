# getFavorLevel

`_ZNK14CNPCScriptList13getFavorLevelEt`

`CNPCScriptList::getFavorLevel(unsigned short) const`

| 类 | 地址 |
|---|---|
| `CNPCScriptList` | `0x085816e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085816e4  _ZNK14CNPCScriptList13getFavorLevelEt
#           CNPCScriptList::getFavorLevel(unsigned short) const
# range [0x085816e4, 0x0858174d]
085816e4 +0x00:  push   %ebp
085816e5 +0x01:  mov    %esp,%ebp
085816e7 +0x03:  push   %ebx
085816e8 +0x04:  sub    $0x34,%esp
085816eb +0x07:  mov    0xc(%ebp),%eax
085816ee +0x0a:  mov    %ax,-0x1c(%ebp)
085816f2 +0x0e:  movzwl -0x1c(%ebp),%ebx
085816f6 +0x12:  mov    0x8(%ebp),%eax
085816f9 +0x15:  mov    %eax,(%esp)
085816fc +0x18:  call   08582364 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xaf6>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xaf6
08581701 +0x1d:  cmp    %eax,%ebx
08581703 +0x1f:  setge  %al
08581706 +0x22:  test   %al,%al
08581708 +0x24:  je     08581711 <+0x2d>
0858170a +0x26:  mov    $0x4,%eax
0858170f +0x2b:  jmp    08581747 <+0x63>
08581711 +0x2d:  movl   $0x1,-0xc(%ebp)
08581718 +0x34:  jmp    08581737 <+0x53>
0858171a +0x36:  mov    -0xc(%ebp),%edx
0858171d +0x39:  mov    0x8(%ebp),%eax
08581720 +0x3c:  add    $0x8,%edx
08581723 +0x3f:  movzwl 0x6(%eax,%edx,2),%eax
08581728 +0x44:  cmp    -0x1c(%ebp),%ax
0858172c +0x48:  jb     08581733 <+0x4f>
0858172e +0x4a:  mov    -0xc(%ebp),%eax
08581731 +0x4d:  jmp    08581747 <+0x63>
08581733 +0x4f:  addl   $0x1,-0xc(%ebp)
08581737 +0x53:  cmpl   $0x3,-0xc(%ebp)
0858173b +0x57:  setle  %al
0858173e +0x5a:  test   %al,%al
08581740 +0x5c:  jne    0858171a <+0x36>
08581742 +0x5e:  mov    $0x4,%eax
08581747 +0x63:  add    $0x34,%esp
0858174a +0x66:  pop    %ebx
0858174b +0x67:  pop    %ebp
0858174c +0x68:  ret
0858174d +0x69:  nop
```

## 反编译 C

```c
// CNPCScriptList::getFavorLevel @ 0x85816e4

/* CNPCScriptList::getFavorLevel(unsigned short) const */

int __thiscall CNPCScriptList::getFavorLevel(CNPCScriptList *this,ushort param_1)

{
  int iVar1;
  int local_10;
  
  iVar1 = getMaxFavorValue(this);
  if ((int)(uint)param_1 < iVar1) {
    for (local_10 = 1; local_10 < 4; local_10 = local_10 + 1) {
      if (param_1 <= *(ushort *)(this + (local_10 + 8) * 2 + 6)) {
        return local_10;
      }
    }
  }
  return 4;
}
```
