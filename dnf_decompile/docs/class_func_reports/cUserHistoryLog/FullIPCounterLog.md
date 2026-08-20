# FullIPCounterLog

`_ZN15cUserHistoryLog16FullIPCounterLogEiiiiiPc`

`cUserHistoryLog::FullIPCounterLog(int, int, int, int, int, char*)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685d54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685d54  _ZN15cUserHistoryLog16FullIPCounterLogEiiiiiPc
#           cUserHistoryLog::FullIPCounterLog(int, int, int, int, int, char*)
# range [0x08685d54, 0x08685d9b]
08685d54 +0x00:  push   %ebp
08685d55 +0x01:  mov    %esp,%ebp
08685d57 +0x03:  sub    $0x28,%esp
08685d5a +0x06:  mov    0x8(%ebp),%eax
08685d5d +0x09:  mov    (%eax),%eax
08685d5f +0x0b:  mov    0x20(%ebp),%edx
08685d62 +0x0e:  mov    %edx,0x1c(%esp)
08685d66 +0x12:  mov    0x1c(%ebp),%edx
08685d69 +0x15:  mov    %edx,0x18(%esp)
08685d6d +0x19:  mov    0x18(%ebp),%edx
08685d70 +0x1c:  mov    %edx,0x14(%esp)
08685d74 +0x20:  mov    0x14(%ebp),%edx
08685d77 +0x23:  mov    %edx,0x10(%esp)
08685d7b +0x27:  mov    0x10(%ebp),%edx
08685d7e +0x2a:  mov    %edx,0xc(%esp)
08685d82 +0x2e:  mov    0xc(%ebp),%edx
08685d85 +0x31:  mov    %edx,0x8(%esp)
08685d89 +0x35:  movl   $"D_IPCount,%d,%d,%d,%d,%d,%s",0x4(%esp)
08685d91 +0x3d:  mov    %eax,(%esp)
08685d94 +0x40:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685d99 +0x45:  leave
08685d9a +0x46:  ret
08685d9b +0x47:  nop
```

## 反编译 C

```c
// cUserHistoryLog::FullIPCounterLog @ 0x8685d54

/* cUserHistoryLog::FullIPCounterLog(int, int, int, int, int, char*) */

void __thiscall
cUserHistoryLog::FullIPCounterLog
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          char *param_6)

{
  CUser::LogHistory(*(CUser **)this,"D_IPCount,%d,%d,%d,%d,%d,%s",param_1,param_2,param_3,param_4,
                    param_5,param_6);
  return;
}
```
