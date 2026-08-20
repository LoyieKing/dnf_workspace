# GuildJoin

`_ZN15cUserHistoryLog9GuildJoinEjPKcjtc`

`cUserHistoryLog::GuildJoin(unsigned int, char const*, unsigned int, unsigned short, char)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685a48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685a48  _ZN15cUserHistoryLog9GuildJoinEjPKcjtc
#           cUserHistoryLog::GuildJoin(unsigned int, char const*, unsigned int, unsigned short, char)
# range [0x08685a48, 0x08685aff]
08685a48 +0x00:  push   %ebp
08685a49 +0x01:  mov    %esp,%ebp
08685a4b +0x03:  push   %ebx
08685a4c +0x04:  sub    $0x84,%esp
08685a52 +0x0a:  mov    0x18(%ebp),%edx
08685a55 +0x0d:  mov    0x1c(%ebp),%eax
08685a58 +0x10:  mov    %dx,-0x4c(%ebp)
08685a5c +0x14:  mov    %al,-0x50(%ebp)
08685a5f +0x17:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08685a66 +0x1e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08685a6b +0x23:  mov    %eax,-0x1c(%ebp)
08685a6e +0x26:  lea    -0x48(%ebp),%eax
08685a71 +0x29:  mov    %eax,0x4(%esp)
08685a75 +0x2d:  lea    -0x1c(%ebp),%eax
08685a78 +0x30:  mov    %eax,(%esp)
08685a7b +0x33:  call   0807e360 <_init+0xc58>
08685a80 +0x38:  mov    %eax,-0x18(%ebp)
08685a83 +0x3b:  mov    -0x18(%ebp),%eax
08685a86 +0x3e:  mov    0x14(%eax),%eax
08685a89 +0x41:  mov    %eax,-0x14(%ebp)
08685a8c +0x44:  mov    -0x18(%ebp),%eax
08685a8f +0x47:  mov    0x10(%eax),%eax
08685a92 +0x4a:  add    $0x1,%eax
08685a95 +0x4d:  mov    %eax,-0x10(%ebp)
08685a98 +0x50:  mov    -0x18(%ebp),%eax
08685a9b +0x53:  mov    0xc(%eax),%eax
08685a9e +0x56:  mov    %eax,-0xc(%ebp)
08685aa1 +0x59:  movsbl -0x50(%ebp),%ecx
08685aa5 +0x5d:  movzwl -0x4c(%ebp),%edx
08685aa9 +0x61:  mov    -0x14(%ebp),%eax
08685aac +0x64:  lea    0x76c(%eax),%ebx
08685ab2 +0x6a:  mov    0x8(%ebp),%eax
08685ab5 +0x6d:  mov    (%eax),%eax
08685ab7 +0x6f:  mov    %ecx,0x24(%esp)
08685abb +0x73:  mov    %edx,0x20(%esp)
08685abf +0x77:  mov    0x14(%ebp),%edx
08685ac2 +0x7a:  mov    %edx,0x1c(%esp)
08685ac6 +0x7e:  mov    0x10(%ebp),%edx
08685ac9 +0x81:  mov    %edx,0x18(%esp)
08685acd +0x85:  mov    0xc(%ebp),%edx
08685ad0 +0x88:  mov    %edx,0x14(%esp)
08685ad4 +0x8c:  mov    -0xc(%ebp),%edx
08685ad7 +0x8f:  mov    %edx,0x10(%esp)
08685adb +0x93:  mov    -0x10(%ebp),%edx
08685ade +0x96:  mov    %edx,0xc(%esp)
08685ae2 +0x9a:  mov    %ebx,0x8(%esp)
08685ae6 +0x9e:  movl   $"GuildJoin,\"%d/%d/%d\",%d,\"%s\",%d,%d,%d",0x4(%esp)
08685aee +0xa6:  mov    %eax,(%esp)
08685af1 +0xa9:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685af6 +0xae:  add    $0x84,%esp
08685afc +0xb4:  pop    %ebx
08685afd +0xb5:  pop    %ebp
08685afe +0xb6:  ret
08685aff +0xb7:  nop
```

## 反编译 C

```c
// cUserHistoryLog::GuildJoin @ 0x8685a48

/* cUserHistoryLog::GuildJoin(unsigned int, char const*, unsigned int, unsigned short, char) */

void __thiscall
cUserHistoryLog::GuildJoin
          (cUserHistoryLog *this,uint param_1,char *param_2,uint param_3,ushort param_4,char param_5
          )

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
  CUser::LogHistory(*(CUser **)this,"GuildJoin,\"%d/%d/%d\",%d,\"%s\",%d,%d,%d",local_18 + 0x76c,
                    local_14,local_10,param_1,param_2,param_3,(uint)param_4,(int)param_5);
  return;
}
```
