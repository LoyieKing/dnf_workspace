# getFavorLevelValue

`_ZNK14CNPCScriptList18getFavorLevelValueEj`

`CNPCScriptList::getFavorLevelValue(unsigned int) const`

| 类 | 地址 |
|---|---|
| `CNPCScriptList` | `0x0858174e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858174e  _ZNK14CNPCScriptList18getFavorLevelValueEj
#           CNPCScriptList::getFavorLevelValue(unsigned int) const
# range [0x0858174e, 0x08581783]
0858174e +0x00:  push   %ebp
0858174f +0x01:  mov    %esp,%ebp
08581751 +0x03:  sub    $0x18,%esp
08581754 +0x06:  cmpl   $0x3,0xc(%ebp)
08581758 +0x0a:  jbe    08581767 <+0x19>
0858175a +0x0c:  mov    0x8(%ebp),%eax
0858175d +0x0f:  mov    %eax,(%esp)
08581760 +0x12:  call   08582364 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0xaf6>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0xaf6
08581765 +0x17:  jmp    08581782 <+0x34>
08581767 +0x19:  cmpl   $0x0,0xc(%ebp)
0858176b +0x1d:  jne    08581774 <+0x26>
0858176d +0x1f:  mov    $0x0,%eax
08581772 +0x24:  jmp    08581782 <+0x34>
08581774 +0x26:  mov    0xc(%ebp),%edx
08581777 +0x29:  mov    0x8(%ebp),%eax
0858177a +0x2c:  add    $0x8,%edx
0858177d +0x2f:  movzwl 0x6(%eax,%edx,2),%eax
08581782 +0x34:  leave
08581783 +0x35:  ret
```

## 反编译 C

```c
// CNPCScriptList::getFavorLevelValue @ 0x858174e

/* CNPCScriptList::getFavorLevelValue(unsigned int) const */

uint __thiscall CNPCScriptList::getFavorLevelValue(CNPCScriptList *this,uint param_1)

{
  uint uVar1;
  
  if (param_1 < 4) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(this + (param_1 + 8) * 2 + 6);
    }
  }
  else {
    uVar1 = getMaxFavorValue(this);
  }
  return uVar1;
}
```
