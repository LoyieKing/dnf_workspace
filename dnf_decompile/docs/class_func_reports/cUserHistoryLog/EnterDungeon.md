# EnterDungeon

`_ZN15cUserHistoryLog12EnterDungeonEiiiPKcci`

`cUserHistoryLog::EnterDungeon(int, int, int, char const*, char, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868491a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868491a  _ZN15cUserHistoryLog12EnterDungeonEiiiPKcci
#           cUserHistoryLog::EnterDungeon(int, int, int, char const*, char, int)
# range [0x0868491a, 0x08684967]
0868491a +0x00:  push   %ebp
0868491b +0x01:  mov    %esp,%ebp
0868491d +0x03:  sub    $0x38,%esp
08684920 +0x06:  mov    0x1c(%ebp),%eax
08684923 +0x09:  mov    %al,-0xc(%ebp)
08684926 +0x0c:  movsbl -0xc(%ebp),%edx
0868492a +0x10:  mov    0x8(%ebp),%eax
0868492d +0x13:  mov    (%eax),%eax
0868492f +0x15:  mov    0x20(%ebp),%ecx
08684932 +0x18:  mov    %ecx,0x1c(%esp)
08684936 +0x1c:  mov    %edx,0x18(%esp)
0868493a +0x20:  mov    0x18(%ebp),%edx
0868493d +0x23:  mov    %edx,0x14(%esp)
08684941 +0x27:  mov    0x14(%ebp),%edx
08684944 +0x2a:  mov    %edx,0x10(%esp)
08684948 +0x2e:  mov    0x10(%ebp),%edx
0868494b +0x31:  mov    %edx,0xc(%esp)
0868494f +0x35:  mov    0xc(%ebp),%edx
08684952 +0x38:  mov    %edx,0x8(%esp)
08684956 +0x3c:  movl   $"AdvanceDungeonEnter,%d,%d,%d,%s,%d,%d",0x4(%esp)
0868495e +0x44:  mov    %eax,(%esp)
08684961 +0x47:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684966 +0x4c:  leave
08684967 +0x4d:  ret
```

## 反编译 C

```c
// cUserHistoryLog::EnterDungeon @ 0x868491a

/* cUserHistoryLog::EnterDungeon(int, int, int, char const*, char, int) */

void __thiscall
cUserHistoryLog::EnterDungeon
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,char *param_4,char param_5,
          int param_6)

{
  CUser::LogHistory(*(CUser **)this,"AdvanceDungeonEnter,%d,%d,%d,%s,%d,%d",param_1,param_2,param_3,
                    param_4,(int)param_5,param_6);
  return;
}
```
