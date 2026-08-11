# _ZN19CPowerWarCharacInfo13IsExistCharacEj

`CPowerWarCharacInfo::IsExistCharac(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a7e86` | `0x61` | `0x809ded6` | `0x57` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
-lea    0x4(%eax),%ecx
-lea    -0x10(%ebp),%eax
+add    $0x4,%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x14(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
-mov    %ecx,0x4(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP20STPowerWarCharacInfoSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
-mov    0x8(%ebp),%eax
-lea    0x4(%eax),%edx
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP20STPowerWarCharacInfoSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP20STPowerWarCharacInfoEEneERKS5_>
-test   %al,%al
-je     <T> <_ZN19CPowerWarCharacInfo13IsExistCharacEj+0x5a>
-mov    $0x1,%eax
-jmp    <T> <_ZN19CPowerWarCharacInfo13IsExistCharacEj+0x5f>
-mov    $0x0,%eax
+movzbl %al,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarCharacInfo::IsExistCharac(unsigned int) */

bool CPowerWarCharacInfo::_ZN19CPowerWarCharacInfo13IsExistCharacEj(uint param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STPowerWarCharacInfo*>> local_14 [4];
  map<unsigned_int,STPowerWarCharacInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STPowerWarCharacInfo*>>>
  local_10 [12];
  
  std::
  map<unsigned_int,STPowerWarCharacInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STPowerWarCharacInfo*>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,STPowerWarCharacInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STPowerWarCharacInfo*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STPowerWarCharacInfo*>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  return cVar1 != '\0';
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp)（约第 264 行）：

```cpp
int CPowerWarCharacInfo::IsExistCharac(unsigned int charNo)
{
    std::map<unsigned int, STPowerWarCharacInfo*>* map = &m_map;
    std::map<unsigned int, STPowerWarCharacInfo*>::iterator it = map->find(charNo);
    return it != map->end();
}
```
