# GetExpBonus

`_ZN18CharacManageScript11GetExpBonusEi`

`CharacManageScript::GetExpBonus(int)`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e0f58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e0f58  _ZN18CharacManageScript11GetExpBonusEi
#           CharacManageScript::GetExpBonus(int)
# range [0x088e0f58, 0x088e0fcd]
088e0f58 +0x00:  push   %ebp
088e0f59 +0x01:  mov    %esp,%ebp
088e0f5b +0x03:  sub    $0x38,%esp
088e0f5e +0x06:  mov    0x8(%ebp),%eax
088e0f61 +0x09:  lea    0x18(%eax),%ecx
088e0f64 +0x0c:  lea    -0x10(%ebp),%eax
088e0f67 +0x0f:  lea    0xc(%ebp),%edx
088e0f6a +0x12:  mov    %edx,0x8(%esp)
088e0f6e +0x16:  mov    %ecx,0x4(%esp)
088e0f72 +0x1a:  mov    %eax,(%esp)
088e0f75 +0x1d:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
088e0f7a +0x22:  sub    $0x4,%esp
088e0f7d +0x25:  mov    0x8(%ebp),%eax
088e0f80 +0x28:  lea    0x18(%eax),%edx
088e0f83 +0x2b:  lea    -0xc(%ebp),%eax
088e0f86 +0x2e:  mov    %edx,0x4(%esp)
088e0f8a +0x32:  mov    %eax,(%esp)
088e0f8d +0x35:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
088e0f92 +0x3a:  sub    $0x4,%esp
088e0f95 +0x3d:  lea    -0xc(%ebp),%eax
088e0f98 +0x40:  mov    %eax,0x4(%esp)
088e0f9c +0x44:  lea    -0x10(%ebp),%eax
088e0f9f +0x47:  mov    %eax,(%esp)
088e0fa2 +0x4a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
088e0fa7 +0x4f:  test   %al,%al
088e0fa9 +0x51:  je     088e0fc9 <+0x71>
088e0fab +0x53:  lea    -0x10(%ebp),%eax
088e0fae +0x56:  mov    %eax,(%esp)
088e0fb1 +0x59:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
088e0fb6 +0x5e:  mov    0x4(%eax),%eax
088e0fb9 +0x61:  mov    %eax,-0x1c(%ebp)
088e0fbc +0x64:  fildl  -0x1c(%ebp)
088e0fbf +0x67:  flds   ""
088e0fc5 +0x6d:  fdivrp %st,%st(1)
088e0fc7 +0x6f:  jmp    088e0fcb <+0x73>
088e0fc9 +0x71:  fldz
088e0fcb +0x73:  leave
088e0fcc +0x74:  ret
088e0fcd +0x75:  nop
```

## 反编译 C

```c
// CharacManageScript::GetExpBonus @ 0x88e0f58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CharacManageScript::GetExpBonus(int) */

longdouble CharacManageScript::GetExpBonus(int param_1)

{
  char cVar1;
  int iVar2;
  longdouble lVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    lVar3 = (longdouble)0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    lVar3 = (longdouble)*(int *)(iVar2 + 4) / (longdouble)_DAT_08e0c554;
  }
  return lVar3;
}
```
