# CheckDate

`_ZN16Secu_GoldControl9CheckDateEv`

`Secu_GoldControl::CheckDate()`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x08287b04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08287b04  _ZN16Secu_GoldControl9CheckDateEv
#           Secu_GoldControl::CheckDate()
# range [0x08287b04, 0x08287b7f]
08287b04 +0x00:  push   %ebp
08287b05 +0x01:  mov    %esp,%ebp
08287b07 +0x03:  sub    $0x18,%esp
08287b0a +0x06:  mov    0x8(%ebp),%eax
08287b0d +0x09:  mov    0xc0(%eax),%edx
08287b13 +0x0f:  mov    &_ZN10GlobalData21g_GoldControlDateFlagE,%eax
08287b18 +0x14:  cmp    %eax,%edx
08287b1a +0x16:  je     08287b7e <+0x7a>
08287b1c +0x18:  mov    &_ZN10GlobalData21g_GoldControlDateFlagE,%edx
08287b22 +0x1e:  mov    0x8(%ebp),%eax
08287b25 +0x21:  mov    %edx,0xc0(%eax)
08287b2b +0x27:  mov    0x8(%ebp),%eax
08287b2e +0x2a:  lea    0x7c(%eax),%edx
08287b31 +0x2d:  mov    0x8(%ebp),%eax
08287b34 +0x30:  add    $0x40,%eax
08287b37 +0x33:  mov    %edx,0x4(%esp)
08287b3b +0x37:  mov    %eax,(%esp)
08287b3e +0x3a:  call   0828802e <_GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser+0xe0>  ; global constructors keyed to Secu_GoldControl::Init(CUser*)+0xe0
08287b43 +0x3f:  mov    0x8(%ebp),%eax
08287b46 +0x42:  add    $0x4,%eax
08287b49 +0x45:  mov    %eax,(%esp)
08287b4c +0x48:  call   0828800a <_GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser+0xbc>  ; global constructors keyed to Secu_GoldControl::Init(CUser*)+0xbc
08287b51 +0x4d:  mov    0x8(%ebp),%eax
08287b54 +0x50:  add    $0x40,%eax
08287b57 +0x53:  mov    %eax,(%esp)
08287b5a +0x56:  call   0828800a <_GLOBAL__I__ZN16Secu_GoldControl4InitEP5CUser+0xbc>  ; global constructors keyed to Secu_GoldControl::Init(CUser*)+0xbc
08287b5f +0x5b:  mov    0x8(%ebp),%eax
08287b62 +0x5e:  mov    0xb8(%eax),%edx
08287b68 +0x64:  mov    0x8(%ebp),%eax
08287b6b +0x67:  mov    %edx,0xbc(%eax)
08287b71 +0x6d:  mov    0x8(%ebp),%eax
08287b74 +0x70:  movl   $0x0,0xb8(%eax)
08287b7e +0x7a:  leave
08287b7f +0x7b:  ret
```

## 反编译 C

```c
// Secu_GoldControl::CheckDate @ 0x8287b04

/* Secu_GoldControl::CheckDate() */

void __thiscall Secu_GoldControl::CheckDate(Secu_GoldControl *this)

{
  if (*(int *)(this + 0xc0) != GlobalData::g_GoldControlDateFlag) {
    *(int *)(this + 0xc0) = GlobalData::g_GoldControlDateFlag;
    user_gold_info::toCopy((user_gold_info *)(this + 0x40),(user_gold_info *)(this + 0x7c));
    user_gold_info::reset((user_gold_info *)(this + 4));
    user_gold_info::reset((user_gold_info *)(this + 0x40));
    *(undefined4 *)(this + 0xbc) = *(undefined4 *)(this + 0xb8);
    *(undefined4 *)(this + 0xb8) = 0;
  }
  return;
}
```
