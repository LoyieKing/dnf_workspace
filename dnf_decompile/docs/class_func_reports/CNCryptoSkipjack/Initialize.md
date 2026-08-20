# Initialize

`_ZN16CNCryptoSkipjack10InitializeEPKhi`

`CNCryptoSkipjack::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoSkipjack` | `0x0809ca00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809ca00  _ZN16CNCryptoSkipjack10InitializeEPKhi
#           CNCryptoSkipjack::Initialize(unsigned char const*, int)
# range [0x0809ca00, 0x0809caa7]
0809ca00 +0x00:  push   %ebp
0809ca01 +0x01:  mov    %esp,%ebp
0809ca03 +0x03:  sub    $0x28,%esp
0809ca06 +0x06:  mov    0x8(%ebp),%eax
0809ca09 +0x09:  mov    0x8(%eax),%eax
0809ca0c +0x0c:  test   %eax,%eax
0809ca0e +0x0e:  jne    0809ca1a <+0x1a>
0809ca10 +0x10:  mov    $0x7000000c,%eax
0809ca15 +0x15:  jmp    0809caa5 <+0xa5>
0809ca1a +0x1a:  mov    0x8(%ebp),%eax
0809ca1d +0x1d:  mov    (%eax),%eax
0809ca1f +0x1f:  add    $0x20,%eax
0809ca22 +0x22:  mov    (%eax),%edx
0809ca24 +0x24:  mov    0x8(%ebp),%eax
0809ca27 +0x27:  mov    %eax,(%esp)
0809ca2a +0x2a:  call   *%edx
0809ca2c +0x2c:  cmp    0x10(%ebp),%eax
0809ca2f +0x2f:  setg   %al
0809ca32 +0x32:  test   %al,%al
0809ca34 +0x34:  je     0809ca3d <+0x3d>
0809ca36 +0x36:  mov    $0x7000000a,%eax
0809ca3b +0x3b:  jmp    0809caa5 <+0xa5>
0809ca3d +0x3d:  mov    0x8(%ebp),%eax
0809ca40 +0x40:  mov    0x8(%eax),%eax
0809ca43 +0x43:  mov    %eax,-0x10(%ebp)
0809ca46 +0x46:  mov    0x8(%ebp),%eax
0809ca49 +0x49:  mov    (%eax),%eax
0809ca4b +0x4b:  add    $0x20,%eax
0809ca4e +0x4e:  mov    (%eax),%edx
0809ca50 +0x50:  mov    0x8(%ebp),%eax
0809ca53 +0x53:  mov    %eax,(%esp)
0809ca56 +0x56:  call   *%edx
0809ca58 +0x58:  mov    -0x10(%ebp),%edx
0809ca5b +0x5b:  mov    %edx,0xc(%esp)
0809ca5f +0x5f:  movl   $0x20,0x8(%esp)
0809ca67 +0x67:  mov    %eax,0x4(%esp)
0809ca6b +0x6b:  mov    0xc(%ebp),%eax
0809ca6e +0x6e:  mov    %eax,(%esp)
0809ca71 +0x71:  call   080c2bcc <_Z14skipjack_setupPKhiiP13symmetric_key>  ; skipjack_setup(unsigned char const*, int, int, symmetric_key*)
0809ca76 +0x76:  mov    %eax,-0xc(%ebp)
0809ca79 +0x79:  cmpl   $0x0,-0xc(%ebp)
0809ca7d +0x7d:  jne    0809ca86 <+0x86>
0809ca7f +0x7f:  mov    $0x6fffffff,%eax
0809ca84 +0x84:  jmp    0809caa5 <+0xa5>
0809ca86 +0x86:  cmpl   $0x3,-0xc(%ebp)
0809ca8a +0x8a:  jne    0809ca93 <+0x93>
0809ca8c +0x8c:  mov    $0x70000002,%eax
0809ca91 +0x91:  jmp    0809caa5 <+0xa5>
0809ca93 +0x93:  cmpl   $0x4,-0xc(%ebp)
0809ca97 +0x97:  jne    0809caa0 <+0xa0>
0809ca99 +0x99:  mov    $0x7000001a,%eax
0809ca9e +0x9e:  jmp    0809caa5 <+0xa5>
0809caa0 +0xa0:  mov    $0x70000000,%eax
0809caa5 +0xa5:  leave
0809caa6 +0xa6:  ret
0809caa7 +0xa7:  nop
```

## 反编译 C

```c
// CNCryptoSkipjack::Initialize @ 0x809ca00

/* CNCryptoSkipjack::Initialize(unsigned char const*, int) */

undefined4 __thiscall
CNCryptoSkipjack::Initialize(CNCryptoSkipjack *this,uchar *param_1,int param_2)

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
      iVar3 = skipjack_setup(param_1,iVar3,0x20,psVar1);
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
