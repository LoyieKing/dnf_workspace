# Decrypt

`_ZN11CNCryptoRc67DecryptEPKhiPhi`

`CNCryptoRc6::Decrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoRc6` | `0x0809be06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809be06  _ZN11CNCryptoRc67DecryptEPKhiPhi
#           CNCryptoRc6::Decrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809be06, 0x0809bef1]
0809be06 +0x00:  push   %ebp
0809be07 +0x01:  mov    %esp,%ebp
0809be09 +0x03:  sub    $0x38,%esp
0809be0c +0x06:  mov    0x8(%ebp),%eax
0809be0f +0x09:  mov    0x8(%eax),%eax
0809be12 +0x0c:  test   %eax,%eax
0809be14 +0x0e:  jne    0809be20 <+0x1a>
0809be16 +0x10:  mov    $0x7000000c,%eax
0809be1b +0x15:  jmp    0809beef <+0xe9>
0809be20 +0x1a:  mov    0x8(%ebp),%eax
0809be23 +0x1d:  mov    (%eax),%eax
0809be25 +0x1f:  add    $0x24,%eax
0809be28 +0x22:  mov    (%eax),%edx
0809be2a +0x24:  mov    0x8(%ebp),%eax
0809be2d +0x27:  mov    %eax,(%esp)
0809be30 +0x2a:  call   *%edx
0809be32 +0x2c:  mov    %eax,-0x20(%ebp)
0809be35 +0x2f:  mov    0x10(%ebp),%edx
0809be38 +0x32:  mov    %edx,%eax
0809be3a +0x34:  sar    $0x1f,%edx
0809be3d +0x37:  idivl  -0x20(%ebp)
0809be40 +0x3a:  mov    %edx,%eax
0809be42 +0x3c:  test   %eax,%eax
0809be44 +0x3e:  setne  %al
0809be47 +0x41:  test   %al,%al
0809be49 +0x43:  je     0809be55 <+0x4f>
0809be4b +0x45:  mov    $0x70000006,%eax
0809be50 +0x4a:  jmp    0809beef <+0xe9>
0809be55 +0x4f:  mov    0x10(%ebp),%eax
0809be58 +0x52:  cmp    0x18(%ebp),%eax
0809be5b +0x55:  jle    0809be67 <+0x61>
0809be5d +0x57:  mov    $0x7000000a,%eax
0809be62 +0x5c:  jmp    0809beef <+0xe9>
0809be67 +0x61:  mov    0x8(%ebp),%eax
0809be6a +0x64:  mov    (%eax),%eax
0809be6c +0x66:  add    $0x24,%eax
0809be6f +0x69:  mov    (%eax),%edx
0809be71 +0x6b:  mov    0x8(%ebp),%eax
0809be74 +0x6e:  mov    %eax,(%esp)
0809be77 +0x71:  call   *%edx
0809be79 +0x73:  mov    %eax,-0x1c(%ebp)
0809be7c +0x76:  mov    0x10(%ebp),%eax
0809be7f +0x79:  mov    %eax,%edx
0809be81 +0x7b:  sar    $0x1f,%edx
0809be84 +0x7e:  idivl  -0x1c(%ebp)
0809be87 +0x81:  mov    %eax,-0x10(%ebp)
0809be8a +0x84:  movl   $0x0,-0xc(%ebp)
0809be91 +0x8b:  jmp    0809bedd <+0xd7>
0809be93 +0x8d:  mov    0x14(%ebp),%ecx
0809be96 +0x90:  mov    0xc(%ebp),%edx
0809be99 +0x93:  mov    0x8(%ebp),%eax
0809be9c +0x96:  mov    0x8(%eax),%eax
0809be9f +0x99:  mov    %ecx,0x8(%esp)
0809bea3 +0x9d:  mov    %edx,0x4(%esp)
0809bea7 +0xa1:  mov    %eax,(%esp)
0809beaa +0xa4:  call   080b5f07 <_Z17rc6_block_decryptPK12RC6_ALG_INFOPKjPj>  ; rc6_block_decrypt(RC6_ALG_INFO const*, unsigned int const*, unsigned int*)
0809beaf +0xa9:  mov    0x8(%ebp),%eax
0809beb2 +0xac:  mov    (%eax),%eax
0809beb4 +0xae:  add    $0x24,%eax
0809beb7 +0xb1:  mov    (%eax),%edx
0809beb9 +0xb3:  mov    0x8(%ebp),%eax
0809bebc +0xb6:  mov    %eax,(%esp)
0809bebf +0xb9:  call   *%edx
0809bec1 +0xbb:  add    %eax,0xc(%ebp)
0809bec4 +0xbe:  mov    0x8(%ebp),%eax
0809bec7 +0xc1:  mov    (%eax),%eax
0809bec9 +0xc3:  add    $0x24,%eax
0809becc +0xc6:  mov    (%eax),%edx
0809bece +0xc8:  mov    0x8(%ebp),%eax
0809bed1 +0xcb:  mov    %eax,(%esp)
0809bed4 +0xce:  call   *%edx
0809bed6 +0xd0:  add    %eax,0x14(%ebp)
0809bed9 +0xd3:  addl   $0x1,-0xc(%ebp)
0809bedd +0xd7:  mov    -0xc(%ebp),%eax
0809bee0 +0xda:  cmp    -0x10(%ebp),%eax
0809bee3 +0xdd:  setl   %al
0809bee6 +0xe0:  test   %al,%al
0809bee8 +0xe2:  jne    0809be93 <+0x8d>
0809beea +0xe4:  mov    $0x6fffffff,%eax
0809beef +0xe9:  leave
0809bef0 +0xea:  ret
0809bef1 +0xeb:  nop
```

## 反编译 C

```c
// CNCryptoRc6::Decrypt @ 0x809be06

/* CNCryptoRc6::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoRc6::Decrypt(CNCryptoRc6 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          rc6_block_decrypt(*(RC6_ALG_INFO **)(this + 8),(uint *)param_1,(uint *)param_3);
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
