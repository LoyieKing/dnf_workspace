# Encrypt

`_ZN15CNCryptoTwoFish7EncryptEPhi`

`CNCryptoTwoFish::Encrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoTwoFish` | `0x0809d524` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d524  _ZN15CNCryptoTwoFish7EncryptEPhi
#           CNCryptoTwoFish::Encrypt(unsigned char*, int)
# range [0x0809d524, 0x0809d5fb]
0809d524 +0x00:  push   %ebp
0809d525 +0x01:  mov    %esp,%ebp
0809d527 +0x03:  sub    $0x38,%esp
0809d52a +0x06:  mov    0x8(%ebp),%eax
0809d52d +0x09:  mov    0x8(%eax),%eax
0809d530 +0x0c:  test   %eax,%eax
0809d532 +0x0e:  jne    0809d53e <+0x1a>
0809d534 +0x10:  mov    $0x7000000c,%eax
0809d539 +0x15:  jmp    0809d5f9 <+0xd5>
0809d53e +0x1a:  mov    0x8(%ebp),%eax
0809d541 +0x1d:  mov    (%eax),%eax
0809d543 +0x1f:  add    $0x24,%eax
0809d546 +0x22:  mov    (%eax),%edx
0809d548 +0x24:  mov    0x8(%ebp),%eax
0809d54b +0x27:  mov    %eax,(%esp)
0809d54e +0x2a:  call   *%edx
0809d550 +0x2c:  mov    %eax,-0x20(%ebp)
0809d553 +0x2f:  mov    0x10(%ebp),%edx
0809d556 +0x32:  mov    %edx,%eax
0809d558 +0x34:  sar    $0x1f,%edx
0809d55b +0x37:  idivl  -0x20(%ebp)
0809d55e +0x3a:  mov    %edx,%eax
0809d560 +0x3c:  test   %eax,%eax
0809d562 +0x3e:  setne  %al
0809d565 +0x41:  test   %al,%al
0809d567 +0x43:  je     0809d573 <+0x4f>
0809d569 +0x45:  mov    $0x70000006,%eax
0809d56e +0x4a:  jmp    0809d5f9 <+0xd5>
0809d573 +0x4f:  cmpl   $0x0,0x10(%ebp)
0809d577 +0x53:  jg     0809d580 <+0x5c>
0809d579 +0x55:  mov    $0x7000000a,%eax
0809d57e +0x5a:  jmp    0809d5f9 <+0xd5>
0809d580 +0x5c:  mov    0x8(%ebp),%eax
0809d583 +0x5f:  mov    0x8(%eax),%eax
0809d586 +0x62:  mov    %eax,-0x14(%ebp)
0809d589 +0x65:  mov    0x8(%ebp),%eax
0809d58c +0x68:  mov    (%eax),%eax
0809d58e +0x6a:  add    $0x24,%eax
0809d591 +0x6d:  mov    (%eax),%edx
0809d593 +0x6f:  mov    0x8(%ebp),%eax
0809d596 +0x72:  mov    %eax,(%esp)
0809d599 +0x75:  call   *%edx
0809d59b +0x77:  mov    %eax,-0x1c(%ebp)
0809d59e +0x7a:  mov    0x10(%ebp),%eax
0809d5a1 +0x7d:  mov    %eax,%edx
0809d5a3 +0x7f:  sar    $0x1f,%edx
0809d5a6 +0x82:  idivl  -0x1c(%ebp)
0809d5a9 +0x85:  mov    %eax,-0x10(%ebp)
0809d5ac +0x88:  movl   $0x0,-0xc(%ebp)
0809d5b3 +0x8f:  jmp    0809d5e7 <+0xc3>
0809d5b5 +0x91:  mov    -0x14(%ebp),%eax
0809d5b8 +0x94:  mov    %eax,0x8(%esp)
0809d5bc +0x98:  mov    0xc(%ebp),%eax
0809d5bf +0x9b:  mov    %eax,0x4(%esp)
0809d5c3 +0x9f:  mov    0xc(%ebp),%eax
0809d5c6 +0xa2:  mov    %eax,(%esp)
0809d5c9 +0xa5:  call   080c4e48 <_Z19twofish_ecb_encryptPKhPhP13symmetric_key>  ; twofish_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809d5ce +0xaa:  mov    0x8(%ebp),%eax
0809d5d1 +0xad:  mov    (%eax),%eax
0809d5d3 +0xaf:  add    $0x24,%eax
0809d5d6 +0xb2:  mov    (%eax),%edx
0809d5d8 +0xb4:  mov    0x8(%ebp),%eax
0809d5db +0xb7:  mov    %eax,(%esp)
0809d5de +0xba:  call   *%edx
0809d5e0 +0xbc:  add    %eax,0xc(%ebp)
0809d5e3 +0xbf:  addl   $0x1,-0xc(%ebp)
0809d5e7 +0xc3:  mov    -0xc(%ebp),%eax
0809d5ea +0xc6:  cmp    -0x10(%ebp),%eax
0809d5ed +0xc9:  setl   %al
0809d5f0 +0xcc:  test   %al,%al
0809d5f2 +0xce:  jne    0809d5b5 <+0x91>
0809d5f4 +0xd0:  mov    $0x6fffffff,%eax
0809d5f9 +0xd5:  leave
0809d5fa +0xd6:  ret
0809d5fb +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoTwoFish::Encrypt @ 0x809d524

/* CNCryptoTwoFish::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoTwoFish::Encrypt(CNCryptoTwoFish *this,uchar *param_1,int param_2)

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
          twofish_ecb_encrypt(param_1,param_1,psVar1);
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
