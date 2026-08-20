# check_max_booster_gage

`_ZN12CBoosterGage22check_max_booster_gageEm`

`CBoosterGage::check_max_booster_gage(unsigned long)`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dd0da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dd0da  _ZN12CBoosterGage22check_max_booster_gageEm
#           CBoosterGage::check_max_booster_gage(unsigned long)
# range [0x080dd0da, 0x080dd133]
080dd0da +0x00:  push   %ebp
080dd0db +0x01:  mov    %esp,%ebp
080dd0dd +0x03:  push   %ebx
080dd0de +0x04:  sub    $0x24,%esp
080dd0e1 +0x07:  mov    0xc(%ebp),%eax
080dd0e4 +0x0a:  mov    %eax,0x4(%esp)
080dd0e8 +0x0e:  mov    0x8(%ebp),%eax
080dd0eb +0x11:  mov    %eax,(%esp)
080dd0ee +0x14:  call   080dc69c <_ZN12CBoosterGage17get_booster_pointEm>  ; CBoosterGage::get_booster_point(unsigned long)
080dd0f3 +0x19:  mov    %eax,-0xc(%ebp)
080dd0f6 +0x1c:  cmpl   $0x0,-0xc(%ebp)
080dd0fa +0x20:  jne    080dd103 <+0x29>
080dd0fc +0x22:  mov    $0x0,%eax
080dd101 +0x27:  jmp    080dd12d <+0x53>
080dd103 +0x29:  mov    0x8(%ebp),%eax
080dd106 +0x2c:  mov    0x8(%eax),%ebx
080dd109 +0x2f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080dd10e +0x34:  movzbl 0x877c(%eax),%eax
080dd115 +0x3b:  movzbl %al,%eax
080dd118 +0x3e:  cmp    %eax,%ebx
080dd11a +0x40:  setge  %al
080dd11d +0x43:  test   %al,%al
080dd11f +0x45:  je     080dd128 <+0x4e>
080dd121 +0x47:  mov    $0x1,%eax
080dd126 +0x4c:  jmp    080dd12d <+0x53>
080dd128 +0x4e:  mov    $0x0,%eax
080dd12d +0x53:  add    $0x24,%esp
080dd130 +0x56:  pop    %ebx
080dd131 +0x57:  pop    %ebp
080dd132 +0x58:  ret
080dd133 +0x59:  nop
```

## 反编译 C

```c
// CBoosterGage::check_max_booster_gage @ 0x80dd0da

/* CBoosterGage::check_max_booster_gage(unsigned long) */

undefined4 __thiscall CBoosterGage::check_max_booster_gage(CBoosterGage *this,ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = get_booster_point(this,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(this + 8);
    iVar3 = G_CDataManager();
    if (iVar1 < (int)(uint)*(byte *)(iVar3 + 0x877c)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
