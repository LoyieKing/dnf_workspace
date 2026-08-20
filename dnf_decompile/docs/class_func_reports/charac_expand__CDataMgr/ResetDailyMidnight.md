# ResetDailyMidnight

`_ZN13charac_expand8CDataMgr18ResetDailyMidnightEv`

`charac_expand::CDataMgr::ResetDailyMidnight()`

| 类 | 地址 |
|---|---|
| `charac_expand::CDataMgr` | `0x0832ade8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832ade8  _ZN13charac_expand8CDataMgr18ResetDailyMidnightEv
#           charac_expand::CDataMgr::ResetDailyMidnight()
# range [0x0832ade8, 0x0832ae22]
0832ade8 +0x00:  push   %ebp
0832ade9 +0x01:  mov    %esp,%ebp
0832adeb +0x03:  sub    $0x28,%esp
0832adee +0x06:  movl   $0x0,-0xc(%ebp)
0832adf5 +0x0d:  jmp    0832ae16 <+0x2e>
0832adf7 +0x0f:  mov    -0xc(%ebp),%edx
0832adfa +0x12:  mov    0x8(%ebp),%eax
0832adfd +0x15:  mov    (%eax,%edx,4),%eax
0832ae00 +0x18:  mov    (%eax),%eax
0832ae02 +0x1a:  mov    (%eax),%ecx
0832ae04 +0x1c:  mov    -0xc(%ebp),%edx
0832ae07 +0x1f:  mov    0x8(%ebp),%eax
0832ae0a +0x22:  mov    (%eax,%edx,4),%eax
0832ae0d +0x25:  mov    %eax,(%esp)
0832ae10 +0x28:  call   *%ecx
0832ae12 +0x2a:  addl   $0x1,-0xc(%ebp)
0832ae16 +0x2e:  cmpl   $0x13,-0xc(%ebp)
0832ae1a +0x32:  setle  %al
0832ae1d +0x35:  test   %al,%al
0832ae1f +0x37:  jne    0832adf7 <+0xf>
0832ae21 +0x39:  leave
0832ae22 +0x3a:  ret
```

## 反编译 C

```c
// charac_expand::CDataMgr::ResetDailyMidnight @ 0x832ade8

/* charac_expand::CDataMgr::ResetDailyMidnight() */

void __thiscall charac_expand::CDataMgr::ResetDailyMidnight(CDataMgr *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    (**(code **)**(undefined4 **)(this + local_10 * 4))(*(undefined4 *)(this + local_10 * 4));
  }
  return;
}
```
