# Encrypt

`_ZN13CNCryptoCast57EncryptEPhi`

`CNCryptoCast5::Encrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoCast5` | `0x0809a108` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a108  _ZN13CNCryptoCast57EncryptEPhi
#           CNCryptoCast5::Encrypt(unsigned char*, int)
# range [0x0809a108, 0x0809a1df]
0809a108 +0x00:  push   %ebp
0809a109 +0x01:  mov    %esp,%ebp
0809a10b +0x03:  sub    $0x38,%esp
0809a10e +0x06:  mov    0x8(%ebp),%eax
0809a111 +0x09:  mov    0x8(%eax),%eax
0809a114 +0x0c:  test   %eax,%eax
0809a116 +0x0e:  jne    0809a122 <+0x1a>
0809a118 +0x10:  mov    $0x7000000c,%eax
0809a11d +0x15:  jmp    0809a1dd <+0xd5>
0809a122 +0x1a:  mov    0x8(%ebp),%eax
0809a125 +0x1d:  mov    (%eax),%eax
0809a127 +0x1f:  add    $0x24,%eax
0809a12a +0x22:  mov    (%eax),%edx
0809a12c +0x24:  mov    0x8(%ebp),%eax
0809a12f +0x27:  mov    %eax,(%esp)
0809a132 +0x2a:  call   *%edx
0809a134 +0x2c:  mov    %eax,-0x20(%ebp)
0809a137 +0x2f:  mov    0x10(%ebp),%edx
0809a13a +0x32:  mov    %edx,%eax
0809a13c +0x34:  sar    $0x1f,%edx
0809a13f +0x37:  idivl  -0x20(%ebp)
0809a142 +0x3a:  mov    %edx,%eax
0809a144 +0x3c:  test   %eax,%eax
0809a146 +0x3e:  setne  %al
0809a149 +0x41:  test   %al,%al
0809a14b +0x43:  je     0809a157 <+0x4f>
0809a14d +0x45:  mov    $0x70000006,%eax
0809a152 +0x4a:  jmp    0809a1dd <+0xd5>
0809a157 +0x4f:  cmpl   $0x0,0x10(%ebp)
0809a15b +0x53:  jg     0809a164 <+0x5c>
0809a15d +0x55:  mov    $0x7000000a,%eax
0809a162 +0x5a:  jmp    0809a1dd <+0xd5>
0809a164 +0x5c:  mov    0x8(%ebp),%eax
0809a167 +0x5f:  mov    0x8(%eax),%eax
0809a16a +0x62:  mov    %eax,-0x14(%ebp)
0809a16d +0x65:  mov    0x8(%ebp),%eax
0809a170 +0x68:  mov    (%eax),%eax
0809a172 +0x6a:  add    $0x24,%eax
0809a175 +0x6d:  mov    (%eax),%edx
0809a177 +0x6f:  mov    0x8(%ebp),%eax
0809a17a +0x72:  mov    %eax,(%esp)
0809a17d +0x75:  call   *%edx
0809a17f +0x77:  mov    %eax,-0x1c(%ebp)
0809a182 +0x7a:  mov    0x10(%ebp),%eax
0809a185 +0x7d:  mov    %eax,%edx
0809a187 +0x7f:  sar    $0x1f,%edx
0809a18a +0x82:  idivl  -0x1c(%ebp)
0809a18d +0x85:  mov    %eax,-0x10(%ebp)
0809a190 +0x88:  movl   $0x0,-0xc(%ebp)
0809a197 +0x8f:  jmp    0809a1cb <+0xc3>
0809a199 +0x91:  mov    -0x14(%ebp),%eax
0809a19c +0x94:  mov    %eax,0x8(%esp)
0809a1a0 +0x98:  mov    0xc(%ebp),%eax
0809a1a3 +0x9b:  mov    %eax,0x4(%esp)
0809a1a7 +0x9f:  mov    0xc(%ebp),%eax
0809a1aa +0xa2:  mov    %eax,(%esp)
0809a1ad +0xa5:  call   080ab8ea <_Z17cast5_ecb_encryptPKhPhP13symmetric_key>  ; cast5_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809a1b2 +0xaa:  mov    0x8(%ebp),%eax
0809a1b5 +0xad:  mov    (%eax),%eax
0809a1b7 +0xaf:  add    $0x24,%eax
0809a1ba +0xb2:  mov    (%eax),%edx
0809a1bc +0xb4:  mov    0x8(%ebp),%eax
0809a1bf +0xb7:  mov    %eax,(%esp)
0809a1c2 +0xba:  call   *%edx
0809a1c4 +0xbc:  add    %eax,0xc(%ebp)
0809a1c7 +0xbf:  addl   $0x1,-0xc(%ebp)
0809a1cb +0xc3:  mov    -0xc(%ebp),%eax
0809a1ce +0xc6:  cmp    -0x10(%ebp),%eax
0809a1d1 +0xc9:  setl   %al
0809a1d4 +0xcc:  test   %al,%al
0809a1d6 +0xce:  jne    0809a199 <+0x91>
0809a1d8 +0xd0:  mov    $0x6fffffff,%eax
0809a1dd +0xd5:  leave
0809a1de +0xd6:  ret
0809a1df +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoCast5::Encrypt @ 0x809a108

/* CNCryptoCast5::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoCast5::Encrypt(CNCryptoCast5 *this,uchar *param_1,int param_2)

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
          cast5_ecb_encrypt(param_1,param_1,psVar1);
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
