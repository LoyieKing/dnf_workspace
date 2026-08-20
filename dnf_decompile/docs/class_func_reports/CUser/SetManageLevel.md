# SetManageLevel

`_ZN5CUser14SetManageLevelEi`

`CUser::SetManageLevel(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868fe2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868fe2c  _ZN5CUser14SetManageLevelEi
#           CUser::SetManageLevel(int)
# range [0x0868fe2c, 0x0868fe71]
0868fe2c +0x00:  push   %ebp
0868fe2d +0x01:  mov    %esp,%ebp
0868fe2f +0x03:  sub    $0x8,%esp
0868fe32 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868fe37 +0x0b:  mov    0x6394(%eax),%eax
0868fe3d +0x11:  mov    0x48(%eax),%eax
0868fe40 +0x14:  cmp    0xc(%ebp),%eax
0868fe43 +0x17:  setl   %al
0868fe46 +0x1a:  test   %al,%al
0868fe48 +0x1c:  je     0868fe63 <+0x37>
0868fe4a +0x1e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868fe4f +0x23:  mov    0x6394(%eax),%eax
0868fe55 +0x29:  mov    0x48(%eax),%edx
0868fe58 +0x2c:  mov    0x8(%ebp),%eax
0868fe5b +0x2f:  mov    %edx,0x8ebd0(%eax)
0868fe61 +0x35:  jmp    0868fe6f <+0x43>
0868fe63 +0x37:  mov    0x8(%ebp),%eax
0868fe66 +0x3a:  mov    0xc(%ebp),%edx
0868fe69 +0x3d:  mov    %edx,0x8ebd0(%eax)
0868fe6f +0x43:  leave
0868fe70 +0x44:  ret
0868fe71 +0x45:  nop
```

## 反编译 C

```c
// CUser::SetManageLevel @ 0x868fe2c

/* CUser::SetManageLevel(int) */

void __thiscall CUser::SetManageLevel(CUser *this,int param_1)

{
  int iVar1;
  
  iVar1 = G_CDataManager();
  if (*(int *)(*(int *)(iVar1 + 0x6394) + 0x48) < param_1) {
    iVar1 = G_CDataManager();
    *(undefined4 *)(this + 0x8ebd0) = *(undefined4 *)(*(int *)(iVar1 + 0x6394) + 0x48);
  }
  else {
    *(int *)(this + 0x8ebd0) = param_1;
  }
  return;
}
```
