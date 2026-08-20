# Encrypt

`_ZN14CNCryptoAnubis7EncryptEPhi`

`CNCryptoAnubis::Encrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoAnubis` | `0x08099464` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08099464  _ZN14CNCryptoAnubis7EncryptEPhi
#           CNCryptoAnubis::Encrypt(unsigned char*, int)
# range [0x08099464, 0x0809953b]
08099464 +0x00:  push   %ebp
08099465 +0x01:  mov    %esp,%ebp
08099467 +0x03:  sub    $0x38,%esp
0809946a +0x06:  mov    0x8(%ebp),%eax
0809946d +0x09:  mov    0x8(%eax),%eax
08099470 +0x0c:  test   %eax,%eax
08099472 +0x0e:  jne    0809947e <+0x1a>
08099474 +0x10:  mov    $0x7000000c,%eax
08099479 +0x15:  jmp    08099539 <+0xd5>
0809947e +0x1a:  cmpl   $0x0,0x10(%ebp)
08099482 +0x1e:  jg     0809948e <+0x2a>
08099484 +0x20:  mov    $0x7000000a,%eax
08099489 +0x25:  jmp    08099539 <+0xd5>
0809948e +0x2a:  mov    0x8(%ebp),%eax
08099491 +0x2d:  mov    (%eax),%eax
08099493 +0x2f:  add    $0x24,%eax
08099496 +0x32:  mov    (%eax),%edx
08099498 +0x34:  mov    0x8(%ebp),%eax
0809949b +0x37:  mov    %eax,(%esp)
0809949e +0x3a:  call   *%edx
080994a0 +0x3c:  mov    %eax,-0x20(%ebp)
080994a3 +0x3f:  mov    0x10(%ebp),%edx
080994a6 +0x42:  mov    %edx,%eax
080994a8 +0x44:  sar    $0x1f,%edx
080994ab +0x47:  idivl  -0x20(%ebp)
080994ae +0x4a:  mov    %edx,%eax
080994b0 +0x4c:  test   %eax,%eax
080994b2 +0x4e:  setne  %al
080994b5 +0x51:  test   %al,%al
080994b7 +0x53:  je     080994c0 <+0x5c>
080994b9 +0x55:  mov    $0x70000006,%eax
080994be +0x5a:  jmp    08099539 <+0xd5>
080994c0 +0x5c:  mov    0x8(%ebp),%eax
080994c3 +0x5f:  mov    0x8(%eax),%eax
080994c6 +0x62:  mov    %eax,-0x14(%ebp)
080994c9 +0x65:  mov    0x8(%ebp),%eax
080994cc +0x68:  mov    (%eax),%eax
080994ce +0x6a:  add    $0x24,%eax
080994d1 +0x6d:  mov    (%eax),%edx
080994d3 +0x6f:  mov    0x8(%ebp),%eax
080994d6 +0x72:  mov    %eax,(%esp)
080994d9 +0x75:  call   *%edx
080994db +0x77:  mov    %eax,-0x1c(%ebp)
080994de +0x7a:  mov    0x10(%ebp),%eax
080994e1 +0x7d:  mov    %eax,%edx
080994e3 +0x7f:  sar    $0x1f,%edx
080994e6 +0x82:  idivl  -0x1c(%ebp)
080994e9 +0x85:  mov    %eax,-0x10(%ebp)
080994ec +0x88:  movl   $0x0,-0xc(%ebp)
080994f3 +0x8f:  jmp    08099527 <+0xc3>
080994f5 +0x91:  mov    -0x14(%ebp),%eax
080994f8 +0x94:  mov    %eax,0x8(%esp)
080994fc +0x98:  mov    0xc(%ebp),%eax
080994ff +0x9b:  mov    %eax,0x4(%esp)
08099503 +0x9f:  mov    0xc(%ebp),%eax
08099506 +0xa2:  mov    %eax,(%esp)
08099509 +0xa5:  call   080a52ef <_Z18anubis_ecb_encryptPKhPhP13symmetric_key>  ; anubis_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809950e +0xaa:  mov    0x8(%ebp),%eax
08099511 +0xad:  mov    (%eax),%eax
08099513 +0xaf:  add    $0x24,%eax
08099516 +0xb2:  mov    (%eax),%edx
08099518 +0xb4:  mov    0x8(%ebp),%eax
0809951b +0xb7:  mov    %eax,(%esp)
0809951e +0xba:  call   *%edx
08099520 +0xbc:  add    %eax,0xc(%ebp)
08099523 +0xbf:  addl   $0x1,-0xc(%ebp)
08099527 +0xc3:  mov    -0xc(%ebp),%eax
0809952a +0xc6:  cmp    -0x10(%ebp),%eax
0809952d +0xc9:  setl   %al
08099530 +0xcc:  test   %al,%al
08099532 +0xce:  jne    080994f5 <+0x91>
08099534 +0xd0:  mov    $0x6fffffff,%eax
08099539 +0xd5:  leave
0809953a +0xd6:  ret
0809953b +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoAnubis::Encrypt @ 0x8099464

/* CNCryptoAnubis::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoAnubis::Encrypt(CNCryptoAnubis *this,uchar *param_1,int param_2)

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
        anubis_ecb_encrypt(param_1,param_1,psVar1);
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
