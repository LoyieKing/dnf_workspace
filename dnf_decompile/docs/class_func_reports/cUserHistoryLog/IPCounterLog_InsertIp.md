# IPCounterLog_InsertIp

`_ZN15cUserHistoryLog21IPCounterLog_InsertIpEiiPc`

`cUserHistoryLog::IPCounterLog_InsertIp(int, int, char*)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685d9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685d9c  _ZN15cUserHistoryLog21IPCounterLog_InsertIpEiiPc
#           cUserHistoryLog::IPCounterLog_InsertIp(int, int, char*)
# range [0x08685d9c, 0x08685dcd]
08685d9c +0x00:  push   %ebp
08685d9d +0x01:  mov    %esp,%ebp
08685d9f +0x03:  sub    $0x28,%esp
08685da2 +0x06:  mov    0x8(%ebp),%eax
08685da5 +0x09:  mov    (%eax),%eax
08685da7 +0x0b:  mov    0x14(%ebp),%edx
08685daa +0x0e:  mov    %edx,0x10(%esp)
08685dae +0x12:  mov    0x10(%ebp),%edx
08685db1 +0x15:  mov    %edx,0xc(%esp)
08685db5 +0x19:  mov    0xc(%ebp),%edx
08685db8 +0x1c:  mov    %edx,0x8(%esp)
08685dbc +0x20:  movl   $"IPCountInt,%d,%d,%s",0x4(%esp)
08685dc4 +0x28:  mov    %eax,(%esp)
08685dc7 +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685dcc +0x30:  leave
08685dcd +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::IPCounterLog_InsertIp @ 0x8685d9c

/* cUserHistoryLog::IPCounterLog_InsertIp(int, int, char*) */

void __thiscall
cUserHistoryLog::IPCounterLog_InsertIp(cUserHistoryLog *this,int param_1,int param_2,char *param_3)

{
  CUser::LogHistory(*(CUser **)this,"IPCountInt,%d,%d,%s",param_1,param_2,param_3);
  return;
}
```
