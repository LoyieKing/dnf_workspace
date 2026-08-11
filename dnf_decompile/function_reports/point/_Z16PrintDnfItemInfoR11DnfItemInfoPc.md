# _Z16PrintDnfItemInfoR11DnfItemInfoPc

`PrintDnfItemInfo(DnfItemInfo&, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x805ba37` | `0x8b` | `0x804fe98` | `0x89` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,47 +1,47 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x5c,%esp
+sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %eax,-0x1c(%ebp)
+mov    0xc(%eax),%esi
 mov    0x8(%ebp),%eax
 movzwl 0xa(%eax),%eax
-movzwl %ax,%edi
+movzwl %ax,%ebx
 mov    0x8(%ebp),%eax
-mov    0x6(%eax),%esi
+mov    0x6(%eax),%ecx
 mov    0x8(%ebp),%eax
 movzbl 0x5(%eax),%eax
-shr    $0x5,%al
-movzbl %al,%ebx
+movzbl %al,%eax
+mov    %eax,%edx
+shr    $0x5,%edx
+mov    %edx,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 movzbl 0x5(%eax),%eax
-and    $0x1f,%eax
-movzbl %al,%ecx
+movzbl %al,%eax
+mov    %eax,%edi
+and    $0x1f,%edi
 mov    0x8(%ebp),%eax
 mov    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 movzbl %al,%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    %edi,0x1c(%esp)
-mov    %esi,0x18(%esp)
-mov    %ebx,0x14(%esp)
-mov    %ecx,0x10(%esp)
+mov    %esi,0x20(%esp)
+mov    %ebx,0x1c(%esp)
+mov    %ecx,0x18(%esp)
+mov    -0x1c(%ebp),%ecx
+mov    %ecx,0x14(%esp)
+mov    %edi,0x10(%esp)
 mov    %edx,0xc(%esp)
-mov    -0x2c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"s:%d, id:%d,up:%d,sc:%d,add:%d,en:%d,ex:%d",0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-add    $0x5c,%esp
+add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

void PrintDnfItemInfo(DnfItemInfo *item,char *pOutBuffer)

{
  sprintf(pOutBuffer,"s:%d, id:%d,up:%d,sc:%d,add:%d,en:%d,ex:%d",(uint)item->seal,item->item_id,
          (uint)((item->field_2).uniItemAttr & 0x1f),(uint)((item->field_2).uniItemAttr >> 5),
          item->add_info,(uint)item->endurance,item->extendInfo);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.cpp)（约第 910 行）：

```cpp
void PrintDnfItemInfo(DnfItemInfo& itemInfo, char* out)
{
    sprintf(out, "s:%d, id:%d,up:%d,sc:%d,add:%d,en:%d,ex:%d",
            (unsigned int)itemInfo.seal, itemInfo.item_id,
            (unsigned int)(itemInfo.uniItemAttr & 0x1f),
            ((unsigned int)itemInfo.uniItemAttr) >> 5,
            itemInfo.add_info, (unsigned int)itemInfo.endurance, itemInfo.extendInfo);
}
```
