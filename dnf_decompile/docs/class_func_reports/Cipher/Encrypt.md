# Encrypt

`_ZN6Cipher7EncryptEiPKhiPhPi`

`Cipher::Encrypt(int, unsigned char const*, int, unsigned char*, int*)`

| 类 | 地址 |
|---|---|
| `Cipher` | `0x08097436` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08097436  _ZN6Cipher7EncryptEiPKhiPhPi
#           Cipher::Encrypt(int, unsigned char const*, int, unsigned char*, int*)
# range [0x08097436, 0x0809751d]
08097436 +0x00:  push   %ebp
08097437 +0x01:  mov    %esp,%ebp
08097439 +0x03:  sub    $0x38,%esp
0809743c +0x06:  cmpl   $0x0,0x14(%ebp)
08097440 +0x0a:  jg     08097455 <+0x1f>
08097442 +0x0c:  mov    0x1c(%ebp),%eax
08097445 +0x0f:  movl   $0x0,(%eax)
0809744b +0x15:  mov    $0x1,%eax
08097450 +0x1a:  jmp    0809751c <+0xe6>
08097455 +0x1f:  mov    0xc(%ebp),%eax
08097458 +0x22:  mov    %eax,(%esp)
0809745b +0x25:  call   08097160 <_Z13GetCryptoTypei>  ; GetCryptoType(int)
08097460 +0x2a:  mov    %eax,-0x14(%ebp)
08097463 +0x2d:  mov    0x1c(%ebp),%eax
08097466 +0x30:  mov    (%eax),%eax
08097468 +0x32:  mov    %eax,-0x10(%ebp)
0809746b +0x35:  mov    -0x14(%ebp),%eax
0809746e +0x38:  mov    0x8(%ebp),%edx
08097471 +0x3b:  add    $0x4,%edx
08097474 +0x3e:  mov    %eax,0x4(%esp)
08097478 +0x42:  mov    %edx,(%esp)
0809747b +0x45:  call   0809786a <_GLOBAL__I__Z13GetCryptoTypei+0x226>  ; global constructors keyed to GetCryptoType(int)+0x226
08097480 +0x4a:  mov    (%eax),%eax
08097482 +0x4c:  mov    (%eax),%edx
08097484 +0x4e:  add    $0x24,%edx
08097487 +0x51:  mov    (%edx),%edx
08097489 +0x53:  mov    %eax,(%esp)
0809748c +0x56:  call   *%edx
0809748e +0x58:  mov    %eax,-0xc(%ebp)
08097491 +0x5b:  mov    0x14(%ebp),%eax
08097494 +0x5e:  mov    %eax,%edx
08097496 +0x60:  sar    $0x1f,%edx
08097499 +0x63:  idivl  -0xc(%ebp)
0809749c +0x66:  mov    %edx,%eax
0809749e +0x68:  test   %eax,%eax
080974a0 +0x6a:  je     080974bb <+0x85>
080974a2 +0x6c:  mov    0x14(%ebp),%eax
080974a5 +0x6f:  mov    %eax,%edx
080974a7 +0x71:  sar    $0x1f,%edx
080974aa +0x74:  idivl  -0xc(%ebp)
080974ad +0x77:  mov    %edx,%eax
080974af +0x79:  mov    -0xc(%ebp),%edx
080974b2 +0x7c:  mov    %edx,%ecx
080974b4 +0x7e:  sub    %eax,%ecx
080974b6 +0x80:  mov    %ecx,%eax
080974b8 +0x82:  add    %eax,0x14(%ebp)
080974bb +0x85:  mov    -0x14(%ebp),%eax
080974be +0x88:  mov    0x8(%ebp),%edx
080974c1 +0x8b:  add    $0x4,%edx
080974c4 +0x8e:  mov    %eax,0x4(%esp)
080974c8 +0x92:  mov    %edx,(%esp)
080974cb +0x95:  call   0809786a <_GLOBAL__I__Z13GetCryptoTypei+0x226>  ; global constructors keyed to GetCryptoType(int)+0x226
080974d0 +0x9a:  mov    (%eax),%eax
080974d2 +0x9c:  mov    (%eax),%edx
080974d4 +0x9e:  add    $0x18,%edx
080974d7 +0xa1:  mov    (%edx),%ecx
080974d9 +0xa3:  mov    0x1c(%ebp),%edx
080974dc +0xa6:  mov    (%edx),%edx
080974de +0xa8:  mov    %edx,0x10(%esp)
080974e2 +0xac:  mov    0x18(%ebp),%edx
080974e5 +0xaf:  mov    %edx,0xc(%esp)
080974e9 +0xb3:  mov    0x14(%ebp),%edx
080974ec +0xb6:  mov    %edx,0x8(%esp)
080974f0 +0xba:  mov    0x10(%ebp),%edx
080974f3 +0xbd:  mov    %edx,0x4(%esp)
080974f7 +0xc1:  mov    %eax,(%esp)
080974fa +0xc4:  call   *%ecx
080974fc +0xc6:  cmp    $0x6fffffff,%eax
08097501 +0xcb:  sete   %al
08097504 +0xce:  test   %al,%al
08097506 +0xd0:  je     08097517 <+0xe1>
08097508 +0xd2:  mov    0x1c(%ebp),%eax
0809750b +0xd5:  mov    0x14(%ebp),%edx
0809750e +0xd8:  mov    %edx,(%eax)
08097510 +0xda:  mov    $0x1,%eax
08097515 +0xdf:  jmp    0809751c <+0xe6>
08097517 +0xe1:  mov    $0x0,%eax
0809751c +0xe6:  leave
0809751d +0xe7:  ret
```

## 反编译 C

```c
// Cipher::Encrypt @ 0x8097436

/* Cipher::Encrypt(int, unsigned char const*, int, unsigned char*, int*) */

undefined4 __thiscall
Cipher::Encrypt(Cipher *this,int param_1,uchar *param_2,int param_3,uchar *param_4,int *param_5)

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
    iVar4 = (**(code **)(*(int *)*puVar3 + 0x24))((int *)*puVar3);
    if (param_3 % iVar4 != 0) {
      param_3 = param_3 + (iVar4 - param_3 % iVar4);
    }
    puVar3 = (undefined4 *)
             std::vector<ICryptoGraph*,std::allocator<ICryptoGraph*>>::operator[]
                       ((vector<ICryptoGraph*,std::allocator<ICryptoGraph*>> *)(this + 4),uVar2);
    iVar4 = (**(code **)(*(int *)*puVar3 + 0x18))((int *)*puVar3,param_2,param_3,param_4,*param_5);
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
