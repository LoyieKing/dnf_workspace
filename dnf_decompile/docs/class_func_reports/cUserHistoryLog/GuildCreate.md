# GuildCreate

`_ZN15cUserHistoryLog11GuildCreateEjPKcj`

`cUserHistoryLog::GuildCreate(unsigned int, char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685978` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685978  _ZN15cUserHistoryLog11GuildCreateEjPKcj
#           cUserHistoryLog::GuildCreate(unsigned int, char const*, unsigned int)
# range [0x08685978, 0x08685a07]
08685978 +0x00:  push   %ebp
08685979 +0x01:  mov    %esp,%ebp
0868597b +0x03:  sub    $0x68,%esp
0868597e +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08685985 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0868598a +0x12:  mov    %eax,-0x1c(%ebp)
0868598d +0x15:  lea    -0x48(%ebp),%eax
08685990 +0x18:  mov    %eax,0x4(%esp)
08685994 +0x1c:  lea    -0x1c(%ebp),%eax
08685997 +0x1f:  mov    %eax,(%esp)
0868599a +0x22:  call   0807e360 <_init+0xc58>
0868599f +0x27:  mov    %eax,-0x18(%ebp)
086859a2 +0x2a:  mov    -0x18(%ebp),%eax
086859a5 +0x2d:  mov    0x14(%eax),%eax
086859a8 +0x30:  mov    %eax,-0x14(%ebp)
086859ab +0x33:  mov    -0x18(%ebp),%eax
086859ae +0x36:  mov    0x10(%eax),%eax
086859b1 +0x39:  add    $0x1,%eax
086859b4 +0x3c:  mov    %eax,-0x10(%ebp)
086859b7 +0x3f:  mov    -0x18(%ebp),%eax
086859ba +0x42:  mov    0xc(%eax),%eax
086859bd +0x45:  mov    %eax,-0xc(%ebp)
086859c0 +0x48:  mov    -0x14(%ebp),%eax
086859c3 +0x4b:  lea    0x76c(%eax),%ecx
086859c9 +0x51:  mov    0x8(%ebp),%eax
086859cc +0x54:  mov    (%eax),%eax
086859ce +0x56:  mov    0x14(%ebp),%edx
086859d1 +0x59:  mov    %edx,0x1c(%esp)
086859d5 +0x5d:  mov    0x10(%ebp),%edx
086859d8 +0x60:  mov    %edx,0x18(%esp)
086859dc +0x64:  mov    0xc(%ebp),%edx
086859df +0x67:  mov    %edx,0x14(%esp)
086859e3 +0x6b:  mov    -0xc(%ebp),%edx
086859e6 +0x6e:  mov    %edx,0x10(%esp)
086859ea +0x72:  mov    -0x10(%ebp),%edx
086859ed +0x75:  mov    %edx,0xc(%esp)
086859f1 +0x79:  mov    %ecx,0x8(%esp)
086859f5 +0x7d:  movl   $"GuildCreate,\"%d/%d/%d\",%d,\"%s\",%d",0x4(%esp)
086859fd +0x85:  mov    %eax,(%esp)
08685a00 +0x88:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685a05 +0x8d:  leave
08685a06 +0x8e:  ret
08685a07 +0x8f:  nop
```

## 反编译 C

```c
// cUserHistoryLog::GuildCreate @ 0x8685978

/* cUserHistoryLog::GuildCreate(unsigned int, char const*, unsigned int) */

void __thiscall
cUserHistoryLog::GuildCreate(cUserHistoryLog *this,uint param_1,char *param_2,uint param_3)

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
  CUser::LogHistory(*(CUser **)this,"GuildCreate,\"%d/%d/%d\",%d,\"%s\",%d",local_18 + 0x76c,
                    local_14,local_10,param_1,param_2,param_3);
  return;
}
```
