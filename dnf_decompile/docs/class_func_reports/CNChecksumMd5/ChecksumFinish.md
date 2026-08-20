# ChecksumFinish

`_ZN13CNChecksumMd514ChecksumFinishEPhi`

`CNChecksumMd5::ChecksumFinish(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumMd5` | `0x08098656` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098656  _ZN13CNChecksumMd514ChecksumFinishEPhi
#           CNChecksumMd5::ChecksumFinish(unsigned char*, int)
# range [0x08098656, 0x080986ab]
08098656 +0x00:  push   %ebp
08098657 +0x01:  mov    %esp,%ebp
08098659 +0x03:  sub    $0x18,%esp
0809865c +0x06:  mov    0x8(%ebp),%eax
0809865f +0x09:  mov    0x8(%eax),%eax
08098662 +0x0c:  test   %eax,%eax
08098664 +0x0e:  jne    0809866d <+0x17>
08098666 +0x10:  mov    $0x70000000,%eax
0809866b +0x15:  jmp    080986aa <+0x54>
0809866d +0x17:  mov    0x8(%ebp),%eax
08098670 +0x1a:  mov    (%eax),%eax
08098672 +0x1c:  add    $0x20,%eax
08098675 +0x1f:  mov    (%eax),%edx
08098677 +0x21:  mov    0x8(%ebp),%eax
0809867a +0x24:  mov    %eax,(%esp)
0809867d +0x27:  call   *%edx
0809867f +0x29:  cmp    0x10(%ebp),%eax
08098682 +0x2c:  setg   %al
08098685 +0x2f:  test   %al,%al
08098687 +0x31:  je     08098690 <+0x3a>
08098689 +0x33:  mov    $0x70000001,%eax
0809868e +0x38:  jmp    080986aa <+0x54>
08098690 +0x3a:  mov    0x8(%ebp),%eax
08098693 +0x3d:  mov    0x8(%eax),%eax
08098696 +0x40:  mov    0xc(%ebp),%edx
08098699 +0x43:  mov    %edx,0x4(%esp)
0809869d +0x47:  mov    %eax,(%esp)
080986a0 +0x4a:  call   080b3b8d <_Z10md5_finishP11md5_contextPh>  ; md5_finish(md5_context*, unsigned char*)
080986a5 +0x4f:  mov    $0x6fffffff,%eax
080986aa +0x54:  leave
080986ab +0x55:  ret
```

## 反编译 C

```c
// CNChecksumMd5::ChecksumFinish @ 0x8098656

/* CNChecksumMd5::ChecksumFinish(unsigned char*, int) */

undefined4 __thiscall CNChecksumMd5::ChecksumFinish(CNChecksumMd5 *this,uchar *param_1,int param_2)

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
      md5_finish(*(md5_context **)(this + 8),param_1);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}
```
