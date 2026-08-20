# operator=

`_ZN13CraneItemInfoaSERKS_`

`CraneItemInfo::operator=(CraneItemInfo const&)`

| 类 | 地址 |
|---|---|
| `CraneItemInfo` | `0x088e3708` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e3708  _ZN13CraneItemInfoaSERKS_
#           CraneItemInfo::operator=(CraneItemInfo const&)
# range [0x088e3708, 0x088e3735]
088e3708 +0x00:  push   %ebp
088e3709 +0x01:  mov    %esp,%ebp
088e370b +0x03:  mov    0xc(%ebp),%eax
088e370e +0x06:  movzwl (%eax),%edx
088e3711 +0x09:  mov    0x8(%ebp),%eax
088e3714 +0x0c:  mov    %dx,(%eax)
088e3717 +0x0f:  mov    0xc(%ebp),%eax
088e371a +0x12:  mov    0x4(%eax),%edx
088e371d +0x15:  mov    0x8(%ebp),%eax
088e3720 +0x18:  mov    %edx,0x4(%eax)
088e3723 +0x1b:  mov    0xc(%ebp),%eax
088e3726 +0x1e:  movzwl 0x8(%eax),%edx
088e372a +0x22:  mov    0x8(%ebp),%eax
088e372d +0x25:  mov    %dx,0x8(%eax)
088e3731 +0x29:  mov    0x8(%ebp),%eax
088e3734 +0x2c:  pop    %ebp
088e3735 +0x2d:  ret
```

## 反编译 C

```c
// CraneItemInfo::operator= @ 0x88e3708

/* CraneItemInfo::TEMPNAMEPLACEHOLDERVALUE(CraneItemInfo const&) */

CraneItemInfo * __thiscall CraneItemInfo::operator=(CraneItemInfo *this,CraneItemInfo *param_1)

{
  *(undefined2 *)this = *(undefined2 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined2 *)(this + 8) = *(undefined2 *)(param_1 + 8);
  return this;
}
```
