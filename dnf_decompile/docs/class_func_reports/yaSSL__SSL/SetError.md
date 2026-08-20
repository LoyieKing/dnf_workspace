# SetError

`_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE`

`yaSSL::SSL::SetError(yaSSL::YasslError)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874dfd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874dfd0  _ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE
#           yaSSL::SSL::SetError(yaSSL::YasslError)
# range [0x0874dfd0, 0x0874dfff]
0874dfd0 +0x00:  push   %ebp
0874dfd1 +0x01:  mov    %esp,%ebp
0874dfd3 +0x03:  push   %ebx
0874dfd4 +0x04:  sub    $0x14,%esp
0874dfd7 +0x07:  mov    0xc(%ebp),%eax
0874dfda +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874dfdf +0x0f:  add    $0xc1ebb9,%ebx
0874dfe5 +0x15:  mov    %eax,0x4(%esp)
0874dfe9 +0x19:  mov    0x8(%ebp),%eax
0874dfec +0x1c:  add    $0x8ec,%eax
0874dff1 +0x21:  mov    %eax,(%esp)
0874dff4 +0x24:  call   0874df70 <_ZN5yaSSL6States8SetErrorENS_10YasslErrorE>  ; yaSSL::States::SetError(yaSSL::YasslError)
0874dff9 +0x29:  add    $0x14,%esp
0874dffc +0x2c:  pop    %ebx
0874dffd +0x2d:  pop    %ebp
0874dffe +0x2e:  ret
0874dfff +0x2f:  nop
```

## 反编译 C

```c
// yaSSL::SSL::SetError @ 0x874dfd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::SetError(yaSSL::YasslError) */

void __thiscall yaSSL::SSL::SetError(SSL *this,undefined4 param_2)

{
  States::SetError((States *)(this + 0x8ec),param_2);
  return;
}
```
