# ChecksumFinish

`_ZN16CNChecksumSha38414ChecksumFinishEPhi`

`CNChecksumSha384::ChecksumFinish(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha384` | `0x08098e20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098e20  _ZN16CNChecksumSha38414ChecksumFinishEPhi
#           CNChecksumSha384::ChecksumFinish(unsigned char*, int)
# range [0x08098e20, 0x08098e75]
08098e20 +0x00:  push   %ebp
08098e21 +0x01:  mov    %esp,%ebp
08098e23 +0x03:  sub    $0x18,%esp
08098e26 +0x06:  mov    0x8(%ebp),%eax
08098e29 +0x09:  mov    0x8(%eax),%eax
08098e2c +0x0c:  test   %eax,%eax
08098e2e +0x0e:  jne    08098e37 <+0x17>
08098e30 +0x10:  mov    $0x70000000,%eax
08098e35 +0x15:  jmp    08098e74 <+0x54>
08098e37 +0x17:  mov    0x8(%ebp),%eax
08098e3a +0x1a:  mov    (%eax),%eax
08098e3c +0x1c:  add    $0x20,%eax
08098e3f +0x1f:  mov    (%eax),%edx
08098e41 +0x21:  mov    0x8(%ebp),%eax
08098e44 +0x24:  mov    %eax,(%esp)
08098e47 +0x27:  call   *%edx
08098e49 +0x29:  cmp    0x10(%ebp),%eax
08098e4c +0x2c:  setg   %al
08098e4f +0x2f:  test   %al,%al
08098e51 +0x31:  je     08098e5a <+0x3a>
08098e53 +0x33:  mov    $0x70000001,%eax
08098e58 +0x38:  jmp    08098e74 <+0x54>
08098e5a +0x3a:  mov    0x8(%ebp),%eax
08098e5d +0x3d:  mov    0x8(%eax),%eax
08098e60 +0x40:  mov    0xc(%ebp),%edx
08098e63 +0x43:  mov    %edx,0x4(%esp)
08098e67 +0x47:  mov    %eax,(%esp)
08098e6a +0x4a:  call   080c062e <_Z12SHA384_FinalP15SHA384_ALG_INFOPh>  ; SHA384_Final(SHA384_ALG_INFO*, unsigned char*)
08098e6f +0x4f:  mov    $0x6fffffff,%eax
08098e74 +0x54:  leave
08098e75 +0x55:  ret
```

## 反编译 C

```c
// CNChecksumSha384::ChecksumFinish @ 0x8098e20

/* CNChecksumSha384::ChecksumFinish(unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha384::ChecksumFinish(CNChecksumSha384 *this,uchar *param_1,int param_2)

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
      SHA384_Final(*(SHA384_ALG_INFO **)(this + 8),param_1);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}
```
