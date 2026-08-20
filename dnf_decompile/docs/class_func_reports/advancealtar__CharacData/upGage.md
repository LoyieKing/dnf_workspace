# upGage

`_ZN12advancealtar10CharacData6upGageEv`

`advancealtar::CharacData::upGage()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacData` | `0x0812d0b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d0b6  _ZN12advancealtar10CharacData6upGageEv
#           advancealtar::CharacData::upGage()
# range [0x0812d0b6, 0x0812d175]
0812d0b6 +0x00:  push   %ebp
0812d0b7 +0x01:  mov    %esp,%ebp
0812d0b9 +0x03:  sub    $0x38,%esp
0812d0bc +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0812d0c1 +0x0b:  add    $0x6364,%eax
0812d0c6 +0x10:  mov    %eax,-0x18(%ebp)
0812d0c9 +0x13:  mov    0x8(%ebp),%eax
0812d0cc +0x16:  mov    0x8(%eax),%eax
0812d0cf +0x19:  mov    %eax,%edx
0812d0d1 +0x1b:  mov    -0x18(%ebp),%eax
0812d0d4 +0x1e:  add    $0x4,%edx
0812d0d7 +0x21:  mov    0xc(%eax,%edx,4),%edx
0812d0db +0x25:  mov    -0x18(%ebp),%eax
0812d0de +0x28:  mov    0x18(%eax),%eax
0812d0e1 +0x2b:  mov    (%eax),%eax
0812d0e3 +0x2d:  imul   %edx,%eax
0812d0e6 +0x30:  mov    %eax,-0x14(%ebp)
0812d0e9 +0x33:  mov    0x8(%ebp),%eax
0812d0ec +0x36:  mov    0xc(%eax),%eax
0812d0ef +0x39:  cmp    -0x14(%ebp),%eax
0812d0f2 +0x3c:  jl     0812d10a <+0x54>
0812d0f4 +0x3e:  mov    0x8(%ebp),%eax
0812d0f7 +0x41:  mov    -0x14(%ebp),%edx
0812d0fa +0x44:  mov    %edx,0xc(%eax)
0812d0fd +0x47:  mov    0x8(%ebp),%eax
0812d100 +0x4a:  mov    %eax,(%esp)
0812d103 +0x4d:  call   0812d372 <_ZN12advancealtar10CharacData17sendTestCheckGageEv>  ; advancealtar::CharacData::sendTestCheckGage()
0812d108 +0x52:  jmp    0812d173 <+0xbd>
0812d10a +0x54:  mov    0x8(%ebp),%eax
0812d10d +0x57:  mov    0x8(%eax),%eax
0812d110 +0x5a:  mov    %eax,%edx
0812d112 +0x5c:  mov    -0x18(%ebp),%eax
0812d115 +0x5f:  mov    0x8(%eax,%edx,4),%eax
0812d119 +0x63:  mov    %eax,-0x1c(%ebp)
0812d11c +0x66:  fildl  -0x1c(%ebp)
0812d11f +0x69:  mov    -0x18(%ebp),%eax
0812d122 +0x6c:  mov    0x18(%eax),%eax
0812d125 +0x6f:  mov    (%eax),%eax
0812d127 +0x71:  mov    %eax,-0x1c(%ebp)
0812d12a +0x74:  fildl  -0x1c(%ebp)
0812d12d +0x77:  fdivrp %st,%st(1)
0812d12f +0x79:  fstps  -0x10(%ebp)
0812d132 +0x7c:  mov    -0x18(%ebp),%eax
0812d135 +0x7f:  mov    0x8(%eax),%eax
0812d138 +0x82:  mov    %eax,-0x1c(%ebp)
0812d13b +0x85:  fildl  -0x1c(%ebp)
0812d13e +0x88:  fmuls  -0x10(%ebp)
0812d141 +0x8b:  fnstcw -0x1e(%ebp)
0812d144 +0x8e:  movzwl -0x1e(%ebp),%eax
0812d148 +0x92:  mov    $0xc,%ah
0812d14a +0x94:  mov    %ax,-0x20(%ebp)
0812d14e +0x98:  fldcw  -0x20(%ebp)
0812d151 +0x9b:  fistpl -0xc(%ebp)
0812d154 +0x9e:  fldcw  -0x1e(%ebp)
0812d157 +0xa1:  mov    0x8(%ebp),%eax
0812d15a +0xa4:  mov    0xc(%eax),%eax
0812d15d +0xa7:  mov    %eax,%edx
0812d15f +0xa9:  add    -0xc(%ebp),%edx
0812d162 +0xac:  mov    0x8(%ebp),%eax
0812d165 +0xaf:  mov    %edx,0xc(%eax)
0812d168 +0xb2:  mov    0x8(%ebp),%eax
0812d16b +0xb5:  mov    %eax,(%esp)
0812d16e +0xb8:  call   0812d372 <_ZN12advancealtar10CharacData17sendTestCheckGageEv>  ; advancealtar::CharacData::sendTestCheckGage()
0812d173 +0xbd:  leave
0812d174 +0xbe:  ret
0812d175 +0xbf:  nop
```

## 反编译 C

```c
// advancealtar::CharacData::upGage @ 0x812d0b6

/* advancealtar::CharacData::upGage() */

void __thiscall advancealtar::CharacData::upGage(CharacData *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = G_CDataManager();
  iVar2 = **(int **)(iVar1 + 0x637c) * *(int *)(iVar1 + 0x6370 + (*(int *)(this + 8) + 4) * 4);
  if (*(int *)(this + 0xc) < iVar2) {
    *(int *)(this + 0xc) =
         *(int *)(this + 0xc) +
         (int)ROUND((float)*(int *)(iVar1 + 0x636c) *
                    ((float)*(int *)(iVar1 + 0x636c + *(int *)(this + 8) * 4) /
                    (float)**(int **)(iVar1 + 0x637c)));
    sendTestCheckGage();
  }
  else {
    *(int *)(this + 0xc) = iVar2;
    sendTestCheckGage();
  }
  return;
}
```
