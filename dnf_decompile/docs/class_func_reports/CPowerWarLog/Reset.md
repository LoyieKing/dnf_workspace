# Reset

`_ZN12CPowerWarLog5ResetEv`

`CPowerWarLog::Reset()`

| 类 | 地址 |
|---|---|
| `CPowerWarLog` | `0x08480232` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08480232  _ZN12CPowerWarLog5ResetEv
#           CPowerWarLog::Reset()
# range [0x08480232, 0x084802cb]
08480232 +0x00:  push   %ebp
08480233 +0x01:  mov    %esp,%ebp
08480235 +0x03:  mov    0x8(%ebp),%eax
08480238 +0x06:  movl   $0x0,(%eax)
0848023e +0x0c:  mov    0x8(%ebp),%eax
08480241 +0x0f:  movl   $0x0,0x4(%eax)
08480248 +0x16:  mov    0x8(%ebp),%eax
0848024b +0x19:  movl   $0x0,0x8(%eax)
08480252 +0x20:  mov    0x8(%ebp),%eax
08480255 +0x23:  movl   $0x0,0xc(%eax)
0848025c +0x2a:  mov    0x8(%ebp),%eax
0848025f +0x2d:  movl   $0x0,0x10(%eax)
08480266 +0x34:  mov    0x8(%ebp),%eax
08480269 +0x37:  movl   $0x0,0x14(%eax)
08480270 +0x3e:  mov    0x8(%ebp),%eax
08480273 +0x41:  movl   $0x0,0x18(%eax)
0848027a +0x48:  mov    0x8(%ebp),%eax
0848027d +0x4b:  movl   $0x0,0x1c(%eax)
08480284 +0x52:  mov    0x8(%ebp),%eax
08480287 +0x55:  movl   $0x0,0x20(%eax)
0848028e +0x5c:  mov    0x8(%ebp),%eax
08480291 +0x5f:  movl   $0x0,0x24(%eax)
08480298 +0x66:  mov    0x8(%ebp),%eax
0848029b +0x69:  movl   $0x0,0x28(%eax)
084802a2 +0x70:  mov    0x8(%ebp),%eax
084802a5 +0x73:  movl   $0x0,0x2c(%eax)
084802ac +0x7a:  mov    0x8(%ebp),%eax
084802af +0x7d:  movl   $0x0,0x30(%eax)
084802b6 +0x84:  mov    0x8(%ebp),%eax
084802b9 +0x87:  movl   $0x0,0x34(%eax)
084802c0 +0x8e:  mov    0x8(%ebp),%eax
084802c3 +0x91:  movl   $0x0,0x38(%eax)
084802ca +0x98:  pop    %ebp
084802cb +0x99:  ret
```

## 反编译 C

```c
// CPowerWarLog::Reset @ 0x8480232

/* CPowerWarLog::Reset() */

void __thiscall CPowerWarLog::Reset(CPowerWarLog *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}
```
