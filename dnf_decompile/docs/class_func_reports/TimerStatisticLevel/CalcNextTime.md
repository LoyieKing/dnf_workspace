# CalcNextTime

`_ZN19TimerStatisticLevel12CalcNextTimeEv`

`TimerStatisticLevel::CalcNextTime()`

| 类 | 地址 |
|---|---|
| `TimerStatisticLevel` | `0x0863591a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863591a  _ZN19TimerStatisticLevel12CalcNextTimeEv
#           TimerStatisticLevel::CalcNextTime()
# range [0x0863591a, 0x08635a2b]
0863591a +0x000:  push   %ebp
0863591b +0x001:  mov    %esp,%ebp
0863591d +0x003:  sub    $0x88,%esp
08635923 +0x009:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0863592a +0x010:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0863592f +0x015:  mov    %eax,-0x18(%ebp)
08635932 +0x018:  lea    -0x44(%ebp),%eax
08635935 +0x01b:  mov    %eax,0x4(%esp)
08635939 +0x01f:  lea    -0x18(%ebp),%eax
0863593c +0x022:  mov    %eax,(%esp)
0863593f +0x025:  call   0807e360 <_init+0xc58>
08635944 +0x02a:  movb   $0x0,-0xd(%ebp)
08635948 +0x02e:  mov    -0x44(%ebp),%eax
0863594b +0x031:  mov    %eax,-0x70(%ebp)
0863594e +0x034:  mov    -0x40(%ebp),%eax
08635951 +0x037:  mov    %eax,-0x6c(%ebp)
08635954 +0x03a:  mov    -0x3c(%ebp),%eax
08635957 +0x03d:  mov    %eax,-0x68(%ebp)
0863595a +0x040:  mov    -0x38(%ebp),%eax
0863595d +0x043:  mov    %eax,-0x64(%ebp)
08635960 +0x046:  mov    -0x34(%ebp),%eax
08635963 +0x049:  mov    %eax,-0x60(%ebp)
08635966 +0x04c:  mov    -0x30(%ebp),%eax
08635969 +0x04f:  mov    %eax,-0x5c(%ebp)
0863596c +0x052:  mov    -0x2c(%ebp),%eax
0863596f +0x055:  mov    %eax,-0x58(%ebp)
08635972 +0x058:  mov    -0x28(%ebp),%eax
08635975 +0x05b:  mov    %eax,-0x54(%ebp)
08635978 +0x05e:  mov    -0x24(%ebp),%eax
0863597b +0x061:  mov    %eax,-0x50(%ebp)
0863597e +0x064:  mov    -0x20(%ebp),%eax
08635981 +0x067:  mov    %eax,-0x4c(%ebp)
08635984 +0x06a:  mov    -0x1c(%ebp),%eax
08635987 +0x06d:  mov    %eax,-0x48(%ebp)
0863598a +0x070:  movl   $0x0,-0x6c(%ebp)
08635991 +0x077:  movl   $0x0,-0x70(%ebp)
08635998 +0x07e:  movl   $0x3,-0xc(%ebp)
0863599f +0x085:  jmp    086359cc <+0xb2>
086359a1 +0x087:  mov    -0x3c(%ebp),%edx
086359a4 +0x08a:  mov    -0xc(%ebp),%eax
086359a7 +0x08d:  mov    &_ZN19TimerStatisticLevel12m_nTimeTableE(,%eax,4),%eax
086359ae +0x094:  cmp    %eax,%edx
086359b0 +0x096:  jl     086359c8 <+0xae>
086359b2 +0x098:  mov    -0xc(%ebp),%eax
086359b5 +0x09b:  add    $0x1,%eax
086359b8 +0x09e:  mov    &_ZN19TimerStatisticLevel12m_nTimeTableE(,%eax,4),%eax
086359bf +0x0a5:  mov    %eax,-0x68(%ebp)
086359c2 +0x0a8:  movb   $0x1,-0xd(%ebp)
086359c6 +0x0ac:  jmp    086359d8 <+0xbe>
086359c8 +0x0ae:  subl   $0x1,-0xc(%ebp)
086359cc +0x0b2:  mov    -0xc(%ebp),%eax
086359cf +0x0b5:  not    %eax
086359d1 +0x0b7:  shr    $0x1f,%eax
086359d4 +0x0ba:  test   %al,%al
086359d6 +0x0bc:  jne    086359a1 <+0x87>
086359d8 +0x0be:  lea    -0x70(%ebp),%eax
086359db +0x0c1:  mov    %eax,(%esp)
086359de +0x0c4:  call   0807e820 <_init+0x1118>
086359e3 +0x0c9:  mov    %eax,-0x14(%ebp)
086359e6 +0x0cc:  movzbl -0xd(%ebp),%eax
086359ea +0x0d0:  xor    $0x1,%eax
086359ed +0x0d3:  test   %al,%al
086359ef +0x0d5:  jne    086359f9 <+0xdf>
086359f1 +0x0d7:  mov    -0x18(%ebp),%eax
086359f4 +0x0da:  cmp    -0x14(%ebp),%eax
086359f7 +0x0dd:  jle    08635a18 <+0xfe>
086359f9 +0x0df:  mov    &_ZN19TimerStatisticLevel12m_nTimeTableE,%eax
086359fe +0x0e4:  mov    %eax,-0x68(%ebp)
08635a01 +0x0e7:  mov    -0x64(%ebp),%eax
08635a04 +0x0ea:  add    $0x1,%eax
08635a07 +0x0ed:  mov    %eax,-0x64(%ebp)
08635a0a +0x0f0:  lea    -0x70(%ebp),%eax
08635a0d +0x0f3:  mov    %eax,(%esp)
08635a10 +0x0f6:  call   0807e820 <_init+0x1118>
08635a15 +0x0fb:  mov    %eax,-0x14(%ebp)
08635a18 +0x0fe:  movl   $0x12c,(%esp)
08635a1f +0x105:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08635a24 +0x10a:  add    %eax,-0x14(%ebp)
08635a27 +0x10d:  mov    -0x14(%ebp),%eax
08635a2a +0x110:  leave
08635a2b +0x111:  ret
```

