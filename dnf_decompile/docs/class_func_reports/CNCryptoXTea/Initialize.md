# Initialize

`_ZN12CNCryptoXTea10InitializeEPKhi`

`CNCryptoXTea::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoXTea` | `0x0809da20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809da20  _ZN12CNCryptoXTea10InitializeEPKhi
#           CNCryptoXTea::Initialize(unsigned char const*, int)
# range [0x0809da20, 0x0809dac7]
0809da20 +0x00:  push   %ebp
0809da21 +0x01:  mov    %esp,%ebp
0809da23 +0x03:  sub    $0x28,%esp
0809da26 +0x06:  mov    0x8(%ebp),%eax
0809da29 +0x09:  mov    0x8(%eax),%eax
0809da2c +0x0c:  test   %eax,%eax
0809da2e +0x0e:  jne    0809da3a <+0x1a>
0809da30 +0x10:  mov    $0x7000000c,%eax
0809da35 +0x15:  jmp    0809dac5 <+0xa5>
0809da3a +0x1a:  mov    0x8(%ebp),%eax
0809da3d +0x1d:  mov    (%eax),%eax
0809da3f +0x1f:  add    $0x20,%eax
0809da42 +0x22:  mov    (%eax),%edx
0809da44 +0x24:  mov    0x8(%ebp),%eax
0809da47 +0x27:  mov    %eax,(%esp)
0809da4a +0x2a:  call   *%edx
0809da4c +0x2c:  cmp    0x10(%ebp),%eax
0809da4f +0x2f:  setg   %al
0809da52 +0x32:  test   %al,%al
0809da54 +0x34:  je     0809da5d <+0x3d>
0809da56 +0x36:  mov    $0x7000000a,%eax
0809da5b +0x3b:  jmp    0809dac5 <+0xa5>
0809da5d +0x3d:  mov    0x8(%ebp),%eax
0809da60 +0x40:  mov    0x8(%eax),%eax
0809da63 +0x43:  mov    %eax,-0x10(%ebp)
0809da66 +0x46:  mov    0x8(%ebp),%eax
0809da69 +0x49:  mov    (%eax),%eax
0809da6b +0x4b:  add    $0x20,%eax
0809da6e +0x4e:  mov    (%eax),%edx
0809da70 +0x50:  mov    0x8(%ebp),%eax
0809da73 +0x53:  mov    %eax,(%esp)
0809da76 +0x56:  call   *%edx
0809da78 +0x58:  mov    -0x10(%ebp),%edx
0809da7b +0x5b:  mov    %edx,0xc(%esp)
0809da7f +0x5f:  movl   $0x20,0x8(%esp)
0809da87 +0x67:  mov    %eax,0x4(%esp)
0809da8b +0x6b:  mov    0xc(%ebp),%eax
0809da8e +0x6e:  mov    %eax,(%esp)
0809da91 +0x71:  call   080c5388 <_Z10xtea_setupPKhiiP13symmetric_key>  ; xtea_setup(unsigned char const*, int, int, symmetric_key*)
0809da96 +0x76:  mov    %eax,-0xc(%ebp)
0809da99 +0x79:  cmpl   $0x0,-0xc(%ebp)
0809da9d +0x7d:  jne    0809daa6 <+0x86>
0809da9f +0x7f:  mov    $0x6fffffff,%eax
0809daa4 +0x84:  jmp    0809dac5 <+0xa5>
0809daa6 +0x86:  cmpl   $0x3,-0xc(%ebp)
0809daaa +0x8a:  jne    0809dab3 <+0x93>
0809daac +0x8c:  mov    $0x70000002,%eax
0809dab1 +0x91:  jmp    0809dac5 <+0xa5>
0809dab3 +0x93:  cmpl   $0x4,-0xc(%ebp)
0809dab7 +0x97:  jne    0809dac0 <+0xa0>
0809dab9 +0x99:  mov    $0x7000001a,%eax
0809dabe +0x9e:  jmp    0809dac5 <+0xa5>
0809dac0 +0xa0:  mov    $0x70000000,%eax
0809dac5 +0xa5:  leave
0809dac6 +0xa6:  ret
0809dac7 +0xa7:  nop
```

## 反编译 C

```c
// CNCryptoXTea::Initialize @ 0x809da20

/* CNCryptoXTea::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoXTea::Initialize(CNCryptoXTea *this,uchar *param_1,int param_2)

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
      iVar3 = xtea_setup(param_1,iVar3,0x20,psVar1);
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
