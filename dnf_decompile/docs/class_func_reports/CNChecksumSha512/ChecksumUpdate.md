# ChecksumUpdate

`_ZN16CNChecksumSha51214ChecksumUpdateEPKhi`

`CNChecksumSha512::ChecksumUpdate(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha512` | `0x080991ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080991ca  _ZN16CNChecksumSha51214ChecksumUpdateEPKhi
#           CNChecksumSha512::ChecksumUpdate(unsigned char const*, int)
# range [0x080991ca, 0x08099203]
080991ca +0x00:  push   %ebp
080991cb +0x01:  mov    %esp,%ebp
080991cd +0x03:  sub    $0x18,%esp
080991d0 +0x06:  mov    0x8(%ebp),%eax
080991d3 +0x09:  mov    0x8(%eax),%eax
080991d6 +0x0c:  test   %eax,%eax
080991d8 +0x0e:  jne    080991e1 <+0x17>
080991da +0x10:  mov    $0x70000000,%eax
080991df +0x15:  jmp    08099202 <+0x38>
080991e1 +0x17:  mov    0x10(%ebp),%edx
080991e4 +0x1a:  mov    0x8(%ebp),%eax
080991e7 +0x1d:  mov    0x8(%eax),%eax
080991ea +0x20:  mov    %edx,0x8(%esp)
080991ee +0x24:  mov    0xc(%ebp),%edx
080991f1 +0x27:  mov    %edx,0x4(%esp)
080991f5 +0x2b:  mov    %eax,(%esp)
080991f8 +0x2e:  call   080c28b9 <_Z13SHA512_UpdateP15SHA512_ALG_INFOPhm>  ; SHA512_Update(SHA512_ALG_INFO*, unsigned char*, unsigned long)
080991fd +0x33:  mov    $0x6fffffff,%eax
08099202 +0x38:  leave
08099203 +0x39:  ret
```

## 反编译 C

```c
// CNChecksumSha512::ChecksumUpdate @ 0x80991ca

/* CNChecksumSha512::ChecksumUpdate(unsigned char const*, int) */

undefined4 __thiscall
CNChecksumSha512::ChecksumUpdate(CNChecksumSha512 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    SHA512_Update(*(SHA512_ALG_INFO **)(this + 8),param_1,param_2);
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
