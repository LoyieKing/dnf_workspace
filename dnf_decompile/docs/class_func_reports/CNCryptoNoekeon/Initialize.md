# Initialize

`_ZN15CNCryptoNoekeon10InitializeEPKhi`

`CNCryptoNoekeon::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoNoekeon` | `0x0809b6f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b6f0  _ZN15CNCryptoNoekeon10InitializeEPKhi
#           CNCryptoNoekeon::Initialize(unsigned char const*, int)
# range [0x0809b6f0, 0x0809b797]
0809b6f0 +0x00:  push   %ebp
0809b6f1 +0x01:  mov    %esp,%ebp
0809b6f3 +0x03:  sub    $0x28,%esp
0809b6f6 +0x06:  mov    0x8(%ebp),%eax
0809b6f9 +0x09:  mov    0x8(%eax),%eax
0809b6fc +0x0c:  test   %eax,%eax
0809b6fe +0x0e:  jne    0809b70a <+0x1a>
0809b700 +0x10:  mov    $0x7000000c,%eax
0809b705 +0x15:  jmp    0809b795 <+0xa5>
0809b70a +0x1a:  mov    0x8(%ebp),%eax
0809b70d +0x1d:  mov    (%eax),%eax
0809b70f +0x1f:  add    $0x20,%eax
0809b712 +0x22:  mov    (%eax),%edx
0809b714 +0x24:  mov    0x8(%ebp),%eax
0809b717 +0x27:  mov    %eax,(%esp)
0809b71a +0x2a:  call   *%edx
0809b71c +0x2c:  cmp    0x10(%ebp),%eax
0809b71f +0x2f:  setg   %al
0809b722 +0x32:  test   %al,%al
0809b724 +0x34:  je     0809b72d <+0x3d>
0809b726 +0x36:  mov    $0x7000000a,%eax
0809b72b +0x3b:  jmp    0809b795 <+0xa5>
0809b72d +0x3d:  mov    0x8(%ebp),%eax
0809b730 +0x40:  mov    0x8(%eax),%eax
0809b733 +0x43:  mov    %eax,-0x10(%ebp)
0809b736 +0x46:  mov    0x8(%ebp),%eax
0809b739 +0x49:  mov    (%eax),%eax
0809b73b +0x4b:  add    $0x20,%eax
0809b73e +0x4e:  mov    (%eax),%edx
0809b740 +0x50:  mov    0x8(%ebp),%eax
0809b743 +0x53:  mov    %eax,(%esp)
0809b746 +0x56:  call   *%edx
0809b748 +0x58:  mov    -0x10(%ebp),%edx
0809b74b +0x5b:  mov    %edx,0xc(%esp)
0809b74f +0x5f:  movl   $0x10,0x8(%esp)
0809b757 +0x67:  mov    %eax,0x4(%esp)
0809b75b +0x6b:  mov    0xc(%ebp),%eax
0809b75e +0x6e:  mov    %eax,(%esp)
0809b761 +0x71:  call   080b4ef6 <_Z13noekeon_setupPKhiiP13symmetric_key>  ; noekeon_setup(unsigned char const*, int, int, symmetric_key*)
0809b766 +0x76:  mov    %eax,-0xc(%ebp)
0809b769 +0x79:  cmpl   $0x0,-0xc(%ebp)
0809b76d +0x7d:  jne    0809b776 <+0x86>
0809b76f +0x7f:  mov    $0x6fffffff,%eax
0809b774 +0x84:  jmp    0809b795 <+0xa5>
0809b776 +0x86:  cmpl   $0x3,-0xc(%ebp)
0809b77a +0x8a:  jne    0809b783 <+0x93>
0809b77c +0x8c:  mov    $0x70000002,%eax
0809b781 +0x91:  jmp    0809b795 <+0xa5>
0809b783 +0x93:  cmpl   $0x4,-0xc(%ebp)
0809b787 +0x97:  jne    0809b790 <+0xa0>
0809b789 +0x99:  mov    $0x7000001a,%eax
0809b78e +0x9e:  jmp    0809b795 <+0xa5>
0809b790 +0xa0:  mov    $0x70000000,%eax
0809b795 +0xa5:  leave
0809b796 +0xa6:  ret
0809b797 +0xa7:  nop
```

## 反编译 C

```c
// CNCryptoNoekeon::Initialize @ 0x809b6f0

/* CNCryptoNoekeon::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoNoekeon::Initialize(CNCryptoNoekeon *this,uchar *param_1,int param_2)

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
      iVar3 = noekeon_setup(param_1,iVar3,0x10,psVar1);
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
