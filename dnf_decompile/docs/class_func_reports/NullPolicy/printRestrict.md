# printRestrict

`_ZN10NullPolicy13printRestrictEv`

`NullPolicy::printRestrict()`

| 类 | 地址 |
|---|---|
| `NullPolicy` | `0x0816d67a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d67a  _ZN10NullPolicy13printRestrictEv
#           NullPolicy::printRestrict()
# range [0x0816d67a, 0x0816d6c7]
0816d67a +0x00:  push   %ebp
0816d67b +0x01:  mov    %esp,%ebp
0816d67d +0x03:  sub    $0x38,%esp
0816d680 +0x06:  movl   $0x1,0x14(%esp)
0816d688 +0x0e:  movl   $0x1,0x10(%esp)
0816d690 +0x16:  movl   $0x9,0xc(%esp)
0816d698 +0x1e:  movl   $0x52,0x8(%esp)
0816d6a0 +0x26:  movl   $&_ZZN10NullPolicy13printRestrictEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816d6a8 +0x2e:  lea    -0x18(%ebp),%eax
0816d6ab +0x31:  mov    %eax,(%esp)
0816d6ae +0x34:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0816d6b3 +0x39:  movl   $"\tDummy Restrict",0x4(%esp)
0816d6bb +0x41:  lea    -0x18(%ebp),%eax
0816d6be +0x44:  mov    %eax,(%esp)
0816d6c1 +0x47:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816d6c6 +0x4c:  leave
0816d6c7 +0x4d:  ret
```

## 反编译 C

```c
// NullPolicy::printRestrict @ 0x816d67a

/* NullPolicy::printRestrict() */

void NullPolicy::printRestrict(void)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual void NullPolicy::printRestrict()",0x52,9,true,true);
  cMyTrace::operator()(local_1c,"\tDummy Restrict");
  return;
}
```
