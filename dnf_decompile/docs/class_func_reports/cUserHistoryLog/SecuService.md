# SecuService

`_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION`

`cUserHistoryLog::SecuService(ENUM_SECU_SERVICE_TYPE, ENUM_SECU_SERVICE_ACTION)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868479c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868479c  _ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION
#           cUserHistoryLog::SecuService(ENUM_SECU_SERVICE_TYPE, ENUM_SECU_SERVICE_ACTION)
# range [0x0868479c, 0x086847e9]
0868479c +0x00:  push   %ebp
0868479d +0x01:  mov    %esp,%ebp
0868479f +0x03:  sub    $0x18,%esp
086847a2 +0x06:  cmpl   $0x0,0xc(%ebp)
086847a6 +0x0a:  jne    086847c6 <+0x2a>
086847a8 +0x0c:  mov    0x10(%ebp),%edx
086847ab +0x0f:  mov    0x8(%ebp),%eax
086847ae +0x12:  mov    (%eax),%eax
086847b0 +0x14:  mov    %edx,0x8(%esp)
086847b4 +0x18:  movl   $"s_gob,%d",0x4(%esp)
086847bc +0x20:  mov    %eax,(%esp)
086847bf +0x23:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086847c4 +0x28:  jmp    086847e8 <+0x4c>
086847c6 +0x2a:  cmpl   $0x1,0xc(%ebp)
086847ca +0x2e:  jne    086847e8 <+0x4c>
086847cc +0x30:  mov    0x10(%ebp),%edx
086847cf +0x33:  mov    0x8(%ebp),%eax
086847d2 +0x36:  mov    (%eax),%eax
086847d4 +0x38:  mov    %edx,0x8(%esp)
086847d8 +0x3c:  movl   $"s_card,%d",0x4(%esp)
086847e0 +0x44:  mov    %eax,(%esp)
086847e3 +0x47:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086847e8 +0x4c:  leave
086847e9 +0x4d:  ret
```

## 反编译 C

```c
// cUserHistoryLog::SecuService @ 0x868479c

/* cUserHistoryLog::SecuService(ENUM_SECU_SERVICE_TYPE, ENUM_SECU_SERVICE_ACTION) */

void __thiscall cUserHistoryLog::SecuService(cUserHistoryLog *this,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    CUser::LogHistory(*(CUser **)this,"s_gob,%d",param_3);
  }
  else if (param_2 == 1) {
    CUser::LogHistory(*(CUser **)this,"s_card,%d",param_3);
  }
  return;
}
```
