# Encrypt

`_ZN15CNCryptoNoekeon7EncryptEPhi`

`CNCryptoNoekeon::Encrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoNoekeon` | `0x0809b798` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b798  _ZN15CNCryptoNoekeon7EncryptEPhi
#           CNCryptoNoekeon::Encrypt(unsigned char*, int)
# range [0x0809b798, 0x0809b86f]
0809b798 +0x00:  push   %ebp
0809b799 +0x01:  mov    %esp,%ebp
0809b79b +0x03:  sub    $0x38,%esp
0809b79e +0x06:  mov    0x8(%ebp),%eax
0809b7a1 +0x09:  mov    0x8(%eax),%eax
0809b7a4 +0x0c:  test   %eax,%eax
0809b7a6 +0x0e:  jne    0809b7b2 <+0x1a>
0809b7a8 +0x10:  mov    $0x7000000c,%eax
0809b7ad +0x15:  jmp    0809b86d <+0xd5>
0809b7b2 +0x1a:  mov    0x8(%ebp),%eax
0809b7b5 +0x1d:  mov    (%eax),%eax
0809b7b7 +0x1f:  add    $0x24,%eax
0809b7ba +0x22:  mov    (%eax),%edx
0809b7bc +0x24:  mov    0x8(%ebp),%eax
0809b7bf +0x27:  mov    %eax,(%esp)
0809b7c2 +0x2a:  call   *%edx
0809b7c4 +0x2c:  mov    %eax,-0x20(%ebp)
0809b7c7 +0x2f:  mov    0x10(%ebp),%edx
0809b7ca +0x32:  mov    %edx,%eax
0809b7cc +0x34:  sar    $0x1f,%edx
0809b7cf +0x37:  idivl  -0x20(%ebp)
0809b7d2 +0x3a:  mov    %edx,%eax
0809b7d4 +0x3c:  test   %eax,%eax
0809b7d6 +0x3e:  setne  %al
0809b7d9 +0x41:  test   %al,%al
0809b7db +0x43:  je     0809b7e7 <+0x4f>
0809b7dd +0x45:  mov    $0x70000006,%eax
0809b7e2 +0x4a:  jmp    0809b86d <+0xd5>
0809b7e7 +0x4f:  cmpl   $0x0,0x10(%ebp)
0809b7eb +0x53:  jg     0809b7f4 <+0x5c>
0809b7ed +0x55:  mov    $0x7000000a,%eax
0809b7f2 +0x5a:  jmp    0809b86d <+0xd5>
0809b7f4 +0x5c:  mov    0x8(%ebp),%eax
0809b7f7 +0x5f:  mov    0x8(%eax),%eax
0809b7fa +0x62:  mov    %eax,-0x14(%ebp)
0809b7fd +0x65:  mov    0x8(%ebp),%eax
0809b800 +0x68:  mov    (%eax),%eax
0809b802 +0x6a:  add    $0x24,%eax
0809b805 +0x6d:  mov    (%eax),%edx
0809b807 +0x6f:  mov    0x8(%ebp),%eax
0809b80a +0x72:  mov    %eax,(%esp)
0809b80d +0x75:  call   *%edx
0809b80f +0x77:  mov    %eax,-0x1c(%ebp)
0809b812 +0x7a:  mov    0x10(%ebp),%eax
0809b815 +0x7d:  mov    %eax,%edx
0809b817 +0x7f:  sar    $0x1f,%edx
0809b81a +0x82:  idivl  -0x1c(%ebp)
0809b81d +0x85:  mov    %eax,-0x10(%ebp)
0809b820 +0x88:  movl   $0x0,-0xc(%ebp)
0809b827 +0x8f:  jmp    0809b85b <+0xc3>
0809b829 +0x91:  mov    -0x14(%ebp),%eax
0809b82c +0x94:  mov    %eax,0x8(%esp)
0809b830 +0x98:  mov    0xc(%ebp),%eax
0809b833 +0x9b:  mov    %eax,0x4(%esp)
0809b837 +0x9f:  mov    0xc(%ebp),%eax
0809b83a +0xa2:  mov    %eax,(%esp)
0809b83d +0xa5:  call   080b5669 <_Z19noekeon_ecb_encryptPKhPhP13symmetric_key>  ; noekeon_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809b842 +0xaa:  mov    0x8(%ebp),%eax
0809b845 +0xad:  mov    (%eax),%eax
0809b847 +0xaf:  add    $0x24,%eax
0809b84a +0xb2:  mov    (%eax),%edx
0809b84c +0xb4:  mov    0x8(%ebp),%eax
0809b84f +0xb7:  mov    %eax,(%esp)
0809b852 +0xba:  call   *%edx
0809b854 +0xbc:  add    %eax,0xc(%ebp)
0809b857 +0xbf:  addl   $0x1,-0xc(%ebp)
0809b85b +0xc3:  mov    -0xc(%ebp),%eax
0809b85e +0xc6:  cmp    -0x10(%ebp),%eax
0809b861 +0xc9:  setl   %al
0809b864 +0xcc:  test   %al,%al
0809b866 +0xce:  jne    0809b829 <+0x91>
0809b868 +0xd0:  mov    $0x6fffffff,%eax
0809b86d +0xd5:  leave
0809b86e +0xd6:  ret
0809b86f +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoNoekeon::Encrypt @ 0x809b798

/* CNCryptoNoekeon::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoNoekeon::Encrypt(CNCryptoNoekeon *this,uchar *param_1,int param_2)

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
          noekeon_ecb_encrypt(param_1,param_1,psVar1);
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
