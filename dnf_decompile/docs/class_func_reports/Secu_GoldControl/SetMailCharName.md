# SetMailCharName

`_ZN16Secu_GoldControl15SetMailCharNameEPKc`

`Secu_GoldControl::SetMailCharName(char const*)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x08287ee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08287ee0  _ZN16Secu_GoldControl15SetMailCharNameEPKc
#           Secu_GoldControl::SetMailCharName(char const*)
# range [0x08287ee0, 0x08287f0d]
08287ee0 +0x00:  push   %ebp
08287ee1 +0x01:  mov    %esp,%ebp
08287ee3 +0x03:  sub    $0x18,%esp
08287ee6 +0x06:  cmpl   $0x0,0xc(%ebp)
08287eea +0x0a:  je     08287f0c <+0x2c>
08287eec +0x0c:  mov    0x8(%ebp),%eax
08287eef +0x0f:  lea    0xc8(%eax),%edx
08287ef5 +0x15:  movl   $0x1e,0x8(%esp)
08287efd +0x1d:  mov    0xc(%ebp),%eax
08287f00 +0x20:  mov    %eax,0x4(%esp)
08287f04 +0x24:  mov    %edx,(%esp)
08287f07 +0x27:  call   0807d8d0 <_init+0x1c8>
08287f0c +0x2c:  leave
08287f0d +0x2d:  ret
```

## 反编译 C

```c
// Secu_GoldControl::SetMailCharName @ 0x8287ee0

/* Secu_GoldControl::SetMailCharName(char const*) */

void __thiscall Secu_GoldControl::SetMailCharName(Secu_GoldControl *this,char *param_1)

{
  if (param_1 != (char *)0x0) {
    strncpy((char *)(this + 200),param_1,0x1e);
  }
  return;
}
```
