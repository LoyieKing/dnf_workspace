# Decrypt

`_ZN13CNCryptoCast57DecryptEPKhiPhi`

`CNCryptoCast5::Decrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoCast5` | `0x0809a3aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a3aa  _ZN13CNCryptoCast57DecryptEPKhiPhi
#           CNCryptoCast5::Decrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809a3aa, 0x0809a49b]
0809a3aa +0x00:  push   %ebp
0809a3ab +0x01:  mov    %esp,%ebp
0809a3ad +0x03:  sub    $0x38,%esp
0809a3b0 +0x06:  mov    0x8(%ebp),%eax
0809a3b3 +0x09:  mov    0x8(%eax),%eax
0809a3b6 +0x0c:  test   %eax,%eax
0809a3b8 +0x0e:  jne    0809a3c4 <+0x1a>
0809a3ba +0x10:  mov    $0x7000000c,%eax
0809a3bf +0x15:  jmp    0809a499 <+0xef>
0809a3c4 +0x1a:  mov    0x8(%ebp),%eax
0809a3c7 +0x1d:  mov    (%eax),%eax
0809a3c9 +0x1f:  add    $0x24,%eax
0809a3cc +0x22:  mov    (%eax),%edx
0809a3ce +0x24:  mov    0x8(%ebp),%eax
0809a3d1 +0x27:  mov    %eax,(%esp)
0809a3d4 +0x2a:  call   *%edx
0809a3d6 +0x2c:  mov    %eax,-0x20(%ebp)
0809a3d9 +0x2f:  mov    0x10(%ebp),%edx
0809a3dc +0x32:  mov    %edx,%eax
0809a3de +0x34:  sar    $0x1f,%edx
0809a3e1 +0x37:  idivl  -0x20(%ebp)
0809a3e4 +0x3a:  mov    %edx,%eax
0809a3e6 +0x3c:  test   %eax,%eax
0809a3e8 +0x3e:  setne  %al
0809a3eb +0x41:  test   %al,%al
0809a3ed +0x43:  je     0809a3f9 <+0x4f>
0809a3ef +0x45:  mov    $0x7000000a,%eax
0809a3f4 +0x4a:  jmp    0809a499 <+0xef>
0809a3f9 +0x4f:  mov    0x10(%ebp),%eax
0809a3fc +0x52:  cmp    0x18(%ebp),%eax
0809a3ff +0x55:  jle    0809a40b <+0x61>
0809a401 +0x57:  mov    $0x7000000a,%eax
0809a406 +0x5c:  jmp    0809a499 <+0xef>
0809a40b +0x61:  mov    0x8(%ebp),%eax
0809a40e +0x64:  mov    0x8(%eax),%eax
0809a411 +0x67:  mov    %eax,-0x14(%ebp)
0809a414 +0x6a:  mov    0x8(%ebp),%eax
0809a417 +0x6d:  mov    (%eax),%eax
0809a419 +0x6f:  add    $0x24,%eax
0809a41c +0x72:  mov    (%eax),%edx
0809a41e +0x74:  mov    0x8(%ebp),%eax
0809a421 +0x77:  mov    %eax,(%esp)
0809a424 +0x7a:  call   *%edx
0809a426 +0x7c:  mov    %eax,-0x1c(%ebp)
0809a429 +0x7f:  mov    0x10(%ebp),%eax
0809a42c +0x82:  mov    %eax,%edx
0809a42e +0x84:  sar    $0x1f,%edx
0809a431 +0x87:  idivl  -0x1c(%ebp)
0809a434 +0x8a:  mov    %eax,-0x10(%ebp)
0809a437 +0x8d:  movl   $0x0,-0xc(%ebp)
0809a43e +0x94:  jmp    0809a487 <+0xdd>
0809a440 +0x96:  mov    -0x14(%ebp),%eax
0809a443 +0x99:  mov    %eax,0x8(%esp)
0809a447 +0x9d:  mov    0x14(%ebp),%eax
0809a44a +0xa0:  mov    %eax,0x4(%esp)
0809a44e +0xa4:  mov    0xc(%ebp),%eax
0809a451 +0xa7:  mov    %eax,(%esp)
0809a454 +0xaa:  call   080abc49 <_Z17cast5_ecb_decryptPKhPhP13symmetric_key>  ; cast5_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809a459 +0xaf:  mov    0x8(%ebp),%eax
0809a45c +0xb2:  mov    (%eax),%eax
0809a45e +0xb4:  add    $0x24,%eax
0809a461 +0xb7:  mov    (%eax),%edx
0809a463 +0xb9:  mov    0x8(%ebp),%eax
0809a466 +0xbc:  mov    %eax,(%esp)
0809a469 +0xbf:  call   *%edx
0809a46b +0xc1:  add    %eax,0xc(%ebp)
0809a46e +0xc4:  mov    0x8(%ebp),%eax
0809a471 +0xc7:  mov    (%eax),%eax
0809a473 +0xc9:  add    $0x24,%eax
0809a476 +0xcc:  mov    (%eax),%edx
0809a478 +0xce:  mov    0x8(%ebp),%eax
0809a47b +0xd1:  mov    %eax,(%esp)
0809a47e +0xd4:  call   *%edx
0809a480 +0xd6:  add    %eax,0x14(%ebp)
0809a483 +0xd9:  addl   $0x1,-0xc(%ebp)
0809a487 +0xdd:  mov    -0xc(%ebp),%eax
0809a48a +0xe0:  cmp    -0x10(%ebp),%eax
0809a48d +0xe3:  setl   %al
0809a490 +0xe6:  test   %al,%al
0809a492 +0xe8:  jne    0809a440 <+0x96>
0809a494 +0xea:  mov    $0x6fffffff,%eax
0809a499 +0xef:  leave
0809a49a +0xf0:  ret
0809a49b +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoCast5::Decrypt @ 0x809a3aa

/* CNCryptoCast5::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoCast5::Decrypt(CNCryptoCast5 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          cast5_ecb_decrypt(param_1,param_3,psVar1);
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
