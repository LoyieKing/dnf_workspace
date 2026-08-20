# isQuestId

`_ZN20OneADayItemShopEvent9isQuestIdEi`

`OneADayItemShopEvent::isQuestId(int)`

| 类 | 地址 |
|---|---|
| `OneADayItemShopEvent` | `0x081ba1e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ba1e2  _ZN20OneADayItemShopEvent9isQuestIdEi
#           OneADayItemShopEvent::isQuestId(int)
# range [0x081ba1e2, 0x081ba21d]
081ba1e2 +0x00:  push   %ebp
081ba1e3 +0x01:  mov    %esp,%ebp
081ba1e5 +0x03:  sub    $0x10,%esp
081ba1e8 +0x06:  movl   $0x0,-0x4(%ebp)
081ba1ef +0x0d:  jmp    081ba20b <+0x29>
081ba1f1 +0x0f:  mov    -0x4(%ebp),%eax
081ba1f4 +0x12:  mov    &correctQuestIds(,%eax,4),%eax
081ba1fb +0x19:  cmp    0xc(%ebp),%eax
081ba1fe +0x1c:  jne    081ba207 <+0x25>
081ba200 +0x1e:  mov    $0x1,%eax
081ba205 +0x23:  jmp    081ba21b <+0x39>
081ba207 +0x25:  addl   $0x1,-0x4(%ebp)
081ba20b +0x29:  cmpl   $0x2,-0x4(%ebp)
081ba20f +0x2d:  setle  %al
081ba212 +0x30:  test   %al,%al
081ba214 +0x32:  jne    081ba1f1 <+0xf>
081ba216 +0x34:  mov    $0x0,%eax
081ba21b +0x39:  leave
081ba21c +0x3a:  ret
081ba21d +0x3b:  nop
```

## 反编译 C

```c
// OneADayItemShopEvent::isQuestId @ 0x81ba1e2

/* OneADayItemShopEvent::isQuestId(int) */

undefined4 __thiscall OneADayItemShopEvent::isQuestId(OneADayItemShopEvent *this,int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 0;
    }
    if (*(int *)(correctQuestIds + local_8 * 4) == param_1) break;
    local_8 = local_8 + 1;
  }
  return 1;
}
```
