# GetQuarterOfYear

`_ZN4ARAD16GetQuarterOfYearEPc`

`ARAD::GetQuarterOfYear(char*)`

| 类 | 地址 |
|---|---|
| `ARAD` | `0x0819e8d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819e8d0  _ZN4ARAD16GetQuarterOfYearEPc
#           ARAD::GetQuarterOfYear(char*)
# range [0x0819e8d0, 0x0819e996]
0819e8d0 +0x00:  push   %ebp
0819e8d1 +0x01:  mov    %esp,%ebp
0819e8d3 +0x03:  push   %esi
0819e8d4 +0x04:  push   %ebx
0819e8d5 +0x05:  sub    $0x40,%esp
0819e8d8 +0x08:  lea    -0xc(%ebp),%eax
0819e8db +0x0b:  mov    %eax,(%esp)
0819e8de +0x0e:  call   0807d750 <_init+0x48>
0819e8e3 +0x13:  lea    -0xc(%ebp),%eax
0819e8e6 +0x16:  mov    %eax,(%esp)
0819e8e9 +0x19:  call   0807e330 <_init+0xc28>
0819e8ee +0x1e:  mov    (%eax),%edx
0819e8f0 +0x20:  mov    %edx,-0x38(%ebp)
0819e8f3 +0x23:  mov    0x4(%eax),%edx
0819e8f6 +0x26:  mov    %edx,-0x34(%ebp)
0819e8f9 +0x29:  mov    0x8(%eax),%edx
0819e8fc +0x2c:  mov    %edx,-0x30(%ebp)
0819e8ff +0x2f:  mov    0xc(%eax),%edx
0819e902 +0x32:  mov    %edx,-0x2c(%ebp)
0819e905 +0x35:  mov    0x10(%eax),%edx
0819e908 +0x38:  mov    %edx,-0x28(%ebp)
0819e90b +0x3b:  mov    0x14(%eax),%edx
0819e90e +0x3e:  mov    %edx,-0x24(%ebp)
0819e911 +0x41:  mov    0x18(%eax),%edx
0819e914 +0x44:  mov    %edx,-0x20(%ebp)
0819e917 +0x47:  mov    0x1c(%eax),%edx
0819e91a +0x4a:  mov    %edx,-0x1c(%ebp)
0819e91d +0x4d:  mov    0x20(%eax),%edx
0819e920 +0x50:  mov    %edx,-0x18(%ebp)
0819e923 +0x53:  mov    0x24(%eax),%edx
0819e926 +0x56:  mov    %edx,-0x14(%ebp)
0819e929 +0x59:  mov    0x28(%eax),%eax
0819e92c +0x5c:  mov    %eax,-0x10(%ebp)
0819e92f +0x5f:  mov    -0x28(%ebp),%ecx
0819e932 +0x62:  mov    $0x55555556,%edx
0819e937 +0x67:  mov    %ecx,%eax
0819e939 +0x69:  imul   %edx
0819e93b +0x6b:  mov    %ecx,%eax
0819e93d +0x6d:  sar    $0x1f,%eax
0819e940 +0x70:  mov    %edx,%ecx
0819e942 +0x72:  sub    %eax,%ecx
0819e944 +0x74:  mov    %ecx,%eax
0819e946 +0x76:  lea    0x1(%eax),%ebx
0819e949 +0x79:  mov    -0x24(%ebp),%eax
0819e94c +0x7c:  lea    0x76c(%eax),%ecx
0819e952 +0x82:  mov    $0x10624dd3,%edx
0819e957 +0x87:  mov    %ecx,%eax
0819e959 +0x89:  imul   %edx
0819e95b +0x8b:  sar    $0x7,%edx
0819e95e +0x8e:  mov    %ecx,%eax
0819e960 +0x90:  sar    $0x1f,%eax
0819e963 +0x93:  mov    %edx,%esi
0819e965 +0x95:  sub    %eax,%esi
0819e967 +0x97:  mov    %esi,%eax
0819e969 +0x99:  imul   $0x7d0,%eax,%eax
0819e96f +0x9f:  mov    %ecx,%edx
0819e971 +0xa1:  sub    %eax,%edx
0819e973 +0xa3:  mov    %edx,%eax
0819e975 +0xa5:  mov    %ebx,0xc(%esp)
0819e979 +0xa9:  mov    %eax,0x8(%esp)
0819e97d +0xad:  movl   $"%02d%d",0x4(%esp)
0819e985 +0xb5:  mov    0x8(%ebp),%eax
0819e988 +0xb8:  mov    %eax,(%esp)
0819e98b +0xbb:  call   0807e440 <_init+0xd38>
0819e990 +0xc0:  add    $0x40,%esp
0819e993 +0xc3:  pop    %ebx
0819e994 +0xc4:  pop    %esi
0819e995 +0xc5:  pop    %ebp
0819e996 +0xc6:  ret
```

## 反编译 C

```c
// ARAD::GetQuarterOfYear @ 0x819e8d0

/* ARAD::GetQuarterOfYear(char*) */

void ARAD::GetQuarterOfYear(char *param_1)

{
  tm *ptVar1;
  time_t local_10;
  
  time(&local_10);
  ptVar1 = localtime(&local_10);
  sprintf(param_1,"%02d%d",(ptVar1->tm_year + 0x76c) % 2000,ptVar1->tm_mon / 3 + 1,ptVar1->tm_sec,
          ptVar1->tm_min,ptVar1->tm_hour,ptVar1->tm_mday,ptVar1->tm_mon,ptVar1->tm_year,
          ptVar1->tm_wday,ptVar1->tm_yday,ptVar1->tm_isdst,ptVar1->tm_gmtoff,ptVar1->tm_zone);
  return;
}
```
