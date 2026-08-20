# Initialize

`_ZN14CNCryptoKasumi10InitializeEPKhi`

`CNCryptoKasumi::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoKasumi` | `0x0809a604` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a604  _ZN14CNCryptoKasumi10InitializeEPKhi
#           CNCryptoKasumi::Initialize(unsigned char const*, int)
# range [0x0809a604, 0x0809a6ab]
0809a604 +0x00:  push   %ebp
0809a605 +0x01:  mov    %esp,%ebp
0809a607 +0x03:  sub    $0x28,%esp
0809a60a +0x06:  mov    0x8(%ebp),%eax
0809a60d +0x09:  mov    0x8(%eax),%eax
0809a610 +0x0c:  test   %eax,%eax
0809a612 +0x0e:  jne    0809a61e <+0x1a>
0809a614 +0x10:  mov    $0x7000000c,%eax
0809a619 +0x15:  jmp    0809a6a9 <+0xa5>
0809a61e +0x1a:  mov    0x8(%ebp),%eax
0809a621 +0x1d:  mov    (%eax),%eax
0809a623 +0x1f:  add    $0x20,%eax
0809a626 +0x22:  mov    (%eax),%edx
0809a628 +0x24:  mov    0x8(%ebp),%eax
0809a62b +0x27:  mov    %eax,(%esp)
0809a62e +0x2a:  call   *%edx
0809a630 +0x2c:  cmp    0x10(%ebp),%eax
0809a633 +0x2f:  setg   %al
0809a636 +0x32:  test   %al,%al
0809a638 +0x34:  je     0809a641 <+0x3d>
0809a63a +0x36:  mov    $0x7000000a,%eax
0809a63f +0x3b:  jmp    0809a6a9 <+0xa5>
0809a641 +0x3d:  mov    0x8(%ebp),%eax
0809a644 +0x40:  mov    0x8(%eax),%eax
0809a647 +0x43:  mov    %eax,-0x10(%ebp)
0809a64a +0x46:  mov    0x8(%ebp),%eax
0809a64d +0x49:  mov    (%eax),%eax
0809a64f +0x4b:  add    $0x20,%eax
0809a652 +0x4e:  mov    (%eax),%edx
0809a654 +0x50:  mov    0x8(%ebp),%eax
0809a657 +0x53:  mov    %eax,(%esp)
0809a65a +0x56:  call   *%edx
0809a65c +0x58:  mov    -0x10(%ebp),%edx
0809a65f +0x5b:  mov    %edx,0xc(%esp)
0809a663 +0x5f:  movl   $0x8,0x8(%esp)
0809a66b +0x67:  mov    %eax,0x4(%esp)
0809a66f +0x6b:  mov    0xc(%ebp),%eax
0809a672 +0x6e:  mov    %eax,(%esp)
0809a675 +0x71:  call   080b1a27 <_Z12kasumi_setupPKhiiP13symmetric_key>  ; kasumi_setup(unsigned char const*, int, int, symmetric_key*)
0809a67a +0x76:  mov    %eax,-0xc(%ebp)
0809a67d +0x79:  cmpl   $0x0,-0xc(%ebp)
0809a681 +0x7d:  jne    0809a68a <+0x86>
0809a683 +0x7f:  mov    $0x6fffffff,%eax
0809a688 +0x84:  jmp    0809a6a9 <+0xa5>
0809a68a +0x86:  cmpl   $0x3,-0xc(%ebp)
0809a68e +0x8a:  jne    0809a697 <+0x93>
0809a690 +0x8c:  mov    $0x70000002,%eax
0809a695 +0x91:  jmp    0809a6a9 <+0xa5>
0809a697 +0x93:  cmpl   $0x4,-0xc(%ebp)
0809a69b +0x97:  jne    0809a6a4 <+0xa0>
0809a69d +0x99:  mov    $0x7000001a,%eax
0809a6a2 +0x9e:  jmp    0809a6a9 <+0xa5>
0809a6a4 +0xa0:  mov    $0x70000000,%eax
0809a6a9 +0xa5:  leave
0809a6aa +0xa6:  ret
0809a6ab +0xa7:  nop
```

## 反编译 C

```c
// CNCryptoKasumi::Initialize @ 0x809a604

/* CNCryptoKasumi::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoKasumi::Initialize(CNCryptoKasumi *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_2 < iVar3) {
      uVar2 = 0x7000000a;
    }
    else {
      psVar1 = *(symmetric_key **)(this + 8);
      iVar3 = (**(code **)(*(int *)this + 0x20))(this);
      iVar3 = kasumi_setup(param_1,iVar3,8,psVar1);
      if (iVar3 == 0) {
        uVar2 = 0x6fffffff;
      }
      else if (iVar3 == 3) {
        uVar2 = 0x70000002;
      }
      else if (iVar3 == 4) {
        uVar2 = 0x7000001a;
      }
      else {
        uVar2 = 0x70000000;
      }
    }
  }
  return uVar2;
}
```
