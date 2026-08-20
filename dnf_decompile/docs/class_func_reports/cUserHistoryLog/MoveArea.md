# MoveArea

`_ZN15cUserHistoryLog8MoveAreaEiiiii`

`cUserHistoryLog::MoveArea(int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685172` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685172  _ZN15cUserHistoryLog8MoveAreaEiiiii
#           cUserHistoryLog::MoveArea(int, int, int, int, int)
# range [0x08685172, 0x086851ab]
08685172 +0x00:  push   %ebp
08685173 +0x01:  mov    %esp,%ebp
08685175 +0x03:  sub    $0x28,%esp
08685178 +0x06:  mov    0x8(%ebp),%eax
0868517b +0x09:  mov    (%eax),%eax
0868517d +0x0b:  mov    0x18(%ebp),%edx
08685180 +0x0e:  mov    %edx,0x14(%esp)
08685184 +0x12:  mov    0x14(%ebp),%edx
08685187 +0x15:  mov    %edx,0x10(%esp)
0868518b +0x19:  mov    0x10(%ebp),%edx
0868518e +0x1c:  mov    %edx,0xc(%esp)
08685192 +0x20:  mov    0xc(%ebp),%edx
08685195 +0x23:  mov    %edx,0x8(%esp)
08685199 +0x27:  movl   $"MoveArea,%d,%d,%d,%d",0x4(%esp)
086851a1 +0x2f:  mov    %eax,(%esp)
086851a4 +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086851a9 +0x37:  leave
086851aa +0x38:  ret
086851ab +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::MoveArea @ 0x8685172

/* cUserHistoryLog::MoveArea(int, int, int, int, int) */

void cUserHistoryLog::MoveArea(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  CUser::LogHistory(*(CUser **)param_1,"MoveArea,%d,%d,%d,%d",param_2,param_3,param_4,param_5);
  return;
}
```
