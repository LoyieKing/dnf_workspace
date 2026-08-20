# Initialize

`_ZN14CNCryptoKhazad10InitializeEPKhi`

`CNCryptoKhazad::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoKhazad` | `0x0809aba8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809aba8  _ZN14CNCryptoKhazad10InitializeEPKhi
#           CNCryptoKhazad::Initialize(unsigned char const*, int)
# range [0x0809aba8, 0x0809ac4f]
0809aba8 +0x00:  push   %ebp
0809aba9 +0x01:  mov    %esp,%ebp
0809abab +0x03:  sub    $0x28,%esp
0809abae +0x06:  mov    0x8(%ebp),%eax
0809abb1 +0x09:  mov    0x8(%eax),%eax
0809abb4 +0x0c:  test   %eax,%eax
0809abb6 +0x0e:  jne    0809abc2 <+0x1a>
0809abb8 +0x10:  mov    $0x7000000c,%eax
0809abbd +0x15:  jmp    0809ac4d <+0xa5>
0809abc2 +0x1a:  mov    0x8(%ebp),%eax
0809abc5 +0x1d:  mov    (%eax),%eax
0809abc7 +0x1f:  add    $0x20,%eax
0809abca +0x22:  mov    (%eax),%edx
0809abcc +0x24:  mov    0x8(%ebp),%eax
0809abcf +0x27:  mov    %eax,(%esp)
0809abd2 +0x2a:  call   *%edx
0809abd4 +0x2c:  cmp    0x10(%ebp),%eax
0809abd7 +0x2f:  setg   %al
0809abda +0x32:  test   %al,%al
0809abdc +0x34:  je     0809abe5 <+0x3d>
0809abde +0x36:  mov    $0x7000000a,%eax
0809abe3 +0x3b:  jmp    0809ac4d <+0xa5>
0809abe5 +0x3d:  mov    0x8(%ebp),%eax
0809abe8 +0x40:  mov    0x8(%eax),%eax
0809abeb +0x43:  mov    %eax,-0x10(%ebp)
0809abee +0x46:  mov    0x8(%ebp),%eax
0809abf1 +0x49:  mov    (%eax),%eax
0809abf3 +0x4b:  add    $0x20,%eax
0809abf6 +0x4e:  mov    (%eax),%edx
0809abf8 +0x50:  mov    0x8(%ebp),%eax
0809abfb +0x53:  mov    %eax,(%esp)
0809abfe +0x56:  call   *%edx
0809ac00 +0x58:  mov    -0x10(%ebp),%edx
0809ac03 +0x5b:  mov    %edx,0xc(%esp)
0809ac07 +0x5f:  movl   $0x8,0x8(%esp)
0809ac0f +0x67:  mov    %eax,0x4(%esp)
0809ac13 +0x6b:  mov    0xc(%ebp),%eax
0809ac16 +0x6e:  mov    %eax,(%esp)
0809ac19 +0x71:  call   080b1c38 <_Z12khazad_setupPKhiiP13symmetric_key>  ; khazad_setup(unsigned char const*, int, int, symmetric_key*)
0809ac1e +0x76:  mov    %eax,-0xc(%ebp)
0809ac21 +0x79:  cmpl   $0x0,-0xc(%ebp)
0809ac25 +0x7d:  jne    0809ac2e <+0x86>
0809ac27 +0x7f:  mov    $0x6fffffff,%eax
0809ac2c +0x84:  jmp    0809ac4d <+0xa5>
0809ac2e +0x86:  cmpl   $0x3,-0xc(%ebp)
0809ac32 +0x8a:  jne    0809ac3b <+0x93>
0809ac34 +0x8c:  mov    $0x70000002,%eax
0809ac39 +0x91:  jmp    0809ac4d <+0xa5>
0809ac3b +0x93:  cmpl   $0x4,-0xc(%ebp)
0809ac3f +0x97:  jne    0809ac48 <+0xa0>
0809ac41 +0x99:  mov    $0x7000001a,%eax
0809ac46 +0x9e:  jmp    0809ac4d <+0xa5>
0809ac48 +0xa0:  mov    $0x70000000,%eax
0809ac4d +0xa5:  leave
0809ac4e +0xa6:  ret
0809ac4f +0xa7:  nop
```

## 反编译 C

```c
// CNCryptoKhazad::Initialize @ 0x809aba8

/* CNCryptoKhazad::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoKhazad::Initialize(CNCryptoKhazad *this,uchar *param_1,int param_2)

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
      iVar3 = khazad_setup(param_1,iVar3,8,psVar1);
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
