# _ZN10CDBManager18updateCollectItemsEhijh

`CDBManager::updateCollectItems(unsigned char, int, unsigned int, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808701a` | `0x1a7` | `0x8051b10` | `0x1a0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,111 +1,109 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
 mov    0xc(%ebp),%edx
 mov    0x18(%ebp),%eax
 mov    %dl,-0x2c(%ebp)
 mov    %al,-0x30(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
 jne    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x2b>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a5>
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x19e>
 cmpb   $0x0,-0x30(%ebp)
 jne    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xbe>
 cmpl   $0x0,0x10(%ebp)
 jg     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x45>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a5>
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x19e>
 cmpl   $0x0,0x14(%ebp)
 jne    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x81>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movzbl -0x2c(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate collect_items set cur_count = cur_count + %d where server_info = %d",0x8(%esp)
 movl   $0x4f4d,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
+mov    %al,-0x9(%ebp)
 jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xf3>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movzbl -0x2c(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"upDate collect_items set cur_count = cur_count + %d, full_time = from_unixtime(%d) where server_info = %d",0x8(%esp)
 movl   $0x4f4d,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
+mov    %al,-0x9(%ebp)
 jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0xf3>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movzbl -0x2c(%ebp),%eax
 mov    %eax,0x10(%esp)
 movl   $0x0,0xc(%esp)
 movl   $"upDate collect_items set change_flag = %d where server_info = %d",0x8(%esp)
 movl   $0x4f4d,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+mov    %al,-0x9(%ebp)
+movzbl -0x9(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x13b>
 movl   $0x29d6,0x8(%esp)
 movl   $&_ZZN10CDBManager18updateCollectItemsEhijhE12__FUNCTION__,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"upDate collect_items set Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x19e>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%edx
+movl   $0x4f4d,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x199>
+movl   $0x29df,0x8(%esp)
+movl   $&_ZZN10CDBManager18updateCollectItemsEhijhE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"upDate collect_items set Error",0x8(%esp)
+movl   $"updateCollectItems Query(exec) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a5>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
-movl   $0x4f4d,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a0>
-movl   $0x29df,0x8(%esp)
-movl   $&_ZZN10CDBManager18updateCollectItemsEhijhE12__FUNCTION__,0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"updateCollectItems Query(exec) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x1a5>
+jmp    <T> <_ZN10CDBManager18updateCollectItemsEhijh+0x19e>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::updateCollectItems(unsigned char, int, unsigned int, unsigned char) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager18updateCollectItemsEhijh
          (CDBManager *this,uchar param_1,int param_2,uint param_3,uchar param_4)

{
  undefined4 uVar1;
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [11];
  char local_11;
  int *local_10;
  
  local_10 = *(int **)(this + 0x24);
  if (local_10 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_4 == '\0') {
      if (param_2 < 1) {
        return 1;
      }
      if (param_3 == 0) {
        local_11 = (**(code **)(*local_10 + 0x1c))
                             (local_10,0x4f4d,
                              "upDate collect_items set cur_count = cur_count + %d where server_info = %d"
                              ,param_2,param_1);
      }
      else {
        local_11 = (**(code **)(*local_10 + 0x1c))
                             (local_10,0x4f4d,
                              "upDate collect_items set cur_count = cur_count + %d, full_time = from_unixtime(%d) where server_info = %d"
                              ,param_2,param_3,param_1);
      }
    }
    else {
      local_11 = (**(code **)(*local_10 + 0x1c))
                           (local_10,0x4f4d,
                            "upDate collect_items set change_flag = %d where server_info = %d",0,
                            param_1);
    }
    if (local_11 == '\x01') {
      local_11 = (**(code **)(*local_10 + 0x20))(local_10,0x4f4d);
      if (local_11 == '\x01') {
        uVar1 = 1;
      }
      else {
        CMyFileLog::CMyFileLog(local_1c,"updateCollectItems",0x29df);
        CMyFileLog::operator()(local_1c,"./log/DBQueryErr","updateCollectItems Query(exec) Error");
        uVar1 = 0;
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_24,"updateCollectItems",0x29d6);
      CMyFileLog::operator()(local_24,"./log/DBQueryErr","upDate collect_items set Error");
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 287 个文件*
