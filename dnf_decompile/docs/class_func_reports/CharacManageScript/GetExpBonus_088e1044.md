# GetExpBonus

`_ZN18CharacManageScript11GetExpBonusEiPi`

`CharacManageScript::GetExpBonus(int, int*)`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e1044` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e1044  _ZN18CharacManageScript11GetExpBonusEiPi
#           CharacManageScript::GetExpBonus(int, int*)
# range [0x088e1044, 0x088e10ab]
088e1044 +0x00:  push   %ebp
088e1045 +0x01:  mov    %esp,%ebp
088e1047 +0x03:  sub    $0x28,%esp
088e104a +0x06:  mov    0x8(%ebp),%eax
088e104d +0x09:  lea    0x18(%eax),%ecx
088e1050 +0x0c:  lea    -0x10(%ebp),%eax
088e1053 +0x0f:  lea    0xc(%ebp),%edx
088e1056 +0x12:  mov    %edx,0x8(%esp)
088e105a +0x16:  mov    %ecx,0x4(%esp)
088e105e +0x1a:  mov    %eax,(%esp)
088e1061 +0x1d:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
088e1066 +0x22:  sub    $0x4,%esp
088e1069 +0x25:  mov    0x8(%ebp),%eax
088e106c +0x28:  lea    0x18(%eax),%edx
088e106f +0x2b:  lea    -0xc(%ebp),%eax
088e1072 +0x2e:  mov    %edx,0x4(%esp)
088e1076 +0x32:  mov    %eax,(%esp)
088e1079 +0x35:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
088e107e +0x3a:  sub    $0x4,%esp
088e1081 +0x3d:  lea    -0xc(%ebp),%eax
088e1084 +0x40:  mov    %eax,0x4(%esp)
088e1088 +0x44:  lea    -0x10(%ebp),%eax
088e108b +0x47:  mov    %eax,(%esp)
088e108e +0x4a:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
088e1093 +0x4f:  test   %al,%al
088e1095 +0x51:  je     088e10aa <+0x66>
088e1097 +0x53:  lea    -0x10(%ebp),%eax
088e109a +0x56:  mov    %eax,(%esp)
088e109d +0x59:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
088e10a2 +0x5e:  mov    0x4(%eax),%edx
088e10a5 +0x61:  mov    0x10(%ebp),%eax
088e10a8 +0x64:  mov    %edx,(%eax)
088e10aa +0x66:  leave
088e10ab +0x67:  ret
```

## 反编译 C

```c
// CharacManageScript::GetExpBonus @ 0x88e1044

/* CharacManageScript::GetExpBonus(int, int*) */

void __thiscall CharacManageScript::GetExpBonus(CharacManageScript *this,int param_1,int *param_2)

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
