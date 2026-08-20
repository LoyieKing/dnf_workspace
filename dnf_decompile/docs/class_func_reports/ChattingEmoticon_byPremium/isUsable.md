# isUsable

`_ZNK26ChattingEmoticon_byPremium8isUsableERK5CUser`

`ChattingEmoticon_byPremium::isUsable(CUser const&) const`

| 类 | 地址 |
|---|---|
| `ChattingEmoticon_byPremium` | `0x080e5d42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e5d42  _ZNK26ChattingEmoticon_byPremium8isUsableERK5CUser
#           ChattingEmoticon_byPremium::isUsable(CUser const&) const
# range [0x080e5d42, 0x080e5dc9]
080e5d42 +0x00:  push   %ebp
080e5d43 +0x01:  mov    %esp,%ebp
080e5d45 +0x03:  sub    $0x28,%esp
080e5d48 +0x06:  mov    0x8(%ebp),%eax
080e5d4b +0x09:  lea    0x8(%eax),%edx
080e5d4e +0x0c:  lea    -0x10(%ebp),%eax
080e5d51 +0x0f:  mov    %edx,0x4(%esp)
080e5d55 +0x13:  mov    %eax,(%esp)
080e5d58 +0x16:  call   080e6166 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x29c>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x29c
080e5d5d +0x1b:  sub    $0x4,%esp
080e5d60 +0x1e:  jmp    080e5d94 <+0x52>
080e5d62 +0x20:  lea    -0x10(%ebp),%eax
080e5d65 +0x23:  mov    %eax,(%esp)
080e5d68 +0x26:  call   080e61aa <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2e0>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2e0
080e5d6d +0x2b:  mov    (%eax),%eax
080e5d6f +0x2d:  mov    %eax,0x4(%esp)
080e5d73 +0x31:  mov    0xc(%ebp),%eax
080e5d76 +0x34:  mov    %eax,(%esp)
080e5d79 +0x37:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
080e5d7e +0x3c:  test   %al,%al
080e5d80 +0x3e:  je     080e5d89 <+0x47>
080e5d82 +0x40:  mov    $0x1,%eax
080e5d87 +0x45:  jmp    080e5dc7 <+0x85>
080e5d89 +0x47:  lea    -0x10(%ebp),%eax
080e5d8c +0x4a:  mov    %eax,(%esp)
080e5d8f +0x4d:  call   080e618c <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2c2>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2c2
080e5d94 +0x52:  mov    0x8(%ebp),%eax
080e5d97 +0x55:  lea    0x8(%eax),%edx
080e5d9a +0x58:  lea    -0xc(%ebp),%eax
080e5d9d +0x5b:  mov    %edx,0x4(%esp)
080e5da1 +0x5f:  mov    %eax,(%esp)
080e5da4 +0x62:  call   080da496 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x633>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x633
080e5da9 +0x67:  sub    $0x4,%esp
080e5dac +0x6a:  lea    -0xc(%ebp),%eax
080e5daf +0x6d:  mov    %eax,0x4(%esp)
080e5db3 +0x71:  lea    -0x10(%ebp),%eax
080e5db6 +0x74:  mov    %eax,(%esp)
080e5db9 +0x77:  call   080e6152 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x288>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x288
080e5dbe +0x7c:  test   %al,%al
080e5dc0 +0x7e:  jne    080e5d62 <+0x20>
080e5dc2 +0x80:  mov    $0x0,%eax
080e5dc7 +0x85:  leave
080e5dc8 +0x86:  ret
080e5dc9 +0x87:  nop
```

## 反编译 C

```c
// ChattingEmoticon_byPremium::isUsable @ 0x80e5d42

/* ChattingEmoticon_byPremium::isUsable(CUser const&) const */

undefined4 __thiscall
ChattingEmoticon_byPremium::isUsable(ChattingEmoticon_byPremium *this,CUser *param_1)

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
