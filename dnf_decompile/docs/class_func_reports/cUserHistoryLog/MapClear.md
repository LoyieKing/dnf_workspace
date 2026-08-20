# MapClear

`_ZN15cUserHistoryLog8MapClearEtii`

`cUserHistoryLog::MapClear(unsigned short, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684b22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684b22  _ZN15cUserHistoryLog8MapClearEtii
#           cUserHistoryLog::MapClear(unsigned short, int, int)
# range [0x08684b22, 0x08684b5b]
08684b22 +0x00:  push   %ebp
08684b23 +0x01:  mov    %esp,%ebp
08684b25 +0x03:  sub    $0x38,%esp
08684b28 +0x06:  mov    0xc(%ebp),%eax
08684b2b +0x09:  mov    %ax,-0xc(%ebp)
08684b2f +0x0d:  movzwl -0xc(%ebp),%edx
08684b33 +0x11:  mov    0x8(%ebp),%eax
08684b36 +0x14:  mov    (%eax),%eax
08684b38 +0x16:  mov    0x14(%ebp),%ecx
08684b3b +0x19:  mov    %ecx,0x10(%esp)
08684b3f +0x1d:  mov    0x10(%ebp),%ecx
08684b42 +0x20:  mov    %ecx,0xc(%esp)
08684b46 +0x24:  mov    %edx,0x8(%esp)
08684b4a +0x28:  movl   $"MapClear,%d,%d,%d",0x4(%esp)
08684b52 +0x30:  mov    %eax,(%esp)
08684b55 +0x33:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684b5a +0x38:  leave
08684b5b +0x39:  ret
```

## 反编译 C

```c
// cUserHistoryLog::MapClear @ 0x8684b22

/* cUserHistoryLog::MapClear(unsigned short, int, int) */

void __thiscall
cUserHistoryLog::MapClear(cUserHistoryLog *this,ushort param_1,int param_2,int param_3)

{
  CUser::LogHistory(*(CUser **)this,"MapClear,%d,%d,%d",(uint)param_1,param_2,param_3);
  return;
}
```
