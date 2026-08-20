# AdjustDataSize

`_ZNK6Cipher14AdjustDataSizeEiPi`

`Cipher::AdjustDataSize(int, int*) const`

| 类 | 地址 |
|---|---|
| `Cipher` | `0x080973c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080973c0  _ZNK6Cipher14AdjustDataSizeEiPi
#           Cipher::AdjustDataSize(int, int*) const
# range [0x080973c0, 0x08097435]
080973c0 +0x00:  push   %ebp
080973c1 +0x01:  mov    %esp,%ebp
080973c3 +0x03:  sub    $0x28,%esp
080973c6 +0x06:  mov    0xc(%ebp),%eax
080973c9 +0x09:  mov    %eax,(%esp)
080973cc +0x0c:  call   08097160 <_Z13GetCryptoTypei>  ; GetCryptoType(int)
080973d1 +0x11:  mov    %eax,-0x14(%ebp)
080973d4 +0x14:  mov    0x10(%ebp),%eax
080973d7 +0x17:  mov    (%eax),%eax
080973d9 +0x19:  mov    %eax,-0x10(%ebp)
080973dc +0x1c:  mov    -0x14(%ebp),%eax
080973df +0x1f:  mov    0x8(%ebp),%edx
080973e2 +0x22:  add    $0x4,%edx
080973e5 +0x25:  mov    %eax,0x4(%esp)
080973e9 +0x29:  mov    %edx,(%esp)
080973ec +0x2c:  call   08097898 <_GLOBAL__I__Z13GetCryptoTypei+0x254>  ; global constructors keyed to GetCryptoType(int)+0x254
080973f1 +0x31:  mov    (%eax),%eax
080973f3 +0x33:  mov    (%eax),%edx
080973f5 +0x35:  add    $0x24,%edx
080973f8 +0x38:  mov    (%edx),%edx
080973fa +0x3a:  mov    %eax,(%esp)
080973fd +0x3d:  call   *%edx
080973ff +0x3f:  mov    %eax,-0xc(%ebp)
08097402 +0x42:  mov    -0x10(%ebp),%eax
08097405 +0x45:  mov    %eax,%edx
08097407 +0x47:  sar    $0x1f,%edx
0809740a +0x4a:  idivl  -0xc(%ebp)
0809740d +0x4d:  mov    %edx,%eax
0809740f +0x4f:  test   %eax,%eax
08097411 +0x51:  je     08097434 <+0x74>
08097413 +0x53:  mov    -0x10(%ebp),%eax
08097416 +0x56:  mov    %eax,%edx
08097418 +0x58:  sar    $0x1f,%edx
0809741b +0x5b:  idivl  -0xc(%ebp)
0809741e +0x5e:  mov    %edx,%eax
08097420 +0x60:  mov    -0xc(%ebp),%edx
08097423 +0x63:  mov    %edx,%ecx
08097425 +0x65:  sub    %eax,%ecx
08097427 +0x67:  mov    %ecx,%eax
08097429 +0x69:  add    %eax,-0x10(%ebp)
0809742c +0x6c:  mov    0x10(%ebp),%eax
0809742f +0x6f:  mov    -0x10(%ebp),%edx
08097432 +0x72:  mov    %edx,(%eax)
08097434 +0x74:  leave
08097435 +0x75:  ret
```

## 反编译 C

```c
// Cipher::AdjustDataSize @ 0x80973c0

/* Cipher::AdjustDataSize(int, int*) const */

void __thiscall Cipher::AdjustDataSize(Cipher *this,int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar2 = GetCryptoType(param_1);
  iVar1 = *param_2;
  puVar3 = (undefined4 *)
           std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                     ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),uVar2);
  iVar4 = (**(code **)(*(int *)*puVar3 + 0x24))((int *)*puVar3);
  if (iVar1 % iVar4 != 0) {
    *param_2 = iVar1 + (iVar4 - iVar1 % iVar4);
  }
  return;
}
```
