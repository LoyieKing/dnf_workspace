# ItemDelCargo

`_ZN15cUserHistoryLog12ItemDelCargoEiii14eItemDelReason`

`cUserHistoryLog::ItemDelCargo(int, int, int, eItemDelReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683d20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683d20  _ZN15cUserHistoryLog12ItemDelCargoEiii14eItemDelReason
#           cUserHistoryLog::ItemDelCargo(int, int, int, eItemDelReason)
# range [0x08683d20, 0x08683d59]
08683d20 +0x00:  push   %ebp
08683d21 +0x01:  mov    %esp,%ebp
08683d23 +0x03:  sub    $0x28,%esp
08683d26 +0x06:  mov    0x18(%ebp),%edx
08683d29 +0x09:  mov    0x8(%ebp),%eax
08683d2c +0x0c:  mov    (%eax),%eax
08683d2e +0x0e:  mov    %edx,0x14(%esp)
08683d32 +0x12:  mov    0x14(%ebp),%edx
08683d35 +0x15:  mov    %edx,0x10(%esp)
08683d39 +0x19:  mov    0x10(%ebp),%edx
08683d3c +0x1c:  mov    %edx,0xc(%esp)
08683d40 +0x20:  mov    0xc(%ebp),%edx
08683d43 +0x23:  mov    %edx,0x8(%esp)
08683d47 +0x27:  movl   $"Inven-,%d,%d,%d,%d",0x4(%esp)
08683d4f +0x2f:  mov    %eax,(%esp)
08683d52 +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683d57 +0x37:  leave
08683d58 +0x38:  ret
08683d59 +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::ItemDelCargo @ 0x8683d20

/* cUserHistoryLog::ItemDelCargo(int, int, int, eItemDelReason) */

void __thiscall
cUserHistoryLog::ItemDelCargo
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"Inven-,%d,%d,%d,%d",param_1,param_2,param_3,param_5);
  return;
}
```
