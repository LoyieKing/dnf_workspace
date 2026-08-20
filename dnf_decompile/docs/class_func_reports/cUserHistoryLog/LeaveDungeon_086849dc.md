# LeaveDungeon

`_ZN15cUserHistoryLog12LeaveDungeonEPKciS1_i`

`cUserHistoryLog::LeaveDungeon(char const*, int, char const*, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086849dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086849dc  _ZN15cUserHistoryLog12LeaveDungeonEPKciS1_i
#           cUserHistoryLog::LeaveDungeon(char const*, int, char const*, int)
# range [0x086849dc, 0x08684a15]
086849dc +0x00:  push   %ebp
086849dd +0x01:  mov    %esp,%ebp
086849df +0x03:  sub    $0x28,%esp
086849e2 +0x06:  mov    0x8(%ebp),%eax
086849e5 +0x09:  mov    (%eax),%eax
086849e7 +0x0b:  mov    0x14(%ebp),%edx
086849ea +0x0e:  mov    %edx,0x14(%esp)
086849ee +0x12:  mov    0x18(%ebp),%edx
086849f1 +0x15:  mov    %edx,0x10(%esp)
086849f5 +0x19:  mov    0x10(%ebp),%edx
086849f8 +0x1c:  mov    %edx,0xc(%esp)
086849fc +0x20:  mov    0xc(%ebp),%edx
086849ff +0x23:  mov    %edx,0x8(%esp)
08684a03 +0x27:  movl   $"DungeonLeave,\"%s\",%d,%d,%s",0x4(%esp)
08684a0b +0x2f:  mov    %eax,(%esp)
08684a0e +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684a13 +0x37:  leave
08684a14 +0x38:  ret
08684a15 +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::LeaveDungeon @ 0x86849dc

/* cUserHistoryLog::LeaveDungeon(char const*, int, char const*, int) */

void __thiscall
cUserHistoryLog::LeaveDungeon
          (cUserHistoryLog *this,char *param_1,int param_2,char *param_3,int param_4)

{
  CUser::LogHistory(*(CUser **)this,"DungeonLeave,\"%s\",%d,%d,%s",param_1,param_2,param_4,param_3);
  return;
}
```
