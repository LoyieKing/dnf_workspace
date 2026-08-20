# getAvatarIndex

`_ZN12TutorialData14getAvatarIndexE18ENUM_EQUIPMENTTYPE`

`TutorialData::getAvatarIndex(ENUM_EQUIPMENTTYPE)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab874e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab874e  _ZN12TutorialData14getAvatarIndexE18ENUM_EQUIPMENTTYPE
#           TutorialData::getAvatarIndex(ENUM_EQUIPMENTTYPE)
# range [0x08ab874e, 0x08ab87bd]
08ab874e +0x00:  push   %ebp
08ab874f +0x01:  mov    %esp,%ebp
08ab8751 +0x03:  sub    $0x28,%esp
08ab8754 +0x06:  mov    0xc(%ebp),%eax
08ab8757 +0x09:  mov    %eax,-0x10(%ebp)
08ab875a +0x0c:  mov    0x8(%ebp),%eax
08ab875d +0x0f:  lea    0x1c(%eax),%ecx
08ab8760 +0x12:  lea    -0x14(%ebp),%eax
08ab8763 +0x15:  lea    -0x10(%ebp),%edx
08ab8766 +0x18:  mov    %edx,0x8(%esp)
08ab876a +0x1c:  mov    %ecx,0x4(%esp)
08ab876e +0x20:  mov    %eax,(%esp)
08ab8771 +0x23:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08ab8776 +0x28:  sub    $0x4,%esp
08ab8779 +0x2b:  mov    0x8(%ebp),%eax
08ab877c +0x2e:  lea    0x1c(%eax),%edx
08ab877f +0x31:  lea    -0xc(%ebp),%eax
08ab8782 +0x34:  mov    %edx,0x4(%esp)
08ab8786 +0x38:  mov    %eax,(%esp)
08ab8789 +0x3b:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08ab878e +0x40:  sub    $0x4,%esp
08ab8791 +0x43:  lea    -0xc(%ebp),%eax
08ab8794 +0x46:  mov    %eax,0x4(%esp)
08ab8798 +0x4a:  lea    -0x14(%ebp),%eax
08ab879b +0x4d:  mov    %eax,(%esp)
08ab879e +0x50:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08ab87a3 +0x55:  test   %al,%al
08ab87a5 +0x57:  je     08ab87b7 <+0x69>
08ab87a7 +0x59:  lea    -0x14(%ebp),%eax
08ab87aa +0x5c:  mov    %eax,(%esp)
08ab87ad +0x5f:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08ab87b2 +0x64:  mov    0x4(%eax),%eax
08ab87b5 +0x67:  jmp    08ab87bc <+0x6e>
08ab87b7 +0x69:  mov    $0xffffffff,%eax
08ab87bc +0x6e:  leave
08ab87bd +0x6f:  ret
```

## 反编译 C

```c
// TutorialData::getAvatarIndex @ 0x8ab874e

/* TutorialData::getAvatarIndex(ENUM_EQUIPMENTTYPE) */

undefined4 __thiscall TutorialData::getAvatarIndex(undefined4 this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_18 [4];
  undefined4 local_14;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  local_14 = param_2;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_18);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_18);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
