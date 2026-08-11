# _Z19GetRandomOptionNameP11DnfItemInfoPci

`GetRandomOptionName(DnfItemInfo*, char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8051064` | `0x195` | `0x8057885` | `0x1bf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,113 +1,124 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
+sub    $0x7c,%esp
 mov    0x8(%ebp),%eax
 movzbl 0x27(%eax),%eax
 test   %al,%al
 je     <T> <_Z19GetRandomOptionNameP11DnfItemInfoPci+0x23>
 mov    0x8(%ebp),%eax
 movzbl 0x2a(%eax),%eax
+movzbl %al,%eax
 and    $0x3,%eax
-movzbl %al,%edi
 jmp    <T> <_Z19GetRandomOptionNameP11DnfItemInfoPci+0x28>
-mov    $0xffffffff,%edi
+mov    $0xffffffff,%eax
+mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 movzbl 0x26(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x34(%ebp)
+mov    %al,-0x22(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1d,%eax
 movl   $0x2,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12RandomOption16get_second_valueE25ENUM_RANDOM_OPTION_NUMBER>
-movzbl %al,%eax
-mov    %eax,-0x30(%ebp)
+mov    %al,-0x21(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1d,%eax
 movl   $0x2,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12RandomOption15get_first_valueE25ENUM_RANDOM_OPTION_NUMBER>
-movzbl %al,%eax
-mov    %eax,-0x2c(%ebp)
+mov    %al,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1d,%eax
 movl   $0x2,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12RandomOption16get_option_indexE25ENUM_RANDOM_OPTION_NUMBER>
-movzbl %al,%eax
-mov    %eax,-0x28(%ebp)
+mov    %al,-0x1f(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1d,%eax
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12RandomOption16get_second_valueE25ENUM_RANDOM_OPTION_NUMBER>
-movzbl %al,%eax
-mov    %eax,-0x24(%ebp)
+mov    %al,-0x1e(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1d,%eax
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12RandomOption15get_first_valueE25ENUM_RANDOM_OPTION_NUMBER>
-movzbl %al,%eax
-mov    %eax,-0x20(%ebp)
+mov    %al,-0x1d(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1d,%eax
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12RandomOption16get_option_indexE25ENUM_RANDOM_OPTION_NUMBER>
-movzbl %al,%eax
-mov    %eax,-0x1c(%ebp)
+mov    %al,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1d,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12RandomOption16get_second_valueE25ENUM_RANDOM_OPTION_NUMBER>
-movzbl %al,%esi
+mov    %al,-0x1b(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1d,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12RandomOption15get_first_valueE25ENUM_RANDOM_OPTION_NUMBER>
-movzbl %al,%ebx
+mov    %al,-0x1a(%ebp)
 mov    0x8(%ebp),%eax
 add    $0x1d,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12RandomOption16get_option_indexE25ENUM_RANDOM_OPTION_NUMBER>
-movzbl %al,%ecx
+mov    %al,-0x19(%ebp)
+movzbl -0x22(%ebp),%ecx
+movzbl -0x21(%ebp),%edi
+movzbl -0x20(%ebp),%eax
+mov    %eax,-0x44(%ebp)
+movzbl -0x1f(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+movzbl -0x1e(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+movzbl -0x1d(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+movzbl -0x1c(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+movzbl -0x1b(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+movzbl -0x1a(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+movzbl -0x19(%ebp),%esi
 mov    0x8(%ebp),%eax
 mov    0x1(%eax),%edx
 mov    0x10(%ebp),%eax
-mov    %edi,0x38(%esp)
-mov    -0x34(%ebp),%edi
-mov    %edi,0x34(%esp)
-mov    -0x30(%ebp),%edi
+mov    %ebx,0x38(%esp)
+mov    %ecx,0x34(%esp)
 mov    %edi,0x30(%esp)
-mov    -0x2c(%ebp),%edi
-mov    %edi,0x2c(%esp)
-mov    -0x28(%ebp),%edi
-mov    %edi,0x28(%esp)
-mov    -0x24(%ebp),%edi
-mov    %edi,0x24(%esp)
-mov    -0x20(%ebp),%edi
-mov    %edi,0x20(%esp)
-mov    -0x1c(%ebp),%edi
-mov    %edi,0x1c(%esp)
-mov    %esi,0x18(%esp)
-mov    %ebx,0x14(%esp)
-mov    %ecx,0x10(%esp)
+mov    -0x44(%ebp),%ecx
+mov    %ecx,0x2c(%esp)
+mov    -0x40(%ebp),%ecx
+mov    %ecx,0x28(%esp)
+mov    -0x3c(%ebp),%ecx
+mov    %ecx,0x24(%esp)
+mov    -0x38(%ebp),%ecx
+mov    %ecx,0x20(%esp)
+mov    -0x34(%ebp),%ecx
+mov    %ecx,0x1c(%esp)
+mov    -0x30(%ebp),%ecx
+mov    %ecx,0x18(%esp)
+mov    -0x2c(%ebp),%ecx
+mov    %ecx,0x14(%esp)
+mov    %esi,0x10(%esp)
 mov    %edx,0xc(%esp)
 movl   $"@%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d@",0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-add    $0x6c,%esp
+add    $0x7c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

void GetRandomOptionName(DnfItemInfo *item,char *itemName,int itemNameLength)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  
  if ((item->random_option_).modify_option_.option_index_ == '\0') {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = (uint)((item->random_option_).modify_seed_.field_0.seed_ & 3);
  }
  bVar1 = (item->random_option_).seed_.field_0.seed_;
  bVar2 = RandomOption::get_second_value(&item->random_option_,ENUM_RANDOM_OPTION_THIRD);
  bVar3 = RandomOption::get_first_value(&item->random_option_,ENUM_RANDOM_OPTION_THIRD);
  bVar4 = RandomOption::get_option_index(&item->random_option_,ENUM_RANDOM_OPTION_THIRD);
  bVar5 = RandomOption::get_second_value(&item->random_option_,ENUM_RANDOM_OPTION_SECOND);
  bVar6 = RandomOption::get_first_value(&item->random_option_,ENUM_RANDOM_OPTION_SECOND);
  bVar7 = RandomOption::get_option_index(&item->random_option_,ENUM_RANDOM_OPTION_SECOND);
  bVar8 = RandomOption::get_second_value(&item->random_option_,ENUM_RANDOM_OPTION_FIRST);
  bVar9 = RandomOption::get_first_value(&item->random_option_,ENUM_RANDOM_OPTION_FIRST);
  bVar10 = RandomOption::get_option_index(&item->random_option_,ENUM_RANDOM_OPTION_FIRST);
  snprintf(itemName,itemNameLength,"@%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d@",item->item_id,
           (uint)bVar10,(uint)bVar9,(uint)bVar8,(uint)bVar7,(uint)bVar6,(uint)bVar5,(uint)bVar4,
           (uint)bVar3,(uint)bVar2,(uint)bVar1,uVar11);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp)（约第 147 行）：

```cpp
void GetRandomOptionName(DnfItemInfo* item, char* itemName, int itemNameLength)
{
    // Original places the non-zero (seed&3) branch first (test/je to -1 path).
    register unsigned int uVar11 = (item->random_option_.modify_option_.option_index_ != '\0')
        ? (unsigned int)(item->random_option_.modify_seed_.seed_ & 3)
        : 0xffffffff;
    unsigned char bVar1 = item->random_option_.seed_.seed_;
    unsigned char bVar2 = item->random_option_.get_second_value(ENUM_RANDOM_OPTION_THIRD);
    unsigned char bVar3 = item->random_option_.get_first_value(ENUM_RANDOM_OPTION_THIRD);
    unsigned char bVar4 = item->random_option_.get_option_index(ENUM_RANDOM_OPTION_THIRD);
    unsigned char bVar5 = item->random_option_.get_second_value(ENUM_RANDOM_OPTION_SECOND);
    unsigned char bVar6 = item->random_option_.get_first_value(ENUM_RANDOM_OPTION_SECOND);
    unsigned char bVar7 = item->random_option_.get_option_index(ENUM_RANDOM_OPTION_SECOND);
    unsigned char bVar8 = item->random_option_.get_second_value(ENUM_RANDOM_OPTION_FIRST);
    unsigned char bVar9 = item->random_option_.get_first_value(ENUM_RANDOM_OPTION_FIRST);
    unsigned char bVar10 = item->random_option_.get_option_index(ENUM_RANDOM_OPTION_FIRST);
    snprintf(itemName, itemNameLength, "@%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d@",
             item->item_id, (unsigned int)bVar10, (unsigned int)bVar9, (unsigned int)bVar8,
             (unsigned int)bVar7, (unsigned int)bVar6, (unsigned int)bVar5,
             (unsigned int)bVar4, (unsigned int)bVar3, (unsigned int)bVar2,
             (unsigned int)bVar1, uVar11);
}
```
