# AbnormalUser

`_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii`

`cUserHistoryLog::AbnormalUser(ENUM_ABNORMAL_USER_LOG_TYPE, unsigned short, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686df4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686df4  _ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii
#           cUserHistoryLog::AbnormalUser(ENUM_ABNORMAL_USER_LOG_TYPE, unsigned short, int, int)
# range [0x08686df4, 0x08686e39]
08686df4 +0x00:  push   %ebp
08686df5 +0x01:  mov    %esp,%ebp
08686df7 +0x03:  push   %ebx
08686df8 +0x04:  sub    $0x34,%esp
08686dfb +0x07:  mov    0x10(%ebp),%eax
08686dfe +0x0a:  mov    %ax,-0xc(%ebp)
08686e02 +0x0e:  movzwl -0xc(%ebp),%ecx
08686e06 +0x12:  mov    0xc(%ebp),%edx
08686e09 +0x15:  mov    0x8(%ebp),%eax
08686e0c +0x18:  mov    (%eax),%eax
08686e0e +0x1a:  mov    0x18(%ebp),%ebx
08686e11 +0x1d:  mov    %ebx,0x14(%esp)
08686e15 +0x21:  mov    0x14(%ebp),%ebx
08686e18 +0x24:  mov    %ebx,0x10(%esp)
08686e1c +0x28:  mov    %ecx,0xc(%esp)
08686e20 +0x2c:  mov    %edx,0x8(%esp)
08686e24 +0x30:  movl   $"AbnormalUser,%u,%hu,%d,%d",0x4(%esp)
08686e2c +0x38:  mov    %eax,(%esp)
08686e2f +0x3b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686e34 +0x40:  add    $0x34,%esp
08686e37 +0x43:  pop    %ebx
08686e38 +0x44:  pop    %ebp
08686e39 +0x45:  ret
```

## 反编译 C

```c
// cUserHistoryLog::AbnormalUser @ 0x8686df4

/* cUserHistoryLog::AbnormalUser(ENUM_ABNORMAL_USER_LOG_TYPE, unsigned short, int, int) */

void __thiscall
cUserHistoryLog::AbnormalUser
          (cUserHistoryLog *this,undefined4 param_2,uint param_3,undefined4 param_4,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"AbnormalUser,%u,%hu,%d,%d",param_2,param_3 & 0xffff,param_4,
                    param_5);
  return;
}
```
