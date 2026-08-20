# ItemAddCargo

`_ZN15cUserHistoryLog12ItemAddCargoEiii`

`cUserHistoryLog::ItemAddCargo(int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683cee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683cee  _ZN15cUserHistoryLog12ItemAddCargoEiii
#           cUserHistoryLog::ItemAddCargo(int, int, int)
# range [0x08683cee, 0x08683d1f]
08683cee +0x00:  push   %ebp
08683cef +0x01:  mov    %esp,%ebp
08683cf1 +0x03:  sub    $0x28,%esp
08683cf4 +0x06:  mov    0x8(%ebp),%eax
08683cf7 +0x09:  mov    (%eax),%eax
08683cf9 +0x0b:  mov    0x14(%ebp),%edx
08683cfc +0x0e:  mov    %edx,0x10(%esp)
08683d00 +0x12:  mov    0x10(%ebp),%edx
08683d03 +0x15:  mov    %edx,0xc(%esp)
08683d07 +0x19:  mov    0xc(%ebp),%edx
08683d0a +0x1c:  mov    %edx,0x8(%esp)
08683d0e +0x20:  movl   $"Inven+,%d,%d,%d",0x4(%esp)
08683d16 +0x28:  mov    %eax,(%esp)
08683d19 +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683d1e +0x30:  leave
08683d1f +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::ItemAddCargo @ 0x8683cee

/* cUserHistoryLog::ItemAddCargo(int, int, int) */

void __thiscall
cUserHistoryLog::ItemAddCargo(cUserHistoryLog *this,int param_1,int param_2,int param_3)

{
  CUser::LogHistory(*(CUser **)this,"Inven+,%d,%d,%d",param_1,param_2,param_3);
  return;
}
```
