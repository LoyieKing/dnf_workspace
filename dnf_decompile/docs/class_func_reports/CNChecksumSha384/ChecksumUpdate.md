# ChecksumUpdate

`_ZN16CNChecksumSha38414ChecksumUpdateEPKhi`

`CNChecksumSha384::ChecksumUpdate(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha384` | `0x08098de6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098de6  _ZN16CNChecksumSha38414ChecksumUpdateEPKhi
#           CNChecksumSha384::ChecksumUpdate(unsigned char const*, int)
# range [0x08098de6, 0x08098e1f]
08098de6 +0x00:  push   %ebp
08098de7 +0x01:  mov    %esp,%ebp
08098de9 +0x03:  sub    $0x18,%esp
08098dec +0x06:  mov    0x8(%ebp),%eax
08098def +0x09:  mov    0x8(%eax),%eax
08098df2 +0x0c:  test   %eax,%eax
08098df4 +0x0e:  jne    08098dfd <+0x17>
08098df6 +0x10:  mov    $0x70000000,%eax
08098dfb +0x15:  jmp    08098e1e <+0x38>
08098dfd +0x17:  mov    0x10(%ebp),%edx
08098e00 +0x1a:  mov    0x8(%ebp),%eax
08098e03 +0x1d:  mov    0x8(%eax),%eax
08098e06 +0x20:  mov    %edx,0x8(%esp)
08098e0a +0x24:  mov    0xc(%ebp),%edx
08098e0d +0x27:  mov    %edx,0x4(%esp)
08098e11 +0x2b:  mov    %eax,(%esp)
08098e14 +0x2e:  call   080c0469 <_Z13SHA384_UpdateP15SHA384_ALG_INFOPhm>  ; SHA384_Update(SHA384_ALG_INFO*, unsigned char*, unsigned long)
08098e19 +0x33:  mov    $0x6fffffff,%eax
08098e1e +0x38:  leave
08098e1f +0x39:  ret
```

## 反编译 C

```c
// CNChecksumSha384::ChecksumUpdate @ 0x8098de6

/* CNChecksumSha384::ChecksumUpdate(unsigned char const*, int) */

undefined4 __thiscall
CNChecksumSha384::ChecksumUpdate(CNChecksumSha384 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    SHA384_Update(*(SHA384_ALG_INFO **)(this + 8),param_1,param_2);
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
