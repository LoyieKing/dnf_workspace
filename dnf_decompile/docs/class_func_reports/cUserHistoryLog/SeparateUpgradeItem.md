# SeparateUpgradeItem

`_ZN15cUserHistoryLog19SeparateUpgradeItemEiiib`

`cUserHistoryLog::SeparateUpgradeItem(int, int, int, bool)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684d0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684d0a  _ZN15cUserHistoryLog19SeparateUpgradeItemEiiib
#           cUserHistoryLog::SeparateUpgradeItem(int, int, int, bool)
# range [0x08684d0a, 0x08684d73]
08684d0a +0x00:  push   %ebp
08684d0b +0x01:  mov    %esp,%ebp
08684d0d +0x03:  sub    $0x38,%esp
08684d10 +0x06:  mov    0x18(%ebp),%eax
08684d13 +0x09:  mov    %al,-0xc(%ebp)
08684d16 +0x0c:  cmpb   $0x0,-0xc(%ebp)
08684d1a +0x10:  je     08684d48 <+0x3e>
08684d1c +0x12:  mov    0x8(%ebp),%eax
08684d1f +0x15:  mov    (%eax),%eax
08684d21 +0x17:  mov    0x14(%ebp),%edx
08684d24 +0x1a:  mov    %edx,0x10(%esp)
08684d28 +0x1e:  mov    0x10(%ebp),%edx
08684d2b +0x21:  mov    %edx,0xc(%esp)
08684d2f +0x25:  mov    0xc(%ebp),%edx
08684d32 +0x28:  mov    %edx,0x8(%esp)
08684d36 +0x2c:  movl   $"UpgradeSeparate+,%d,%d,%d",0x4(%esp)
08684d3e +0x34:  mov    %eax,(%esp)
08684d41 +0x37:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684d46 +0x3c:  jmp    08684d72 <+0x68>
08684d48 +0x3e:  mov    0x8(%ebp),%eax
08684d4b +0x41:  mov    (%eax),%eax
08684d4d +0x43:  mov    0x14(%ebp),%edx
08684d50 +0x46:  mov    %edx,0x10(%esp)
08684d54 +0x4a:  mov    0x10(%ebp),%edx
08684d57 +0x4d:  mov    %edx,0xc(%esp)
08684d5b +0x51:  mov    0xc(%ebp),%edx
08684d5e +0x54:  mov    %edx,0x8(%esp)
08684d62 +0x58:  movl   $"UpgradeSeparate-,%d,%d,%d",0x4(%esp)
08684d6a +0x60:  mov    %eax,(%esp)
08684d6d +0x63:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684d72 +0x68:  leave
08684d73 +0x69:  ret
```

## 反编译 C

```c
// cUserHistoryLog::SeparateUpgradeItem @ 0x8684d0a

/* cUserHistoryLog::SeparateUpgradeItem(int, int, int, bool) */

void __thiscall
cUserHistoryLog::SeparateUpgradeItem
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,bool param_4)

{
  if (param_4) {
    CUser::LogHistory(*(CUser **)this,"UpgradeSeparate+,%d,%d,%d",param_1,param_2,param_3);
  }
  else {
    CUser::LogHistory(*(CUser **)this,"UpgradeSeparate-,%d,%d,%d",param_1,param_2,param_3);
  }
  return;
}
```
