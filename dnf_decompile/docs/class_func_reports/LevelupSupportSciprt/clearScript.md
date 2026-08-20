# clearScript

`_ZN20LevelupSupportSciprt11clearScriptEv`

`LevelupSupportSciprt::clearScript()`

| 类 | 地址 |
|---|---|
| `LevelupSupportSciprt` | `0x08ab5442` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab5442  _ZN20LevelupSupportSciprt11clearScriptEv
#           LevelupSupportSciprt::clearScript()
# range [0x08ab5442, 0x08ab54bd]
08ab5442 +0x00:  push   %ebp
08ab5443 +0x01:  mov    %esp,%ebp
08ab5445 +0x03:  push   %ebx
08ab5446 +0x04:  sub    $0x24,%esp
08ab5449 +0x07:  mov    0x8(%ebp),%edx
08ab544c +0x0a:  lea    -0xc(%ebp),%eax
08ab544f +0x0d:  mov    %edx,0x4(%esp)
08ab5453 +0x11:  mov    %eax,(%esp)
08ab5456 +0x14:  call   08147bfe <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0xf1>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0xf1
08ab545b +0x19:  sub    $0x4,%esp
08ab545e +0x1c:  mov    0x8(%ebp),%edx
08ab5461 +0x1f:  lea    -0x10(%ebp),%eax
08ab5464 +0x22:  mov    %edx,0x4(%esp)
08ab5468 +0x26:  mov    %eax,(%esp)
08ab546b +0x29:  call   08147c24 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x117>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x117
08ab5470 +0x2e:  sub    $0x4,%esp
08ab5473 +0x31:  jmp    08ab5497 <+0x55>
08ab5475 +0x33:  lea    -0xc(%ebp),%eax
08ab5478 +0x36:  mov    %eax,(%esp)
08ab547b +0x39:  call   08147c5e <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x151>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x151
08ab5480 +0x3e:  mov    0x4(%eax),%ebx
08ab5483 +0x41:  test   %ebx,%ebx
08ab5485 +0x43:  je     08ab5497 <+0x55>
08ab5487 +0x45:  mov    %ebx,(%esp)
08ab548a +0x48:  call   08ab5b2e <_GLOBAL__I__ZN20LevelupSupportSciprtC2Ev+0x106>  ; global constructors keyed to LevelupSupportSciprt::LevelupSupportSciprt()+0x106
08ab548f +0x4d:  mov    %ebx,(%esp)
08ab5492 +0x50:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ab5497 +0x55:  lea    -0x10(%ebp),%eax
08ab549a +0x58:  mov    %eax,0x4(%esp)
08ab549e +0x5c:  lea    -0xc(%ebp),%eax
08ab54a1 +0x5f:  mov    %eax,(%esp)
08ab54a4 +0x62:  call   08147c4a <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x13d>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x13d
08ab54a9 +0x67:  test   %al,%al
08ab54ab +0x69:  jne    08ab5475 <+0x33>
08ab54ad +0x6b:  mov    0x8(%ebp),%eax
08ab54b0 +0x6e:  mov    %eax,(%esp)
08ab54b3 +0x71:  call   08147bce <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0xc1>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0xc1
08ab54b8 +0x76:  mov    -0x4(%ebp),%ebx
08ab54bb +0x79:  leave
08ab54bc +0x7a:  ret
08ab54bd +0x7b:  nop
```

## 反编译 C

```c
// LevelupSupportSciprt::clearScript @ 0x8ab5442

/* LevelupSupportSciprt::clearScript() */

void __thiscall LevelupSupportSciprt::clearScript(LevelupSupportSciprt *this)

{
  vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>> *this_00;
  char cVar1;
  int iVar2;
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  local_14 [4];
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  local_10 [8];
  
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::begin(local_10);
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::end(local_14);
  while( true ) {
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
                          *)local_10,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
                          *)local_10);
    this_00 = *(vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
                **)(iVar2 + 4);
    if (this_00 !=
        (vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>> *)0x0
       ) {
      std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>::
      ~vector(this_00);
      operator_delete(this_00);
    }
  }
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::clear((map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
           *)this);
  return;
}
```
