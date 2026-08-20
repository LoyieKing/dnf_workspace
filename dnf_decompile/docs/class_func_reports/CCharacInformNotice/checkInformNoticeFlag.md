# checkInformNoticeFlag

`_ZN19CCharacInformNotice21checkInformNoticeFlagEjj`

`CCharacInformNotice::checkInformNoticeFlag(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CCharacInformNotice` | `0x080e4892` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e4892  _ZN19CCharacInformNotice21checkInformNoticeFlagEjj
#           CCharacInformNotice::checkInformNoticeFlag(unsigned int, unsigned int)
# range [0x080e4892, 0x080e48eb]
080e4892 +0x00:  push   %ebp
080e4893 +0x01:  mov    %esp,%ebp
080e4895 +0x03:  push   %ebx
080e4896 +0x04:  sub    $0x10,%esp
080e4899 +0x07:  cmpl   $0x7,0xc(%ebp)
080e489d +0x0b:  jbe    080e48a6 <+0x14>
080e489f +0x0d:  mov    $0x0,%eax
080e48a4 +0x12:  jmp    080e48e6 <+0x54>
080e48a6 +0x14:  cmpl   $0xf,0x10(%ebp)
080e48aa +0x18:  jbe    080e48b3 <+0x21>
080e48ac +0x1a:  mov    $0x0,%eax
080e48b1 +0x1f:  jmp    080e48e6 <+0x54>
080e48b3 +0x21:  mov    0x10(%ebp),%eax
080e48b6 +0x24:  mov    0x8(%ebp),%edx
080e48b9 +0x27:  movzbl 0x5(%edx,%eax,1),%eax
080e48be +0x2c:  mov    %al,-0x5(%ebp)
080e48c1 +0x2f:  movzbl -0x5(%ebp),%edx
080e48c5 +0x33:  mov    0xc(%ebp),%eax
080e48c8 +0x36:  mov    %edx,%ebx
080e48ca +0x38:  mov    %eax,%ecx
080e48cc +0x3a:  sar    %cl,%ebx
080e48ce +0x3c:  mov    %ebx,%eax
080e48d0 +0x3e:  and    $0x1,%eax
080e48d3 +0x41:  xor    $0x1,%eax
080e48d6 +0x44:  test   %al,%al
080e48d8 +0x46:  je     080e48e1 <+0x4f>
080e48da +0x48:  mov    $0x1,%eax
080e48df +0x4d:  jmp    080e48e6 <+0x54>
080e48e1 +0x4f:  mov    $0x0,%eax
080e48e6 +0x54:  add    $0x10,%esp
080e48e9 +0x57:  pop    %ebx
080e48ea +0x58:  pop    %ebp
080e48eb +0x59:  ret
```

## 反编译 C

```c
// CCharacInformNotice::checkInformNoticeFlag @ 0x80e4892

/* CCharacInformNotice::checkInformNoticeFlag(unsigned int, unsigned int) */

undefined4 __thiscall
CCharacInformNotice::checkInformNoticeFlag(CCharacInformNotice *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    if (param_2 < 0x10) {
      if (((byte)((int)(uint)(byte)this[param_2 + 5] >> ((byte)param_1 & 0x1f)) & 1) == 1) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
