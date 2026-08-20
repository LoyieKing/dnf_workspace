# GetGoldBonus

`_ZN18CharacManageScript12GetGoldBonusEiPi`

`CharacManageScript::GetGoldBonus(int, int*)`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e10ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e10ac  _ZN18CharacManageScript12GetGoldBonusEiPi
#           CharacManageScript::GetGoldBonus(int, int*)
# range [0x088e10ac, 0x088e1113]
088e10ac +0x00:  push   %ebp
088e10ad +0x01:  mov    %esp,%ebp
088e10af +0x03:  sub    $0x28,%esp
088e10b2 +0x06:  mov    0x8(%ebp),%eax
088e10b5 +0x09:  lea    0x30(%eax),%ecx
088e10b8 +0x0c:  lea    -0x10(%ebp),%eax
088e10bb +0x0f:  lea    0xc(%ebp),%edx
088e10be +0x12:  mov    %edx,0x8(%esp)
088e10c2 +0x16:  mov    %ecx,0x4(%esp)
088e10c6 +0x1a:  mov    %eax,(%esp)
088e10c9 +0x1d:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
088e10ce +0x22:  sub    $0x4,%esp
088e10d1 +0x25:  mov    0x8(%ebp),%eax
088e10d4 +0x28:  lea    0x30(%eax),%edx
088e10d7 +0x2b:  lea    -0xc(%ebp),%eax
088e10da +0x2e:  mov    %edx,0x4(%esp)
088e10de +0x32:  mov    %eax,(%esp)
088e10e1 +0x35:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
088e10e6 +0x3a:  sub    $0x4,%esp
088e10e9 +0x3d:  lea    -0xc(%ebp),%eax
088e10ec +0x40:  mov    %eax,0x4(%esp)
088e10f0 +0x44:  lea    -0x10(%ebp),%eax
088e10f3 +0x47:  mov    %eax,(%esp)
088e10f6 +0x4a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
088e10fb +0x4f:  test   %al,%al
088e10fd +0x51:  je     088e1112 <+0x66>
088e10ff +0x53:  lea    -0x10(%ebp),%eax
088e1102 +0x56:  mov    %eax,(%esp)
088e1105 +0x59:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
088e110a +0x5e:  mov    0x4(%eax),%edx
088e110d +0x61:  mov    0x10(%ebp),%eax
088e1110 +0x64:  mov    %edx,(%eax)
088e1112 +0x66:  leave
088e1113 +0x67:  ret
```

## 反编译 C

```c
// CharacManageScript::GetGoldBonus @ 0x88e10ac

/* CharacManageScript::GetGoldBonus(int, int*) */

void __thiscall CharacManageScript::GetGoldBonus(CharacManageScript *this,int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    *param_2 = *(int *)(iVar2 + 4);
  }
  return;
}
```
