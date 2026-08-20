# CheckMoneyLimit

`_ZN13CAccountCargo15CheckMoneyLimitEj`

`CAccountCargo::CheckMoneyLimit(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828a4ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828a4ca  _ZN13CAccountCargo15CheckMoneyLimitEj
#           CAccountCargo::CheckMoneyLimit(unsigned int)
# range [0x0828a4ca, 0x0828a553]
0828a4ca +0x00:  push   %ebp
0828a4cb +0x01:  mov    %esp,%ebp
0828a4cd +0x03:  push   %ebx
0828a4ce +0x04:  sub    $0x24,%esp
0828a4d1 +0x07:  mov    0x8(%ebp),%eax
0828a4d4 +0x0a:  mov    0xd60(%eax),%eax
0828a4da +0x10:  mov    %eax,%ebx
0828a4dc +0x12:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828a4e1 +0x17:  add    $0xa7e0,%eax
0828a4e6 +0x1c:  mov    %ebx,0x4(%esp)
0828a4ea +0x20:  mov    %eax,(%esp)
0828a4ed +0x23:  call   088c80ba <_ZN18AccountCargoScript18GetCurrUpgradeInfoEi>  ; AccountCargoScript::GetCurrUpgradeInfo(int)
0828a4f2 +0x28:  mov    %eax,-0x14(%ebp)
0828a4f5 +0x2b:  cmpl   $0x0,-0x14(%ebp)
0828a4f9 +0x2f:  jne    0828a502 <+0x38>
0828a4fb +0x31:  mov    $0x0,%eax
0828a500 +0x36:  jmp    0828a54d <+0x83>
0828a502 +0x38:  movl   $0x0,-0x10(%ebp)
0828a509 +0x3f:  movl   $0x0,-0xc(%ebp)
0828a510 +0x46:  mov    0x8(%ebp),%eax
0828a513 +0x49:  mov    0xd5c(%eax),%eax
0828a519 +0x4f:  add    0xc(%ebp),%eax
0828a51c +0x52:  mov    $0x0,%edx
0828a521 +0x57:  mov    %eax,-0x10(%ebp)
0828a524 +0x5a:  mov    %edx,-0xc(%ebp)
0828a527 +0x5d:  mov    -0x14(%ebp),%eax
0828a52a +0x60:  mov    0x4(%eax),%eax
0828a52d +0x63:  mov    $0x0,%edx
0828a532 +0x68:  cmp    -0xc(%ebp),%edx
0828a535 +0x6b:  ja     0828a548 <+0x7e>
0828a537 +0x6d:  cmp    -0xc(%ebp),%edx
0828a53a +0x70:  jb     0828a541 <+0x77>
0828a53c +0x72:  cmp    -0x10(%ebp),%eax
0828a53f +0x75:  jae    0828a548 <+0x7e>
0828a541 +0x77:  mov    $0x0,%eax
0828a546 +0x7c:  jmp    0828a54d <+0x83>
0828a548 +0x7e:  mov    $0x1,%eax
0828a54d +0x83:  add    $0x24,%esp
0828a550 +0x86:  pop    %ebx
0828a551 +0x87:  pop    %ebp
0828a552 +0x88:  ret
0828a553 +0x89:  nop
```

## 反编译 C

```c
// CAccountCargo::CheckMoneyLimit @ 0x828a4ca

/* CAccountCargo::CheckMoneyLimit(unsigned int) */

undefined4 __thiscall CAccountCargo::CheckMoneyLimit(CAccountCargo *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = G_CDataManager();
  iVar1 = AccountCargoScript::GetCurrUpgradeInfo(iVar1 + 0xa7e0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(uint *)(iVar1 + 4) < *(int *)(this + 0xd5c) + param_1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
