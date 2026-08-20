# LeaveDungeon

`_ZN15cUserHistoryLog12LeaveDungeonEPKci`

`cUserHistoryLog::LeaveDungeon(char const*, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684a42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684a42  _ZN15cUserHistoryLog12LeaveDungeonEPKci
#           cUserHistoryLog::LeaveDungeon(char const*, int)
# range [0x08684a42, 0x08684a6d]
08684a42 +0x00:  push   %ebp
08684a43 +0x01:  mov    %esp,%ebp
08684a45 +0x03:  sub    $0x18,%esp
08684a48 +0x06:  mov    0x8(%ebp),%eax
08684a4b +0x09:  mov    (%eax),%eax
08684a4d +0x0b:  mov    0x10(%ebp),%edx
08684a50 +0x0e:  mov    %edx,0xc(%esp)
08684a54 +0x12:  mov    0xc(%ebp),%edx
08684a57 +0x15:  mov    %edx,0x8(%esp)
08684a5b +0x19:  movl   $"DungeonLeave,\"%s\",%d",0x4(%esp)
08684a63 +0x21:  mov    %eax,(%esp)
08684a66 +0x24:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684a6b +0x29:  leave
08684a6c +0x2a:  ret
08684a6d +0x2b:  nop
```

## 反编译 C

```c
// cUserHistoryLog::LeaveDungeon @ 0x8684a42

/* cUserHistoryLog::LeaveDungeon(char const*, int) */

void __thiscall cUserHistoryLog::LeaveDungeon(cUserHistoryLog *this,char *param_1,int param_2)

{
  CUser::LogHistory(*(CUser **)this,"DungeonLeave,\"%s\",%d",param_1,param_2);
  return;
}
```
