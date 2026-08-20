# resetBonusPoint

`_ZN15CUserCharacInfo15resetBonusPointEv`

`CUserCharacInfo::resetBonusPoint()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868ee7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ee7a  _ZN15CUserCharacInfo15resetBonusPointEv
#           CUserCharacInfo::resetBonusPoint()
# range [0x0868ee7a, 0x0868eed1]
0868ee7a +0x00:  push   %ebp
0868ee7b +0x01:  mov    %esp,%ebp
0868ee7d +0x03:  sub    $0x18,%esp
0868ee80 +0x06:  mov    0x8(%ebp),%eax
0868ee83 +0x09:  mov    0x10(%eax),%eax
0868ee86 +0x0c:  test   %eax,%eax
0868ee88 +0x0e:  je     0868eed0 <+0x56>
0868ee8a +0x10:  mov    0x8(%ebp),%eax
0868ee8d +0x13:  mov    0x10(%eax),%eax
0868ee90 +0x16:  add    $0x129d,%eax
0868ee95 +0x1b:  movl   $0x8,0x8(%esp)
0868ee9d +0x23:  movl   $0x0,0x4(%esp)
0868eea5 +0x2b:  mov    %eax,(%esp)
0868eea8 +0x2e:  call   0807dcc0 <_init+0x5b8>
0868eead +0x33:  mov    0x8(%ebp),%eax
0868eeb0 +0x36:  mov    0x10(%eax),%eax
0868eeb3 +0x39:  add    $0x12a5,%eax
0868eeb8 +0x3e:  movl   $0x8,0x8(%esp)
0868eec0 +0x46:  movl   $0x0,0x4(%esp)
0868eec8 +0x4e:  mov    %eax,(%esp)
0868eecb +0x51:  call   0807dcc0 <_init+0x5b8>
0868eed0 +0x56:  leave
0868eed1 +0x57:  ret
```

## 反编译 C

```c
// CUserCharacInfo::resetBonusPoint @ 0x868ee7a

/* CUserCharacInfo::resetBonusPoint() */

void __thiscall CUserCharacInfo::resetBonusPoint(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    memset((void *)(*(int *)(this + 0x10) + 0x129d),0,8);
    memset((void *)(*(int *)(this + 0x10) + 0x12a5),0,8);
  }
  return;
}
```
