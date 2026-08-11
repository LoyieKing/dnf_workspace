# _ZN15AvatarVariation19getAvatarColorValueEi

`AvatarVariation::getAvatarColorValue(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x807b860` | `0xd4` | `0x807ed3f` | `0xd4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,64 +1,64 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0x8(%ebp),%ebx
 mov    0xc(%ebp),%eax
 test   %eax,%eax
 js     <T> <_ZN15AvatarVariation19getAvatarColorValueEi+0x1b>
 mov    0xc(%ebp),%eax
 cmp    $0x1ff,%eax
 jle    <T> <_ZN15AvatarVariation19getAvatarColorValueEi+0x22>
 movl   $0x0,0xc(%ebp)
 call   <T> <_ZN15AvatarVariation22getAvatarColorInfoInstEv>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 jne    <T> <_ZN15AvatarVariation19getAvatarColorValueEi+0x3d>
 mov    %ebx,(%esp)
 call   <T> <_ZN15AvatarVariation8colorRGBC1Ev>
 jmp    <T> <_ZN15AvatarVariation19getAvatarColorValueEi+0xcb>
+mov    -0xc(%ebp),%edx
 lea    -0x18(%ebp),%eax
-lea    0xc(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    -0xc(%ebp),%edx
+lea    0xc(%ebp),%ecx
+mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN15AvatarVariation8colorRGBESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 sub    $0x4,%esp
 lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN15AvatarVariation8colorRGBEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
+mov    -0xc(%ebp),%edx
 lea    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN15AvatarVariation8colorRGBESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN15AvatarVariation8colorRGBEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN15AvatarVariation8colorRGBEEEneERKS5_>
 test   %al,%al
 je     <T> <_ZN15AvatarVariation19getAvatarColorValueEi+0xc3>
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN15AvatarVariation8colorRGBEEEptEv>
 movzwl 0x4(%eax),%edx
 mov    %dx,(%ebx)
 movzbl 0x6(%eax),%eax
 mov    %al,0x2(%ebx)
 jmp    <T> <_ZN15AvatarVariation19getAvatarColorValueEi+0xcb>
 mov    %ebx,(%esp)
 call   <T> <_ZN15AvatarVariation8colorRGBC1Ev>
 mov    %ebx,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret    $0x4
```
## 2. Ghidra 反编译 C

```c

colorRGB *
AvatarVariation::_ZN15AvatarVariation19getAvatarColorValueEi
          (colorRGB *__return_storage_ptr__,int index)

{
  byte bVar1;
  bool bVar2;
  pair<const_int,_AvatarVariation::colorRGB> *ppVar3;
  _Rb_tree_const_iterator<std::pair<const_int,_AvatarVariation::colorRGB>_> local_20;
  _Rb_tree_iterator<std::pair<const_int,_AvatarVariation::colorRGB>_> local_1c;
  _Rb_tree_const_iterator<std::pair<const_int,_AvatarVariation::colorRGB>_> local_18;
  _Rb_tree_iterator<std::pair<const_int,_AvatarVariation::colorRGB>_> local_14;
  AvatarColorInfo *local_10;
  
                    /* Unresolved local var: AvatarColorMap * tempMap@[???]
                       Unresolved local var:
                       _Rb_tree_const_iterator<std::pair<const_int,_AvatarVariation::colorRGB>_>
                       itr@[???] */
  local_10 = getAvatarColorInfoInst();
  if (local_10 == (AvatarColorInfo *)0x0) {
    colorRGB::colorRGB(__return_storage_ptr__);
  }
  else {
    std::
    map<int,_AvatarVariation::colorRGB,_std::less<int>,_std::allocator<std::pair<const_int,_AvatarVariation::colorRGB>_>_>
    ::find((map<int,_AvatarVariation::colorRGB,_std::less<int>,_std::allocator<std::pair<const_int,_AvatarVariation::colorRGB>_>_>
            *)&local_1c,(int *)local_10);
    std::_Rb_tree_const_iterator<std::pair<const_int,_AvatarVariation::colorRGB>_>::
    _Rb_tree_const_iterator(&local_20,&local_1c);
    std::
    map<int,_AvatarVariation::colorRGB,_std::less<int>,_std::allocator<std::pair<const_int,_AvatarVariation::colorRGB>_>_>
    ::end((map<int,_AvatarVariation::colorRGB,_std::less<int>,_std::allocator<std::pair<const_int,_AvatarVariation::colorRGB>_>_>
           *)&local_14);
    std::_Rb_tree_const_iterator<std::pair<const_int,_AvatarVariation::colorRGB>_>::
    _Rb_tree_const_iterator(&local_18,&local_14);
    bVar2 = std::_Rb_tree_const_iterator<std::pair<const_int,_AvatarVariation::colorRGB>_>::
            operator!=(&local_20,&local_18);
    if (bVar2) {
      ppVar3 = std::_Rb_tree_const_iterator<std::pair<const_int,_AvatarVariation::colorRGB>_>::
               operator->(&local_20);
      bVar1 = (ppVar3->second).green;
      __return_storage_ptr__->red = (ppVar3->second).red;
      __return_storage_ptr__->green = bVar1;
      __return_storage_ptr__->blue = (ppVar3->second).blue;
    }
    else {
      colorRGB::colorRGB(__return_storage_ptr__);
    }
  }
  return __return_storage_ptr__;
}
```

## 3. 我们的源码函数

定义于 [source/DNFShared/GameScript/RDARScriptAvatarColorInfo.cpp](source/DNFShared/GameScript/RDARScriptAvatarColorInfo.cpp)（约第 127 行）：

```cpp
colorRGB getAvatarColorValue(int index)
{
    if (index < 0 || 0x1ff < index)
    {
        index = 0;
    }
    AvatarColorInfo* tempMap = getAvatarColorInfoInst();
    if (tempMap == (AvatarColorInfo*)0)
    {
        return colorRGB();
    }
    AvatarColorMap::const_iterator itr = tempMap->avatarColorMap.find(index);
    if (itr != tempMap->avatarColorMap.end())
    {
        return itr->second;
    }
    return colorRGB();
}
```
