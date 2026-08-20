# ChecksumUpdate

`_ZN16CNChecksumSha25614ChecksumUpdateEPKhi`

`CNChecksumSha256::ChecksumUpdate(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha256` | `0x08098a02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098a02  _ZN16CNChecksumSha25614ChecksumUpdateEPKhi
#           CNChecksumSha256::ChecksumUpdate(unsigned char const*, int)
# range [0x08098a02, 0x08098a3b]
08098a02 +0x00:  push   %ebp
08098a03 +0x01:  mov    %esp,%ebp
08098a05 +0x03:  sub    $0x18,%esp
08098a08 +0x06:  mov    0x8(%ebp),%eax
08098a0b +0x09:  mov    0x8(%eax),%eax
08098a0e +0x0c:  test   %eax,%eax
08098a10 +0x0e:  jne    08098a19 <+0x17>
08098a12 +0x10:  mov    $0x70000000,%eax
08098a17 +0x15:  jmp    08098a3a <+0x38>
08098a19 +0x17:  mov    0x10(%ebp),%edx
08098a1c +0x1a:  mov    0x8(%ebp),%eax
08098a1f +0x1d:  mov    0x8(%eax),%eax
08098a22 +0x20:  mov    %edx,0x8(%esp)
08098a26 +0x24:  mov    0xc(%ebp),%edx
08098a29 +0x27:  mov    %edx,0x4(%esp)
08098a2d +0x2b:  mov    %eax,(%esp)
08098a30 +0x2e:  call   080be08a <_Z13SHA256_UpdateP15SHA256_ALG_INFOPhm>  ; SHA256_Update(SHA256_ALG_INFO*, unsigned char*, unsigned long)
08098a35 +0x33:  mov    $0x6fffffff,%eax
08098a3a +0x38:  leave
08098a3b +0x39:  ret
```

## 反编译 C

```c
// CNChecksumSha256::ChecksumUpdate @ 0x8098a02

/* CNChecksumSha256::ChecksumUpdate(unsigned char const*, int) */

undefined4 __thiscall
CNChecksumSha256::ChecksumUpdate(CNChecksumSha256 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    SHA256_Update(*(SHA256_ALG_INFO **)(this + 8),param_1,param_2);
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
