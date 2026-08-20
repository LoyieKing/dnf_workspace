# Encrypt

`_ZN16CNCryptoBlowFish7EncryptEPhi`

`CNCryptoBlowFish::Encrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoBlowFish` | `0x08099b2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099b2a  _ZN16CNCryptoBlowFish7EncryptEPhi
#           CNCryptoBlowFish::Encrypt(unsigned char*, int)
# range [0x08099b2a, 0x08099c1f]
08099b2a +0x00:  push   %ebp
08099b2b +0x01:  mov    %esp,%ebp
08099b2d +0x03:  sub    $0x38,%esp
08099b30 +0x06:  mov    0x8(%ebp),%eax
08099b33 +0x09:  mov    0x8(%eax),%eax
08099b36 +0x0c:  test   %eax,%eax
08099b38 +0x0e:  jne    08099b44 <+0x1a>
08099b3a +0x10:  mov    $0x7000000c,%eax
08099b3f +0x15:  jmp    08099c1d <+0xf3>
08099b44 +0x1a:  mov    0x8(%ebp),%eax
08099b47 +0x1d:  mov    (%eax),%eax
08099b49 +0x1f:  add    $0x24,%eax
08099b4c +0x22:  mov    (%eax),%edx
08099b4e +0x24:  mov    0x8(%ebp),%eax
08099b51 +0x27:  mov    %eax,(%esp)
08099b54 +0x2a:  call   *%edx
08099b56 +0x2c:  mov    %eax,-0xc(%ebp)
08099b59 +0x2f:  mov    0x10(%ebp),%edx
08099b5c +0x32:  mov    %edx,%eax
08099b5e +0x34:  sar    $0x1f,%edx
08099b61 +0x37:  idivl  -0xc(%ebp)
08099b64 +0x3a:  mov    %edx,%eax
08099b66 +0x3c:  test   %eax,%eax
08099b68 +0x3e:  setne  %al
08099b6b +0x41:  test   %al,%al
08099b6d +0x43:  je     08099b79 <+0x4f>
08099b6f +0x45:  mov    $0x70000006,%eax
08099b74 +0x4a:  jmp    08099c1d <+0xf3>
08099b79 +0x4f:  mov    0x8(%ebp),%eax
08099b7c +0x52:  mov    0xc(%eax),%eax
08099b7f +0x55:  cmp    $0x1,%eax
08099b82 +0x58:  je     08099bbe <+0x94>
08099b84 +0x5a:  cmp    $0x3,%eax
08099b87 +0x5d:  je     08099beb <+0xc1>
08099b89 +0x5f:  test   %eax,%eax
08099b8b +0x61:  jne    08099c18 <+0xee>
08099b91 +0x67:  mov    0x10(%ebp),%edx
08099b94 +0x6a:  mov    0x8(%ebp),%eax
08099b97 +0x6d:  mov    0x8(%eax),%eax
08099b9a +0x70:  movl   $0x0,0x10(%esp)
08099ba2 +0x78:  mov    %edx,0xc(%esp)
08099ba6 +0x7c:  mov    0xc(%ebp),%edx
08099ba9 +0x7f:  mov    %edx,0x8(%esp)
08099bad +0x83:  mov    0xc(%ebp),%edx
08099bb0 +0x86:  mov    %edx,0x4(%esp)
08099bb4 +0x8a:  mov    %eax,(%esp)
08099bb7 +0x8d:  call   080a9f4e <_ZN9CBlowFish7EncryptEPKhPhji>  ; CBlowFish::Encrypt(unsigned char const*, unsigned char*, unsigned int, int)
08099bbc +0x92:  jmp    08099c1d <+0xf3>
08099bbe +0x94:  mov    0x10(%ebp),%edx
08099bc1 +0x97:  mov    0x8(%ebp),%eax
08099bc4 +0x9a:  mov    0x8(%eax),%eax
08099bc7 +0x9d:  movl   $0x1,0x10(%esp)
08099bcf +0xa5:  mov    %edx,0xc(%esp)
08099bd3 +0xa9:  mov    0xc(%ebp),%edx
08099bd6 +0xac:  mov    %edx,0x8(%esp)
08099bda +0xb0:  mov    0xc(%ebp),%edx
08099bdd +0xb3:  mov    %edx,0x4(%esp)
08099be1 +0xb7:  mov    %eax,(%esp)
08099be4 +0xba:  call   080a9f4e <_ZN9CBlowFish7EncryptEPKhPhji>  ; CBlowFish::Encrypt(unsigned char const*, unsigned char*, unsigned int, int)
08099be9 +0xbf:  jmp    08099c1d <+0xf3>
08099beb +0xc1:  mov    0x10(%ebp),%edx
08099bee +0xc4:  mov    0x8(%ebp),%eax
08099bf1 +0xc7:  mov    0x8(%eax),%eax
08099bf4 +0xca:  movl   $0x2,0x10(%esp)
08099bfc +0xd2:  mov    %edx,0xc(%esp)
08099c00 +0xd6:  mov    0xc(%ebp),%edx
08099c03 +0xd9:  mov    %edx,0x8(%esp)
08099c07 +0xdd:  mov    0xc(%ebp),%edx
08099c0a +0xe0:  mov    %edx,0x4(%esp)
08099c0e +0xe4:  mov    %eax,(%esp)
08099c11 +0xe7:  call   080a9f4e <_ZN9CBlowFish7EncryptEPKhPhji>  ; CBlowFish::Encrypt(unsigned char const*, unsigned char*, unsigned int, int)
08099c16 +0xec:  jmp    08099c1d <+0xf3>
08099c18 +0xee:  mov    $0x70000017,%eax
08099c1d +0xf3:  leave
08099c1e +0xf4:  ret
08099c1f +0xf5:  nop
```

## 反编译 C

```c
// CNCryptoBlowFish::Encrypt @ 0x8099b2a

/* CNCryptoBlowFish::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoBlowFish::Encrypt(CNCryptoBlowFish *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      iVar2 = *(int *)(this + 0xc);
      if (iVar2 == 1) {
        uVar1 = CBlowFish::Encrypt(*(CBlowFish **)(this + 8),param_1,param_1,param_2,1);
      }
      else if (iVar2 == 3) {
        uVar1 = CBlowFish::Encrypt(*(CBlowFish **)(this + 8),param_1,param_1,param_2,2);
      }
      else if (iVar2 == 0) {
        uVar1 = CBlowFish::Encrypt(*(CBlowFish **)(this + 8),param_1,param_1,param_2,0);
      }
      else {
        uVar1 = 0x70000017;
      }
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}
```
