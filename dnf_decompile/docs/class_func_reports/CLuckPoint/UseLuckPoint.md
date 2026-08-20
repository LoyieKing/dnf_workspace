# UseLuckPoint

`_ZN10CLuckPoint12UseLuckPointEP5CUseriii`

`CLuckPoint::UseLuckPoint(CUser*, int, int, int)`

| 类 | 地址 |
|---|---|
| `CLuckPoint` | `0x08550a84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08550a84  _ZN10CLuckPoint12UseLuckPointEP5CUseriii
#           CLuckPoint::UseLuckPoint(CUser*, int, int, int)
# range [0x08550a84, 0x08550b13]
08550a84 +0x00:  push   %ebp
08550a85 +0x01:  mov    %esp,%ebp
08550a87 +0x03:  push   %esi
08550a88 +0x04:  push   %ebx
08550a89 +0x05:  sub    $0x20,%esp
08550a8c +0x08:  cmpl   $0x0,0x8(%ebp)
08550a90 +0x0c:  jne    08550a99 <+0x15>
08550a92 +0x0e:  mov    $0x0,%eax
08550a97 +0x13:  jmp    08550b0d <+0x89>
08550a99 +0x15:  cmpl   $0x1,0xc(%ebp)
08550a9d +0x19:  je     08550aa6 <+0x22>
08550a9f +0x1b:  mov    $0x0,%eax
08550aa4 +0x20:  jmp    08550b0d <+0x89>
08550aa6 +0x22:  cmpl   $0x2,0x10(%ebp)
08550aaa +0x26:  je     08550ab3 <+0x2f>
08550aac +0x28:  mov    $0x0,%eax
08550ab1 +0x2d:  jmp    08550b0d <+0x89>
08550ab3 +0x2f:  mov    0x8(%ebp),%eax
08550ab6 +0x32:  mov    %eax,(%esp)
08550ab9 +0x35:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08550abe +0x3a:  mov    0x14(%ebp),%edx
08550ac1 +0x3d:  sub    %eax,%edx
08550ac3 +0x3f:  mov    %edx,%eax
08550ac5 +0x41:  sar    $0x1f,%eax
08550ac8 +0x44:  mov    %eax,%ebx
08550aca +0x46:  xor    %edx,%ebx
08550acc +0x48:  sub    %eax,%ebx
08550ace +0x4a:  mov    0x8(%ebp),%eax
08550ad1 +0x4d:  mov    %eax,(%esp)
08550ad4 +0x50:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08550ad9 +0x55:  mov    %eax,%esi
08550adb +0x57:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08550ae0 +0x5c:  add    $0x68,%eax
08550ae3 +0x5f:  mov    %ebx,0x8(%esp)
08550ae7 +0x63:  mov    %esi,0x4(%esp)
08550aeb +0x67:  mov    %eax,(%esp)
08550aee +0x6a:  call   08a8c4fe <_ZN21ServerParameterScript25getLuckPointDeductionRateEii>  ; ServerParameterScript::getLuckPointDeductionRate(int, int)
08550af3 +0x6f:  mov    %eax,-0xc(%ebp)
08550af6 +0x72:  mov    0x8(%ebp),%eax
08550af9 +0x75:  mov    -0xc(%ebp),%edx
08550afc +0x78:  mov    %edx,0x4(%esp)
08550b00 +0x7c:  mov    %eax,(%esp)
08550b03 +0x7f:  call   0855100a <_GLOBAL__I__ZN10CLuckPointC2Ev+0x5d>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0x5d
08550b08 +0x84:  mov    $0x1,%eax
08550b0d +0x89:  add    $0x20,%esp
08550b10 +0x8c:  pop    %ebx
08550b11 +0x8d:  pop    %esi
08550b12 +0x8e:  pop    %ebp
08550b13 +0x8f:  ret
```

## 反编译 C

```c
// CLuckPoint::UseLuckPoint @ 0x8550a84

/* CLuckPoint::UseLuckPoint(CUser*, int, int, int) */

undefined4 CLuckPoint::UseLuckPoint(CUser *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else if (param_2 == 1) {
    if (param_3 == 2) {
      iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      uVar3 = param_4 - iVar2 >> 0x1f;
      iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      iVar5 = G_CDataManager();
      iVar2 = ServerParameterScript::getLuckPointDeductionRate
                        ((ServerParameterScript *)(iVar5 + 0x68),iVar4,
                         (uVar3 ^ param_4 - iVar2) - uVar3);
      CUserCharacInfo::DecCurCharacLuckPoint((CUserCharacInfo *)param_1,iVar2);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
