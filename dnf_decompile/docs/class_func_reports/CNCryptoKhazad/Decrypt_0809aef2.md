# Decrypt

`_ZN14CNCryptoKhazad7DecryptEPKhiPhi`

`CNCryptoKhazad::Decrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoKhazad` | `0x0809aef2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809aef2  _ZN14CNCryptoKhazad7DecryptEPKhiPhi
#           CNCryptoKhazad::Decrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809aef2, 0x0809afe3]
0809aef2 +0x00:  push   %ebp
0809aef3 +0x01:  mov    %esp,%ebp
0809aef5 +0x03:  sub    $0x38,%esp
0809aef8 +0x06:  mov    0x8(%ebp),%eax
0809aefb +0x09:  mov    0x8(%eax),%eax
0809aefe +0x0c:  test   %eax,%eax
0809af00 +0x0e:  jne    0809af0c <+0x1a>
0809af02 +0x10:  mov    $0x7000000c,%eax
0809af07 +0x15:  jmp    0809afe1 <+0xef>
0809af0c +0x1a:  mov    0x8(%ebp),%eax
0809af0f +0x1d:  mov    (%eax),%eax
0809af11 +0x1f:  add    $0x24,%eax
0809af14 +0x22:  mov    (%eax),%edx
0809af16 +0x24:  mov    0x8(%ebp),%eax
0809af19 +0x27:  mov    %eax,(%esp)
0809af1c +0x2a:  call   *%edx
0809af1e +0x2c:  mov    %eax,-0x20(%ebp)
0809af21 +0x2f:  mov    0x10(%ebp),%edx
0809af24 +0x32:  mov    %edx,%eax
0809af26 +0x34:  sar    $0x1f,%edx
0809af29 +0x37:  idivl  -0x20(%ebp)
0809af2c +0x3a:  mov    %edx,%eax
0809af2e +0x3c:  test   %eax,%eax
0809af30 +0x3e:  setne  %al
0809af33 +0x41:  test   %al,%al
0809af35 +0x43:  je     0809af41 <+0x4f>
0809af37 +0x45:  mov    $0x7000000a,%eax
0809af3c +0x4a:  jmp    0809afe1 <+0xef>
0809af41 +0x4f:  mov    0x10(%ebp),%eax
0809af44 +0x52:  cmp    0x18(%ebp),%eax
0809af47 +0x55:  jle    0809af53 <+0x61>
0809af49 +0x57:  mov    $0x7000000a,%eax
0809af4e +0x5c:  jmp    0809afe1 <+0xef>
0809af53 +0x61:  mov    0x8(%ebp),%eax
0809af56 +0x64:  mov    0x8(%eax),%eax
0809af59 +0x67:  mov    %eax,-0x14(%ebp)
0809af5c +0x6a:  mov    0x8(%ebp),%eax
0809af5f +0x6d:  mov    (%eax),%eax
0809af61 +0x6f:  add    $0x24,%eax
0809af64 +0x72:  mov    (%eax),%edx
0809af66 +0x74:  mov    0x8(%ebp),%eax
0809af69 +0x77:  mov    %eax,(%esp)
0809af6c +0x7a:  call   *%edx
0809af6e +0x7c:  mov    %eax,-0x1c(%ebp)
0809af71 +0x7f:  mov    0x10(%ebp),%eax
0809af74 +0x82:  mov    %eax,%edx
0809af76 +0x84:  sar    $0x1f,%edx
0809af79 +0x87:  idivl  -0x1c(%ebp)
0809af7c +0x8a:  mov    %eax,-0x10(%ebp)
0809af7f +0x8d:  movl   $0x0,-0xc(%ebp)
0809af86 +0x94:  jmp    0809afcf <+0xdd>
0809af88 +0x96:  mov    -0x14(%ebp),%eax
0809af8b +0x99:  mov    %eax,0x8(%esp)
0809af8f +0x9d:  mov    0x14(%ebp),%eax
0809af92 +0xa0:  mov    %eax,0x4(%esp)
0809af96 +0xa4:  mov    0xc(%ebp),%eax
0809af99 +0xa7:  mov    %eax,(%esp)
0809af9c +0xaa:  call   080b2a81 <_Z18khazad_ecb_decryptPKhPhP13symmetric_key>  ; khazad_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809afa1 +0xaf:  mov    0x8(%ebp),%eax
0809afa4 +0xb2:  mov    (%eax),%eax
0809afa6 +0xb4:  add    $0x24,%eax
0809afa9 +0xb7:  mov    (%eax),%edx
0809afab +0xb9:  mov    0x8(%ebp),%eax
0809afae +0xbc:  mov    %eax,(%esp)
0809afb1 +0xbf:  call   *%edx
0809afb3 +0xc1:  add    %eax,0xc(%ebp)
0809afb6 +0xc4:  mov    0x8(%ebp),%eax
0809afb9 +0xc7:  mov    (%eax),%eax
0809afbb +0xc9:  add    $0x24,%eax
0809afbe +0xcc:  mov    (%eax),%edx
0809afc0 +0xce:  mov    0x8(%ebp),%eax
0809afc3 +0xd1:  mov    %eax,(%esp)
0809afc6 +0xd4:  call   *%edx
0809afc8 +0xd6:  add    %eax,0x14(%ebp)
0809afcb +0xd9:  addl   $0x1,-0xc(%ebp)
0809afcf +0xdd:  mov    -0xc(%ebp),%eax
0809afd2 +0xe0:  cmp    -0x10(%ebp),%eax
0809afd5 +0xe3:  setl   %al
0809afd8 +0xe6:  test   %al,%al
0809afda +0xe8:  jne    0809af88 <+0x96>
0809afdc +0xea:  mov    $0x6fffffff,%eax
0809afe1 +0xef:  leave
0809afe2 +0xf0:  ret
0809afe3 +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoKhazad::Decrypt @ 0x809aef2

/* CNCryptoKhazad::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoKhazad::Decrypt(CNCryptoKhazad *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          khazad_ecb_decrypt(param_1,param_3,psVar1);
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
