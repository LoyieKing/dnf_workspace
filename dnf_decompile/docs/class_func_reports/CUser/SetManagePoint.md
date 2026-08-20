# SetManagePoint

`_ZN5CUser14SetManagePointEi`

`CUser::SetManagePoint(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868fe72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868fe72  _ZN5CUser14SetManagePointEi
#           CUser::SetManagePoint(int)
# range [0x0868fe72, 0x0868fec7]
0868fe72 +0x00:  push   %ebp
0868fe73 +0x01:  mov    %esp,%ebp
0868fe75 +0x03:  push   %ebx
0868fe76 +0x04:  sub    $0x24,%esp
0868fe79 +0x07:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868fe7e +0x0c:  mov    0x6394(%eax),%eax
0868fe84 +0x12:  mov    0x48(%eax),%eax
0868fe87 +0x15:  mov    %eax,-0x10(%ebp)
0868fe8a +0x18:  mov    -0x10(%ebp),%ebx
0868fe8d +0x1b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868fe92 +0x20:  mov    0x6394(%eax),%eax
0868fe98 +0x26:  mov    %ebx,0x4(%esp)
0868fe9c +0x2a:  mov    %eax,(%esp)
0868fe9f +0x2d:  call   088e1114 <_ZN18CharacManageScript22GetLevelUpRequirePointEj>  ; CharacManageScript::GetLevelUpRequirePoint(unsigned int)
0868fea4 +0x32:  mov    %eax,-0xc(%ebp)
0868fea7 +0x35:  mov    0xc(%ebp),%eax
0868feaa +0x38:  cmp    -0xc(%ebp),%eax
0868fead +0x3b:  jle    0868feb5 <+0x43>
0868feaf +0x3d:  mov    -0xc(%ebp),%eax
0868feb2 +0x40:  mov    %eax,0xc(%ebp)
0868feb5 +0x43:  mov    0x8(%ebp),%eax
0868feb8 +0x46:  mov    0xc(%ebp),%edx
0868febb +0x49:  mov    %edx,0x8ebd4(%eax)
0868fec1 +0x4f:  add    $0x24,%esp
0868fec4 +0x52:  pop    %ebx
0868fec5 +0x53:  pop    %ebp
0868fec6 +0x54:  ret
0868fec7 +0x55:  nop
```

## 反编译 C

```c
// CUser::SetManagePoint @ 0x868fe72

/* CUser::SetManagePoint(int) */

void __thiscall CUser::SetManagePoint(CUser *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = G_CDataManager();
  uVar1 = *(uint *)(*(int *)(iVar2 + 0x6394) + 0x48);
  iVar2 = G_CDataManager();
  iVar2 = CharacManageScript::GetLevelUpRequirePoint(*(CharacManageScript **)(iVar2 + 0x6394),uVar1)
  ;
  if (iVar2 < param_1) {
    param_1 = iVar2;
  }
  *(int *)(this + 0x8ebd4) = param_1;
  return;
}
```
