# Decrypt

`_ZN16CNCryptoBlowFish7DecryptEPKhiPhi`

`CNCryptoBlowFish::Decrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoBlowFish` | `0x08099dfc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099dfc  _ZN16CNCryptoBlowFish7DecryptEPKhiPhi
#           CNCryptoBlowFish::Decrypt(unsigned char const*, int, unsigned char*, int)
# range [0x08099dfc, 0x08099ee1]
08099dfc +0x00:  push   %ebp
08099dfd +0x01:  mov    %esp,%ebp
08099dff +0x03:  sub    $0x28,%esp
08099e02 +0x06:  mov    0x8(%ebp),%eax
08099e05 +0x09:  mov    0x8(%eax),%eax
08099e08 +0x0c:  test   %eax,%eax
08099e0a +0x0e:  jne    08099e16 <+0x1a>
08099e0c +0x10:  mov    $0x7000000c,%eax
08099e11 +0x15:  jmp    08099ee0 <+0xe4>
08099e16 +0x1a:  mov    0x10(%ebp),%eax
08099e19 +0x1d:  cmp    0x18(%ebp),%eax
08099e1c +0x20:  jle    08099e28 <+0x2c>
08099e1e +0x22:  mov    $0x7000000a,%eax
08099e23 +0x27:  jmp    08099ee0 <+0xe4>
08099e28 +0x2c:  mov    0x10(%ebp),%eax
08099e2b +0x2f:  and    $0x7,%eax
08099e2e +0x32:  test   %eax,%eax
08099e30 +0x34:  je     08099e3c <+0x40>
08099e32 +0x36:  mov    $0x70000006,%eax
08099e37 +0x3b:  jmp    08099ee0 <+0xe4>
08099e3c +0x40:  mov    0x8(%ebp),%eax
08099e3f +0x43:  mov    0xc(%eax),%eax
08099e42 +0x46:  cmp    $0x1,%eax
08099e45 +0x49:  je     08099e81 <+0x85>
08099e47 +0x4b:  cmp    $0x3,%eax
08099e4a +0x4e:  je     08099eae <+0xb2>
08099e4c +0x50:  test   %eax,%eax
08099e4e +0x52:  jne    08099edb <+0xdf>
08099e54 +0x58:  mov    0x10(%ebp),%edx
08099e57 +0x5b:  mov    0x8(%ebp),%eax
08099e5a +0x5e:  mov    0x8(%eax),%eax
08099e5d +0x61:  movl   $0x0,0x10(%esp)
08099e65 +0x69:  mov    %edx,0xc(%esp)
08099e69 +0x6d:  mov    0x14(%ebp),%edx
08099e6c +0x70:  mov    %edx,0x8(%esp)
08099e70 +0x74:  mov    0xc(%ebp),%edx
08099e73 +0x77:  mov    %edx,0x4(%esp)
08099e77 +0x7b:  mov    %eax,(%esp)
08099e7a +0x7e:  call   080aa0fc <_ZN9CBlowFish7DecryptEPKhPhji>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)
08099e7f +0x83:  jmp    08099ee0 <+0xe4>
08099e81 +0x85:  mov    0x10(%ebp),%edx
08099e84 +0x88:  mov    0x8(%ebp),%eax
08099e87 +0x8b:  mov    0x8(%eax),%eax
08099e8a +0x8e:  movl   $0x1,0x10(%esp)
08099e92 +0x96:  mov    %edx,0xc(%esp)
08099e96 +0x9a:  mov    0x14(%ebp),%edx
08099e99 +0x9d:  mov    %edx,0x8(%esp)
08099e9d +0xa1:  mov    0xc(%ebp),%edx
08099ea0 +0xa4:  mov    %edx,0x4(%esp)
08099ea4 +0xa8:  mov    %eax,(%esp)
08099ea7 +0xab:  call   080aa0fc <_ZN9CBlowFish7DecryptEPKhPhji>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)
08099eac +0xb0:  jmp    08099ee0 <+0xe4>
08099eae +0xb2:  mov    0x10(%ebp),%edx
08099eb1 +0xb5:  mov    0x8(%ebp),%eax
08099eb4 +0xb8:  mov    0x8(%eax),%eax
08099eb7 +0xbb:  movl   $0x2,0x10(%esp)
08099ebf +0xc3:  mov    %edx,0xc(%esp)
08099ec3 +0xc7:  mov    0x14(%ebp),%edx
08099ec6 +0xca:  mov    %edx,0x8(%esp)
08099eca +0xce:  mov    0xc(%ebp),%edx
08099ecd +0xd1:  mov    %edx,0x4(%esp)
08099ed1 +0xd5:  mov    %eax,(%esp)
08099ed4 +0xd8:  call   080aa0fc <_ZN9CBlowFish7DecryptEPKhPhji>  ; CBlowFish::Decrypt(unsigned char const*, unsigned char*, unsigned int, int)
08099ed9 +0xdd:  jmp    08099ee0 <+0xe4>
08099edb +0xdf:  mov    $0x70000017,%eax
08099ee0 +0xe4:  leave
08099ee1 +0xe5:  ret
```

## 反编译 C

```c
// CNCryptoBlowFish::Decrypt @ 0x8099dfc

/* CNCryptoBlowFish::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoBlowFish::Decrypt
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
      uVar2 = CBlowFish::Decrypt(*(CBlowFish **)(this + 8),param_1,param_3,param_2,1);
    }
    else if (iVar1 == 3) {
      uVar2 = CBlowFish::Decrypt(*(CBlowFish **)(this + 8),param_1,param_3,param_2,2);
    }
    else if (iVar1 == 0) {
      uVar2 = CBlowFish::Decrypt(*(CBlowFish **)(this + 8),param_1,param_3,param_2,0);
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
