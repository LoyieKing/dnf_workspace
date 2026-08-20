# getEquipmentIndex

`_ZN12TutorialData17getEquipmentIndexE18ENUM_EQUIPMENTTYPEi`

`TutorialData::getEquipmentIndex(ENUM_EQUIPMENTTYPE, int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab87be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab87be  _ZN12TutorialData17getEquipmentIndexE18ENUM_EQUIPMENTTYPEi
#           TutorialData::getEquipmentIndex(ENUM_EQUIPMENTTYPE, int)
# range [0x08ab87be, 0x08ab885b]
08ab87be +0x00:  push   %ebp
08ab87bf +0x01:  mov    %esp,%ebp
08ab87c1 +0x03:  sub    $0x28,%esp
08ab87c4 +0x06:  cmpl   $0x3,0x10(%ebp)
08ab87c8 +0x0a:  jle    08ab87d4 <+0x16>
08ab87ca +0x0c:  mov    $0xffffffff,%eax
08ab87cf +0x11:  jmp    08ab885a <+0x9c>
08ab87d4 +0x16:  mov    0xc(%ebp),%eax
08ab87d7 +0x19:  mov    %eax,-0x10(%ebp)
08ab87da +0x1c:  mov    0x10(%ebp),%edx
08ab87dd +0x1f:  mov    %edx,%eax
08ab87df +0x21:  add    %eax,%eax
08ab87e1 +0x23:  add    %edx,%eax
08ab87e3 +0x25:  shl    $0x3,%eax
08ab87e6 +0x28:  add    $0x30,%eax
08ab87e9 +0x2b:  add    0x8(%ebp),%eax
08ab87ec +0x2e:  lea    0x4(%eax),%ecx
08ab87ef +0x31:  lea    -0x14(%ebp),%eax
08ab87f2 +0x34:  lea    -0x10(%ebp),%edx
08ab87f5 +0x37:  mov    %edx,0x8(%esp)
08ab87f9 +0x3b:  mov    %ecx,0x4(%esp)
08ab87fd +0x3f:  mov    %eax,(%esp)
08ab8800 +0x42:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08ab8805 +0x47:  sub    $0x4,%esp
08ab8808 +0x4a:  mov    0x10(%ebp),%edx
08ab880b +0x4d:  mov    %edx,%eax
08ab880d +0x4f:  add    %eax,%eax
08ab880f +0x51:  add    %edx,%eax
08ab8811 +0x53:  shl    $0x3,%eax
08ab8814 +0x56:  add    $0x30,%eax
08ab8817 +0x59:  add    0x8(%ebp),%eax
08ab881a +0x5c:  lea    0x4(%eax),%edx
08ab881d +0x5f:  lea    -0xc(%ebp),%eax
08ab8820 +0x62:  mov    %edx,0x4(%esp)
08ab8824 +0x66:  mov    %eax,(%esp)
08ab8827 +0x69:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08ab882c +0x6e:  sub    $0x4,%esp
08ab882f +0x71:  lea    -0xc(%ebp),%eax
08ab8832 +0x74:  mov    %eax,0x4(%esp)
08ab8836 +0x78:  lea    -0x14(%ebp),%eax
08ab8839 +0x7b:  mov    %eax,(%esp)
08ab883c +0x7e:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08ab8841 +0x83:  test   %al,%al
08ab8843 +0x85:  je     08ab8855 <+0x97>
08ab8845 +0x87:  lea    -0x14(%ebp),%eax
08ab8848 +0x8a:  mov    %eax,(%esp)
08ab884b +0x8d:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08ab8850 +0x92:  mov    0x4(%eax),%eax
08ab8853 +0x95:  jmp    08ab885a <+0x9c>
08ab8855 +0x97:  mov    $0xffffffff,%eax
08ab885a +0x9c:  leave
08ab885b +0x9d:  ret
```

## 反编译 C

```c
// TutorialData::getEquipmentIndex @ 0x8ab87be

/* TutorialData::getEquipmentIndex(ENUM_EQUIPMENTTYPE, int) */

undefined4 __thiscall
TutorialData::getEquipmentIndex(undefined4 this,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_18 [4];
  undefined4 local_14;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  if (param_3 < 4) {
    local_14 = param_2;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_18)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      (local_18,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar2 = 0xffffffff;
    }
    else {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_18);
      uVar2 = *(undefined4 *)(iVar3 + 4);
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
