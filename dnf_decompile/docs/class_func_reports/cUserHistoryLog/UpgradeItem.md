# UpgradeItem

`_ZN15cUserHistoryLog11UpgradeItemEiiib`

`cUserHistoryLog::UpgradeItem(int, int, int, bool)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684ca0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684ca0  _ZN15cUserHistoryLog11UpgradeItemEiiib
#           cUserHistoryLog::UpgradeItem(int, int, int, bool)
# range [0x08684ca0, 0x08684d09]
08684ca0 +0x00:  push   %ebp
08684ca1 +0x01:  mov    %esp,%ebp
08684ca3 +0x03:  sub    $0x38,%esp
08684ca6 +0x06:  mov    0x18(%ebp),%eax
08684ca9 +0x09:  mov    %al,-0xc(%ebp)
08684cac +0x0c:  cmpb   $0x0,-0xc(%ebp)
08684cb0 +0x10:  je     08684cde <+0x3e>
08684cb2 +0x12:  mov    0x8(%ebp),%eax
08684cb5 +0x15:  mov    (%eax),%eax
08684cb7 +0x17:  mov    0x14(%ebp),%edx
08684cba +0x1a:  mov    %edx,0x10(%esp)
08684cbe +0x1e:  mov    0x10(%ebp),%edx
08684cc1 +0x21:  mov    %edx,0xc(%esp)
08684cc5 +0x25:  mov    0xc(%ebp),%edx
08684cc8 +0x28:  mov    %edx,0x8(%esp)
08684ccc +0x2c:  movl   $"Upgrade+,%d,%d,%d",0x4(%esp)
08684cd4 +0x34:  mov    %eax,(%esp)
08684cd7 +0x37:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684cdc +0x3c:  jmp    08684d08 <+0x68>
08684cde +0x3e:  mov    0x8(%ebp),%eax
08684ce1 +0x41:  mov    (%eax),%eax
08684ce3 +0x43:  mov    0x14(%ebp),%edx
08684ce6 +0x46:  mov    %edx,0x10(%esp)
08684cea +0x4a:  mov    0x10(%ebp),%edx
08684ced +0x4d:  mov    %edx,0xc(%esp)
08684cf1 +0x51:  mov    0xc(%ebp),%edx
08684cf4 +0x54:  mov    %edx,0x8(%esp)
08684cf8 +0x58:  movl   $"Upgrade-,%d,%d,%d",0x4(%esp)
08684d00 +0x60:  mov    %eax,(%esp)
08684d03 +0x63:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684d08 +0x68:  leave
08684d09 +0x69:  ret
```

## 反编译 C

```c
// cUserHistoryLog::UpgradeItem @ 0x8684ca0

/* cUserHistoryLog::UpgradeItem(int, int, int, bool) */

void __thiscall
cUserHistoryLog::UpgradeItem(cUserHistoryLog *this,int param_1,int param_2,int param_3,bool param_4)

{
  if (param_4) {
    CUser::LogHistory(*(CUser **)this,"Upgrade+,%d,%d,%d",param_1,param_2,param_3);
  }
  else {
    CUser::LogHistory(*(CUser **)this,"Upgrade-,%d,%d,%d",param_1,param_2,param_3);
  }
  return;
}
```
