# ChecksumUpdate

`_ZN13CNChecksumMd514ChecksumUpdateEPKhi`

`CNChecksumMd5::ChecksumUpdate(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumMd5` | `0x0809861c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809861c  _ZN13CNChecksumMd514ChecksumUpdateEPKhi
#           CNChecksumMd5::ChecksumUpdate(unsigned char const*, int)
# range [0x0809861c, 0x08098655]
0809861c +0x00:  push   %ebp
0809861d +0x01:  mov    %esp,%ebp
0809861f +0x03:  sub    $0x18,%esp
08098622 +0x06:  mov    0x8(%ebp),%eax
08098625 +0x09:  mov    0x8(%eax),%eax
08098628 +0x0c:  test   %eax,%eax
0809862a +0x0e:  jne    08098633 <+0x17>
0809862c +0x10:  mov    $0x70000000,%eax
08098631 +0x15:  jmp    08098654 <+0x38>
08098633 +0x17:  mov    0x8(%ebp),%eax
08098636 +0x1a:  mov    0x8(%eax),%eax
08098639 +0x1d:  mov    0x10(%ebp),%edx
0809863c +0x20:  mov    %edx,0x8(%esp)
08098640 +0x24:  mov    0xc(%ebp),%edx
08098643 +0x27:  mov    %edx,0x4(%esp)
08098647 +0x2b:  mov    %eax,(%esp)
0809864a +0x2e:  call   080b3a8d <_Z10md5_updateP11md5_contextPhi>  ; md5_update(md5_context*, unsigned char*, int)
0809864f +0x33:  mov    $0x6fffffff,%eax
08098654 +0x38:  leave
08098655 +0x39:  ret
```

## 反编译 C

```c
// CNChecksumMd5::ChecksumUpdate @ 0x809861c

/* CNChecksumMd5::ChecksumUpdate(unsigned char const*, int) */

undefined4 __thiscall CNChecksumMd5::ChecksumUpdate(CNChecksumMd5 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    md5_update(*(md5_context **)(this + 8),param_1,param_2);
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
