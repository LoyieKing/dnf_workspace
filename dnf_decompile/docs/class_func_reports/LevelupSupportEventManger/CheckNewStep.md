# CheckNewStep

`_ZN25LevelupSupportEventManger12CheckNewStepEi`

`LevelupSupportEventManger::CheckNewStep(int)`

| 类 | 地址 |
|---|---|
| `LevelupSupportEventManger` | `0x08147164` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08147164  _ZN25LevelupSupportEventManger12CheckNewStepEi
#           LevelupSupportEventManger::CheckNewStep(int)
# range [0x08147164, 0x081471c5]
08147164 +0x00:  push   %ebp
08147165 +0x01:  mov    %esp,%ebp
08147167 +0x03:  sub    $0x28,%esp
0814716a +0x06:  mov    0x8(%ebp),%eax
0814716d +0x09:  lea    0x4(%eax),%edx
08147170 +0x0c:  lea    -0x10(%ebp),%eax
08147173 +0x0f:  mov    %edx,0x4(%esp)
08147177 +0x13:  mov    %eax,(%esp)
0814717a +0x16:  call   08147c24 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x117>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x117
0814717f +0x1b:  sub    $0x4,%esp
08147182 +0x1e:  mov    0x8(%ebp),%eax
08147185 +0x21:  lea    0x4(%eax),%ecx
08147188 +0x24:  lea    -0xc(%ebp),%eax
0814718b +0x27:  lea    0xc(%ebp),%edx
0814718e +0x2a:  mov    %edx,0x8(%esp)
08147192 +0x2e:  mov    %ecx,0x4(%esp)
08147196 +0x32:  mov    %eax,(%esp)
08147199 +0x35:  call   08147d28 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x21b>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x21b
0814719e +0x3a:  sub    $0x4,%esp
081471a1 +0x3d:  lea    -0x10(%ebp),%eax
081471a4 +0x40:  mov    %eax,0x4(%esp)
081471a8 +0x44:  lea    -0xc(%ebp),%eax
081471ab +0x47:  mov    %eax,(%esp)
081471ae +0x4a:  call   08147d54 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x247>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x247
081471b3 +0x4f:  test   %al,%al
081471b5 +0x51:  je     081471be <+0x5a>
081471b7 +0x53:  mov    $0x0,%eax
081471bc +0x58:  jmp    081471c3 <+0x5f>
081471be +0x5a:  mov    $0x1,%eax
081471c3 +0x5f:  leave
081471c4 +0x60:  ret
081471c5 +0x61:  nop
```

## 反编译 C

```c
// LevelupSupportEventManger::CheckNewStep @ 0x8147164

/* LevelupSupportEventManger::CheckNewStep(int) */

bool LevelupSupportEventManger::CheckNewStep(int param_1)

{
  char cVar1;
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  local_14 [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
  local_10 [12];
  
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::end(local_14);
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::find((int *)local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
          ::operator==(local_10,(_Rb_tree_iterator *)local_14);
  return cVar1 == '\0';
}
```
