# ResetDaily

`_ZN13charac_expand8CDataMgr10ResetDailyEv`

`charac_expand::CDataMgr::ResetDaily()`

| 类 | 地址 |
|---|---|
| `charac_expand::CDataMgr` | `0x0832adaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832adaa  _ZN13charac_expand8CDataMgr10ResetDailyEv
#           charac_expand::CDataMgr::ResetDaily()
# range [0x0832adaa, 0x0832ade7]
0832adaa +0x00:  push   %ebp
0832adab +0x01:  mov    %esp,%ebp
0832adad +0x03:  sub    $0x28,%esp
0832adb0 +0x06:  movl   $0x0,-0xc(%ebp)
0832adb7 +0x0d:  jmp    0832addb <+0x31>
0832adb9 +0x0f:  mov    -0xc(%ebp),%edx
0832adbc +0x12:  mov    0x8(%ebp),%eax
0832adbf +0x15:  mov    (%eax,%edx,4),%eax
0832adc2 +0x18:  mov    (%eax),%eax
0832adc4 +0x1a:  add    $0xc,%eax
0832adc7 +0x1d:  mov    (%eax),%ecx
0832adc9 +0x1f:  mov    -0xc(%ebp),%edx
0832adcc +0x22:  mov    0x8(%ebp),%eax
0832adcf +0x25:  mov    (%eax,%edx,4),%eax
0832add2 +0x28:  mov    %eax,(%esp)
0832add5 +0x2b:  call   *%ecx
0832add7 +0x2d:  addl   $0x1,-0xc(%ebp)
0832addb +0x31:  cmpl   $0x13,-0xc(%ebp)
0832addf +0x35:  setle  %al
0832ade2 +0x38:  test   %al,%al
0832ade4 +0x3a:  jne    0832adb9 <+0xf>
0832ade6 +0x3c:  leave
0832ade7 +0x3d:  ret
```

## 反编译 C

```c
// charac_expand::CDataMgr::ResetDaily @ 0x832adaa

/* charac_expand::CDataMgr::ResetDaily() */

void __thiscall charac_expand::CDataMgr::ResetDaily(CDataMgr *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    (**(code **)(**(int **)(this + local_10 * 4) + 0xc))(*(undefined4 *)(this + local_10 * 4));
  }
  return;
}
```
