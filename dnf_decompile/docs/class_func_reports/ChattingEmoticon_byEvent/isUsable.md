# isUsable

`_ZNK24ChattingEmoticon_byEvent8isUsableERK5CUser`

`ChattingEmoticon_byEvent::isUsable(CUser const&) const`

| 类 | 地址 |
|---|---|
| `ChattingEmoticon_byEvent` | `0x080e5ca6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e5ca6  _ZNK24ChattingEmoticon_byEvent8isUsableERK5CUser
#           ChattingEmoticon_byEvent::isUsable(CUser const&) const
# range [0x080e5ca6, 0x080e5d2d]
080e5ca6 +0x00:  push   %ebp
080e5ca7 +0x01:  mov    %esp,%ebp
080e5ca9 +0x03:  sub    $0x28,%esp
080e5cac +0x06:  mov    0x8(%ebp),%eax
080e5caf +0x09:  lea    0x8(%eax),%edx
080e5cb2 +0x0c:  lea    -0x10(%ebp),%eax
080e5cb5 +0x0f:  mov    %edx,0x4(%esp)
080e5cb9 +0x13:  mov    %eax,(%esp)
080e5cbc +0x16:  call   080e6166 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x29c>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x29c
080e5cc1 +0x1b:  sub    $0x4,%esp
080e5cc4 +0x1e:  jmp    080e5cf8 <+0x52>
080e5cc6 +0x20:  lea    -0x10(%ebp),%eax
080e5cc9 +0x23:  mov    %eax,(%esp)
080e5ccc +0x26:  call   080e61aa <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2e0>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2e0
080e5cd1 +0x2b:  mov    (%eax),%eax
080e5cd3 +0x2d:  mov    %eax,0x4(%esp)
080e5cd7 +0x31:  mov    0xc(%ebp),%eax
080e5cda +0x34:  mov    %eax,(%esp)
080e5cdd +0x37:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
080e5ce2 +0x3c:  test   %al,%al
080e5ce4 +0x3e:  je     080e5ced <+0x47>
080e5ce6 +0x40:  mov    $0x1,%eax
080e5ceb +0x45:  jmp    080e5d2b <+0x85>
080e5ced +0x47:  lea    -0x10(%ebp),%eax
080e5cf0 +0x4a:  mov    %eax,(%esp)
080e5cf3 +0x4d:  call   080e618c <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2c2>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2c2
080e5cf8 +0x52:  mov    0x8(%ebp),%eax
080e5cfb +0x55:  lea    0x8(%eax),%edx
080e5cfe +0x58:  lea    -0xc(%ebp),%eax
080e5d01 +0x5b:  mov    %edx,0x4(%esp)
080e5d05 +0x5f:  mov    %eax,(%esp)
080e5d08 +0x62:  call   080da496 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x633>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x633
080e5d0d +0x67:  sub    $0x4,%esp
080e5d10 +0x6a:  lea    -0xc(%ebp),%eax
080e5d13 +0x6d:  mov    %eax,0x4(%esp)
080e5d17 +0x71:  lea    -0x10(%ebp),%eax
080e5d1a +0x74:  mov    %eax,(%esp)
080e5d1d +0x77:  call   080e6152 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x288>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x288
080e5d22 +0x7c:  test   %al,%al
080e5d24 +0x7e:  jne    080e5cc6 <+0x20>
080e5d26 +0x80:  mov    $0x0,%eax
080e5d2b +0x85:  leave
080e5d2c +0x86:  ret
080e5d2d +0x87:  nop
```

## 反编译 C

```c
// ChattingEmoticon_byEvent::isUsable @ 0x80e5ca6

/* ChattingEmoticon_byEvent::isUsable(CUser const&) const */

undefined4 __thiscall
ChattingEmoticon_byEvent::isUsable(ChattingEmoticon_byEvent *this,CUser *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  set<int,std::less<int>,std::allocator<int>> local_14 [4];
  set<int,std::less<int>,std::allocator<int>> local_10 [12];
  
  std::set<int,std::less<int>,std::allocator<int>>::begin(local_14);
  while( true ) {
    std::set<int,std::less<int>,std::allocator<int>>::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<int>::operator!=
                      ((_Rb_tree_const_iterator<int> *)local_14,(_Rb_tree_const_iterator *)local_10)
    ;
    if (cVar1 == '\0') {
      return 0;
    }
    puVar2 = (undefined4 *)
             std::_Rb_tree_const_iterator<int>::operator*((_Rb_tree_const_iterator<int> *)local_14);
    cVar1 = CUser::isAffectedPremium(param_1,*puVar2);
    if (cVar1 != '\0') break;
    std::_Rb_tree_const_iterator<int>::operator++((_Rb_tree_const_iterator<int> *)local_14);
  }
  return 1;
}
```
