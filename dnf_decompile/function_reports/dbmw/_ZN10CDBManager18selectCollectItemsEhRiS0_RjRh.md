# _ZN10CDBManager18selectCollectItemsEhRiS0_RjRh

`CDBManager::selectCollectItems(unsigned char, int&, int&, unsigned int&, unsigned char&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8086c8a` | `0x390` | `0x805f1c0` | `0x34c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,232 +1,209 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x78,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x5c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%eax
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
 jne    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x25>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movzbl -0x5c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect cur_count, total_count, change_flag, unix_timestamp(full_time) from collect_items where server_info = %d",0x8(%esp)
 movl   $0x4f4c,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x9d>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x96>
 movl   $0x2977,0x8(%esp)
 movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"seLect cur_count, total_count from collect_items Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f4c,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x105>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0xf7>
 movl   $0x2981,0x8(%esp)
 movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"selectCollectItems Query(exec) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x160>
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x152>
 movl   $0x2987,0x8(%esp)
 movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"selectCollectItems (Row_Data Not Exist) Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x24,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x1ab>
+movl   $0x298e,0x8(%esp)
+movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"selectCollectItems Query(fetch) Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+mov    0x10(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x213>
+movl   $0x2997,0x8(%esp)
+movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"selectCollectItems (get_uint(cur_count_)) Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+mov    0x14(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x1,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x27b>
+movl   $0x299e,0x8(%esp)
+movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"selectCollectItems (get_uint(total_count_) Error",0x8(%esp)
+movl   $"./log/DBQueryErr",0x4(%esp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x58,%eax
+mov    (%eax),%edx
+mov    0x1c(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x2,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x2e0>
+movl   $0x29a5,0x8(%esp)
+movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"selectCollectItems (Row_Data Not Exist) Error",0x8(%esp)
+movl   $"selectCollectItems (get_ubyte(change_flag) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x24,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x1c0>
-movl   $0x298e,0x8(%esp)
-movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"selectCollectItems Query(fetch) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-movl   $0x0,-0xc(%ebp)
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x239>
-movl   $0x2997,0x8(%esp)
-movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"selectCollectItems (get_uint(cur_count_)) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    0x14(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x2ab>
-movl   $0x299e,0x8(%esp)
-movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%edx
+mov    0x18(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $0x3,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x345>
+movl   $0x29ac,0x8(%esp)
+movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"selectCollectItems (get_uint(total_count_) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x58,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    0x1c(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x31a>
-movl   $0x29a5,0x8(%esp)
-movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"selectCollectItems (get_ubyte(change_flag) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    0x18(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-mov    %al,-0x11(%ebp)
-movzbl -0x11(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x389>
-movl   $0x29ac,0x8(%esp)
-movl   $&_ZZN10CDBManager18selectCollectItemsEhRiS0_RjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"selectCollectItems (get_uint(total_count_) Error",0x8(%esp)
-movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x38e>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh+0x34a>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::selectCollectItems(unsigned char, int&, int&, unsigned int&, unsigned char&) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh
          (CDBManager *this,uchar param_1,int *param_2,int *param_3,uint *param_4,uchar *param_5)

{
  undefined4 uVar1;
  int iVar2;
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  CMyFileLog local_28 [8];
  CMyFileLog local_20 [11];
  char local_15;
  int *local_14;
  int local_10;
  
  local_14 = *(int **)(this + 0x24);
  if (local_14 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    local_15 = (**(code **)(*local_14 + 0x1c))
                         (local_14,0x4f4c,
                          "seLect cur_count, total_count, change_flag, unix_timestamp(full_time) from collect_items where server_info = %d"
                          ,param_1);
    if (local_15 == '\x01') {
      local_15 = (**(code **)(*local_14 + 0x20))(local_14,0x4f4c);
      if (local_15 == '\x01') {
        iVar2 = (**(code **)(*local_14 + 0x6c))(local_14);
        if (iVar2 == 0) {
          CMyFileLog::CMyFileLog(local_48,"selectCollectItems",0x2987);
          CMyFileLog::operator()
                    (local_48,"./log/DBQueryErr","selectCollectItems (Row_Data Not Exist) Error");
          uVar1 = 0;
        }
        else {
          local_15 = (**(code **)(*local_14 + 0x24))(local_14);
          if (local_15 == '\x01') {
            local_10 = 1;
            local_15 = (**(code **)(*local_14 + 0x34))(local_14,0,param_2);
            iVar2 = local_10;
            if (local_15 == '\x01') {
              local_10 = local_10 + 1;
              local_15 = (**(code **)(*local_14 + 0x34))(local_14,iVar2,param_3);
              iVar2 = local_10;
              if (local_15 == '\x01') {
                local_10 = local_10 + 1;
                local_15 = (**(code **)(*local_14 + 0x58))(local_14,iVar2,param_5);
                iVar2 = local_10;
                if (local_15 == '\x01') {
                  local_10 = local_10 + 1;
                  local_15 = (**(code **)(*local_14 + 0x38))(local_14,iVar2,param_4);
                  if (local_15 == '\x01') {
                    uVar1 = 1;
                  }
                  else {
                    CMyFileLog::CMyFileLog(local_20,"selectCollectItems",0x29ac);
                    CMyFileLog::operator()
                              (local_20,"./log/DBQueryErr",
                               "selectCollectItems (get_uint(total_count_) Error");
                    uVar1 = 0;
                  }
                }
                else {
                  CMyFileLog::CMyFileLog(local_28,"selectCollectItems",0x29a5);
                  CMyFileLog::operator()
                            (local_28,"./log/DBQueryErr",
                             "selectCollectItems (get_ubyte(change_flag) Error");
                  uVar1 = 0;
                }
              }
              else {
                CMyFileLog::CMyFileLog(local_30,"selectCollectItems",0x299e);
                CMyFileLog::operator()
                          (local_30,"./log/DBQueryErr",
                           "selectCollectItems (get_uint(total_count_) Error");
                uVar1 = 0;
              }
            }
            else {
              CMyFileLog::CMyFileLog(local_38,"selectCollectItems",0x2997);
              CMyFileLog::operator()
                        (local_38,"./log/DBQueryErr",
                         "selectCollectItems (get_uint(cur_count_)) Error");
              uVar1 = 0;
            }
          }
          else {
            CMyFileLog::CMyFileLog(local_40,"selectCollectItems",0x298e);
            CMyFileLog::operator()
                      (local_40,"./log/DBQueryErr","selectCollectItems Query(fetch) Error");
            uVar1 = 0;
          }
        }
      }
      else {
        CMyFileLog::CMyFileLog(local_50,"selectCollectItems",0x2981);
        CMyFileLog::operator()(local_50,"./log/DBQueryErr","selectCollectItems Query(exec) Error");
        uVar1 = 0;
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_58,"selectCollectItems",0x2977);
      CMyFileLog::operator()
                (local_58,"./log/DBQueryErr",
                 "seLect cur_count, total_count from collect_items Error");
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
