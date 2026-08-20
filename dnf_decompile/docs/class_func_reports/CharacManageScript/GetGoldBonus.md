# GetGoldBonus

`_ZN18CharacManageScript12GetGoldBonusEi`

`CharacManageScript::GetGoldBonus(int)`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e0fce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e0fce  _ZN18CharacManageScript12GetGoldBonusEi
#           CharacManageScript::GetGoldBonus(int)
# range [0x088e0fce, 0x088e1043]
088e0fce +0x00:  push   %ebp
088e0fcf +0x01:  mov    %esp,%ebp
088e0fd1 +0x03:  sub    $0x38,%esp
088e0fd4 +0x06:  mov    0x8(%ebp),%eax
088e0fd7 +0x09:  lea    0x30(%eax),%ecx
088e0fda +0x0c:  lea    -0x10(%ebp),%eax
088e0fdd +0x0f:  lea    0xc(%ebp),%edx
088e0fe0 +0x12:  mov    %edx,0x8(%esp)
088e0fe4 +0x16:  mov    %ecx,0x4(%esp)
088e0fe8 +0x1a:  mov    %eax,(%esp)
088e0feb +0x1d:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
088e0ff0 +0x22:  sub    $0x4,%esp
088e0ff3 +0x25:  mov    0x8(%ebp),%eax
088e0ff6 +0x28:  lea    0x30(%eax),%edx
088e0ff9 +0x2b:  lea    -0xc(%ebp),%eax
088e0ffc +0x2e:  mov    %edx,0x4(%esp)
088e1000 +0x32:  mov    %eax,(%esp)
088e1003 +0x35:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
088e1008 +0x3a:  sub    $0x4,%esp
088e100b +0x3d:  lea    -0xc(%ebp),%eax
088e100e +0x40:  mov    %eax,0x4(%esp)
088e1012 +0x44:  lea    -0x10(%ebp),%eax
088e1015 +0x47:  mov    %eax,(%esp)
088e1018 +0x4a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
088e101d +0x4f:  test   %al,%al
088e101f +0x51:  je     088e103f <+0x71>
088e1021 +0x53:  lea    -0x10(%ebp),%eax
088e1024 +0x56:  mov    %eax,(%esp)
088e1027 +0x59:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
088e102c +0x5e:  mov    0x4(%eax),%eax
088e102f +0x61:  mov    %eax,-0x1c(%ebp)
088e1032 +0x64:  fildl  -0x1c(%ebp)
088e1035 +0x67:  flds   ""
088e103b +0x6d:  fdivrp %st,%st(1)
088e103d +0x6f:  jmp    088e1041 <+0x73>
088e103f +0x71:  fldz
088e1041 +0x73:  leave
088e1042 +0x74:  ret
088e1043 +0x75:  nop
```

## 反编译 C

```c
// CharacManageScript::GetGoldBonus @ 0x88e0fce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CharacManageScript::GetGoldBonus(int) */

longdouble CharacManageScript::GetGoldBonus(int param_1)

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
