# EnchantItem

`_ZN15cUserHistoryLog11EnchantItemEiiibPKcS1_`

`cUserHistoryLog::EnchantItem(int, int, int, bool, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684d74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684d74  _ZN15cUserHistoryLog11EnchantItemEiiibPKcS1_
#           cUserHistoryLog::EnchantItem(int, int, int, bool, char const*, char const*)
# range [0x08684d74, 0x08684df9]
08684d74 +0x00:  push   %ebp
08684d75 +0x01:  mov    %esp,%ebp
08684d77 +0x03:  sub    $0x38,%esp
08684d7a +0x06:  mov    0x18(%ebp),%eax
08684d7d +0x09:  mov    %al,-0xc(%ebp)
08684d80 +0x0c:  cmpb   $0x0,-0xc(%ebp)
08684d84 +0x10:  je     08684dc0 <+0x4c>
08684d86 +0x12:  mov    0x8(%ebp),%eax
08684d89 +0x15:  mov    (%eax),%eax
08684d8b +0x17:  mov    0x20(%ebp),%edx
08684d8e +0x1a:  mov    %edx,0x18(%esp)
08684d92 +0x1e:  mov    0x1c(%ebp),%edx
08684d95 +0x21:  mov    %edx,0x14(%esp)
08684d99 +0x25:  mov    0x14(%ebp),%edx
08684d9c +0x28:  mov    %edx,0x10(%esp)
08684da0 +0x2c:  mov    0x10(%ebp),%edx
08684da3 +0x2f:  mov    %edx,0xc(%esp)
08684da7 +0x33:  mov    0xc(%ebp),%edx
08684daa +0x36:  mov    %edx,0x8(%esp)
08684dae +0x3a:  movl   $"Enchant+,%d,%d,%d,\"%s\",\"%s\"",0x4(%esp)
08684db6 +0x42:  mov    %eax,(%esp)
08684db9 +0x45:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684dbe +0x4a:  jmp    08684df8 <+0x84>
08684dc0 +0x4c:  mov    0x8(%ebp),%eax
08684dc3 +0x4f:  mov    (%eax),%eax
08684dc5 +0x51:  mov    0x20(%ebp),%edx
08684dc8 +0x54:  mov    %edx,0x18(%esp)
08684dcc +0x58:  mov    0x1c(%ebp),%edx
08684dcf +0x5b:  mov    %edx,0x14(%esp)
08684dd3 +0x5f:  mov    0x14(%ebp),%edx
08684dd6 +0x62:  mov    %edx,0x10(%esp)
08684dda +0x66:  mov    0x10(%ebp),%edx
08684ddd +0x69:  mov    %edx,0xc(%esp)
08684de1 +0x6d:  mov    0xc(%ebp),%edx
08684de4 +0x70:  mov    %edx,0x8(%esp)
08684de8 +0x74:  movl   $"Enchant-,%d,%d,%d,\"%s\",\"%s\"",0x4(%esp)
08684df0 +0x7c:  mov    %eax,(%esp)
08684df3 +0x7f:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684df8 +0x84:  leave
08684df9 +0x85:  ret
```

## 反编译 C

```c
// cUserHistoryLog::EnchantItem @ 0x8684d74

/* cUserHistoryLog::EnchantItem(int, int, int, bool, char const*, char const*) */

void __thiscall
cUserHistoryLog::EnchantItem
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,bool param_4,char *param_5,
          char *param_6)

{
  if (param_4) {
    CUser::LogHistory(*(CUser **)this,"Enchant+,%d,%d,%d,\"%s\",\"%s\"",param_1,param_2,param_3,
                      param_5,param_6);
  }
  else {
    CUser::LogHistory(*(CUser **)this,"Enchant-,%d,%d,%d,\"%s\",\"%s\"",param_1,param_2,param_3,
                      param_5,param_6);
  }
  return;
}
```
