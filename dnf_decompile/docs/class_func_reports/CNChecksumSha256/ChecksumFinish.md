# ChecksumFinish

`_ZN16CNChecksumSha25614ChecksumFinishEPhi`

`CNChecksumSha256::ChecksumFinish(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha256` | `0x08098a3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098a3c  _ZN16CNChecksumSha25614ChecksumFinishEPhi
#           CNChecksumSha256::ChecksumFinish(unsigned char*, int)
# range [0x08098a3c, 0x08098a91]
08098a3c +0x00:  push   %ebp
08098a3d +0x01:  mov    %esp,%ebp
08098a3f +0x03:  sub    $0x18,%esp
08098a42 +0x06:  mov    0x8(%ebp),%eax
08098a45 +0x09:  mov    0x8(%eax),%eax
08098a48 +0x0c:  test   %eax,%eax
08098a4a +0x0e:  jne    08098a53 <+0x17>
08098a4c +0x10:  mov    $0x70000000,%eax
08098a51 +0x15:  jmp    08098a90 <+0x54>
08098a53 +0x17:  mov    0x8(%ebp),%eax
08098a56 +0x1a:  mov    (%eax),%eax
08098a58 +0x1c:  add    $0x20,%eax
08098a5b +0x1f:  mov    (%eax),%edx
08098a5d +0x21:  mov    0x8(%ebp),%eax
08098a60 +0x24:  mov    %eax,(%esp)
08098a63 +0x27:  call   *%edx
08098a65 +0x29:  cmp    0x10(%ebp),%eax
08098a68 +0x2c:  setg   %al
08098a6b +0x2f:  test   %al,%al
08098a6d +0x31:  je     08098a76 <+0x3a>
08098a6f +0x33:  mov    $0x70000001,%eax
08098a74 +0x38:  jmp    08098a90 <+0x54>
08098a76 +0x3a:  mov    0x8(%ebp),%eax
08098a79 +0x3d:  mov    0x8(%eax),%eax
08098a7c +0x40:  mov    0xc(%ebp),%edx
08098a7f +0x43:  mov    %edx,0x4(%esp)
08098a83 +0x47:  mov    %eax,(%esp)
08098a86 +0x4a:  call   080be1d1 <_Z12SHA256_FinalP15SHA256_ALG_INFOPh>  ; SHA256_Final(SHA256_ALG_INFO*, unsigned char*)
08098a8b +0x4f:  mov    $0x6fffffff,%eax
08098a90 +0x54:  leave
08098a91 +0x55:  ret
```

## 反编译 C

```c
// CNChecksumSha256::ChecksumFinish @ 0x8098a3c

/* CNChecksumSha256::ChecksumFinish(unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha256::ChecksumFinish(CNChecksumSha256 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_2 < iVar2) {
      uVar1 = 0x70000001;
    }
    else {
      SHA256_Final(*(SHA256_ALG_INFO **)(this + 8),param_1);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}
```
