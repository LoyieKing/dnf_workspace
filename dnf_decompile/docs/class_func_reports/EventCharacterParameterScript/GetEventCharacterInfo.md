# GetEventCharacterInfo

`_ZNK29EventCharacterParameterScript21GetEventCharacterInfoEiiR20STEventCharacterInfo`

`EventCharacterParameterScript::GetEventCharacterInfo(int, int, STEventCharacterInfo&) const`

| 类 | 地址 |
|---|---|
| `EventCharacterParameterScript` | `0x0895b722` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0895b722  _ZNK29EventCharacterParameterScript21GetEventCharacterInfoEiiR20STEventCharacterInfo
#           EventCharacterParameterScript::GetEventCharacterInfo(int, int, STEventCharacterInfo&) const
# range [0x0895b722, 0x0895b80a]
0895b722 +0x00:  push   %ebp
0895b723 +0x01:  mov    %esp,%ebp
0895b725 +0x03:  sub    $0x38,%esp
0895b728 +0x06:  mov    0x10(%ebp),%eax
0895b72b +0x09:  test   %eax,%eax
0895b72d +0x0b:  jle    0895b737 <+0x15>
0895b72f +0x0d:  mov    0x10(%ebp),%eax
0895b732 +0x10:  cmp    $0x46,%eax
0895b735 +0x13:  jle    0895b741 <+0x1f>
0895b737 +0x15:  mov    $0x0,%eax
0895b73c +0x1a:  jmp    0895b809 <+0xe7>
0895b741 +0x1f:  mov    0x8(%ebp),%edx
0895b744 +0x22:  lea    -0x18(%ebp),%eax
0895b747 +0x25:  lea    0x10(%ebp),%ecx
0895b74a +0x28:  mov    %ecx,0x8(%esp)
0895b74e +0x2c:  mov    %edx,0x4(%esp)
0895b752 +0x30:  mov    %eax,(%esp)
0895b755 +0x33:  call   0895bbd4 <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x360>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x360
0895b75a +0x38:  sub    $0x4,%esp
0895b75d +0x3b:  mov    0x8(%ebp),%edx
0895b760 +0x3e:  lea    -0x14(%ebp),%eax
0895b763 +0x41:  mov    %edx,0x4(%esp)
0895b767 +0x45:  mov    %eax,(%esp)
0895b76a +0x48:  call   0895bc00 <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x38c>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x38c
0895b76f +0x4d:  sub    $0x4,%esp
0895b772 +0x50:  lea    -0x14(%ebp),%eax
0895b775 +0x53:  mov    %eax,0x4(%esp)
0895b779 +0x57:  lea    -0x18(%ebp),%eax
0895b77c +0x5a:  mov    %eax,(%esp)
0895b77f +0x5d:  call   0895bc26 <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x3b2>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x3b2
0895b784 +0x62:  test   %al,%al
0895b786 +0x64:  je     0895b804 <+0xe2>
0895b788 +0x66:  lea    -0x18(%ebp),%eax
0895b78b +0x69:  mov    %eax,(%esp)
0895b78e +0x6c:  call   0895bc3a <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x3c6>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x3c6
0895b793 +0x71:  add    $0x4,%eax
0895b796 +0x74:  mov    %eax,-0xc(%ebp)
0895b799 +0x77:  mov    -0xc(%ebp),%edx
0895b79c +0x7a:  lea    -0x1c(%ebp),%eax
0895b79f +0x7d:  lea    0xc(%ebp),%ecx
0895b7a2 +0x80:  mov    %ecx,0x8(%esp)
0895b7a6 +0x84:  mov    %edx,0x4(%esp)
0895b7aa +0x88:  mov    %eax,(%esp)
0895b7ad +0x8b:  call   0895bc48 <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x3d4>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x3d4
0895b7b2 +0x90:  sub    $0x4,%esp
0895b7b5 +0x93:  mov    -0xc(%ebp),%edx
0895b7b8 +0x96:  lea    -0x10(%ebp),%eax
0895b7bb +0x99:  mov    %edx,0x4(%esp)
0895b7bf +0x9d:  mov    %eax,(%esp)
0895b7c2 +0xa0:  call   0895bc74 <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x400>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x400
0895b7c7 +0xa5:  sub    $0x4,%esp
0895b7ca +0xa8:  lea    -0x10(%ebp),%eax
0895b7cd +0xab:  mov    %eax,0x4(%esp)
0895b7d1 +0xaf:  lea    -0x1c(%ebp),%eax
0895b7d4 +0xb2:  mov    %eax,(%esp)
0895b7d7 +0xb5:  call   0895bc9a <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x426>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x426
0895b7dc +0xba:  test   %al,%al
0895b7de +0xbc:  je     0895b804 <+0xe2>
0895b7e0 +0xbe:  lea    -0x1c(%ebp),%eax
0895b7e3 +0xc1:  mov    %eax,(%esp)
0895b7e6 +0xc4:  call   0895bcae <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x43a>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x43a
0895b7eb +0xc9:  add    $0x4,%eax
0895b7ee +0xcc:  mov    %eax,0x4(%esp)
0895b7f2 +0xd0:  mov    0x14(%ebp),%eax
0895b7f5 +0xd3:  mov    %eax,(%esp)
0895b7f8 +0xd6:  call   0895b8fe <_GLOBAL__I_g_eventCharacterScriptBaseDirectory+0x8a>  ; global constructors keyed to g_eventCharacterScriptBaseDirectory+0x8a
0895b7fd +0xdb:  mov    $0x1,%eax
0895b802 +0xe0:  jmp    0895b809 <+0xe7>
0895b804 +0xe2:  mov    $0x0,%eax
0895b809 +0xe7:  leave
0895b80a +0xe8:  ret
```

## 反编译 C

```c
// EventCharacterParameterScript::GetEventCharacterInfo @ 0x895b722

/* EventCharacterParameterScript::GetEventCharacterInfo(int, int, STEventCharacterInfo&) const */

undefined4 __thiscall
EventCharacterParameterScript::GetEventCharacterInfo
          (EventCharacterParameterScript *this,int param_1,int param_2,STEventCharacterInfo *param_3
          )

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,STEventCharacterInfo>> local_20 [4];
  _Rb_tree_const_iterator<std::pair<int_const,STEventCharacterInfo_level>> local_1c [4];
  map<int,STEventCharacterInfo_level,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo_level>>>
  local_18 [4];
  map<int,STEventCharacterInfo,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo>>>
  local_14 [4];
  int local_10;
  
  if ((0 < param_2) && (param_2 < 0x47)) {
    std::
    map<int,STEventCharacterInfo_level,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo_level>>>
    ::find((int *)local_1c);
    std::
    map<int,STEventCharacterInfo_level,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo_level>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,STEventCharacterInfo_level>>::
            operator!=(local_1c,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10 = std::_Rb_tree_const_iterator<std::pair<int_const,STEventCharacterInfo_level>>::
                 operator*(local_1c);
      local_10 = local_10 + 4;
      std::
      map<int,STEventCharacterInfo,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo>>>
      ::find((int *)local_20);
      std::
      map<int,STEventCharacterInfo,std::less<int>,std::allocator<std::pair<int_const,STEventCharacterInfo>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,STEventCharacterInfo>>::operator!=
                        (local_20,(_Rb_tree_const_iterator *)local_14);
      if (cVar1 != '\0') {
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,STEventCharacterInfo>>::operator*
                          (local_20);
        STEventCharacterInfo::operator=(param_3,(STEventCharacterInfo *)(iVar2 + 4));
        return 1;
      }
    }
  }
  return 0;
}
```