## 反编译 C

```c
// TimerStatisticLevel::CalcNextTime @ 0x863591a

/* TimerStatisticLevel::CalcNextTime() */

int TimerStatisticLevel::CalcNextTime(void)

{
  int iVar1;
  tm local_74;
  tm local_48;
  int local_1c;
  time_t local_18;
  char local_11;
  int local_10;
  
  local_1c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_1c,&local_48);
  local_11 = '\0';
  local_74.tm_hour = local_48.tm_hour;
  local_74.tm_mday = local_48.tm_mday;
  local_74.tm_mon = local_48.tm_mon;
  local_74.tm_year = local_48.tm_year;
  local_74.tm_wday = local_48.tm_wday;
  local_74.tm_yday = local_48.tm_yday;
  local_74.tm_isdst = local_48.tm_isdst;
  local_74.tm_gmtoff = local_48.tm_gmtoff;
  local_74.tm_zone = local_48.tm_zone;
  local_74.tm_min = 0;
  local_74.tm_sec = 0;
  local_10 = 3;
  do {
    if (local_10 < 0) {
LAB_086359d8:
      local_18 = mktime(&local_74);
      if ((local_11 != '\x01') || (local_18 < local_1c)) {
        local_74.tm_hour = m_nTimeTable;
        local_74.tm_mday = local_74.tm_mday + 1;
        local_18 = mktime(&local_74);
      }
      iVar1 = get_rand_int(300);
      return local_18 + iVar1;
    }
    if ((&m_nTimeTable)[local_10] <= local_48.tm_hour) {
      local_74.tm_hour = (&m_nTimeTable)[local_10 + 1];
      local_11 = '\x01';
      goto LAB_086359d8;
    }
    local_10 = local_10 + -1;
  } while( true );
}
```
