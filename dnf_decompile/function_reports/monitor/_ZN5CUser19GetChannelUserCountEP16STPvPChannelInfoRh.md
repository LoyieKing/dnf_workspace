# _ZN5CUser19GetChannelUserCountEP16STPvPChannelInfoRh

`CUser::GetChannelUserCount(STPvPChannelInfo*, unsigned char&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806e234` | `0xfc` | `0x8088bb0` | `0x104` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,80 +1,81 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
-movl   $0x0,-0x10(%ebp)
-mov    0x8(%ebp),%eax
-lea    0x90(%eax),%edx
-lea    -0x18(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIiN5CUser11ChannelInfoESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
-sub    $0x4,%esp
-jmp    <T> <_ZN5CUser19GetChannelUserCountEP16STPvPChannelInfoRh+0x9a>
-mov    -0x10(%ebp),%eax
-shl    $0x4,%eax
-mov    %eax,%ebx
-add    0xc(%ebp),%ebx
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN5CUser11ChannelInfoEEEptEv>
-mov    (%eax),%eax
-mov    %eax,(%ebx)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN5CUser11ChannelInfoEEEptEv>
-add    $0x4,%eax
-mov    %eax,-0xc(%ebp)
-mov    -0x10(%ebp),%eax
-shl    $0x4,%eax
-add    0xc(%ebp),%eax
-mov    -0xc(%ebp),%edx
-mov    (%edx),%edx
-mov    %edx,0x4(%eax)
-mov    -0x10(%ebp),%eax
-shl    $0x4,%eax
-add    0xc(%ebp),%eax
-mov    -0xc(%ebp),%edx
-mov    0x4(%edx),%edx
-mov    %edx,0x8(%eax)
-mov    -0x10(%ebp),%eax
-shl    $0x4,%eax
-add    0xc(%ebp),%eax
-mov    -0xc(%ebp),%edx
-mov    0x8(%edx),%edx
-mov    %edx,0xc(%eax)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN5CUser11ChannelInfoEEEppEv>
-addl   $0x1,-0x10(%ebp)
+movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x90(%eax),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIiN5CUser11ChannelInfoESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
+sub    $0x4,%esp
+jmp    <T> <_ZN5CUser19GetChannelUserCountEP16STPvPChannelInfoRh+0xbd>
+mov    0x10(%ebp),%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+cmp    -0xc(%ebp),%eax
+jle    <T> <_ZN5CUser19GetChannelUserCountEP16STPvPChannelInfoRh+0xf4>
+mov    -0xc(%ebp),%eax
+shl    $0x4,%eax
+mov    %eax,%ebx
+add    0xc(%ebp),%ebx
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN5CUser11ChannelInfoEEEptEv>
+mov    (%eax),%eax
+mov    %eax,(%ebx)
+mov    -0xc(%ebp),%eax
+shl    $0x4,%eax
+mov    %eax,%ebx
+add    0xc(%ebp),%ebx
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN5CUser11ChannelInfoEEEptEv>
+mov    0x4(%eax),%eax
+mov    %eax,0x4(%ebx)
+mov    -0xc(%ebp),%eax
+shl    $0x4,%eax
+mov    %eax,%ebx
+add    0xc(%ebp),%ebx
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN5CUser11ChannelInfoEEEptEv>
+mov    0x8(%eax),%eax
+mov    %eax,0x8(%ebx)
+mov    -0xc(%ebp),%eax
+shl    $0x4,%eax
+mov    %eax,%ebx
+add    0xc(%ebp),%ebx
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN5CUser11ChannelInfoEEEptEv>
+mov    0xc(%eax),%eax
+mov    %eax,0xc(%ebx)
+addl   $0x1,-0xc(%ebp)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN5CUser11ChannelInfoEEEppEv>
+mov    0x8(%ebp),%eax
+lea    0x90(%eax),%edx
+lea    -0x10(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN5CUser11ChannelInfoESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 sub    $0x4,%esp
+lea    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN5CUser11ChannelInfoEEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN5CUser19GetChannelUserCountEP16STPvPChannelInfoRh+0xe0>
-mov    0x10(%ebp),%eax
-movzbl (%eax),%eax
-movzbl %al,%eax
-cmp    -0x10(%ebp),%eax
-jle    <T> <_ZN5CUser19GetChannelUserCountEP16STPvPChannelInfoRh+0xe0>
-mov    $0x1,%eax
-jmp    <T> <_ZN5CUser19GetChannelUserCountEP16STPvPChannelInfoRh+0xe5>
-mov    $0x0,%eax
-test   %al,%al
-jne    <T> <_ZN5CUser19GetChannelUserCountEP16STPvPChannelInfoRh+0x2b>
-mov    -0x10(%ebp),%eax
+jne    <T> <_ZN5CUser19GetChannelUserCountEP16STPvPChannelInfoRh+0x2e>
+jmp    <T> <_ZN5CUser19GetChannelUserCountEP16STPvPChannelInfoRh+0xf5>
+nop
+mov    -0xc(%ebp),%eax
 mov    %eax,%edx
 mov    0x10(%ebp),%eax
 mov    %dl,(%eax)
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::GetChannelUserCount(STPvPChannelInfo*, unsigned char&) */

void __thiscall
CUser::_ZN5CUser19GetChannelUserCountEP16STPvPChannelInfoRh
          (CUser *this,STPvPChannelInfo *param_1,uchar *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
  local_1c [4];
  map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
  local_18 [4];
  int local_14;
  undefined4 *local_10;
  
  local_14 = 0;
  std::
  map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
    ::end(local_18);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,CUser::ChannelInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,CUser::ChannelInfo>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if ((cVar2 == '\0') || ((int)(uint)*param_2 <= local_14)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    iVar3 = local_14 * 0x10;
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,CUser::ChannelInfo>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,CUser::ChannelInfo>> *)local_1c);
    *(undefined4 *)(param_1 + iVar3) = *puVar4;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,CUser::ChannelInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CUser::ChannelInfo>> *)local_1c);
    local_10 = (undefined4 *)(iVar3 + 4);
    *(undefined4 *)(param_1 + local_14 * 0x10 + 4) = *local_10;
    *(undefined4 *)(param_1 + local_14 * 0x10 + 8) = *(undefined4 *)(iVar3 + 8);
    *(undefined4 *)(param_1 + local_14 * 0x10 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    std::_Rb_tree_iterator<std::pair<int_const,CUser::ChannelInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,CUser::ChannelInfo>> *)local_1c);
    local_14 = local_14 + 1;
  }
  *param_2 = (uchar)local_14;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 177 行）：

```cpp
void CUser::GetChannelUserCount(STPvPChannelInfo* out, unsigned char& count)
{
    int idx = 0;
    for (std::map<int, ChannelInfo>::iterator it = m_channelInfoMap.begin();
         it != m_channelInfoMap.end(); ++it)
    {
        if ((int)(unsigned char)count <= idx)
        {
            break;
        }
        out[idx].m_channel = it->first;
        out[idx].m_countA = it->second.m_a;
        out[idx].m_countB = it->second.m_b;
        out[idx].m_countC = it->second.m_c;
        idx++;
    }
    count = (unsigned char)idx;
}
```
