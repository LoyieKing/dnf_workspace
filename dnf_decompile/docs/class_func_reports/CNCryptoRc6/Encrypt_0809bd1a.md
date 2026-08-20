# Encrypt

`_ZN11CNCryptoRc67EncryptEPKhiPhi`

`CNCryptoRc6::Encrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoRc6` | `0x0809bd1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809bd1a  _ZN11CNCryptoRc67EncryptEPKhiPhi
#           CNCryptoRc6::Encrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809bd1a, 0x0809be05]
0809bd1a +0x00:  push   %ebp
0809bd1b +0x01:  mov    %esp,%ebp
0809bd1d +0x03:  sub    $0x38,%esp
0809bd20 +0x06:  mov    0x8(%ebp),%eax
0809bd23 +0x09:  mov    0x8(%eax),%eax
0809bd26 +0x0c:  test   %eax,%eax
0809bd28 +0x0e:  jne    0809bd34 <+0x1a>
0809bd2a +0x10:  mov    $0x7000000c,%eax
0809bd2f +0x15:  jmp    0809be03 <+0xe9>
0809bd34 +0x1a:  mov    0x8(%ebp),%eax
0809bd37 +0x1d:  mov    (%eax),%eax
0809bd39 +0x1f:  add    $0x24,%eax
0809bd3c +0x22:  mov    (%eax),%edx
0809bd3e +0x24:  mov    0x8(%ebp),%eax
0809bd41 +0x27:  mov    %eax,(%esp)
0809bd44 +0x2a:  call   *%edx
0809bd46 +0x2c:  mov    %eax,-0x20(%ebp)
0809bd49 +0x2f:  mov    0x10(%ebp),%edx
0809bd4c +0x32:  mov    %edx,%eax
0809bd4e +0x34:  sar    $0x1f,%edx
0809bd51 +0x37:  idivl  -0x20(%ebp)
0809bd54 +0x3a:  mov    %edx,%eax
0809bd56 +0x3c:  test   %eax,%eax
0809bd58 +0x3e:  setne  %al
0809bd5b +0x41:  test   %al,%al
0809bd5d +0x43:  je     0809bd69 <+0x4f>
0809bd5f +0x45:  mov    $0x70000006,%eax
0809bd64 +0x4a:  jmp    0809be03 <+0xe9>
0809bd69 +0x4f:  mov    0x10(%ebp),%eax
0809bd6c +0x52:  cmp    0x18(%ebp),%eax
0809bd6f +0x55:  jle    0809bd7b <+0x61>
0809bd71 +0x57:  mov    $0x7000000a,%eax
0809bd76 +0x5c:  jmp    0809be03 <+0xe9>
0809bd7b +0x61:  mov    0x8(%ebp),%eax
0809bd7e +0x64:  mov    (%eax),%eax
0809bd80 +0x66:  add    $0x24,%eax
0809bd83 +0x69:  mov    (%eax),%edx
0809bd85 +0x6b:  mov    0x8(%ebp),%eax
0809bd88 +0x6e:  mov    %eax,(%esp)
0809bd8b +0x71:  call   *%edx
0809bd8d +0x73:  mov    %eax,-0x1c(%ebp)
0809bd90 +0x76:  mov    0x10(%ebp),%eax
0809bd93 +0x79:  mov    %eax,%edx
0809bd95 +0x7b:  sar    $0x1f,%edx
0809bd98 +0x7e:  idivl  -0x1c(%ebp)
0809bd9b +0x81:  mov    %eax,-0x10(%ebp)
0809bd9e +0x84:  movl   $0x0,-0xc(%ebp)
0809bda5 +0x8b:  jmp    0809bdf1 <+0xd7>
0809bda7 +0x8d:  mov    0x14(%ebp),%ecx
0809bdaa +0x90:  mov    0xc(%ebp),%edx
0809bdad +0x93:  mov    0x8(%ebp),%eax
0809bdb0 +0x96:  mov    0x8(%eax),%eax
0809bdb3 +0x99:  mov    %ecx,0x8(%esp)
0809bdb7 +0x9d:  mov    %edx,0x4(%esp)
0809bdbb +0xa1:  mov    %eax,(%esp)
0809bdbe +0xa4:  call   080b5d6e <_Z17rc6_block_encryptPK12RC6_ALG_INFOPKjPj>  ; rc6_block_encrypt(RC6_ALG_INFO const*, unsigned int const*, unsigned int*)
0809bdc3 +0xa9:  mov    0x8(%ebp),%eax
0809bdc6 +0xac:  mov    (%eax),%eax
0809bdc8 +0xae:  add    $0x24,%eax
0809bdcb +0xb1:  mov    (%eax),%edx
0809bdcd +0xb3:  mov    0x8(%ebp),%eax
0809bdd0 +0xb6:  mov    %eax,(%esp)
0809bdd3 +0xb9:  call   *%edx
0809bdd5 +0xbb:  add    %eax,0xc(%ebp)
0809bdd8 +0xbe:  mov    0x8(%ebp),%eax
0809bddb +0xc1:  mov    (%eax),%eax
0809bddd +0xc3:  add    $0x24,%eax
0809bde0 +0xc6:  mov    (%eax),%edx
0809bde2 +0xc8:  mov    0x8(%ebp),%eax
0809bde5 +0xcb:  mov    %eax,(%esp)
0809bde8 +0xce:  call   *%edx
0809bdea +0xd0:  add    %eax,0x14(%ebp)
0809bded +0xd3:  addl   $0x1,-0xc(%ebp)
0809bdf1 +0xd7:  mov    -0xc(%ebp),%eax
0809bdf4 +0xda:  cmp    -0x10(%ebp),%eax
0809bdf7 +0xdd:  setl   %al
0809bdfa +0xe0:  test   %al,%al
0809bdfc +0xe2:  jne    0809bda7 <+0x8d>
0809bdfe +0xe4:  mov    $0x6fffffff,%eax
0809be03 +0xe9:  leave
0809be04 +0xea:  ret
0809be05 +0xeb:  nop
```

## 反编译 C

```c
// CNCryptoRc6::Encrypt @ 0x809bd1a

/* CNCryptoRc6::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoRc6::Encrypt(CNCryptoRc6 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      if (param_4 < param_2) {
        uVar1 = 0x7000000a;
      }
      else {
        iVar2 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar2; local_10 = local_10 + 1) {
          rc6_block_encrypt(*(RC6_ALG_INFO **)(this + 8),(uint *)param_1,(uint *)param_3);
          iVar3 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar3;
          iVar3 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar3;
        }
        uVar1 = 0x6fffffff;
      }
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}
```
