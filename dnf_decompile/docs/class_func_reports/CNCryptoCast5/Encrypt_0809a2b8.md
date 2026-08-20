# Encrypt

`_ZN13CNCryptoCast57EncryptEPKhiPhi`

`CNCryptoCast5::Encrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoCast5` | `0x0809a2b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a2b8  _ZN13CNCryptoCast57EncryptEPKhiPhi
#           CNCryptoCast5::Encrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809a2b8, 0x0809a3a9]
0809a2b8 +0x00:  push   %ebp
0809a2b9 +0x01:  mov    %esp,%ebp
0809a2bb +0x03:  sub    $0x38,%esp
0809a2be +0x06:  mov    0x8(%ebp),%eax
0809a2c1 +0x09:  mov    0x8(%eax),%eax
0809a2c4 +0x0c:  test   %eax,%eax
0809a2c6 +0x0e:  jne    0809a2d2 <+0x1a>
0809a2c8 +0x10:  mov    $0x7000000c,%eax
0809a2cd +0x15:  jmp    0809a3a7 <+0xef>
0809a2d2 +0x1a:  mov    0x8(%ebp),%eax
0809a2d5 +0x1d:  mov    (%eax),%eax
0809a2d7 +0x1f:  add    $0x24,%eax
0809a2da +0x22:  mov    (%eax),%edx
0809a2dc +0x24:  mov    0x8(%ebp),%eax
0809a2df +0x27:  mov    %eax,(%esp)
0809a2e2 +0x2a:  call   *%edx
0809a2e4 +0x2c:  mov    %eax,-0x20(%ebp)
0809a2e7 +0x2f:  mov    0x10(%ebp),%edx
0809a2ea +0x32:  mov    %edx,%eax
0809a2ec +0x34:  sar    $0x1f,%edx
0809a2ef +0x37:  idivl  -0x20(%ebp)
0809a2f2 +0x3a:  mov    %edx,%eax
0809a2f4 +0x3c:  test   %eax,%eax
0809a2f6 +0x3e:  setne  %al
0809a2f9 +0x41:  test   %al,%al
0809a2fb +0x43:  je     0809a307 <+0x4f>
0809a2fd +0x45:  mov    $0x70000006,%eax
0809a302 +0x4a:  jmp    0809a3a7 <+0xef>
0809a307 +0x4f:  mov    0x10(%ebp),%eax
0809a30a +0x52:  cmp    0x18(%ebp),%eax
0809a30d +0x55:  jle    0809a319 <+0x61>
0809a30f +0x57:  mov    $0x7000000a,%eax
0809a314 +0x5c:  jmp    0809a3a7 <+0xef>
0809a319 +0x61:  mov    0x8(%ebp),%eax
0809a31c +0x64:  mov    0x8(%eax),%eax
0809a31f +0x67:  mov    %eax,-0x14(%ebp)
0809a322 +0x6a:  mov    0x8(%ebp),%eax
0809a325 +0x6d:  mov    (%eax),%eax
0809a327 +0x6f:  add    $0x24,%eax
0809a32a +0x72:  mov    (%eax),%edx
0809a32c +0x74:  mov    0x8(%ebp),%eax
0809a32f +0x77:  mov    %eax,(%esp)
0809a332 +0x7a:  call   *%edx
0809a334 +0x7c:  mov    %eax,-0x1c(%ebp)
0809a337 +0x7f:  mov    0x10(%ebp),%eax
0809a33a +0x82:  mov    %eax,%edx
0809a33c +0x84:  sar    $0x1f,%edx
0809a33f +0x87:  idivl  -0x1c(%ebp)
0809a342 +0x8a:  mov    %eax,-0x10(%ebp)
0809a345 +0x8d:  movl   $0x0,-0xc(%ebp)
0809a34c +0x94:  jmp    0809a395 <+0xdd>
0809a34e +0x96:  mov    -0x14(%ebp),%eax
0809a351 +0x99:  mov    %eax,0x8(%esp)
0809a355 +0x9d:  mov    0x14(%ebp),%eax
0809a358 +0xa0:  mov    %eax,0x4(%esp)
0809a35c +0xa4:  mov    0xc(%ebp),%eax
0809a35f +0xa7:  mov    %eax,(%esp)
0809a362 +0xaa:  call   080ab8ea <_Z17cast5_ecb_encryptPKhPhP13symmetric_key>  ; cast5_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809a367 +0xaf:  mov    0x8(%ebp),%eax
0809a36a +0xb2:  mov    (%eax),%eax
0809a36c +0xb4:  add    $0x24,%eax
0809a36f +0xb7:  mov    (%eax),%edx
0809a371 +0xb9:  mov    0x8(%ebp),%eax
0809a374 +0xbc:  mov    %eax,(%esp)
0809a377 +0xbf:  call   *%edx
0809a379 +0xc1:  add    %eax,0xc(%ebp)
0809a37c +0xc4:  mov    0x8(%ebp),%eax
0809a37f +0xc7:  mov    (%eax),%eax
0809a381 +0xc9:  add    $0x24,%eax
0809a384 +0xcc:  mov    (%eax),%edx
0809a386 +0xce:  mov    0x8(%ebp),%eax
0809a389 +0xd1:  mov    %eax,(%esp)
0809a38c +0xd4:  call   *%edx
0809a38e +0xd6:  add    %eax,0x14(%ebp)
0809a391 +0xd9:  addl   $0x1,-0xc(%ebp)
0809a395 +0xdd:  mov    -0xc(%ebp),%eax
0809a398 +0xe0:  cmp    -0x10(%ebp),%eax
0809a39b +0xe3:  setl   %al
0809a39e +0xe6:  test   %al,%al
0809a3a0 +0xe8:  jne    0809a34e <+0x96>
0809a3a2 +0xea:  mov    $0x6fffffff,%eax
0809a3a7 +0xef:  leave
0809a3a8 +0xf0:  ret
0809a3a9 +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoCast5::Encrypt @ 0x809a2b8

/* CNCryptoCast5::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoCast5::Encrypt(CNCryptoCast5 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          cast5_ecb_encrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
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
