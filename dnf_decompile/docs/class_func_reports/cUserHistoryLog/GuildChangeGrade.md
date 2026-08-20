# GuildChangeGrade

`_ZN15cUserHistoryLog16GuildChangeGradeEjPKcjjhh`

`cUserHistoryLog::GuildChangeGrade(unsigned int, char const*, unsigned int, unsigned int, unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685c4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685c4e  _ZN15cUserHistoryLog16GuildChangeGradeEjPKcjjhh
#           cUserHistoryLog::GuildChangeGrade(unsigned int, char const*, unsigned int, unsigned int, unsigned char, unsigned char)
# range [0x08685c4e, 0x08685d0b]
08685c4e +0x00:  push   %ebp
08685c4f +0x01:  mov    %esp,%ebp
08685c51 +0x03:  push   %ebx
08685c52 +0x04:  sub    $0x84,%esp
08685c58 +0x0a:  mov    0x1c(%ebp),%edx
08685c5b +0x0d:  mov    0x20(%ebp),%eax
08685c5e +0x10:  mov    %dl,-0x4c(%ebp)
08685c61 +0x13:  mov    %al,-0x50(%ebp)
08685c64 +0x16:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08685c6b +0x1d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08685c70 +0x22:  mov    %eax,-0x1c(%ebp)
08685c73 +0x25:  lea    -0x48(%ebp),%eax
08685c76 +0x28:  mov    %eax,0x4(%esp)
08685c7a +0x2c:  lea    -0x1c(%ebp),%eax
08685c7d +0x2f:  mov    %eax,(%esp)
08685c80 +0x32:  call   0807e360 <_init+0xc58>
08685c85 +0x37:  mov    %eax,-0x18(%ebp)
08685c88 +0x3a:  mov    -0x18(%ebp),%eax
08685c8b +0x3d:  mov    0x14(%eax),%eax
08685c8e +0x40:  mov    %eax,-0x14(%ebp)
08685c91 +0x43:  mov    -0x18(%ebp),%eax
08685c94 +0x46:  mov    0x10(%eax),%eax
08685c97 +0x49:  add    $0x1,%eax
08685c9a +0x4c:  mov    %eax,-0x10(%ebp)
08685c9d +0x4f:  mov    -0x18(%ebp),%eax
08685ca0 +0x52:  mov    0xc(%eax),%eax
08685ca3 +0x55:  mov    %eax,-0xc(%ebp)
08685ca6 +0x58:  movzbl -0x50(%ebp),%ecx
08685caa +0x5c:  movzbl -0x4c(%ebp),%edx
08685cae +0x60:  mov    -0x14(%ebp),%eax
08685cb1 +0x63:  lea    0x76c(%eax),%ebx
08685cb7 +0x69:  mov    0x8(%ebp),%eax
08685cba +0x6c:  mov    (%eax),%eax
08685cbc +0x6e:  mov    %ecx,0x28(%esp)
08685cc0 +0x72:  mov    %edx,0x24(%esp)
08685cc4 +0x76:  mov    0x18(%ebp),%edx
08685cc7 +0x79:  mov    %edx,0x20(%esp)
08685ccb +0x7d:  mov    0x14(%ebp),%edx
08685cce +0x80:  mov    %edx,0x1c(%esp)
08685cd2 +0x84:  mov    0x10(%ebp),%edx
08685cd5 +0x87:  mov    %edx,0x18(%esp)
08685cd9 +0x8b:  mov    0xc(%ebp),%edx
08685cdc +0x8e:  mov    %edx,0x14(%esp)
08685ce0 +0x92:  mov    -0xc(%ebp),%edx
08685ce3 +0x95:  mov    %edx,0x10(%esp)
08685ce7 +0x99:  mov    -0x10(%ebp),%edx
08685cea +0x9c:  mov    %edx,0xc(%esp)
08685cee +0xa0:  mov    %ebx,0x8(%esp)
08685cf2 +0xa4:  movl   $"GuildChangeGrade,\"%d/%d/%d\",%d,\"%s\",%d,%d,%d,%d",0x4(%esp)
08685cfa +0xac:  mov    %eax,(%esp)
08685cfd +0xaf:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685d02 +0xb4:  add    $0x84,%esp
08685d08 +0xba:  pop    %ebx
08685d09 +0xbb:  pop    %ebp
08685d0a +0xbc:  ret
08685d0b +0xbd:  nop
```

## 反编译 C

```c
// cUserHistoryLog::GuildChangeGrade @ 0x8685c4e

/* cUserHistoryLog::GuildChangeGrade(unsigned int, char const*, unsigned int, unsigned int, unsigned
   char, unsigned char) */

void __thiscall
cUserHistoryLog::GuildChangeGrade
          (cUserHistoryLog *this,uint param_1,char *param_2,uint param_3,uint param_4,uchar param_5,
          uchar param_6)

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
  CUser::LogHistory(*(CUser **)this,"GuildChangeGrade,\"%d/%d/%d\",%d,\"%s\",%d,%d,%d,%d",
                    local_18 + 0x76c,local_14,local_10,param_1,param_2,param_3,param_4,(uint)param_5
                    ,(uint)param_6);
  return;
}
```
