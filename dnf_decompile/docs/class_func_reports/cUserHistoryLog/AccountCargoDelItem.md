# AccountCargoDelItem

`_ZN15cUserHistoryLog19AccountCargoDelItemEiii14eItemDelReason`

`cUserHistoryLog::AccountCargoDelItem(int, int, int, eItemDelReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086868ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086868ee  _ZN15cUserHistoryLog19AccountCargoDelItemEiii14eItemDelReason
#           cUserHistoryLog::AccountCargoDelItem(int, int, int, eItemDelReason)
# range [0x086868ee, 0x08686927]
086868ee +0x00:  push   %ebp
086868ef +0x01:  mov    %esp,%ebp
086868f1 +0x03:  sub    $0x28,%esp
086868f4 +0x06:  mov    0x18(%ebp),%edx
086868f7 +0x09:  mov    0x8(%ebp),%eax
086868fa +0x0c:  mov    (%eax),%eax
086868fc +0x0e:  mov    0x14(%ebp),%ecx
086868ff +0x11:  mov    %ecx,0x14(%esp)
08686903 +0x15:  mov    0x10(%ebp),%ecx
08686906 +0x18:  mov    %ecx,0x10(%esp)
0868690a +0x1c:  mov    0xc(%ebp),%ecx
0868690d +0x1f:  mov    %ecx,0xc(%esp)
08686911 +0x23:  mov    %edx,0x8(%esp)
08686915 +0x27:  movl   $"AccountCargo-,%d,%d,%d,%d",0x4(%esp)
0868691d +0x2f:  mov    %eax,(%esp)
08686920 +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686925 +0x37:  leave
08686926 +0x38:  ret
08686927 +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::AccountCargoDelItem @ 0x86868ee

/* cUserHistoryLog::AccountCargoDelItem(int, int, int, eItemDelReason) */

void __thiscall
cUserHistoryLog::AccountCargoDelItem
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"AccountCargo-,%d,%d,%d,%d",param_5,param_1,param_2,param_3);
  return;
}
```
