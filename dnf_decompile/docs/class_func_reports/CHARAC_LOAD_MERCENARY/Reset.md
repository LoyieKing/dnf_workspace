# Reset

`_ZN21CHARAC_LOAD_MERCENARY5ResetEv`

`CHARAC_LOAD_MERCENARY::Reset()`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b410a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b410a  _ZN21CHARAC_LOAD_MERCENARY5ResetEv
#           CHARAC_LOAD_MERCENARY::Reset()
# range [0x081b410a, 0x081b418f]
081b410a +0x00:  push   %ebp
081b410b +0x01:  mov    %esp,%ebp
081b410d +0x03:  sub    $0x18,%esp
081b4110 +0x06:  mov    0x8(%ebp),%eax
081b4113 +0x09:  movl   $0x0,(%eax)
081b4119 +0x0f:  mov    0x8(%ebp),%eax
081b411c +0x12:  movw   $0x0,0x4(%eax)
081b4122 +0x18:  mov    0x8(%ebp),%eax
081b4125 +0x1b:  add    $0x6,%eax
081b4128 +0x1e:  movl   $0x1e,0x8(%esp)
081b4130 +0x26:  movl   $0x0,0x4(%esp)
081b4138 +0x2e:  mov    %eax,(%esp)
081b413b +0x31:  call   0807dcc0 <_init+0x5b8>
081b4140 +0x36:  mov    0x8(%ebp),%eax
081b4143 +0x39:  add    $0x34,%eax
081b4146 +0x3c:  movl   $0x20,0x8(%esp)
081b414e +0x44:  movl   $0x0,0x4(%esp)
081b4156 +0x4c:  mov    %eax,(%esp)
081b4159 +0x4f:  call   0807dcc0 <_init+0x5b8>
081b415e +0x54:  mov    0x8(%ebp),%eax
081b4161 +0x57:  movb   $0x0,0x24(%eax)
081b4165 +0x5b:  mov    0x8(%ebp),%eax
081b4168 +0x5e:  movl   $0x0,0x28(%eax)
081b416f +0x65:  mov    0x8(%ebp),%eax
081b4172 +0x68:  movl   $0x0,0x2c(%eax)
081b4179 +0x6f:  mov    0x8(%ebp),%eax
081b417c +0x72:  movb   $0xff,0x30(%eax)
081b4180 +0x76:  mov    0x8(%ebp),%eax
081b4183 +0x79:  movb   $0xff,0x31(%eax)
081b4187 +0x7d:  mov    0x8(%ebp),%eax
081b418a +0x80:  movb   $0xa,0x32(%eax)
081b418e +0x84:  leave
081b418f +0x85:  ret
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::Reset @ 0x81b410a

/* CHARAC_LOAD_MERCENARY::Reset() */

void __thiscall CHARAC_LOAD_MERCENARY::Reset(CHARAC_LOAD_MERCENARY *this)

{
  *(undefined4 *)this = 0;
  *(undefined2 *)(this + 4) = 0;
  memset(this + 6,0,0x1e);
  memset(this + 0x34,0,0x20);
  this[0x24] = (CHARAC_LOAD_MERCENARY)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x30] = (CHARAC_LOAD_MERCENARY)0xff;
  this[0x31] = (CHARAC_LOAD_MERCENARY)0xff;
  this[0x32] = (CHARAC_LOAD_MERCENARY)0xa;
  return;
}
```
