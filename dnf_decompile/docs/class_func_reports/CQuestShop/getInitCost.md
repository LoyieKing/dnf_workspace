# getInitCost

`_ZN10CQuestShop11getInitCostEi`

`CQuestShop::getInitCost(int)`

| 类 | 地址 |
|---|---|
| `CQuestShop` | `0x085ef1ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ef1ba  _ZN10CQuestShop11getInitCostEi
#           CQuestShop::getInitCost(int)
# range [0x085ef1ba, 0x085ef213]
085ef1ba +0x00:  push   %ebp
085ef1bb +0x01:  mov    %esp,%ebp
085ef1bd +0x03:  sub    $0x18,%esp
085ef1c0 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085ef1c5 +0x0b:  mov    0x63b4(%eax),%eax
085ef1cb +0x11:  mov    %eax,-0x18(%ebp)
085ef1ce +0x14:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085ef1d3 +0x19:  mov    0x63b8(%eax),%eax
085ef1d9 +0x1f:  mov    %eax,-0x14(%ebp)
085ef1dc +0x22:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085ef1e1 +0x27:  mov    0x63bc(%eax),%eax
085ef1e7 +0x2d:  mov    %eax,-0x10(%ebp)
085ef1ea +0x30:  cmpl   $0x0,0xc(%ebp)
085ef1ee +0x34:  jne    085ef1f5 <+0x3b>
085ef1f0 +0x36:  mov    -0x18(%ebp),%eax
085ef1f3 +0x39:  jmp    085ef212 <+0x58>
085ef1f5 +0x3b:  mov    0xc(%ebp),%eax
085ef1f8 +0x3e:  imul   -0x14(%ebp),%eax
085ef1fc +0x42:  add    -0x18(%ebp),%eax
085ef1ff +0x45:  mov    %eax,-0xc(%ebp)
085ef202 +0x48:  mov    -0xc(%ebp),%eax
085ef205 +0x4b:  cmp    -0x10(%ebp),%eax
085ef208 +0x4e:  jl     085ef20f <+0x55>
085ef20a +0x50:  mov    -0x10(%ebp),%eax
085ef20d +0x53:  jmp    085ef212 <+0x58>
085ef20f +0x55:  mov    -0xc(%ebp),%eax
085ef212 +0x58:  leave
085ef213 +0x59:  ret
```

## 反编译 C

```c
// CQuestShop::getInitCost @ 0x85ef1ba

/* CQuestShop::getInitCost(int) */

int __thiscall CQuestShop::getInitCost(CQuestShop *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = G_CDataManager();
  iVar1 = *(int *)(iVar1 + 0x63b4);
  iVar2 = G_CDataManager();
  iVar2 = *(int *)(iVar2 + 0x63b8);
  iVar3 = G_CDataManager();
  if ((param_1 != 0) && (iVar1 = param_1 * iVar2 + iVar1, *(int *)(iVar3 + 0x63bc) <= iVar1)) {
    iVar1 = *(int *)(iVar3 + 0x63bc);
  }
  return iVar1;
}
```
