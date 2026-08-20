# UseAvatarOptionChange

`_ZN15cUserHistoryLog21UseAvatarOptionChangeEiiii`

`cUserHistoryLog::UseAvatarOptionChange(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686d0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686d0e  _ZN15cUserHistoryLog21UseAvatarOptionChangeEiiii
#           cUserHistoryLog::UseAvatarOptionChange(int, int, int, int)
# range [0x08686d0e, 0x08686d53]
08686d0e +0x00:  push   %ebp
08686d0f +0x01:  mov    %esp,%ebp
08686d11 +0x03:  sub    $0x28,%esp
08686d14 +0x06:  mov    0x8(%ebp),%eax
08686d17 +0x09:  mov    (%eax),%eax
08686d19 +0x0b:  test   %eax,%eax
08686d1b +0x0d:  je     08686d50 <+0x42>
08686d1d +0x0f:  mov    0x8(%ebp),%eax
08686d20 +0x12:  mov    (%eax),%eax
08686d22 +0x14:  mov    0x18(%ebp),%edx
08686d25 +0x17:  mov    %edx,0x14(%esp)
08686d29 +0x1b:  mov    0x14(%ebp),%edx
08686d2c +0x1e:  mov    %edx,0x10(%esp)
08686d30 +0x22:  mov    0x10(%ebp),%edx
08686d33 +0x25:  mov    %edx,0xc(%esp)
08686d37 +0x29:  mov    0xc(%ebp),%edx
08686d3a +0x2c:  mov    %edx,0x8(%esp)
08686d3e +0x30:  movl   $"UseAvatarOptionChange,%d,%d,%d,%d",0x4(%esp)
08686d46 +0x38:  mov    %eax,(%esp)
08686d49 +0x3b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686d4e +0x40:  jmp    08686d51 <+0x43>
08686d50 +0x42:  nop
08686d51 +0x43:  leave
08686d52 +0x44:  ret
08686d53 +0x45:  nop
```

## 反编译 C

```c
// cUserHistoryLog::UseAvatarOptionChange @ 0x8686d0e

/* cUserHistoryLog::UseAvatarOptionChange(int, int, int, int) */

void __thiscall
cUserHistoryLog::UseAvatarOptionChange
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,int param_4)

{
  if (*(int *)this != 0) {
    CUser::LogHistory(*(CUser **)this,"UseAvatarOptionChange,%d,%d,%d,%d",param_1,param_2,param_3,
                      param_4);
  }
  return;
}
```
