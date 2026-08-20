# use_multibox_statistic

`_ZN5CUser22use_multibox_statisticEj`

`CUser::use_multibox_statistic(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086767d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086767d2  _ZN5CUser22use_multibox_statisticEj
#           CUser::use_multibox_statistic(unsigned int)
# range [0x086767d2, 0x08676825]
086767d2 +0x00:  push   %ebp
086767d3 +0x01:  mov    %esp,%ebp
086767d5 +0x03:  sub    $0x28,%esp
086767d8 +0x06:  movl   $0x0,-0xc(%ebp)
086767df +0x0d:  mov    0xc(%ebp),%eax
086767e2 +0x10:  cmp    $0x289749,%eax
086767e7 +0x15:  je     08676809 <+0x37>
086767e9 +0x17:  cmp    $0x28982d,%eax
086767ee +0x1c:  je     08676800 <+0x2e>
086767f0 +0x1e:  cmp    $0x380,%eax
086767f5 +0x23:  jne    08676810 <+0x3e>
086767f7 +0x25:  movl   $0x0,-0xc(%ebp)
086767fe +0x2c:  jmp    08676810 <+0x3e>
08676800 +0x2e:  movl   $0x1,-0xc(%ebp)
08676807 +0x35:  jmp    08676810 <+0x3e>
08676809 +0x37:  movl   $0x2,-0xc(%ebp)
08676810 +0x3e:  movl   $0x1,0x4(%esp)
08676818 +0x46:  mov    -0xc(%ebp),%eax
0867681b +0x49:  mov    %eax,(%esp)
0867681e +0x4c:  call   08676826 <_ZN5CUser22SendRandomBoxStatisticEi26ENUM_RANDOMBOX_ACTION_KIND>  ; CUser::SendRandomBoxStatistic(int, ENUM_RANDOMBOX_ACTION_KIND)
08676823 +0x51:  leave
08676824 +0x52:  ret
08676825 +0x53:  nop
```

## 反编译 C

```c
// CUser::use_multibox_statistic @ 0x86767d2

/* CUser::use_multibox_statistic(unsigned int) */

void __thiscall CUser::use_multibox_statistic(CUser *this,uint param_1)

{
  undefined4 local_10;
  
  local_10 = 0;
  if (param_1 == 0x289749) {
    local_10 = 2;
  }
  else if (param_1 == 0x28982d) {
    local_10 = 1;
  }
  else if (param_1 == 0x380) {
    local_10 = 0;
  }
  SendRandomBoxStatistic(local_10,1);
  return;
}
```
