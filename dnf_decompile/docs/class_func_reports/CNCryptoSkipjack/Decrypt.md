# Decrypt

`_ZN16CNCryptoSkipjack7DecryptEPhi`

`CNCryptoSkipjack::Decrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoSkipjack` | `0x0809cb80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809cb80  _ZN16CNCryptoSkipjack7DecryptEPhi
#           CNCryptoSkipjack::Decrypt(unsigned char*, int)
# range [0x0809cb80, 0x0809cc57]
0809cb80 +0x00:  push   %ebp
0809cb81 +0x01:  mov    %esp,%ebp
0809cb83 +0x03:  sub    $0x38,%esp
0809cb86 +0x06:  mov    0x8(%ebp),%eax
0809cb89 +0x09:  mov    0x8(%eax),%eax
0809cb8c +0x0c:  test   %eax,%eax
0809cb8e +0x0e:  jne    0809cb9a <+0x1a>
0809cb90 +0x10:  mov    $0x7000000c,%eax
0809cb95 +0x15:  jmp    0809cc55 <+0xd5>
0809cb9a +0x1a:  mov    0x8(%ebp),%eax
0809cb9d +0x1d:  mov    (%eax),%eax
0809cb9f +0x1f:  add    $0x24,%eax
0809cba2 +0x22:  mov    (%eax),%edx
0809cba4 +0x24:  mov    0x8(%ebp),%eax
0809cba7 +0x27:  mov    %eax,(%esp)
0809cbaa +0x2a:  call   *%edx
0809cbac +0x2c:  mov    %eax,-0x20(%ebp)
0809cbaf +0x2f:  mov    0x10(%ebp),%edx
0809cbb2 +0x32:  mov    %edx,%eax
0809cbb4 +0x34:  sar    $0x1f,%edx
0809cbb7 +0x37:  idivl  -0x20(%ebp)
0809cbba +0x3a:  mov    %edx,%eax
0809cbbc +0x3c:  test   %eax,%eax
0809cbbe +0x3e:  setne  %al
0809cbc1 +0x41:  test   %al,%al
0809cbc3 +0x43:  je     0809cbcf <+0x4f>
0809cbc5 +0x45:  mov    $0x70000006,%eax
0809cbca +0x4a:  jmp    0809cc55 <+0xd5>
0809cbcf +0x4f:  cmpl   $0x0,0x10(%ebp)
0809cbd3 +0x53:  jg     0809cbdc <+0x5c>
0809cbd5 +0x55:  mov    $0x7000000a,%eax
0809cbda +0x5a:  jmp    0809cc55 <+0xd5>
0809cbdc +0x5c:  mov    0x8(%ebp),%eax
0809cbdf +0x5f:  mov    0x8(%eax),%eax
0809cbe2 +0x62:  mov    %eax,-0x14(%ebp)
0809cbe5 +0x65:  mov    0x8(%ebp),%eax
0809cbe8 +0x68:  mov    (%eax),%eax
0809cbea +0x6a:  add    $0x24,%eax
0809cbed +0x6d:  mov    (%eax),%edx
0809cbef +0x6f:  mov    0x8(%ebp),%eax
0809cbf2 +0x72:  mov    %eax,(%esp)
0809cbf5 +0x75:  call   *%edx
0809cbf7 +0x77:  mov    %eax,-0x1c(%ebp)
0809cbfa +0x7a:  mov    0x10(%ebp),%eax
0809cbfd +0x7d:  mov    %eax,%edx
0809cbff +0x7f:  sar    $0x1f,%edx
0809cc02 +0x82:  idivl  -0x1c(%ebp)
0809cc05 +0x85:  mov    %eax,-0x10(%ebp)
0809cc08 +0x88:  movl   $0x0,-0xc(%ebp)
0809cc0f +0x8f:  jmp    0809cc43 <+0xc3>
0809cc11 +0x91:  mov    -0x14(%ebp),%eax
0809cc14 +0x94:  mov    %eax,0x8(%esp)
0809cc18 +0x98:  mov    0xc(%ebp),%eax
0809cc1b +0x9b:  mov    %eax,0x4(%esp)
0809cc1f +0x9f:  mov    0xc(%ebp),%eax
0809cc22 +0xa2:  mov    %eax,(%esp)
0809cc25 +0xa5:  call   080c328c <_Z20skipjack_ecb_decryptPKhPhP13symmetric_key>  ; skipjack_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809cc2a +0xaa:  mov    0x8(%ebp),%eax
0809cc2d +0xad:  mov    (%eax),%eax
0809cc2f +0xaf:  add    $0x24,%eax
0809cc32 +0xb2:  mov    (%eax),%edx
0809cc34 +0xb4:  mov    0x8(%ebp),%eax
0809cc37 +0xb7:  mov    %eax,(%esp)
0809cc3a +0xba:  call   *%edx
0809cc3c +0xbc:  add    %eax,0xc(%ebp)
0809cc3f +0xbf:  addl   $0x1,-0xc(%ebp)
0809cc43 +0xc3:  mov    -0xc(%ebp),%eax
0809cc46 +0xc6:  cmp    -0x10(%ebp),%eax
0809cc49 +0xc9:  setl   %al
0809cc4c +0xcc:  test   %al,%al
0809cc4e +0xce:  jne    0809cc11 <+0x91>
0809cc50 +0xd0:  mov    $0x6fffffff,%eax
0809cc55 +0xd5:  leave
0809cc56 +0xd6:  ret
0809cc57 +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoSkipjack::Decrypt @ 0x809cb80

/* CNCryptoSkipjack::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoSkipjack::Decrypt(CNCryptoSkipjack *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_2 < 1) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          skipjack_ecb_decrypt(param_1,param_1,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}
```
