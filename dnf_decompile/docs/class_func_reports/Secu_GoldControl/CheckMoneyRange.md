# CheckMoneyRange

`_ZN16Secu_GoldControl15CheckMoneyRangeEv`

`Secu_GoldControl::CheckMoneyRange()`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x08287b80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08287b80  _ZN16Secu_GoldControl15CheckMoneyRangeEv
#           Secu_GoldControl::CheckMoneyRange()
# range [0x08287b80, 0x08287bdb]
08287b80 +0x00:  push   %ebp
08287b81 +0x01:  mov    %esp,%ebp
08287b83 +0x03:  sub    $0x18,%esp
08287b86 +0x06:  mov    0x8(%ebp),%eax
08287b89 +0x09:  mov    0x44(%eax),%edx
08287b8c +0x0c:  mov    0x40(%eax),%eax
08287b8f +0x0f:  cmp    $0x0,%edx
08287b92 +0x12:  ja     08287bb6 <+0x36>
08287b94 +0x14:  cmp    $0x0,%edx
08287b97 +0x17:  jb     08287b9e <+0x1e>
08287b99 +0x19:  cmp    $0xfffffffe,%eax
08287b9c +0x1c:  ja     08287bb6 <+0x36>
08287b9e +0x1e:  mov    0x8(%ebp),%eax
08287ba1 +0x21:  mov    0x54(%eax),%edx
08287ba4 +0x24:  mov    0x50(%eax),%eax
08287ba7 +0x27:  cmp    $0x0,%edx
08287baa +0x2a:  jb     08287bd9 <+0x59>
08287bac +0x2c:  cmp    $0x0,%edx
08287baf +0x2f:  ja     08287bb6 <+0x36>
08287bb1 +0x31:  cmp    $0xfffffffe,%eax
08287bb4 +0x34:  jbe    08287bd9 <+0x59>
08287bb6 +0x36:  movl   $0x1,0xc(%esp)
08287bbe +0x3e:  movl   $0x0,0x8(%esp)
08287bc6 +0x46:  movl   $0x1,0x4(%esp)
08287bce +0x4e:  mov    0x8(%ebp),%eax
08287bd1 +0x51:  mov    %eax,(%esp)
08287bd4 +0x54:  call   082872ca <_ZN16Secu_GoldControl8SavetoDBEbbb>  ; Secu_GoldControl::SavetoDB(bool, bool, bool)
08287bd9 +0x59:  leave
08287bda +0x5a:  ret
08287bdb +0x5b:  nop
```

## 反编译 C

```c
// Secu_GoldControl::CheckMoneyRange @ 0x8287b80

/* Secu_GoldControl::CheckMoneyRange() */

void __thiscall Secu_GoldControl::CheckMoneyRange(Secu_GoldControl *this)

{
  if ((((*(int *)(this + 0x44) != 0) || (*(int *)(this + 0x40) == -1)) ||
      (*(int *)(this + 0x54) != 0)) || (*(int *)(this + 0x50) == -1)) {
    SavetoDB(this,true,false,true);
  }
  return;
}
```
