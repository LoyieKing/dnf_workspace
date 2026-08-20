# _makeDefaultTime

`_ZN26Inter_MonitorGuildPointDel16_makeDefaultTimeEv`

`Inter_MonitorGuildPointDel::_makeDefaultTime()`

| 类 | 地址 |
|---|---|
| `Inter_MonitorGuildPointDel` | `0x084ce6d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ce6d2  _ZN26Inter_MonitorGuildPointDel16_makeDefaultTimeEv
#           Inter_MonitorGuildPointDel::_makeDefaultTime()
# range [0x084ce6d2, 0x084ce755]
084ce6d2 +0x00:  push   %ebp
084ce6d3 +0x01:  mov    %esp,%ebp
084ce6d5 +0x03:  sub    $0x58,%esp
084ce6d8 +0x06:  movl   $0x0,(%esp)
084ce6df +0x0d:  call   0807d750 <_init+0x48>
084ce6e4 +0x12:  mov    %eax,-0x10(%ebp)
084ce6e7 +0x15:  lea    -0x3c(%ebp),%eax
084ce6ea +0x18:  mov    %eax,0x4(%esp)
084ce6ee +0x1c:  lea    -0x10(%ebp),%eax
084ce6f1 +0x1f:  mov    %eax,(%esp)
084ce6f4 +0x22:  call   0807e360 <_init+0xc58>
084ce6f9 +0x27:  mov    %eax,-0xc(%ebp)
084ce6fc +0x2a:  mov    -0xc(%ebp),%eax
084ce6ff +0x2d:  movl   $0x1,0xc(%eax)
084ce706 +0x34:  mov    -0xc(%ebp),%eax
084ce709 +0x37:  movl   $0x5,0x8(%eax)
084ce710 +0x3e:  mov    -0xc(%ebp),%eax
084ce713 +0x41:  movl   $0x0,0x4(%eax)
084ce71a +0x48:  mov    -0xc(%ebp),%eax
084ce71d +0x4b:  movl   $0x0,(%eax)
084ce723 +0x51:  mov    -0xc(%ebp),%eax
084ce726 +0x54:  mov    0x10(%eax),%eax
084ce729 +0x57:  cmp    $0x6,%eax
084ce72c +0x5a:  jne    084ce743 <+0x71>
084ce72e +0x5c:  mov    -0xc(%ebp),%eax
084ce731 +0x5f:  mov    0x14(%eax),%eax
084ce734 +0x62:  cmp    $0x6a,%eax
084ce737 +0x65:  jne    084ce743 <+0x71>
084ce739 +0x67:  mov    -0xc(%ebp),%eax
084ce73c +0x6a:  movl   $0x6,0xc(%eax)
084ce743 +0x71:  mov    -0xc(%ebp),%eax
084ce746 +0x74:  mov    %eax,(%esp)
084ce749 +0x77:  call   0807e820 <_init+0x1118>
084ce74e +0x7c:  mov    %eax,-0x10(%ebp)
084ce751 +0x7f:  mov    -0x10(%ebp),%eax
084ce754 +0x82:  leave
084ce755 +0x83:  ret
```

## 反编译 C

```c
// Inter_MonitorGuildPointDel::_makeDefaultTime @ 0x84ce6d2

/* Inter_MonitorGuildPointDel::_makeDefaultTime() */

time_t Inter_MonitorGuildPointDel::_makeDefaultTime(void)

{
  time_t tVar1;
  tm local_40;
  time_t local_14;
  tm *local_10;
  
  local_14 = time((time_t *)0x0);
  local_10 = localtime_r(&local_14,&local_40);
  local_10->tm_mday = 1;
  local_10->tm_hour = 5;
  local_10->tm_min = 0;
  local_10->tm_sec = 0;
  if ((local_10->tm_mon == 6) && (local_10->tm_year == 0x6a)) {
    local_10->tm_mday = 6;
  }
  tVar1 = mktime(local_10);
  return tVar1;
}
```
