# Decrypt

`_ZN6Cipher7DecryptEiPKhiPhPi`

`Cipher::Decrypt(int, unsigned char const*, int, unsigned char*, int*)`

| 类 | 地址 |
|---|---|
| `Cipher` | `0x0809751e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809751e  _ZN6Cipher7DecryptEiPKhiPhPi
#           Cipher::Decrypt(int, unsigned char const*, int, unsigned char*, int*)
# range [0x0809751e, 0x080975d3]
0809751e +0x00:  push   %ebp
0809751f +0x01:  mov    %esp,%ebp
08097521 +0x03:  sub    $0x38,%esp
08097524 +0x06:  cmpl   $0x0,0x14(%ebp)
08097528 +0x0a:  jg     0809753d <+0x1f>
0809752a +0x0c:  mov    0x1c(%ebp),%eax
0809752d +0x0f:  movl   $0x0,(%eax)
08097533 +0x15:  mov    $0x1,%eax
08097538 +0x1a:  jmp    080975d2 <+0xb4>
0809753d +0x1f:  mov    0xc(%ebp),%eax
08097540 +0x22:  mov    %eax,(%esp)
08097543 +0x25:  call   08097160 <_Z13GetCryptoTypei>  ; GetCryptoType(int)
08097548 +0x2a:  mov    %eax,-0x10(%ebp)
0809754b +0x2d:  mov    -0x10(%ebp),%eax
0809754e +0x30:  mov    0x8(%ebp),%edx
08097551 +0x33:  add    $0x4,%edx
08097554 +0x36:  mov    %eax,0x4(%esp)
08097558 +0x3a:  mov    %edx,(%esp)
0809755b +0x3d:  call   0809786a <_GLOBAL__I__Z13GetCryptoTypei+0x226>  ; global constructors keyed to GetCryptoType(int)+0x226
08097560 +0x42:  mov    (%eax),%eax
08097562 +0x44:  mov    (%eax),%edx
08097564 +0x46:  add    $0x24,%edx
08097567 +0x49:  mov    (%edx),%edx
08097569 +0x4b:  mov    %eax,(%esp)
0809756c +0x4e:  call   *%edx
0809756e +0x50:  mov    %eax,-0xc(%ebp)
08097571 +0x53:  mov    -0x10(%ebp),%eax
08097574 +0x56:  mov    0x8(%ebp),%edx
08097577 +0x59:  add    $0x4,%edx
0809757a +0x5c:  mov    %eax,0x4(%esp)
0809757e +0x60:  mov    %edx,(%esp)
08097581 +0x63:  call   0809786a <_GLOBAL__I__Z13GetCryptoTypei+0x226>  ; global constructors keyed to GetCryptoType(int)+0x226
08097586 +0x68:  mov    (%eax),%eax
08097588 +0x6a:  mov    (%eax),%edx
0809758a +0x6c:  add    $0x1c,%edx
0809758d +0x6f:  mov    (%edx),%ecx
0809758f +0x71:  mov    0x1c(%ebp),%edx
08097592 +0x74:  mov    (%edx),%edx
08097594 +0x76:  mov    %edx,0x10(%esp)
08097598 +0x7a:  mov    0x18(%ebp),%edx
0809759b +0x7d:  mov    %edx,0xc(%esp)
0809759f +0x81:  mov    0x14(%ebp),%edx
080975a2 +0x84:  mov    %edx,0x8(%esp)
080975a6 +0x88:  mov    0x10(%ebp),%edx
080975a9 +0x8b:  mov    %edx,0x4(%esp)
080975ad +0x8f:  mov    %eax,(%esp)
080975b0 +0x92:  call   *%ecx
080975b2 +0x94:  cmp    $0x6fffffff,%eax
080975b7 +0x99:  sete   %al
080975ba +0x9c:  test   %al,%al
080975bc +0x9e:  je     080975cd <+0xaf>
080975be +0xa0:  mov    0x1c(%ebp),%eax
080975c1 +0xa3:  mov    0x14(%ebp),%edx
080975c4 +0xa6:  mov    %edx,(%eax)
080975c6 +0xa8:  mov    $0x1,%eax
080975cb +0xad:  jmp    080975d2 <+0xb4>
080975cd +0xaf:  mov    $0x0,%eax
080975d2 +0xb4:  leave
080975d3 +0xb5:  ret
```

## 反编译 C

```c
// Cipher::Decrypt @ 0x809751e

/* Cipher::Decrypt(int, unsigned char const*, int, unsigned char*, int*) */

undefined4 __thiscall
Cipher::Decrypt(Cipher *this,int param_1,uchar *param_2,int param_3,uchar *param_4,int *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_3 < 1) {
    *param_5 = 0;
    uVar1 = 1;
  }
  else {
    uVar2 = GetCryptoType(param_1);
    puVar3 = (undefined4 *)
             std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                       ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),uVar2);
    (**(code **)(*(int *)*puVar3 + 0x24))((int *)*puVar3);
    puVar3 = (undefined4 *)
             std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                       ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),uVar2);
    iVar4 = (**(code **)(*(int *)*puVar3 + 0x1c))((int *)*puVar3,param_2,param_3,param_4,*param_5);
    if (iVar4 == 0x6fffffff) {
      *param_5 = param_3;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
