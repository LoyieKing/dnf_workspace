# Decrypt

`_ZN15CNCryptoTwoFish7DecryptEPhi`

`CNCryptoTwoFish::Decrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoTwoFish` | `0x0809d5fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d5fc  _ZN15CNCryptoTwoFish7DecryptEPhi
#           CNCryptoTwoFish::Decrypt(unsigned char*, int)
# range [0x0809d5fc, 0x0809d6d3]
0809d5fc +0x00:  push   %ebp
0809d5fd +0x01:  mov    %esp,%ebp
0809d5ff +0x03:  sub    $0x38,%esp
0809d602 +0x06:  mov    0x8(%ebp),%eax
0809d605 +0x09:  mov    0x8(%eax),%eax
0809d608 +0x0c:  test   %eax,%eax
0809d60a +0x0e:  jne    0809d616 <+0x1a>
0809d60c +0x10:  mov    $0x7000000c,%eax
0809d611 +0x15:  jmp    0809d6d1 <+0xd5>
0809d616 +0x1a:  mov    0x8(%ebp),%eax
0809d619 +0x1d:  mov    (%eax),%eax
0809d61b +0x1f:  add    $0x24,%eax
0809d61e +0x22:  mov    (%eax),%edx
0809d620 +0x24:  mov    0x8(%ebp),%eax
0809d623 +0x27:  mov    %eax,(%esp)
0809d626 +0x2a:  call   *%edx
0809d628 +0x2c:  mov    %eax,-0x20(%ebp)
0809d62b +0x2f:  mov    0x10(%ebp),%edx
0809d62e +0x32:  mov    %edx,%eax
0809d630 +0x34:  sar    $0x1f,%edx
0809d633 +0x37:  idivl  -0x20(%ebp)
0809d636 +0x3a:  mov    %edx,%eax
0809d638 +0x3c:  test   %eax,%eax
0809d63a +0x3e:  setne  %al
0809d63d +0x41:  test   %al,%al
0809d63f +0x43:  je     0809d64b <+0x4f>
0809d641 +0x45:  mov    $0x70000006,%eax
0809d646 +0x4a:  jmp    0809d6d1 <+0xd5>
0809d64b +0x4f:  cmpl   $0x0,0x10(%ebp)
0809d64f +0x53:  jg     0809d658 <+0x5c>
0809d651 +0x55:  mov    $0x7000000a,%eax
0809d656 +0x5a:  jmp    0809d6d1 <+0xd5>
0809d658 +0x5c:  mov    0x8(%ebp),%eax
0809d65b +0x5f:  mov    0x8(%eax),%eax
0809d65e +0x62:  mov    %eax,-0x14(%ebp)
0809d661 +0x65:  mov    0x8(%ebp),%eax
0809d664 +0x68:  mov    (%eax),%eax
0809d666 +0x6a:  add    $0x24,%eax
0809d669 +0x6d:  mov    (%eax),%edx
0809d66b +0x6f:  mov    0x8(%ebp),%eax
0809d66e +0x72:  mov    %eax,(%esp)
0809d671 +0x75:  call   *%edx
0809d673 +0x77:  mov    %eax,-0x1c(%ebp)
0809d676 +0x7a:  mov    0x10(%ebp),%eax
0809d679 +0x7d:  mov    %eax,%edx
0809d67b +0x7f:  sar    $0x1f,%edx
0809d67e +0x82:  idivl  -0x1c(%ebp)
0809d681 +0x85:  mov    %eax,-0x10(%ebp)
0809d684 +0x88:  movl   $0x0,-0xc(%ebp)
0809d68b +0x8f:  jmp    0809d6bf <+0xc3>
0809d68d +0x91:  mov    -0x14(%ebp),%eax
0809d690 +0x94:  mov    %eax,0x8(%esp)
0809d694 +0x98:  mov    0xc(%ebp),%eax
0809d697 +0x9b:  mov    %eax,0x4(%esp)
0809d69b +0x9f:  mov    0xc(%ebp),%eax
0809d69e +0xa2:  mov    %eax,(%esp)
0809d6a1 +0xa5:  call   080c52f5 <_Z19twofish_ecb_decryptPKhPhP13symmetric_key>  ; twofish_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809d6a6 +0xaa:  mov    0x8(%ebp),%eax
0809d6a9 +0xad:  mov    (%eax),%eax
0809d6ab +0xaf:  add    $0x24,%eax
0809d6ae +0xb2:  mov    (%eax),%edx
0809d6b0 +0xb4:  mov    0x8(%ebp),%eax
0809d6b3 +0xb7:  mov    %eax,(%esp)
0809d6b6 +0xba:  call   *%edx
0809d6b8 +0xbc:  add    %eax,0xc(%ebp)
0809d6bb +0xbf:  addl   $0x1,-0xc(%ebp)
0809d6bf +0xc3:  mov    -0xc(%ebp),%eax
0809d6c2 +0xc6:  cmp    -0x10(%ebp),%eax
0809d6c5 +0xc9:  setl   %al
0809d6c8 +0xcc:  test   %al,%al
0809d6ca +0xce:  jne    0809d68d <+0x91>
0809d6cc +0xd0:  mov    $0x6fffffff,%eax
0809d6d1 +0xd5:  leave
0809d6d2 +0xd6:  ret
0809d6d3 +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoTwoFish::Decrypt @ 0x809d5fc

/* CNCryptoTwoFish::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoTwoFish::Decrypt(CNCryptoTwoFish *this,uchar *param_1,int param_2)

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
          twofish_ecb_decrypt(param_1,param_1,psVar1);
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
