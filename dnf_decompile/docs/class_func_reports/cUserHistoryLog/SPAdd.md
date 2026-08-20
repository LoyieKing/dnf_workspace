# SPAdd

`_ZN15cUserHistoryLog5SPAddEiii12eSPAddReason`

`cUserHistoryLog::SPAdd(int, int, int, eSPAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08682bae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08682bae  _ZN15cUserHistoryLog5SPAddEiii12eSPAddReason
#           cUserHistoryLog::SPAdd(int, int, int, eSPAddReason)
# range [0x08682bae, 0x08682be7]
08682bae +0x00:  push   %ebp
08682baf +0x01:  mov    %esp,%ebp
08682bb1 +0x03:  sub    $0x28,%esp
08682bb4 +0x06:  mov    0x18(%ebp),%edx
08682bb7 +0x09:  mov    0x8(%ebp),%eax
08682bba +0x0c:  mov    (%eax),%eax
08682bbc +0x0e:  mov    0xc(%ebp),%ecx
08682bbf +0x11:  mov    %ecx,0x14(%esp)
08682bc3 +0x15:  mov    %edx,0x10(%esp)
08682bc7 +0x19:  mov    0x14(%ebp),%edx
08682bca +0x1c:  mov    %edx,0xc(%esp)
08682bce +0x20:  mov    0x10(%ebp),%edx
08682bd1 +0x23:  mov    %edx,0x8(%esp)
08682bd5 +0x27:  movl   $"SP+,%d,%d,%d,%d",0x4(%esp)
08682bdd +0x2f:  mov    %eax,(%esp)
08682be0 +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08682be5 +0x37:  leave
08682be6 +0x38:  ret
08682be7 +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::SPAdd @ 0x8682bae

/* cUserHistoryLog::SPAdd(int, int, int, eSPAddReason) */

void __thiscall
cUserHistoryLog::SPAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"SP+,%d,%d,%d,%d",param_2,param_3,param_5,param_1);
  return;
}
```
