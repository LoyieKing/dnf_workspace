# Decrypt

`_ZN14CNCryptoKasumi7DecryptEPhi`

`CNCryptoKasumi::Decrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoKasumi` | `0x0809a784` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a784  _ZN14CNCryptoKasumi7DecryptEPhi
#           CNCryptoKasumi::Decrypt(unsigned char*, int)
# range [0x0809a784, 0x0809a85b]
0809a784 +0x00:  push   %ebp
0809a785 +0x01:  mov    %esp,%ebp
0809a787 +0x03:  sub    $0x38,%esp
0809a78a +0x06:  mov    0x8(%ebp),%eax
0809a78d +0x09:  mov    0x8(%eax),%eax
0809a790 +0x0c:  test   %eax,%eax
0809a792 +0x0e:  jne    0809a79e <+0x1a>
0809a794 +0x10:  mov    $0x7000000c,%eax
0809a799 +0x15:  jmp    0809a859 <+0xd5>
0809a79e +0x1a:  mov    0x8(%ebp),%eax
0809a7a1 +0x1d:  mov    (%eax),%eax
0809a7a3 +0x1f:  add    $0x24,%eax
0809a7a6 +0x22:  mov    (%eax),%edx
0809a7a8 +0x24:  mov    0x8(%ebp),%eax
0809a7ab +0x27:  mov    %eax,(%esp)
0809a7ae +0x2a:  call   *%edx
0809a7b0 +0x2c:  mov    %eax,-0x20(%ebp)
0809a7b3 +0x2f:  mov    0x10(%ebp),%edx
0809a7b6 +0x32:  mov    %edx,%eax
0809a7b8 +0x34:  sar    $0x1f,%edx
0809a7bb +0x37:  idivl  -0x20(%ebp)
0809a7be +0x3a:  mov    %edx,%eax
0809a7c0 +0x3c:  test   %eax,%eax
0809a7c2 +0x3e:  setne  %al
0809a7c5 +0x41:  test   %al,%al
0809a7c7 +0x43:  je     0809a7d3 <+0x4f>
0809a7c9 +0x45:  mov    $0x70000006,%eax
0809a7ce +0x4a:  jmp    0809a859 <+0xd5>
0809a7d3 +0x4f:  cmpl   $0x0,0x10(%ebp)
0809a7d7 +0x53:  jg     0809a7e0 <+0x5c>
0809a7d9 +0x55:  mov    $0x7000000a,%eax
0809a7de +0x5a:  jmp    0809a859 <+0xd5>
0809a7e0 +0x5c:  mov    0x8(%ebp),%eax
0809a7e3 +0x5f:  mov    0x8(%eax),%eax
0809a7e6 +0x62:  mov    %eax,-0x14(%ebp)
0809a7e9 +0x65:  mov    0x8(%ebp),%eax
0809a7ec +0x68:  mov    (%eax),%eax
0809a7ee +0x6a:  add    $0x24,%eax
0809a7f1 +0x6d:  mov    (%eax),%edx
0809a7f3 +0x6f:  mov    0x8(%ebp),%eax
0809a7f6 +0x72:  mov    %eax,(%esp)
0809a7f9 +0x75:  call   *%edx
0809a7fb +0x77:  mov    %eax,-0x1c(%ebp)
0809a7fe +0x7a:  mov    0x10(%ebp),%eax
0809a801 +0x7d:  mov    %eax,%edx
0809a803 +0x7f:  sar    $0x1f,%edx
0809a806 +0x82:  idivl  -0x1c(%ebp)
0809a809 +0x85:  mov    %eax,-0x10(%ebp)
0809a80c +0x88:  movl   $0x0,-0xc(%ebp)
0809a813 +0x8f:  jmp    0809a847 <+0xc3>
0809a815 +0x91:  mov    -0x14(%ebp),%eax
0809a818 +0x94:  mov    %eax,0x8(%esp)
0809a81c +0x98:  mov    0xc(%ebp),%eax
0809a81f +0x9b:  mov    %eax,0x4(%esp)
0809a823 +0x9f:  mov    0xc(%ebp),%eax
0809a826 +0xa2:  mov    %eax,(%esp)
0809a829 +0xa5:  call   080b188c <_Z18kasumi_ecb_decryptPKhPhP13symmetric_key>  ; kasumi_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809a82e +0xaa:  mov    0x8(%ebp),%eax
0809a831 +0xad:  mov    (%eax),%eax
0809a833 +0xaf:  add    $0x24,%eax
0809a836 +0xb2:  mov    (%eax),%edx
0809a838 +0xb4:  mov    0x8(%ebp),%eax
0809a83b +0xb7:  mov    %eax,(%esp)
0809a83e +0xba:  call   *%edx
0809a840 +0xbc:  add    %eax,0xc(%ebp)
0809a843 +0xbf:  addl   $0x1,-0xc(%ebp)
0809a847 +0xc3:  mov    -0xc(%ebp),%eax
0809a84a +0xc6:  cmp    -0x10(%ebp),%eax
0809a84d +0xc9:  setl   %al
0809a850 +0xcc:  test   %al,%al
0809a852 +0xce:  jne    0809a815 <+0x91>
0809a854 +0xd0:  mov    $0x6fffffff,%eax
0809a859 +0xd5:  leave
0809a85a +0xd6:  ret
0809a85b +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoKasumi::Decrypt @ 0x809a784

/* CNCryptoKasumi::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoKasumi::Decrypt(CNCryptoKasumi *this,uchar *param_1,int param_2)

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
          kasumi_ecb_decrypt(param_1,param_1,psVar1);
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
