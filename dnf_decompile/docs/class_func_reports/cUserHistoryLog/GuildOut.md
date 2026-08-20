# GuildOut

`_ZN15cUserHistoryLog8GuildOutEjPKcjct`

`cUserHistoryLog::GuildOut(unsigned int, char const*, unsigned int, char, unsigned short)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08685b00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08685b00  _ZN15cUserHistoryLog8GuildOutEjPKcjct
#           cUserHistoryLog::GuildOut(unsigned int, char const*, unsigned int, char, unsigned short)
# range [0x08685b00, 0x08685bb7]
08685b00 +0x00:  push   %ebp
08685b01 +0x01:  mov    %esp,%ebp
08685b03 +0x03:  push   %ebx
08685b04 +0x04:  sub    $0x84,%esp
08685b0a +0x0a:  mov    0x18(%ebp),%edx
08685b0d +0x0d:  mov    0x1c(%ebp),%eax
08685b10 +0x10:  mov    %dl,-0x4c(%ebp)
08685b13 +0x13:  mov    %ax,-0x50(%ebp)
08685b17 +0x17:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08685b1e +0x1e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08685b23 +0x23:  mov    %eax,-0x1c(%ebp)
08685b26 +0x26:  lea    -0x48(%ebp),%eax
08685b29 +0x29:  mov    %eax,0x4(%esp)
08685b2d +0x2d:  lea    -0x1c(%ebp),%eax
08685b30 +0x30:  mov    %eax,(%esp)
08685b33 +0x33:  call   0807e360 <_init+0xc58>
08685b38 +0x38:  mov    %eax,-0x18(%ebp)
08685b3b +0x3b:  mov    -0x18(%ebp),%eax
08685b3e +0x3e:  mov    0x14(%eax),%eax
08685b41 +0x41:  mov    %eax,-0x14(%ebp)
08685b44 +0x44:  mov    -0x18(%ebp),%eax
08685b47 +0x47:  mov    0x10(%eax),%eax
08685b4a +0x4a:  add    $0x1,%eax
08685b4d +0x4d:  mov    %eax,-0x10(%ebp)
08685b50 +0x50:  mov    -0x18(%ebp),%eax
08685b53 +0x53:  mov    0xc(%eax),%eax
08685b56 +0x56:  mov    %eax,-0xc(%ebp)
08685b59 +0x59:  movzwl -0x50(%ebp),%ecx
08685b5d +0x5d:  movsbl -0x4c(%ebp),%edx
08685b61 +0x61:  mov    -0x14(%ebp),%eax
08685b64 +0x64:  lea    0x76c(%eax),%ebx
08685b6a +0x6a:  mov    0x8(%ebp),%eax
08685b6d +0x6d:  mov    (%eax),%eax
08685b6f +0x6f:  mov    %ecx,0x24(%esp)
08685b73 +0x73:  mov    %edx,0x20(%esp)
08685b77 +0x77:  mov    0x14(%ebp),%edx
08685b7a +0x7a:  mov    %edx,0x1c(%esp)
08685b7e +0x7e:  mov    0x10(%ebp),%edx
08685b81 +0x81:  mov    %edx,0x18(%esp)
08685b85 +0x85:  mov    0xc(%ebp),%edx
08685b88 +0x88:  mov    %edx,0x14(%esp)
08685b8c +0x8c:  mov    -0xc(%ebp),%edx
08685b8f +0x8f:  mov    %edx,0x10(%esp)
08685b93 +0x93:  mov    -0x10(%ebp),%edx
08685b96 +0x96:  mov    %edx,0xc(%esp)
08685b9a +0x9a:  mov    %ebx,0x8(%esp)
08685b9e +0x9e:  movl   $"GuildOut,\"%d/%d/%d\",%d,\"%s\",%d,%d,%d",0x4(%esp)
08685ba6 +0xa6:  mov    %eax,(%esp)
08685ba9 +0xa9:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685bae +0xae:  add    $0x84,%esp
08685bb4 +0xb4:  pop    %ebx
08685bb5 +0xb5:  pop    %ebp
08685bb6 +0xb6:  ret
08685bb7 +0xb7:  nop
```

## 反编译 C

```c
// cUserHistoryLog::GuildOut @ 0x8685b00

/* cUserHistoryLog::GuildOut(unsigned int, char const*, unsigned int, char, unsigned short) */

void __thiscall
cUserHistoryLog::GuildOut
          (cUserHistoryLog *this,uint param_1,char *param_2,uint param_3,char param_4,ushort param_5
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
  CUser::LogHistory(*(CUser **)this,"GuildOut,\"%d/%d/%d\",%d,\"%s\",%d,%d,%d",local_18 + 0x76c,
                    local_14,local_10,param_1,param_2,param_3,(int)param_4,(uint)param_5);
  return;
}
```
