# Encrypt

`_ZN14CNCryptoKhazad7EncryptEPhi`

`CNCryptoKhazad::Encrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoKhazad` | `0x0809ac50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809ac50  _ZN14CNCryptoKhazad7EncryptEPhi
#           CNCryptoKhazad::Encrypt(unsigned char*, int)
# range [0x0809ac50, 0x0809ad27]
0809ac50 +0x00:  push   %ebp
0809ac51 +0x01:  mov    %esp,%ebp
0809ac53 +0x03:  sub    $0x38,%esp
0809ac56 +0x06:  mov    0x8(%ebp),%eax
0809ac59 +0x09:  mov    0x8(%eax),%eax
0809ac5c +0x0c:  test   %eax,%eax
0809ac5e +0x0e:  jne    0809ac6a <+0x1a>
0809ac60 +0x10:  mov    $0x7000000c,%eax
0809ac65 +0x15:  jmp    0809ad25 <+0xd5>
0809ac6a +0x1a:  mov    0x8(%ebp),%eax
0809ac6d +0x1d:  mov    (%eax),%eax
0809ac6f +0x1f:  add    $0x24,%eax
0809ac72 +0x22:  mov    (%eax),%edx
0809ac74 +0x24:  mov    0x8(%ebp),%eax
0809ac77 +0x27:  mov    %eax,(%esp)
0809ac7a +0x2a:  call   *%edx
0809ac7c +0x2c:  mov    %eax,-0x20(%ebp)
0809ac7f +0x2f:  mov    0x10(%ebp),%edx
0809ac82 +0x32:  mov    %edx,%eax
0809ac84 +0x34:  sar    $0x1f,%edx
0809ac87 +0x37:  idivl  -0x20(%ebp)
0809ac8a +0x3a:  mov    %edx,%eax
0809ac8c +0x3c:  test   %eax,%eax
0809ac8e +0x3e:  setne  %al
0809ac91 +0x41:  test   %al,%al
0809ac93 +0x43:  je     0809ac9f <+0x4f>
0809ac95 +0x45:  mov    $0x70000006,%eax
0809ac9a +0x4a:  jmp    0809ad25 <+0xd5>
0809ac9f +0x4f:  cmpl   $0x0,0x10(%ebp)
0809aca3 +0x53:  jg     0809acac <+0x5c>
0809aca5 +0x55:  mov    $0x7000000a,%eax
0809acaa +0x5a:  jmp    0809ad25 <+0xd5>
0809acac +0x5c:  mov    0x8(%ebp),%eax
0809acaf +0x5f:  mov    0x8(%eax),%eax
0809acb2 +0x62:  mov    %eax,-0x14(%ebp)
0809acb5 +0x65:  mov    0x8(%ebp),%eax
0809acb8 +0x68:  mov    (%eax),%eax
0809acba +0x6a:  add    $0x24,%eax
0809acbd +0x6d:  mov    (%eax),%edx
0809acbf +0x6f:  mov    0x8(%ebp),%eax
0809acc2 +0x72:  mov    %eax,(%esp)
0809acc5 +0x75:  call   *%edx
0809acc7 +0x77:  mov    %eax,-0x1c(%ebp)
0809acca +0x7a:  mov    0x10(%ebp),%eax
0809accd +0x7d:  mov    %eax,%edx
0809accf +0x7f:  sar    $0x1f,%edx
0809acd2 +0x82:  idivl  -0x1c(%ebp)
0809acd5 +0x85:  mov    %eax,-0x10(%ebp)
0809acd8 +0x88:  movl   $0x0,-0xc(%ebp)
0809acdf +0x8f:  jmp    0809ad13 <+0xc3>
0809ace1 +0x91:  mov    -0x14(%ebp),%eax
0809ace4 +0x94:  mov    %eax,0x8(%esp)
0809ace8 +0x98:  mov    0xc(%ebp),%eax
0809aceb +0x9b:  mov    %eax,0x4(%esp)
0809acef +0x9f:  mov    0xc(%ebp),%eax
0809acf2 +0xa2:  mov    %eax,(%esp)
0809acf5 +0xa5:  call   080b2a5b <_Z18khazad_ecb_encryptPKhPhP13symmetric_key>  ; khazad_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809acfa +0xaa:  mov    0x8(%ebp),%eax
0809acfd +0xad:  mov    (%eax),%eax
0809acff +0xaf:  add    $0x24,%eax
0809ad02 +0xb2:  mov    (%eax),%edx
0809ad04 +0xb4:  mov    0x8(%ebp),%eax
0809ad07 +0xb7:  mov    %eax,(%esp)
0809ad0a +0xba:  call   *%edx
0809ad0c +0xbc:  add    %eax,0xc(%ebp)
0809ad0f +0xbf:  addl   $0x1,-0xc(%ebp)
0809ad13 +0xc3:  mov    -0xc(%ebp),%eax
0809ad16 +0xc6:  cmp    -0x10(%ebp),%eax
0809ad19 +0xc9:  setl   %al
0809ad1c +0xcc:  test   %al,%al
0809ad1e +0xce:  jne    0809ace1 <+0x91>
0809ad20 +0xd0:  mov    $0x6fffffff,%eax
0809ad25 +0xd5:  leave
0809ad26 +0xd6:  ret
0809ad27 +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoKhazad::Encrypt @ 0x809ac50

/* CNCryptoKhazad::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoKhazad::Encrypt(CNCryptoKhazad *this,uchar *param_1,int param_2)

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
          khazad_ecb_encrypt(param_1,param_1,psVar1);
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
