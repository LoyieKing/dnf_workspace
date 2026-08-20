# CTEA

`_ZN4CTEAC1Ev`

`CTEA::CTEA()`

| 类 | 地址 |
|---|---|
| `CTEA` | `0x080c32f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c32f4  _ZN4CTEAC1Ev
#           CTEA::CTEA()
# range [0x080c32f4, 0x080c339b]
080c32f4 +0x00:  push   %ebp
080c32f5 +0x01:  mov    %esp,%ebp
080c32f7 +0x03:  sub    $0x18,%esp
080c32fa +0x06:  mov    0x8(%ebp),%eax
080c32fd +0x09:  mov    %eax,(%esp)
080c3300 +0x0c:  call   080b4294 <_ZN7IMethodC1Ev>  ; IMethod::IMethod()
080c3305 +0x11:  mov    0x8(%ebp),%eax
080c3308 +0x14:  movl   $&_ZTV4CTEA+0x8,(%eax)
080c330e +0x1a:  mov    0x8(%ebp),%eax
080c3311 +0x1d:  movl   $0x8,0x8(%eax)
080c3318 +0x24:  mov    0x8(%ebp),%eax
080c331b +0x27:  movl   $0x10,0xc(%eax)
080c3322 +0x2e:  mov    0x8(%ebp),%eax
080c3325 +0x31:  add    $0x18,%eax
080c3328 +0x34:  movl   $0x10,0x8(%esp)
080c3330 +0x3c:  movl   $0x0,0x4(%esp)
080c3338 +0x44:  mov    %eax,(%esp)
080c333b +0x47:  call   0807dcc0 <_init+0x5b8>
080c3340 +0x4c:  mov    0x8(%ebp),%eax
080c3343 +0x4f:  add    $0x38,%eax
080c3346 +0x52:  movl   $0x8,0x8(%esp)
080c334e +0x5a:  movl   $0x0,0x4(%esp)
080c3356 +0x62:  mov    %eax,(%esp)
080c3359 +0x65:  call   0807dcc0 <_init+0x5b8>
080c335e +0x6a:  mov    0x8(%ebp),%eax
080c3361 +0x6d:  add    $0x40,%eax
080c3364 +0x70:  movl   $0x8,0x8(%esp)
080c336c +0x78:  movl   $0x0,0x4(%esp)
080c3374 +0x80:  mov    %eax,(%esp)
080c3377 +0x83:  call   0807dcc0 <_init+0x5b8>
080c337c +0x88:  mov    0x8(%ebp),%eax
080c337f +0x8b:  add    $0x28,%eax
080c3382 +0x8e:  movl   $0x10,0x8(%esp)
080c338a +0x96:  movl   $0x0,0x4(%esp)
080c3392 +0x9e:  mov    %eax,(%esp)
080c3395 +0xa1:  call   0807dcc0 <_init+0x5b8>
080c339a +0xa6:  leave
080c339b +0xa7:  ret
```

## 反编译 C

```c
// CTEA::CTEA @ 0x80c32f4

/* CTEA::CTEA() */

void __thiscall CTEA::CTEA(CTEA *this)

{
  IMethod::IMethod((IMethod *)this);
  *(undefined ***)this = &PTR__CTEA_08b23388;
  *(undefined4 *)(this + 8) = 8;
  *(undefined4 *)(this + 0xc) = 0x10;
  memset(this + 0x18,0,0x10);
  memset(this + 0x38,0,8);
  memset(this + 0x40,0,8);
  memset(this + 0x28,0,0x10);
  return;
}
```
