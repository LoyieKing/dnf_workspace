# getDiffConnectDay

`_ZN18break_away_prevent23CBreakAwayPreventSystem17getDiffConnectDayEj`

`break_away_prevent::CBreakAwayPreventSystem::getDiffConnectDay(unsigned int)`

| 类 | 地址 |
|---|---|
| `break_away_prevent::CBreakAwayPreventSystem` | `0x0831c794` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c794  _ZN18break_away_prevent23CBreakAwayPreventSystem17getDiffConnectDayEj
#           break_away_prevent::CBreakAwayPreventSystem::getDiffConnectDay(unsigned int)
# range [0x0831c794, 0x0831c80f]
0831c794 +0x00:  push   %ebp
0831c795 +0x01:  mov    %esp,%ebp
0831c797 +0x03:  sub    $0x28,%esp
0831c79a +0x06:  cmpl   $0x0,0xc(%ebp)
0831c79e +0x0a:  jne    0831c7a7 <+0x13>
0831c7a0 +0x0c:  mov    $0x0,%eax
0831c7a5 +0x11:  jmp    0831c80e <+0x7a>
0831c7a7 +0x13:  mov    0xc(%ebp),%eax
0831c7aa +0x16:  mov    %eax,0x4(%esp)
0831c7ae +0x1a:  movl   $0x0,(%esp)
0831c7b5 +0x21:  call   0846c2e9 <_Z19getPrevScheduleTimeil>  ; getPrevScheduleTime(int, long)
0831c7ba +0x26:  mov    %eax,-0x10(%ebp)
0831c7bd +0x29:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0831c7c4 +0x30:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0831c7c9 +0x35:  mov    %eax,%ecx
0831c7cb +0x37:  sub    -0x10(%ebp),%ecx
0831c7ce +0x3a:  mov    $0xc22e4507,%edx
0831c7d3 +0x3f:  mov    %ecx,%eax
0831c7d5 +0x41:  imul   %edx
0831c7d7 +0x43:  lea    (%edx,%ecx,1),%eax
0831c7da +0x46:  mov    %eax,%edx
0831c7dc +0x48:  sar    $0x10,%edx
0831c7df +0x4b:  mov    %ecx,%eax
0831c7e1 +0x4d:  sar    $0x1f,%eax
0831c7e4 +0x50:  mov    %edx,%ecx
0831c7e6 +0x52:  sub    %eax,%ecx
0831c7e8 +0x54:  mov    %ecx,%eax
0831c7ea +0x56:  mov    %eax,-0x18(%ebp)
0831c7ed +0x59:  movl   $0x0,-0x14(%ebp)
0831c7f4 +0x60:  lea    -0x18(%ebp),%eax
0831c7f7 +0x63:  mov    %eax,0x4(%esp)
0831c7fb +0x67:  lea    -0x14(%ebp),%eax
0831c7fe +0x6a:  mov    %eax,(%esp)
0831c801 +0x6d:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0831c806 +0x72:  mov    (%eax),%eax
0831c808 +0x74:  mov    %eax,-0xc(%ebp)
0831c80b +0x77:  mov    -0xc(%ebp),%eax
0831c80e +0x7a:  leave
0831c80f +0x7b:  ret
```

## 反编译 C

```c
// break_away_prevent::CBreakAwayPreventSystem::getDiffConnectDay @ 0x831c794

/* break_away_prevent::CBreakAwayPreventSystem::getDiffConnectDay(unsigned int) */

size_t __thiscall
break_away_prevent::CBreakAwayPreventSystem::getDiffConnectDay
          (CBreakAwayPreventSystem *this,uint param_1)

{
  size_t sVar1;
  int iVar2;
  size_t *psVar3;
  size_t local_1c [6];
  
  if (param_1 == 0) {
    sVar1 = 0;
  }
  else {
    local_1c[2] = getPrevScheduleTime(0,param_1);
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_1c[0] = (int)(iVar2 - local_1c[2]) / 0x15180;
    local_1c[1] = 0;
    psVar3 = std::max<size_t>(local_1c + 1,local_1c);
    sVar1 = *psVar3;
  }
  return sVar1;
}
```
