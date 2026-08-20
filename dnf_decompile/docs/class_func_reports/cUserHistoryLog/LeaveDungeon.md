# LeaveDungeon

`_ZN15cUserHistoryLog12LeaveDungeonEiiPKci`

`cUserHistoryLog::LeaveDungeon(int, int, char const*, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684968` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684968  _ZN15cUserHistoryLog12LeaveDungeonEiiPKci
#           cUserHistoryLog::LeaveDungeon(int, int, char const*, int)
# range [0x08684968, 0x086849a1]
08684968 +0x00:  push   %ebp
08684969 +0x01:  mov    %esp,%ebp
0868496b +0x03:  sub    $0x28,%esp
0868496e +0x06:  mov    0x8(%ebp),%eax
08684971 +0x09:  mov    (%eax),%eax
08684973 +0x0b:  mov    0x14(%ebp),%edx
08684976 +0x0e:  mov    %edx,0x14(%esp)
0868497a +0x12:  mov    0x18(%ebp),%edx
0868497d +0x15:  mov    %edx,0x10(%esp)
08684981 +0x19:  mov    0x10(%ebp),%edx
08684984 +0x1c:  mov    %edx,0xc(%esp)
08684988 +0x20:  mov    0xc(%ebp),%edx
0868498b +0x23:  mov    %edx,0x8(%esp)
0868498f +0x27:  movl   $"DungeonLeave,%d,%d,%d,%s",0x4(%esp)
08684997 +0x2f:  mov    %eax,(%esp)
0868499a +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868499f +0x37:  leave
086849a0 +0x38:  ret
086849a1 +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::LeaveDungeon @ 0x8684968

/* cUserHistoryLog::LeaveDungeon(int, int, char const*, int) */

void __thiscall
cUserHistoryLog::LeaveDungeon
          (cUserHistoryLog *this,int param_1,int param_2,char *param_3,int param_4)

{
  CUser::LogHistory(*(CUser **)this,"DungeonLeave,%d,%d,%d,%s",param_1,param_2,param_4,param_3);
  return;
}
```
