# EnterDungeon

`_ZN15cUserHistoryLog12EnterDungeonEPKciS1_i`

`cUserHistoryLog::EnterDungeon(char const*, int, char const*, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086849a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086849a2  _ZN15cUserHistoryLog12EnterDungeonEPKciS1_i
#           cUserHistoryLog::EnterDungeon(char const*, int, char const*, int)
# range [0x086849a2, 0x086849db]
086849a2 +0x00:  push   %ebp
086849a3 +0x01:  mov    %esp,%ebp
086849a5 +0x03:  sub    $0x28,%esp
086849a8 +0x06:  mov    0x8(%ebp),%eax
086849ab +0x09:  mov    (%eax),%eax
086849ad +0x0b:  mov    0x14(%ebp),%edx
086849b0 +0x0e:  mov    %edx,0x14(%esp)
086849b4 +0x12:  mov    0x18(%ebp),%edx
086849b7 +0x15:  mov    %edx,0x10(%esp)
086849bb +0x19:  mov    0x10(%ebp),%edx
086849be +0x1c:  mov    %edx,0xc(%esp)
086849c2 +0x20:  mov    0xc(%ebp),%edx
086849c5 +0x23:  mov    %edx,0x8(%esp)
086849c9 +0x27:  movl   $"DungeonEnter,\"%s\",%d,%d,%s",0x4(%esp)
086849d1 +0x2f:  mov    %eax,(%esp)
086849d4 +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086849d9 +0x37:  leave
086849da +0x38:  ret
086849db +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::EnterDungeon @ 0x86849a2

/* cUserHistoryLog::EnterDungeon(char const*, int, char const*, int) */

void __thiscall
cUserHistoryLog::EnterDungeon
          (cUserHistoryLog *this,char *param_1,int param_2,char *param_3,int param_4)

{
  CUser::LogHistory(*(CUser **)this,"DungeonEnter,\"%s\",%d,%d,%s",param_1,param_2,param_4,param_3);
  return;
}
```
