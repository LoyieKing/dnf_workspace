# CNChecksumMd5

`_ZN13CNChecksumMd5C1Ev`

`CNChecksumMd5::CNChecksumMd5()`

| 类 | 地址 |
|---|---|
| `CNChecksumMd5` | `0x0809830c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809830c  _ZN13CNChecksumMd5C1Ev
#           CNChecksumMd5::CNChecksumMd5()
# range [0x0809830c, 0x0809836b]
0809830c +0x00:  push   %ebp
0809830d +0x01:  mov    %esp,%ebp
0809830f +0x03:  push   %esi
08098310 +0x04:  push   %ebx
08098311 +0x05:  sub    $0x10,%esp
08098314 +0x08:  mov    0x8(%ebp),%eax
08098317 +0x0b:  movl   $0x0,0x4(%esp)
0809831f +0x13:  mov    %eax,(%esp)
08098322 +0x16:  call   0809de70 <_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE>  ; IChecksum::IChecksum(CRYPTO_CHECKSUM_TYPE)
08098327 +0x1b:  mov    0x8(%ebp),%eax
0809832a +0x1e:  movl   $&_ZTV13CNChecksumMd5+0x8,(%eax)
08098330 +0x24:  mov    0x8(%ebp),%eax
08098333 +0x27:  movl   $0x0,0x8(%eax)
0809833a +0x2e:  movl   $0xd8,(%esp)
08098341 +0x35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08098346 +0x3a:  mov    %eax,%edx
08098348 +0x3c:  mov    0x8(%ebp),%eax
0809834b +0x3f:  mov    %edx,0x8(%eax)
0809834e +0x42:  add    $0x10,%esp
08098351 +0x45:  pop    %ebx
08098352 +0x46:  pop    %esi
08098353 +0x47:  pop    %ebp
08098354 +0x48:  ret
08098355 +0x49:  mov    %edx,%ebx
08098357 +0x4b:  mov    %eax,%esi
08098359 +0x4d:  mov    0x8(%ebp),%eax
0809835c +0x50:  mov    %eax,(%esp)
0809835f +0x53:  call   0809de88 <_ZN9IChecksumD1Ev>  ; IChecksum::~IChecksum()
08098364 +0x58:  mov    %esi,%eax
08098366 +0x5a:  mov    %ebx,%edx
08098368 +0x5c:  mov    %eax,(%esp)
0809836b +0x5f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CNChecksumMd5::CNChecksumMd5 @ 0x809830c

/* CNChecksumMd5::CNChecksumMd5() */

void __thiscall CNChecksumMd5::CNChecksumMd5(CNChecksumMd5 *this)

{
  void *pvVar1;
  
  IChecksum::IChecksum((IChecksum *)this,0);
  *(undefined ***)this = &PTR__CNChecksumMd5_08b13508;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 08098341 to 08098345 has its CatchHandler @ 08098355 */
  pvVar1 = operator_new(0xd8);
  *(void **)(this + 8) = pvVar1;
  return;
}
```
