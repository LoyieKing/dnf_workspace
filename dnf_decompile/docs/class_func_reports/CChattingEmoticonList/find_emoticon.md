# find_emoticon

`_ZN21CChattingEmoticonList13find_emoticonEi`

`CChattingEmoticonList::find_emoticon(int)`

| 类 | 地址 |
|---|---|
| `CChattingEmoticonList` | `0x080e581c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e581c  _ZN21CChattingEmoticonList13find_emoticonEi
#           CChattingEmoticonList::find_emoticon(int)
# range [0x080e581c, 0x080e587f]
080e581c +0x00:  push   %ebp
080e581d +0x01:  mov    %esp,%ebp
080e581f +0x03:  sub    $0x28,%esp
080e5822 +0x06:  mov    0x8(%ebp),%edx
080e5825 +0x09:  lea    -0x10(%ebp),%eax
080e5828 +0x0c:  lea    0xc(%ebp),%ecx
080e582b +0x0f:  mov    %ecx,0x8(%esp)
080e582f +0x13:  mov    %edx,0x4(%esp)
080e5833 +0x17:  mov    %eax,(%esp)
080e5836 +0x1a:  call   080e61c6 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2fc>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2fc
080e583b +0x1f:  sub    $0x4,%esp
080e583e +0x22:  mov    0x8(%ebp),%edx
080e5841 +0x25:  lea    -0xc(%ebp),%eax
080e5844 +0x28:  mov    %edx,0x4(%esp)
080e5848 +0x2c:  mov    %eax,(%esp)
080e584b +0x2f:  call   080e61f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x328>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x328
080e5850 +0x34:  sub    $0x4,%esp
080e5853 +0x37:  lea    -0x10(%ebp),%eax
080e5856 +0x3a:  mov    %eax,0x4(%esp)
080e585a +0x3e:  lea    -0xc(%ebp),%eax
080e585d +0x41:  mov    %eax,(%esp)
080e5860 +0x44:  call   080e662e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x764>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x764
080e5865 +0x49:  test   %al,%al
080e5867 +0x4b:  je     080e5870 <+0x54>
080e5869 +0x4d:  mov    $0x0,%eax
080e586e +0x52:  jmp    080e587e <+0x62>
080e5870 +0x54:  lea    -0x10(%ebp),%eax
080e5873 +0x57:  mov    %eax,(%esp)
080e5876 +0x5a:  call   080e6642 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x778>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x778
080e587b +0x5f:  mov    0x4(%eax),%eax
080e587e +0x62:  leave
080e587f +0x63:  ret
```

## 反编译 C

```c
// CChattingEmoticonList::find_emoticon @ 0x80e581c

/* CChattingEmoticonList::find_emoticon(int) */

undefined4 CChattingEmoticonList::find_emoticon(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator local_14 [4];
  map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
  local_10 [12];
  
  std::
  map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
  ::find((int *)local_14);
  std::
  map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)local_10,
                     local_14);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)local_14);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
