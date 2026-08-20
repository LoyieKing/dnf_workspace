# clearScript

`_ZN23LevelupSupport2ndScript11clearScriptEv`

`LevelupSupport2ndScript::clearScript()`

| 类 | 地址 |
|---|---|
| `LevelupSupport2ndScript` | `0x08ab5964` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab5964  _ZN23LevelupSupport2ndScript11clearScriptEv
#           LevelupSupport2ndScript::clearScript()
# range [0x08ab5964, 0x08ab59e7]
08ab5964 +0x00:  push   %ebp
08ab5965 +0x01:  mov    %esp,%ebp
08ab5967 +0x03:  push   %ebx
08ab5968 +0x04:  sub    $0x24,%esp
08ab596b +0x07:  mov    0x8(%ebp),%eax
08ab596e +0x0a:  lea    0x4(%eax),%edx
08ab5971 +0x0d:  lea    -0xc(%ebp),%eax
08ab5974 +0x10:  mov    %edx,0x4(%esp)
08ab5978 +0x14:  mov    %eax,(%esp)
08ab597b +0x17:  call   08ab5e6c <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x444>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x444
08ab5980 +0x1c:  sub    $0x4,%esp
08ab5983 +0x1f:  mov    0x8(%ebp),%eax
08ab5986 +0x22:  lea    0x4(%eax),%edx
08ab5989 +0x25:  lea    -0x10(%ebp),%eax
08ab598c +0x28:  mov    %edx,0x4(%esp)
08ab5990 +0x2c:  mov    %eax,(%esp)
08ab5993 +0x2f:  call   08147e8a <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x37d>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x37d
08ab5998 +0x34:  sub    $0x4,%esp
08ab599b +0x37:  jmp    08ab59bf <+0x5b>
08ab599d +0x39:  lea    -0xc(%ebp),%eax
08ab59a0 +0x3c:  mov    %eax,(%esp)
08ab59a3 +0x3f:  call   08147ec4 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x3b7>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x3b7
08ab59a8 +0x44:  mov    0x4(%eax),%ebx
08ab59ab +0x47:  test   %ebx,%ebx
08ab59ad +0x49:  je     08ab59bf <+0x5b>
08ab59af +0x4b:  mov    %ebx,(%esp)
08ab59b2 +0x4e:  call   08ab5d0a <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x2e2>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x2e2
08ab59b7 +0x53:  mov    %ebx,(%esp)
08ab59ba +0x56:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ab59bf +0x5b:  lea    -0x10(%ebp),%eax
08ab59c2 +0x5e:  mov    %eax,0x4(%esp)
08ab59c6 +0x62:  lea    -0xc(%ebp),%eax
08ab59c9 +0x65:  mov    %eax,(%esp)
08ab59cc +0x68:  call   08ab5d8a <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x362>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x362
08ab59d1 +0x6d:  test   %al,%al
08ab59d3 +0x6f:  jne    08ab599d <+0x39>
08ab59d5 +0x71:  mov    0x8(%ebp),%eax
08ab59d8 +0x74:  add    $0x4,%eax
08ab59db +0x77:  mov    %eax,(%esp)
08ab59de +0x7a:  call   08147e4a <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x33d>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x33d
08ab59e3 +0x7f:  mov    -0x4(%ebp),%ebx
08ab59e6 +0x82:  leave
08ab59e7 +0x83:  ret
```

## 反编译 C

```c
// LevelupSupport2ndScript::clearScript @ 0x8ab5964

/* LevelupSupport2ndScript::clearScript() */

void __thiscall LevelupSupport2ndScript::clearScript(LevelupSupport2ndScript *this)

{
  vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
  *this_00;
  char cVar1;
  int iVar2;
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  local_14 [4];
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  local_10 [8];
  
  std::
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  ::begin(local_10);
  std::
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  ::end(local_14);
  while( true ) {
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
                          *)local_10,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>
                          *)local_10);
    this_00 = *(vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
                **)(iVar2 + 4);
    if (this_00 !=
        (vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>
         *)0x0) {
      std::
      vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>::
      ~vector(this_00);
      operator_delete(this_00);
    }
  }
  std::
  map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
  ::clear((map<int,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupport2ndScript::ItemInfo,std::allocator<LevelupSupport2ndScript::ItemInfo>>*>>>
           *)(this + 4));
  return;
}
```
