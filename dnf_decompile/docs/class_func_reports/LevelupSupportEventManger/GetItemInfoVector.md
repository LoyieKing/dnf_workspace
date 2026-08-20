# GetItemInfoVector

`_ZN25LevelupSupportEventManger17GetItemInfoVectorEi`

`LevelupSupportEventManger::GetItemInfoVector(int)`

| 类 | 地址 |
|---|---|
| `LevelupSupportEventManger` | `0x08147724` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08147724  _ZN25LevelupSupportEventManger17GetItemInfoVectorEi
#           LevelupSupportEventManger::GetItemInfoVector(int)
# range [0x08147724, 0x0814778d]
08147724 +0x00:  push   %ebp
08147725 +0x01:  mov    %esp,%ebp
08147727 +0x03:  sub    $0x28,%esp
0814772a +0x06:  mov    0x8(%ebp),%eax
0814772d +0x09:  lea    0x4(%eax),%ecx
08147730 +0x0c:  lea    -0x10(%ebp),%eax
08147733 +0x0f:  lea    0xc(%ebp),%edx
08147736 +0x12:  mov    %edx,0x8(%esp)
0814773a +0x16:  mov    %ecx,0x4(%esp)
0814773e +0x1a:  mov    %eax,(%esp)
08147741 +0x1d:  call   08147d28 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x21b>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x21b
08147746 +0x22:  sub    $0x4,%esp
08147749 +0x25:  mov    0x8(%ebp),%eax
0814774c +0x28:  lea    0x4(%eax),%edx
0814774f +0x2b:  lea    -0xc(%ebp),%eax
08147752 +0x2e:  mov    %edx,0x4(%esp)
08147756 +0x32:  mov    %eax,(%esp)
08147759 +0x35:  call   08147c24 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x117>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x117
0814775e +0x3a:  sub    $0x4,%esp
08147761 +0x3d:  lea    -0xc(%ebp),%eax
08147764 +0x40:  mov    %eax,0x4(%esp)
08147768 +0x44:  lea    -0x10(%ebp),%eax
0814776b +0x47:  mov    %eax,(%esp)
0814776e +0x4a:  call   08147c4a <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x13d>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x13d
08147773 +0x4f:  test   %al,%al
08147775 +0x51:  je     08147787 <+0x63>
08147777 +0x53:  lea    -0x10(%ebp),%eax
0814777a +0x56:  mov    %eax,(%esp)
0814777d +0x59:  call   08147c5e <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x151>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x151
08147782 +0x5e:  mov    0x4(%eax),%eax
08147785 +0x61:  jmp    0814778c <+0x68>
08147787 +0x63:  mov    $0x0,%eax
0814778c +0x68:  leave
0814778d +0x69:  ret
```

## 反编译 C

```c
// LevelupSupportEventManger::GetItemInfoVector @ 0x8147724

/* LevelupSupportEventManger::GetItemInfoVector(int) */

undefined4 LevelupSupportEventManger::GetItemInfoVector(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
  local_14 [4];
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  local_10 [12];
  
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::find((int *)local_14);
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
            ::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
