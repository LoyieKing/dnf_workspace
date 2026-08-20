# CNChecksumSha256

`_ZN16CNChecksumSha256C1Ev`

`CNChecksumSha256::CNChecksumSha256()`

| 类 | 地址 |
|---|---|
| `CNChecksumSha256` | `0x080986b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080986b8  _ZN16CNChecksumSha256C1Ev
#           CNChecksumSha256::CNChecksumSha256()
# range [0x080986b8, 0x08098717]
080986b8 +0x00:  push   %ebp
080986b9 +0x01:  mov    %esp,%ebp
080986bb +0x03:  push   %esi
080986bc +0x04:  push   %ebx
080986bd +0x05:  sub    $0x10,%esp
080986c0 +0x08:  mov    0x8(%ebp),%eax
080986c3 +0x0b:  movl   $0x1,0x4(%esp)
080986cb +0x13:  mov    %eax,(%esp)
080986ce +0x16:  call   0809de70 <_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE>  ; IChecksum::IChecksum(CRYPTO_CHECKSUM_TYPE)
080986d3 +0x1b:  mov    0x8(%ebp),%eax
080986d6 +0x1e:  movl   $&_ZTV16CNChecksumSha256+0x8,(%eax)
080986dc +0x24:  mov    0x8(%ebp),%eax
080986df +0x27:  movl   $0x0,0x8(%eax)
080986e6 +0x2e:  movl   $0x70,(%esp)
080986ed +0x35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080986f2 +0x3a:  mov    %eax,%edx
080986f4 +0x3c:  mov    0x8(%ebp),%eax
080986f7 +0x3f:  mov    %edx,0x8(%eax)
080986fa +0x42:  add    $0x10,%esp
080986fd +0x45:  pop    %ebx
080986fe +0x46:  pop    %esi
080986ff +0x47:  pop    %ebp
08098700 +0x48:  ret
08098701 +0x49:  mov    %edx,%ebx
08098703 +0x4b:  mov    %eax,%esi
08098705 +0x4d:  mov    0x8(%ebp),%eax
08098708 +0x50:  mov    %eax,(%esp)
0809870b +0x53:  call   0809de88 <_ZN9IChecksumD1Ev>  ; IChecksum::~IChecksum()
08098710 +0x58:  mov    %esi,%eax
08098712 +0x5a:  mov    %ebx,%edx
08098714 +0x5c:  mov    %eax,(%esp)
08098717 +0x5f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CNChecksumSha256::CNChecksumSha256 @ 0x80986b8

/* CNChecksumSha256::CNChecksumSha256() */

void __thiscall CNChecksumSha256::CNChecksumSha256(CNChecksumSha256 *this)

{
  void *pvVar1;
  
  IChecksum::IChecksum((IChecksum *)this,1);
  *(undefined ***)this = &PTR__CNChecksumSha256_08b13568;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 080986ed to 080986f1 has its CatchHandler @ 08098701 */
  pvVar1 = operator_new(0x70);
  *(void **)(this + 8) = pvVar1;
  return;
}
```
