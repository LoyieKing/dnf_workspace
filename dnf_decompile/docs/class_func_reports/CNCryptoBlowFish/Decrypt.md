# Decrypt

`_ZN16CNCryptoBlowFish7DecryptEPhi`

`CNCryptoBlowFish::Decrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoBlowFish` | `0x08099c20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099c20  _ZN16CNCryptoBlowFish7DecryptEPhi
#           CNCryptoBlowFish::Decrypt(unsigned char*, int)
# range [0x08099c20, 0x08099d15]
08099c20 +0x00:  push   %ebp
08099c21 +0x01:  mov    %esp,%ebp
08099c23 +0x03:  sub    $0x38,%esp
08099c26 +0x06:  mov    0x8(%ebp),%eax
08099c29 +0x09:  mov    0x8(%eax),%eax
08099c2c +0x0c:  test   %eax,%eax
08099c2e +0x0e:  jne    08099c3a <+0x1a>
08099c30 +0x10:  mov    $0x7000000c,%eax
08099c35 +0x15:  jmp    08099d13 <+0xf3>
08099c3a +0x1a:  mov    0x8(%ebp),%eax
08099c3d +0x1d:  mov    (%eax),%eax
08099c3f +0x1f:  add    $0x24,%eax
08099c42 +0x22:  mov    (%eax),%edx
08099c44 +0x24:  mov    0x8(%ebp),%eax
08099c47 +0x27:  mov    %eax,(%esp)
08099c4a +0x2a:  call   *%edx
08099c4c +0x2c:  mov    %eax,-0xc(%ebp)
08099c4f +0x2f:  mov    0x10(%ebp),%edx
08099c52 +0x32:  mov    %edx,%eax
08099c54 +0x34:  sar    $0x1f,%edx
08099c57 +0x37:  idivl  -0xc(%ebp)
08099c5a +0x3a:  mov    %edx,%eax
08099c5c +0x3c:  test   %eax,%eax
08099c5e +0x3e:  setne  %al
08099c61 +0x41:  test   %al,%al
08099c63 +0x43:  je     08099c6f <+0x4f>
08099c65 +0x45:  mov    $0x70000006,%eax
08099c6a +0x4a:  jmp    08099d13 <+0xf3>
08099c6f +0x4f:  mov    0x8(%ebp),%eax
08099c72 +0x52:  mov    0xc(%eax),%eax
08099c75 +0x55:  cmp    $0x1,%eax
08099c78 +0x58:  je     08099cb4 <+0x94>
08099c7a +0x5a:  cmp    $0x3,%eax
08099c7d +0x5d:  je     08099ce1 <+0xc1>
08099c7f +0x5f:  test   %eax,%eax
08099c81 +0x61:  jne    08099d0e <+0xee>
08099c87 +0x67:  mov    0x10(%ebp),%edx
08099c8a +0x6a:  mov    0x8(%ebp),%eax
08099c8d +0x6d:  mov    0x8(%eax),%eax
08099c90 +0x70:  movl   $0x0,0x10(%esp)
08099c98 +0x78:  mov    %edx,0xc(%esp)
08099c9c +0x7c:  mov    0xc(%ebp),%edx
08099c9f +0x7f:  mov    %edx,0x8(%esp)
08099ca3 +0x83:  mov    0xc(%ebp),%edx
08099ca6 +0x86:  mov    %edx,0x4(%esp)
08099caa +0x8a:  mov    %eax,(%esp)
08099cad +0x8d:  call   080aa0fc <_ZN9CBlowFish7DecryptEPKhPhji>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)
08099cb2 +0x92:  jmp    08099d13 <+0xf3>
08099cb4 +0x94:  mov    0x10(%ebp),%edx
08099cb7 +0x97:  mov    0x8(%ebp),%eax
08099cba +0x9a:  mov    0x8(%eax),%eax
08099cbd +0x9d:  movl   $0x1,0x10(%esp)
08099cc5 +0xa5:  mov    %edx,0xc(%esp)
08099cc9 +0xa9:  mov    0xc(%ebp),%edx
08099ccc +0xac:  mov    %edx,0x8(%esp)
08099cd0 +0xb0:  mov    0xc(%ebp),%edx
08099cd3 +0xb3:  mov    %edx,0x4(%esp)
08099cd7 +0xb7:  mov    %eax,(%esp)
08099cda +0xba:  call   080aa0fc <_ZN9CBlowFish7DecryptEPKhPhji>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)
08099cdf +0xbf:  jmp    08099d13 <+0xf3>
08099ce1 +0xc1:  mov    0x10(%ebp),%edx
08099ce4 +0xc4:  mov    0x8(%ebp),%eax
08099ce7 +0xc7:  mov    0x8(%eax),%eax
08099cea +0xca:  movl   $0x2,0x10(%esp)
08099cf2 +0xd2:  mov    %edx,0xc(%esp)
08099cf6 +0xd6:  mov    0xc(%ebp),%edx
08099cf9 +0xd9:  mov    %edx,0x8(%esp)
08099cfd +0xdd:  mov    0xc(%ebp),%edx
08099d00 +0xe0:  mov    %edx,0x4(%esp)
08099d04 +0xe4:  mov    %eax,(%esp)
08099d07 +0xe7:  call   080aa0fc <_ZN9CBlowFish7DecryptEPKhPhji>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)
08099d0c +0xec:  jmp    08099d13 <+0xf3>
08099d0e +0xee:  mov    $0x70000017,%eax
08099d13 +0xf3:  leave
08099d14 +0xf4:  ret
08099d15 +0xf5:  nop
```

## 反编译 C

```c
// CNCryptoBlowFish::Decrypt @ 0x8099c20

/* CNCryptoBlowFish::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoBlowFish::Decrypt(CNCryptoBlowFish *this,uchar *param_1,int param_2)

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
        uVar1 = CBlowFish::Decrypt(*(CBlowFish **)(this + 8),param_1,param_1,param_2,1);
      }
      else if (iVar2 == 3) {
        uVar1 = CBlowFish::Decrypt(*(CBlowFish **)(this + 8),param_1,param_1,param_2,2);
      }
      else if (iVar2 == 0) {
        uVar1 = CBlowFish::Decrypt(*(CBlowFish **)(this + 8),param_1,param_1,param_2,0);
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
