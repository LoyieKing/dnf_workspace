# CNChecksumSha512

`_ZN16CNChecksumSha512C1Ev`

`CNChecksumSha512::CNChecksumSha512()`

| 类 | 地址 |
|---|---|
| `CNChecksumSha512` | `0x08098e80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098e80  _ZN16CNChecksumSha512C1Ev
#           CNChecksumSha512::CNChecksumSha512()
# range [0x08098e80, 0x08098edf]
08098e80 +0x00:  push   %ebp
08098e81 +0x01:  mov    %esp,%ebp
08098e83 +0x03:  push   %esi
08098e84 +0x04:  push   %ebx
08098e85 +0x05:  sub    $0x10,%esp
08098e88 +0x08:  mov    0x8(%ebp),%eax
08098e8b +0x0b:  movl   $0x3,0x4(%esp)
08098e93 +0x13:  mov    %eax,(%esp)
08098e96 +0x16:  call   0809de70 <_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE>  ; IChecksum::IChecksum(CRYPTO_CHECKSUM_TYPE)
08098e9b +0x1b:  mov    0x8(%ebp),%eax
08098e9e +0x1e:  movl   $&_ZTV16CNChecksumSha512+0x8,(%eax)
08098ea4 +0x24:  mov    0x8(%ebp),%eax
08098ea7 +0x27:  movl   $0x0,0x8(%eax)
08098eae +0x2e:  movl   $0xd0,(%esp)
08098eb5 +0x35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08098eba +0x3a:  mov    %eax,%edx
08098ebc +0x3c:  mov    0x8(%ebp),%eax
08098ebf +0x3f:  mov    %edx,0x8(%eax)
08098ec2 +0x42:  add    $0x10,%esp
08098ec5 +0x45:  pop    %ebx
08098ec6 +0x46:  pop    %esi
08098ec7 +0x47:  pop    %ebp
08098ec8 +0x48:  ret
08098ec9 +0x49:  mov    %edx,%ebx
08098ecb +0x4b:  mov    %eax,%esi
08098ecd +0x4d:  mov    0x8(%ebp),%eax
08098ed0 +0x50:  mov    %eax,(%esp)
08098ed3 +0x53:  call   0809de88 <_ZN9IChecksumD1Ev>  ; IChecksum::~IChecksum()
08098ed8 +0x58:  mov    %esi,%eax
08098eda +0x5a:  mov    %ebx,%edx
08098edc +0x5c:  mov    %eax,(%esp)
08098edf +0x5f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CNChecksumSha512::CNChecksumSha512 @ 0x8098e80

/* CNChecksumSha512::CNChecksumSha512() */

void __thiscall CNChecksumSha512::CNChecksumSha512(CNChecksumSha512 *this)

{
  void *pvVar1;
  
  IChecksum::IChecksum((IChecksum *)this,3);
  *(undefined ***)this = &PTR__CNChecksumSha512_08b13628;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 08098eb5 to 08098eb9 has its CatchHandler @ 08098ec9 */
  pvVar1 = operator_new(0xd0);
  *(void **)(this + 8) = pvVar1;
  return;
}
```
