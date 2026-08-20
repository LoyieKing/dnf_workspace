# Decrypt

`_ZN16CNCryptoSkipjack7DecryptEPKhiPhi`

`CNCryptoSkipjack::Decrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoSkipjack` | `0x0809cd4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809cd4a  _ZN16CNCryptoSkipjack7DecryptEPKhiPhi
#           CNCryptoSkipjack::Decrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809cd4a, 0x0809ce3b]
0809cd4a +0x00:  push   %ebp
0809cd4b +0x01:  mov    %esp,%ebp
0809cd4d +0x03:  sub    $0x38,%esp
0809cd50 +0x06:  mov    0x8(%ebp),%eax
0809cd53 +0x09:  mov    0x8(%eax),%eax
0809cd56 +0x0c:  test   %eax,%eax
0809cd58 +0x0e:  jne    0809cd64 <+0x1a>
0809cd5a +0x10:  mov    $0x7000000c,%eax
0809cd5f +0x15:  jmp    0809ce39 <+0xef>
0809cd64 +0x1a:  mov    0x8(%ebp),%eax
0809cd67 +0x1d:  mov    (%eax),%eax
0809cd69 +0x1f:  add    $0x24,%eax
0809cd6c +0x22:  mov    (%eax),%edx
0809cd6e +0x24:  mov    0x8(%ebp),%eax
0809cd71 +0x27:  mov    %eax,(%esp)
0809cd74 +0x2a:  call   *%edx
0809cd76 +0x2c:  mov    %eax,-0x20(%ebp)
0809cd79 +0x2f:  mov    0x10(%ebp),%edx
0809cd7c +0x32:  mov    %edx,%eax
0809cd7e +0x34:  sar    $0x1f,%edx
0809cd81 +0x37:  idivl  -0x20(%ebp)
0809cd84 +0x3a:  mov    %edx,%eax
0809cd86 +0x3c:  test   %eax,%eax
0809cd88 +0x3e:  setne  %al
0809cd8b +0x41:  test   %al,%al
0809cd8d +0x43:  je     0809cd99 <+0x4f>
0809cd8f +0x45:  mov    $0x7000000a,%eax
0809cd94 +0x4a:  jmp    0809ce39 <+0xef>
0809cd99 +0x4f:  mov    0x10(%ebp),%eax
0809cd9c +0x52:  cmp    0x18(%ebp),%eax
0809cd9f +0x55:  jle    0809cdab <+0x61>
0809cda1 +0x57:  mov    $0x7000000a,%eax
0809cda6 +0x5c:  jmp    0809ce39 <+0xef>
0809cdab +0x61:  mov    0x8(%ebp),%eax
0809cdae +0x64:  mov    0x8(%eax),%eax
0809cdb1 +0x67:  mov    %eax,-0x14(%ebp)
0809cdb4 +0x6a:  mov    0x8(%ebp),%eax
0809cdb7 +0x6d:  mov    (%eax),%eax
0809cdb9 +0x6f:  add    $0x24,%eax
0809cdbc +0x72:  mov    (%eax),%edx
0809cdbe +0x74:  mov    0x8(%ebp),%eax
0809cdc1 +0x77:  mov    %eax,(%esp)
0809cdc4 +0x7a:  call   *%edx
0809cdc6 +0x7c:  mov    %eax,-0x1c(%ebp)
0809cdc9 +0x7f:  mov    0x10(%ebp),%eax
0809cdcc +0x82:  mov    %eax,%edx
0809cdce +0x84:  sar    $0x1f,%edx
0809cdd1 +0x87:  idivl  -0x1c(%ebp)
0809cdd4 +0x8a:  mov    %eax,-0x10(%ebp)
0809cdd7 +0x8d:  movl   $0x0,-0xc(%ebp)
0809cdde +0x94:  jmp    0809ce27 <+0xdd>
0809cde0 +0x96:  mov    -0x14(%ebp),%eax
0809cde3 +0x99:  mov    %eax,0x8(%esp)
0809cde7 +0x9d:  mov    0x14(%ebp),%eax
0809cdea +0xa0:  mov    %eax,0x4(%esp)
0809cdee +0xa4:  mov    0xc(%ebp),%eax
0809cdf1 +0xa7:  mov    %eax,(%esp)
0809cdf4 +0xaa:  call   080c328c <_Z20skipjack_ecb_decryptPKhPhP13symmetric_key>  ; skipjack_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809cdf9 +0xaf:  mov    0x8(%ebp),%eax
0809cdfc +0xb2:  mov    (%eax),%eax
0809cdfe +0xb4:  add    $0x24,%eax
0809ce01 +0xb7:  mov    (%eax),%edx
0809ce03 +0xb9:  mov    0x8(%ebp),%eax
0809ce06 +0xbc:  mov    %eax,(%esp)
0809ce09 +0xbf:  call   *%edx
0809ce0b +0xc1:  add    %eax,0xc(%ebp)
0809ce0e +0xc4:  mov    0x8(%ebp),%eax
0809ce11 +0xc7:  mov    (%eax),%eax
0809ce13 +0xc9:  add    $0x24,%eax
0809ce16 +0xcc:  mov    (%eax),%edx
0809ce18 +0xce:  mov    0x8(%ebp),%eax
0809ce1b +0xd1:  mov    %eax,(%esp)
0809ce1e +0xd4:  call   *%edx
0809ce20 +0xd6:  add    %eax,0x14(%ebp)
0809ce23 +0xd9:  addl   $0x1,-0xc(%ebp)
0809ce27 +0xdd:  mov    -0xc(%ebp),%eax
0809ce2a +0xe0:  cmp    -0x10(%ebp),%eax
0809ce2d +0xe3:  setl   %al
0809ce30 +0xe6:  test   %al,%al
0809ce32 +0xe8:  jne    0809cde0 <+0x96>
0809ce34 +0xea:  mov    $0x6fffffff,%eax
0809ce39 +0xef:  leave
0809ce3a +0xf0:  ret
0809ce3b +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoSkipjack::Decrypt @ 0x809cd4a

/* CNCryptoSkipjack::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoSkipjack::Decrypt
          (CNCryptoSkipjack *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
      if (param_4 < param_2) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          skipjack_ecb_decrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x7000000a;
    }
  }
  return uVar2;
}
```
