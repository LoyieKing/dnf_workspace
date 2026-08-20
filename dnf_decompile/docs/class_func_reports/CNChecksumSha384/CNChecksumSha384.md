# CNChecksumSha384

`_ZN16CNChecksumSha384C1Ev`

`CNChecksumSha384::CNChecksumSha384()`

| 类 | 地址 |
|---|---|
| `CNChecksumSha384` | `0x08098a9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098a9c  _ZN16CNChecksumSha384C1Ev
#           CNChecksumSha384::CNChecksumSha384()
# range [0x08098a9c, 0x08098afb]
08098a9c +0x00:  push   %ebp
08098a9d +0x01:  mov    %esp,%ebp
08098a9f +0x03:  push   %esi
08098aa0 +0x04:  push   %ebx
08098aa1 +0x05:  sub    $0x10,%esp
08098aa4 +0x08:  mov    0x8(%ebp),%eax
08098aa7 +0x0b:  movl   $0x2,0x4(%esp)
08098aaf +0x13:  mov    %eax,(%esp)
08098ab2 +0x16:  call   0809de70 <_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE>  ; IChecksum::IChecksum(CRYPTO_CHECKSUM_TYPE)
08098ab7 +0x1b:  mov    0x8(%ebp),%eax
08098aba +0x1e:  movl   $&_ZTV16CNChecksumSha384+0x8,(%eax)
08098ac0 +0x24:  mov    0x8(%ebp),%eax
08098ac3 +0x27:  movl   $0x0,0x8(%eax)
08098aca +0x2e:  movl   $0xd0,(%esp)
08098ad1 +0x35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08098ad6 +0x3a:  mov    %eax,%edx
08098ad8 +0x3c:  mov    0x8(%ebp),%eax
08098adb +0x3f:  mov    %edx,0x8(%eax)
08098ade +0x42:  add    $0x10,%esp
08098ae1 +0x45:  pop    %ebx
08098ae2 +0x46:  pop    %esi
08098ae3 +0x47:  pop    %ebp
08098ae4 +0x48:  ret
08098ae5 +0x49:  mov    %edx,%ebx
08098ae7 +0x4b:  mov    %eax,%esi
08098ae9 +0x4d:  mov    0x8(%ebp),%eax
08098aec +0x50:  mov    %eax,(%esp)
08098aef +0x53:  call   0809de88 <_ZN9IChecksumD1Ev>  ; IChecksum::~IChecksum()
08098af4 +0x58:  mov    %esi,%eax
08098af6 +0x5a:  mov    %ebx,%edx
08098af8 +0x5c:  mov    %eax,(%esp)
08098afb +0x5f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CNChecksumSha384::CNChecksumSha384 @ 0x8098a9c

/* CNChecksumSha384::CNChecksumSha384() */

void __thiscall CNChecksumSha384::CNChecksumSha384(CNChecksumSha384 *this)

{
  void *pvVar1;
  
  IChecksum::IChecksum((IChecksum *)this,2);
  *(undefined ***)this = &PTR__CNChecksumSha384_08b135c8;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 08098ad1 to 08098ad5 has its CatchHandler @ 08098ae5 */
  pvVar1 = operator_new(0xd0);
  *(void **)(this + 8) = pvVar1;
  return;
}
```
