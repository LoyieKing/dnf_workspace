# _ZNK13np_server_xml10CServerXml12GetEventRGBAEi

`np_server_xml::CServerXml::GetEventRGBA(int) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80580c4` | `0x81` | `0x80a54a4` | `0x70` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,34 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEC1Ev>
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 lea    0xa0(%eax),%ecx
-lea    -0x1c(%ebp),%eax
+lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 sub    $0x4,%esp
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 lea    0xa0(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEneERKS3_>
+call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEeqERKS3_>
 test   %al,%al
-je     <T> <_ZNK13np_server_xml10CServerXml12GetEventRGBAEi+0x7a>
+je     <T> <_ZNK13np_server_xml10CServerXml12GetEventRGBAEi+0x60>
+mov    $0x0,%eax
+jmp    <T> <_ZNK13np_server_xml10CServerXml12GetEventRGBAEi+0x6e>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 mov    0x4(%eax),%eax
-jmp    <T> <_ZNK13np_server_xml10CServerXml12GetEventRGBAEi+0x7f>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* np_server_xml::CServerXml::GetEventRGBA(int) const */

undefined4 np_server_xml::CServerXml::_ZNK13np_server_xml10CServerXml12GetEventRGBAEi(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20 [3];
  int local_14;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find(local_20);
  local_14 = local_20[0];
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                    ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_14,
                     (_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/ServerXml.cpp](source/DNFServer/GameServer/Guild/ServerXml.cpp)（约第 323 行）：

```cpp
unsigned int CServerXml::GetEventRGBA(int idx) const
{
    std::map<int, int>::const_iterator it = m_rgba.find(idx);
    if (it == m_rgba.end())
    {
        return 0;
    }
    return (unsigned int)it->second;
}
```
