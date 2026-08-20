# check_cond_clear

`_ZNK9UserQuest16check_cond_clearEi`

`UserQuest::check_cond_clear(int) const`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086acad0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086acad0  _ZNK9UserQuest16check_cond_clearEi
#           UserQuest::check_cond_clear(int) const
# range [0x086acad0, 0x086acb51]
086acad0 +0x00:  push   %ebp
086acad1 +0x01:  mov    %esp,%ebp
086acad3 +0x03:  sub    $0x28,%esp
086acad6 +0x06:  movl   $0x0,-0xc(%ebp)
086acadd +0x0d:  jmp    086acb40 <+0x70>
086acadf +0x0f:  mov    0x8(%ebp),%eax
086acae2 +0x12:  mov    (%eax),%eax
086acae4 +0x14:  mov    %eax,(%esp)
086acae7 +0x17:  call   0850d522 <_GLOBAL__I_g_emptySlot+0x457>  ; global constructors keyed to g_emptySlot+0x457
086acaec +0x1c:  test   %al,%al
086acaee +0x1e:  je     086acb0c <+0x3c>
086acaf0 +0x20:  mov    -0xc(%ebp),%edx
086acaf3 +0x23:  mov    0x8(%ebp),%eax
086acaf6 +0x26:  add    $0x1d4c,%edx
086acafc +0x2c:  mov    0x8(%eax,%edx,4),%eax
086acb00 +0x30:  cmp    0xc(%ebp),%eax
086acb03 +0x33:  jne    086acb3c <+0x6c>
086acb05 +0x35:  mov    $0x1,%eax
086acb0a +0x3a:  jmp    086acb50 <+0x80>
086acb0c +0x3c:  mov    -0xc(%ebp),%edx
086acb0f +0x3f:  mov    0x8(%ebp),%eax
086acb12 +0x42:  add    $0x1d4c,%edx
086acb18 +0x48:  mov    0x8(%eax,%edx,4),%eax
086acb1c +0x4c:  cmp    0xc(%ebp),%eax
086acb1f +0x4f:  jne    086acb3c <+0x6c>
086acb21 +0x51:  mov    -0xc(%ebp),%edx
086acb24 +0x54:  mov    0x8(%ebp),%eax
086acb27 +0x57:  add    $0x1d60,%edx
086acb2d +0x5d:  mov    0x8(%eax,%edx,4),%eax
086acb31 +0x61:  test   %eax,%eax
086acb33 +0x63:  jne    086acb3c <+0x6c>
086acb35 +0x65:  mov    $0x1,%eax
086acb3a +0x6a:  jmp    086acb50 <+0x80>
086acb3c +0x6c:  addl   $0x1,-0xc(%ebp)
086acb40 +0x70:  cmpl   $0x13,-0xc(%ebp)
086acb44 +0x74:  setle  %al
086acb47 +0x77:  test   %al,%al
086acb49 +0x79:  jne    086acadf <+0xf>
086acb4b +0x7b:  mov    $0x0,%eax
086acb50 +0x80:  leave
086acb51 +0x81:  ret
```

## 反编译 C

```c
// UserQuest::check_cond_clear @ 0x86acad0

/* UserQuest::check_cond_clear(int) const */

undefined4 __thiscall UserQuest::check_cond_clear(UserQuest *this,int param_1)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  do {
    if (0x13 < local_10) {
      return 0;
    }
    cVar1 = CUser::getGmQuestFlag(*(CUser **)this);
    if (cVar1 == '\0') {
      if ((*(int *)(this + (local_10 + 0x1d4c) * 4 + 8) == param_1) &&
         (*(int *)(this + (local_10 + 0x1d60) * 4 + 8) == 0)) {
        return 1;
      }
    }
    else if (*(int *)(this + (local_10 + 0x1d4c) * 4 + 8) == param_1) {
      return 1;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
