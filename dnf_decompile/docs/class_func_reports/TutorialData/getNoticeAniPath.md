# getNoticeAniPath

`_ZN12TutorialData16getNoticeAniPathEi`

`TutorialData::getNoticeAniPath(int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab8c4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab8c4c  _ZN12TutorialData16getNoticeAniPathEi
#           TutorialData::getNoticeAniPath(int)
# range [0x08ab8c4c, 0x08ab8d19]
08ab8c4c +0x00:  push   %ebp
08ab8c4d +0x01:  mov    %esp,%ebp
08ab8c4f +0x03:  push   %esi
08ab8c50 +0x04:  push   %ebx
08ab8c51 +0x05:  sub    $0x30,%esp
08ab8c54 +0x08:  mov    0x8(%ebp),%ebx
08ab8c57 +0x0b:  lea    -0x18(%ebp),%eax
08ab8c5a +0x0e:  mov    %eax,(%esp)
08ab8c5d +0x11:  call   08aba070 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x8ab>  ; global constructors keyed to TutorialData::TutorialData()+0x8ab
08ab8c62 +0x16:  mov    0xc(%ebp),%eax
08ab8c65 +0x19:  lea    0x124(%eax),%ecx
08ab8c6b +0x1f:  lea    -0x1c(%ebp),%eax
08ab8c6e +0x22:  lea    0x10(%ebp),%edx
08ab8c71 +0x25:  mov    %edx,0x8(%esp)
08ab8c75 +0x29:  mov    %ecx,0x4(%esp)
08ab8c79 +0x2d:  mov    %eax,(%esp)
08ab8c7c +0x30:  call   08ab9f88 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x7c3>  ; global constructors keyed to TutorialData::TutorialData()+0x7c3
08ab8c81 +0x35:  sub    $0x4,%esp
08ab8c84 +0x38:  mov    0xc(%ebp),%eax
08ab8c87 +0x3b:  lea    0x124(%eax),%edx
08ab8c8d +0x41:  lea    -0xc(%ebp),%eax
08ab8c90 +0x44:  mov    %edx,0x4(%esp)
08ab8c94 +0x48:  mov    %eax,(%esp)
08ab8c97 +0x4b:  call   08ab9fb4 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x7ef>  ; global constructors keyed to TutorialData::TutorialData()+0x7ef
08ab8c9c +0x50:  sub    $0x4,%esp
08ab8c9f +0x53:  lea    -0xc(%ebp),%eax
08ab8ca2 +0x56:  mov    %eax,0x4(%esp)
08ab8ca6 +0x5a:  lea    -0x1c(%ebp),%eax
08ab8ca9 +0x5d:  mov    %eax,(%esp)
08ab8cac +0x60:  call   08ab9fda <_GLOBAL__I__ZN12TutorialDataC2Ev+0x815>  ; global constructors keyed to TutorialData::TutorialData()+0x815
08ab8cb1 +0x65:  test   %al,%al
08ab8cb3 +0x67:  je     08ab8cd3 <+0x87>
08ab8cb5 +0x69:  mov    %ebx,%esi
08ab8cb7 +0x6b:  lea    -0x1c(%ebp),%eax
08ab8cba +0x6e:  mov    %eax,(%esp)
08ab8cbd +0x71:  call   08ab9fee <_GLOBAL__I__ZN12TutorialDataC2Ev+0x829>  ; global constructors keyed to TutorialData::TutorialData()+0x829
08ab8cc2 +0x76:  add    $0x4,%eax
08ab8cc5 +0x79:  mov    %eax,0x4(%esp)
08ab8cc9 +0x7d:  mov    %esi,(%esp)
08ab8ccc +0x80:  call   08aba18c <_GLOBAL__I__ZN12TutorialDataC2Ev+0x9c7>  ; global constructors keyed to TutorialData::TutorialData()+0x9c7
08ab8cd1 +0x85:  jmp    08ab8d01 <+0xb5>
08ab8cd3 +0x87:  mov    %ebx,%eax
08ab8cd5 +0x89:  lea    -0x18(%ebp),%edx
08ab8cd8 +0x8c:  mov    %edx,0x4(%esp)
08ab8cdc +0x90:  mov    %eax,(%esp)
08ab8cdf +0x93:  call   08aba240 <_GLOBAL__I__ZN12TutorialDataC2Ev+0xa7b>  ; global constructors keyed to TutorialData::TutorialData()+0xa7b
08ab8ce4 +0x98:  jmp    08ab8d01 <+0xb5>
08ab8ce6 +0x9a:  mov    %edx,%ebx
08ab8ce8 +0x9c:  mov    %eax,%esi
08ab8cea +0x9e:  lea    -0x18(%ebp),%eax
08ab8ced +0xa1:  mov    %eax,(%esp)
08ab8cf0 +0xa4:  call   08aba084 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x8bf>  ; global constructors keyed to TutorialData::TutorialData()+0x8bf
08ab8cf5 +0xa9:  mov    %esi,%eax
08ab8cf7 +0xab:  mov    %ebx,%edx
08ab8cf9 +0xad:  mov    %eax,(%esp)
08ab8cfc +0xb0:  call   08ae3750 <_Unwind_Resume>
08ab8d01 +0xb5:  lea    -0x18(%ebp),%eax
08ab8d04 +0xb8:  mov    %eax,(%esp)
08ab8d07 +0xbb:  call   08aba084 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x8bf>  ; global constructors keyed to TutorialData::TutorialData()+0x8bf
08ab8d0c +0xc0:  mov    %ebx,%eax
08ab8d0e +0xc2:  mov    %ebx,%eax
08ab8d10 +0xc4:  lea    -0x8(%ebp),%esp
08ab8d13 +0xc7:  add    $0x0,%esp
08ab8d16 +0xca:  pop    %ebx
08ab8d17 +0xcb:  pop    %esi
08ab8d18 +0xcc:  pop    %ebp
08ab8d19 +0xcd:  ret    $0x4
```

## 反编译 C

```c
// TutorialData::getNoticeAniPath @ 0x8ab8c4c

/* TutorialData::getNoticeAniPath(int) */

int TutorialData::getNoticeAniPath(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>
  local_20 [4];
  vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>> local_1c [12];
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  local_10 [4];
  
  std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::vector
            (local_1c);
                    /* try { // try from 08ab8c7c to 08ab8ce3 has its CatchHandler @ 08ab8ce6 */
  std::
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  ::find((int *)local_20);
  std::
  map<int,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>
          ::operator!=(local_20,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::vector
              ((vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>
                *)param_1,(vector *)local_1c);
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>>>
            ::operator->(local_20);
    std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::vector
              ((vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>
                *)param_1,(vector *)(iVar2 + 4));
  }
  std::vector<TutorialData::TutorialNotice*,std::allocator<TutorialData::TutorialNotice*>>::~vector
            (local_1c);
  return param_1;
}
```
