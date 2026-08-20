# Decrypt

`_ZN14CNCryptoAnubis7DecryptEPhi`

`CNCryptoAnubis::Decrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoAnubis` | `0x0809953c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809953c  _ZN14CNCryptoAnubis7DecryptEPhi
#           CNCryptoAnubis::Decrypt(unsigned char*, int)
# range [0x0809953c, 0x08099613]
0809953c +0x00:  push   %ebp
0809953d +0x01:  mov    %esp,%ebp
0809953f +0x03:  sub    $0x38,%esp
08099542 +0x06:  mov    0x8(%ebp),%eax
08099545 +0x09:  mov    0x8(%eax),%eax
08099548 +0x0c:  test   %eax,%eax
0809954a +0x0e:  jne    08099556 <+0x1a>
0809954c +0x10:  mov    $0x7000000c,%eax
08099551 +0x15:  jmp    08099611 <+0xd5>
08099556 +0x1a:  cmpl   $0x0,0x10(%ebp)
0809955a +0x1e:  jg     08099566 <+0x2a>
0809955c +0x20:  mov    $0x7000000a,%eax
08099561 +0x25:  jmp    08099611 <+0xd5>
08099566 +0x2a:  mov    0x8(%ebp),%eax
08099569 +0x2d:  mov    (%eax),%eax
0809956b +0x2f:  add    $0x24,%eax
0809956e +0x32:  mov    (%eax),%edx
08099570 +0x34:  mov    0x8(%ebp),%eax
08099573 +0x37:  mov    %eax,(%esp)
08099576 +0x3a:  call   *%edx
08099578 +0x3c:  mov    %eax,-0x20(%ebp)
0809957b +0x3f:  mov    0x10(%ebp),%edx
0809957e +0x42:  mov    %edx,%eax
08099580 +0x44:  sar    $0x1f,%edx
08099583 +0x47:  idivl  -0x20(%ebp)
08099586 +0x4a:  mov    %edx,%eax
08099588 +0x4c:  test   %eax,%eax
0809958a +0x4e:  setne  %al
0809958d +0x51:  test   %al,%al
0809958f +0x53:  je     08099598 <+0x5c>
08099591 +0x55:  mov    $0x70000006,%eax
08099596 +0x5a:  jmp    08099611 <+0xd5>
08099598 +0x5c:  mov    0x8(%ebp),%eax
0809959b +0x5f:  mov    0x8(%eax),%eax
0809959e +0x62:  mov    %eax,-0x14(%ebp)
080995a1 +0x65:  mov    0x8(%ebp),%eax
080995a4 +0x68:  mov    (%eax),%eax
080995a6 +0x6a:  add    $0x24,%eax
080995a9 +0x6d:  mov    (%eax),%edx
080995ab +0x6f:  mov    0x8(%ebp),%eax
080995ae +0x72:  mov    %eax,(%esp)
080995b1 +0x75:  call   *%edx
080995b3 +0x77:  mov    %eax,-0x1c(%ebp)
080995b6 +0x7a:  mov    0x10(%ebp),%eax
080995b9 +0x7d:  mov    %eax,%edx
080995bb +0x7f:  sar    $0x1f,%edx
080995be +0x82:  idivl  -0x1c(%ebp)
080995c1 +0x85:  mov    %eax,-0x10(%ebp)
080995c4 +0x88:  movl   $0x0,-0xc(%ebp)
080995cb +0x8f:  jmp    080995ff <+0xc3>
080995cd +0x91:  mov    -0x14(%ebp),%eax
080995d0 +0x94:  mov    %eax,0x8(%esp)
080995d4 +0x98:  mov    0xc(%ebp),%eax
080995d7 +0x9b:  mov    %eax,0x4(%esp)
080995db +0x9f:  mov    0xc(%ebp),%eax
080995de +0xa2:  mov    %eax,(%esp)
080995e1 +0xa5:  call   080a5322 <_Z18anubis_ecb_decryptPKhPhP13symmetric_key>  ; anubis_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
080995e6 +0xaa:  mov    0x8(%ebp),%eax
080995e9 +0xad:  mov    (%eax),%eax
080995eb +0xaf:  add    $0x24,%eax
080995ee +0xb2:  mov    (%eax),%edx
080995f0 +0xb4:  mov    0x8(%ebp),%eax
080995f3 +0xb7:  mov    %eax,(%esp)
080995f6 +0xba:  call   *%edx
080995f8 +0xbc:  add    %eax,0xc(%ebp)
080995fb +0xbf:  addl   $0x1,-0xc(%ebp)
080995ff +0xc3:  mov    -0xc(%ebp),%eax
08099602 +0xc6:  cmp    -0x10(%ebp),%eax
08099605 +0xc9:  setl   %al
08099608 +0xcc:  test   %al,%al
0809960a +0xce:  jne    080995cd <+0x91>
0809960c +0xd0:  mov    $0x6fffffff,%eax
08099611 +0xd5:  leave
08099612 +0xd6:  ret
08099613 +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoAnubis::Decrypt @ 0x809953c

/* CNCryptoAnubis::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoAnubis::Decrypt(CNCryptoAnubis *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else if (param_2 < 1) {
    uVar2 = 0x7000000a;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      psVar1 = *(symmetric_key **)(this + 8);
      iVar3 = (**(code **)(*(int *)this + 0x24))(this);
      for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
        anubis_ecb_decrypt(param_1,param_1,psVar1);
        iVar4 = (**(code **)(*(int *)this + 0x24))(this);
        param_1 = param_1 + iVar4;
      }
      uVar2 = 0x6fffffff;
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}
```
