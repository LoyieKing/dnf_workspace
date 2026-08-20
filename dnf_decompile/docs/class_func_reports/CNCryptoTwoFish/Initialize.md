# Initialize

`_ZN15CNCryptoTwoFish10InitializeEPKhi`

`CNCryptoTwoFish::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoTwoFish` | `0x0809d47c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d47c  _ZN15CNCryptoTwoFish10InitializeEPKhi
#           CNCryptoTwoFish::Initialize(unsigned char const*, int)
# range [0x0809d47c, 0x0809d523]
0809d47c +0x00:  push   %ebp
0809d47d +0x01:  mov    %esp,%ebp
0809d47f +0x03:  sub    $0x28,%esp
0809d482 +0x06:  mov    0x8(%ebp),%eax
0809d485 +0x09:  mov    0x8(%eax),%eax
0809d488 +0x0c:  test   %eax,%eax
0809d48a +0x0e:  jne    0809d496 <+0x1a>
0809d48c +0x10:  mov    $0x7000000c,%eax
0809d491 +0x15:  jmp    0809d521 <+0xa5>
0809d496 +0x1a:  mov    0x8(%ebp),%eax
0809d499 +0x1d:  mov    (%eax),%eax
0809d49b +0x1f:  add    $0x20,%eax
0809d49e +0x22:  mov    (%eax),%edx
0809d4a0 +0x24:  mov    0x8(%ebp),%eax
0809d4a3 +0x27:  mov    %eax,(%esp)
0809d4a6 +0x2a:  call   *%edx
0809d4a8 +0x2c:  cmp    0x10(%ebp),%eax
0809d4ab +0x2f:  setg   %al
0809d4ae +0x32:  test   %al,%al
0809d4b0 +0x34:  je     0809d4b9 <+0x3d>
0809d4b2 +0x36:  mov    $0x70000002,%eax
0809d4b7 +0x3b:  jmp    0809d521 <+0xa5>
0809d4b9 +0x3d:  mov    0x8(%ebp),%eax
0809d4bc +0x40:  mov    0x8(%eax),%eax
0809d4bf +0x43:  mov    %eax,-0x10(%ebp)
0809d4c2 +0x46:  mov    0x8(%ebp),%eax
0809d4c5 +0x49:  mov    (%eax),%eax
0809d4c7 +0x4b:  add    $0x20,%eax
0809d4ca +0x4e:  mov    (%eax),%edx
0809d4cc +0x50:  mov    0x8(%ebp),%eax
0809d4cf +0x53:  mov    %eax,(%esp)
0809d4d2 +0x56:  call   *%edx
0809d4d4 +0x58:  mov    -0x10(%ebp),%edx
0809d4d7 +0x5b:  mov    %edx,0xc(%esp)
0809d4db +0x5f:  movl   $0x10,0x8(%esp)
0809d4e3 +0x67:  mov    %eax,0x4(%esp)
0809d4e7 +0x6b:  mov    0xc(%ebp),%eax
0809d4ea +0x6e:  mov    %eax,(%esp)
0809d4ed +0x71:  call   080c4994 <_Z13twofish_setupPKhiiP13symmetric_key>  ; twofish_setup(unsigned char const*, int, int, symmetric_key*)
0809d4f2 +0x76:  mov    %eax,-0xc(%ebp)
0809d4f5 +0x79:  cmpl   $0x0,-0xc(%ebp)
0809d4f9 +0x7d:  jne    0809d502 <+0x86>
0809d4fb +0x7f:  mov    $0x6fffffff,%eax
0809d500 +0x84:  jmp    0809d521 <+0xa5>
0809d502 +0x86:  cmpl   $0x4,-0xc(%ebp)
0809d506 +0x8a:  jne    0809d50f <+0x93>
0809d508 +0x8c:  mov    $0x7000001a,%eax
0809d50d +0x91:  jmp    0809d521 <+0xa5>
0809d50f +0x93:  cmpl   $0x3,-0xc(%ebp)
0809d513 +0x97:  jne    0809d51c <+0xa0>
0809d515 +0x99:  mov    $0x70000002,%eax
0809d51a +0x9e:  jmp    0809d521 <+0xa5>
0809d51c +0xa0:  mov    $0x70000000,%eax
0809d521 +0xa5:  leave
0809d522 +0xa6:  ret
0809d523 +0xa7:  nop
```

## 反编译 C

```c
// CNCryptoTwoFish::Initialize @ 0x809d47c

/* CNCryptoTwoFish::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoTwoFish::Initialize(CNCryptoTwoFish *this,uchar *param_1,int param_2)

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
      uVar2 = 0x70000002;
    }
    else {
      psVar1 = *(symmetric_key **)(this + 8);
      iVar3 = (**(code **)(*(int *)this + 0x20))(this);
      iVar3 = twofish_setup(param_1,iVar3,0x10,psVar1);
      if (iVar3 == 0) {
        uVar2 = 0x6fffffff;
      }
      else if (iVar3 == 4) {
        uVar2 = 0x7000001a;
      }
      else if (iVar3 == 3) {
        uVar2 = 0x70000002;
      }
      else {
        uVar2 = 0x70000000;
      }
    }
  }
  return uVar2;
}
```
