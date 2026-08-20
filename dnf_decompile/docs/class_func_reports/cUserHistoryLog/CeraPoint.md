# CeraPoint

`_ZN15cUserHistoryLog9CeraPointE23ENUM_CERAPOINT_LOG_TYPEj`

`cUserHistoryLog::CeraPoint(ENUM_CERAPOINT_LOG_TYPE, unsigned int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868593c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868593c  _ZN15cUserHistoryLog9CeraPointE23ENUM_CERAPOINT_LOG_TYPEj
#           cUserHistoryLog::CeraPoint(ENUM_CERAPOINT_LOG_TYPE, unsigned int)
# range [0x0868593c, 0x08685977]
0868593c +0x00:  push   %ebp
0868593d +0x01:  mov    %esp,%ebp
0868593f +0x03:  sub    $0x28,%esp
08685942 +0x06:  mov    0x8(%ebp),%eax
08685945 +0x09:  mov    (%eax),%eax
08685947 +0x0b:  mov    %eax,(%esp)
0868594a +0x0e:  call   08692af6 <_ZN5CUser12GetCeraPointEv>  ; CUser::GetCeraPoint()
0868594f +0x13:  mov    0xc(%ebp),%ecx
08685952 +0x16:  mov    0x8(%ebp),%edx
08685955 +0x19:  mov    (%edx),%edx
08685957 +0x1b:  mov    %eax,0x10(%esp)
0868595b +0x1f:  mov    0x10(%ebp),%eax
0868595e +0x22:  mov    %eax,0xc(%esp)
08685962 +0x26:  mov    %ecx,0x8(%esp)
08685966 +0x2a:  movl   $"CeraPoint,%d,%d,%d",0x4(%esp)
0868596e +0x32:  mov    %edx,(%esp)
08685971 +0x35:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685976 +0x3a:  leave
08685977 +0x3b:  ret
```

## 反编译 C

```c
// cUserHistoryLog::CeraPoint @ 0x868593c

/* cUserHistoryLog::CeraPoint(ENUM_CERAPOINT_LOG_TYPE, unsigned int) */

void __thiscall
cUserHistoryLog::CeraPoint(cUserHistoryLog *this,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = CUser::GetCeraPoint(*(CUser **)this);
  CUser::LogHistory(*(CUser **)this,"CeraPoint,%d,%d,%d",param_2,param_3,uVar1);
  return;
}
```
