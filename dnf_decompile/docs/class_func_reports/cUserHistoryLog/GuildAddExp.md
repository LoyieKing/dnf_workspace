# GuildAddExp

`_ZN15cUserHistoryLog11GuildAddExpEjPKcji`

`cUserHistoryLog::GuildAddExp(unsigned int, char const*, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685bb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685bb8  _ZN15cUserHistoryLog11GuildAddExpEjPKcji
#           cUserHistoryLog::GuildAddExp(unsigned int, char const*, unsigned int, int)
# range [0x08685bb8, 0x08685c4d]
08685bb8 +0x00:  push   %ebp
08685bb9 +0x01:  mov    %esp,%ebp
08685bbb +0x03:  sub    $0x78,%esp
08685bbe +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08685bc5 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08685bca +0x12:  mov    %eax,-0x1c(%ebp)
08685bcd +0x15:  lea    -0x48(%ebp),%eax
08685bd0 +0x18:  mov    %eax,0x4(%esp)
08685bd4 +0x1c:  lea    -0x1c(%ebp),%eax
08685bd7 +0x1f:  mov    %eax,(%esp)
08685bda +0x22:  call   0807e360 <_init+0xc58>
08685bdf +0x27:  mov    %eax,-0x18(%ebp)
08685be2 +0x2a:  mov    -0x18(%ebp),%eax
08685be5 +0x2d:  mov    0x14(%eax),%eax
08685be8 +0x30:  mov    %eax,-0x14(%ebp)
08685beb +0x33:  mov    -0x18(%ebp),%eax
08685bee +0x36:  mov    0x10(%eax),%eax
08685bf1 +0x39:  add    $0x1,%eax
08685bf4 +0x3c:  mov    %eax,-0x10(%ebp)
08685bf7 +0x3f:  mov    -0x18(%ebp),%eax
08685bfa +0x42:  mov    0xc(%eax),%eax
08685bfd +0x45:  mov    %eax,-0xc(%ebp)
08685c00 +0x48:  mov    -0x14(%ebp),%eax
08685c03 +0x4b:  lea    0x76c(%eax),%ecx
08685c09 +0x51:  mov    0x8(%ebp),%eax
08685c0c +0x54:  mov    (%eax),%eax
08685c0e +0x56:  mov    0x18(%ebp),%edx
08685c11 +0x59:  mov    %edx,0x20(%esp)
08685c15 +0x5d:  mov    0x14(%ebp),%edx
08685c18 +0x60:  mov    %edx,0x1c(%esp)
08685c1c +0x64:  mov    0x10(%ebp),%edx
08685c1f +0x67:  mov    %edx,0x18(%esp)
08685c23 +0x6b:  mov    0xc(%ebp),%edx
08685c26 +0x6e:  mov    %edx,0x14(%esp)
08685c2a +0x72:  mov    -0xc(%ebp),%edx
08685c2d +0x75:  mov    %edx,0x10(%esp)
08685c31 +0x79:  mov    -0x10(%ebp),%edx
08685c34 +0x7c:  mov    %edx,0xc(%esp)
08685c38 +0x80:  mov    %ecx,0x8(%esp)
08685c3c +0x84:  movl   $"GuildAddExp,\"%d/%d/%d\",%d,\"%s\",%d,%d",0x4(%esp)
08685c44 +0x8c:  mov    %eax,(%esp)
08685c47 +0x8f:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685c4c +0x94:  leave
08685c4d +0x95:  ret
```

## 反编译 C

```c
// cUserHistoryLog::GuildAddExp @ 0x8685bb8

/* cUserHistoryLog::GuildAddExp(unsigned int, char const*, unsigned int, int) */

void __thiscall
cUserHistoryLog::GuildAddExp
          (cUserHistoryLog *this,uint param_1,char *param_2,uint param_3,int param_4)

{
  tm local_4c;
  time_t local_20;
  tm *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_20,&local_4c);
  local_18 = local_1c->tm_year;
  local_14 = local_1c->tm_mon + 1;
  local_10 = local_1c->tm_mday;
  CUser::LogHistory(*(CUser **)this,"GuildAddExp,\"%d/%d/%d\",%d,\"%s\",%d,%d",local_18 + 0x76c,
                    local_14,local_10,param_1,param_2,param_3,param_4);
  return;
}
```
