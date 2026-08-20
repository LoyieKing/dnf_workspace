# Encrypt

`_ZN16CNCryptoBlowFish7EncryptEPKhiPhi`

`CNCryptoBlowFish::Encrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoBlowFish` | `0x08099d16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099d16  _ZN16CNCryptoBlowFish7EncryptEPKhiPhi
#           CNCryptoBlowFish::Encrypt(unsigned char const*, int, unsigned char*, int)
# range [0x08099d16, 0x08099dfb]
08099d16 +0x00:  push   %ebp
08099d17 +0x01:  mov    %esp,%ebp
08099d19 +0x03:  sub    $0x28,%esp
08099d1c +0x06:  mov    0x8(%ebp),%eax
08099d1f +0x09:  mov    0x8(%eax),%eax
08099d22 +0x0c:  test   %eax,%eax
08099d24 +0x0e:  jne    08099d30 <+0x1a>
08099d26 +0x10:  mov    $0x7000000c,%eax
08099d2b +0x15:  jmp    08099dfa <+0xe4>
08099d30 +0x1a:  mov    0x10(%ebp),%eax
08099d33 +0x1d:  cmp    0x18(%ebp),%eax
08099d36 +0x20:  jle    08099d42 <+0x2c>
08099d38 +0x22:  mov    $0x7000000a,%eax
08099d3d +0x27:  jmp    08099dfa <+0xe4>
08099d42 +0x2c:  mov    0x10(%ebp),%eax
08099d45 +0x2f:  and    $0x7,%eax
08099d48 +0x32:  test   %eax,%eax
08099d4a +0x34:  je     08099d56 <+0x40>
08099d4c +0x36:  mov    $0x70000006,%eax
08099d51 +0x3b:  jmp    08099dfa <+0xe4>
08099d56 +0x40:  mov    0x8(%ebp),%eax
08099d59 +0x43:  mov    0xc(%eax),%eax
08099d5c +0x46:  cmp    $0x1,%eax
08099d5f +0x49:  je     08099d9b <+0x85>
08099d61 +0x4b:  cmp    $0x3,%eax
08099d64 +0x4e:  je     08099dc8 <+0xb2>
08099d66 +0x50:  test   %eax,%eax
08099d68 +0x52:  jne    08099df5 <+0xdf>
08099d6e +0x58:  mov    0x10(%ebp),%edx
08099d71 +0x5b:  mov    0x8(%ebp),%eax
08099d74 +0x5e:  mov    0x8(%eax),%eax
08099d77 +0x61:  movl   $0x0,0x10(%esp)
08099d7f +0x69:  mov    %edx,0xc(%esp)
08099d83 +0x6d:  mov    0x14(%ebp),%edx
08099d86 +0x70:  mov    %edx,0x8(%esp)
08099d8a +0x74:  mov    0xc(%ebp),%edx
08099d8d +0x77:  mov    %edx,0x4(%esp)
08099d91 +0x7b:  mov    %eax,(%esp)
08099d94 +0x7e:  call   080a9f4e <_ZN9CBlowFish7EncryptEPKhPhji>  ; CBlowFish::Encrypt(unsigned char const*, unsigned char*, unsigned int, int)
08099d99 +0x83:  jmp    08099dfa <+0xe4>
08099d9b +0x85:  mov    0x10(%ebp),%edx
08099d9e +0x88:  mov    0x8(%ebp),%eax
08099da1 +0x8b:  mov    0x8(%eax),%eax
08099da4 +0x8e:  movl   $0x1,0x10(%esp)
08099dac +0x96:  mov    %edx,0xc(%esp)
08099db0 +0x9a:  mov    0x14(%ebp),%edx
08099db3 +0x9d:  mov    %edx,0x8(%esp)
08099db7 +0xa1:  mov    0xc(%ebp),%edx
08099dba +0xa4:  mov    %edx,0x4(%esp)
08099dbe +0xa8:  mov    %eax,(%esp)
08099dc1 +0xab:  call   080a9f4e <_ZN9CBlowFish7EncryptEPKhPhji>  ; CBlowFish::Encrypt(unsigned char const*, unsigned char*, unsigned int, int)
08099dc6 +0xb0:  jmp    08099dfa <+0xe4>
08099dc8 +0xb2:  mov    0x10(%ebp),%edx
08099dcb +0xb5:  mov    0x8(%ebp),%eax
08099dce +0xb8:  mov    0x8(%eax),%eax
08099dd1 +0xbb:  movl   $0x1,0x10(%esp)
08099dd9 +0xc3:  mov    %edx,0xc(%esp)
08099ddd +0xc7:  mov    0x14(%ebp),%edx
08099de0 +0xca:  mov    %edx,0x8(%esp)
08099de4 +0xce:  mov    0xc(%ebp),%edx
08099de7 +0xd1:  mov    %edx,0x4(%esp)
08099deb +0xd5:  mov    %eax,(%esp)
08099dee +0xd8:  call   080a9f4e <_ZN9CBlowFish7EncryptEPKhPhji>  ; CBlowFish::Encrypt(unsigned char const*, unsigned char*, unsigned int, int)
08099df3 +0xdd:  jmp    08099dfa <+0xe4>
08099df5 +0xdf:  mov    $0x70000017,%eax
08099dfa +0xe4:  leave
08099dfb +0xe5:  ret
```

## 反编译 C

```c
// CNCryptoBlowFish::Encrypt @ 0x8099d16

/* CNCryptoBlowFish::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoBlowFish::Encrypt
          (CNCryptoBlowFish *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else if (param_4 < param_2) {
    uVar2 = 0x7000000a;
  }
  else if ((param_2 & 7U) == 0) {
    iVar1 = *(int *)(this + 0xc);
    if (iVar1 == 1) {
      uVar2 = CBlowFish::Encrypt(*(CBlowFish **)(this + 8),param_1,param_3,param_2,1);
    }
    else if (iVar1 == 3) {
      uVar2 = CBlowFish::Encrypt(*(CBlowFish **)(this + 8),param_1,param_3,param_2,1);
    }
    else if (iVar1 == 0) {
      uVar2 = CBlowFish::Encrypt(*(CBlowFish **)(this + 8),param_1,param_3,param_2,0);
    }
    else {
      uVar2 = 0x70000017;
    }
  }
  else {
    uVar2 = 0x70000006;
  }
  return uVar2;
}
```
