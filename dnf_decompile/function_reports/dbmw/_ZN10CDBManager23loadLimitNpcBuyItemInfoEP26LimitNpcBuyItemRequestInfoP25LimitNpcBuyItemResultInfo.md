# _ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo

`CDBManager::loadLimitNpcBuyItemInfo(LimitNpcBuyItemRequestInfo*, LimitNpcBuyItemResultInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8086350` | `0x384` | `0x8063c7c` | `0x36e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,234 +1,231 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x68,%esp
+push   %ebx
+sub    $0x64,%esp
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
-jne    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x1f>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+jne    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x20>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x368>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movl   $0x1e,0xc(%esp)
 movl   $"seLect item_index, max_count, sell_count from limit_npc_item limit %d",0x8(%esp)
 movl   $0x4f45,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x97>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x91>
 movl   $0x2811,0x8(%esp)
 movl   $&_ZZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfoE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"seLect item_index, max_count, sell_count from limit_npc_item Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x368>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4f45,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0xff>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0xf2>
 movl   $0x281a,0x8(%esp)
 movl   $&_ZZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfoE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"loadLimitNpcBuyItemInfo Query(exec) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x368>
+mov    0x10(%ebp),%eax
+lea    0xa(%eax),%ebx
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    0x10(%ebp),%edx
-mov    %eax,0xa(%edx)
+mov    %eax,(%ebx)
 mov    0x10(%ebp),%eax
-mov    0xa(%eax),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x161>
+jne    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x158>
 movl   $0x2821,0x8(%esp)
 movl   $&_ZZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfoE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"loadLimitNpcBuyItemInfo (Row_Data Not Exist) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x368>
 movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x358>
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x33c>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x1cd>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x1bd>
 movl   $0x282a,0x8(%esp)
 movl   $&_ZZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfoE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"loadLimitNpcBuyItemInfo Query(fetch) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x368>
 movl   $0x0,-0xc(%ebp)
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%ecx
+mov    0x10(%ebp),%ebx
 mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-add    0x10(%ebp),%eax
-lea    0xe(%eax),%edx
+add    $0xe,%eax
+lea    (%ebx,%eax,1),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x255>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x241>
 movl   $0x2833,0x8(%esp)
 movl   $&_ZZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfoE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"loadLimitNpcBuyItemInfo (get_uint(itemId)) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x368>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%ecx
+mov    0x10(%ebp),%ebx
 mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-add    0x10(%ebp),%eax
-lea    0x12(%eax),%edx
+add    $0x12,%eax
+lea    (%ebx,%eax,1),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x2d6>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x2be>
 movl   $0x283a,0x8(%esp)
 movl   $&_ZZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfoE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"loadLimitNpcBuyItemInfo (get_uint(maxCount) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x368>
 mov    -0x14(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%ecx
+mov    0x10(%ebp),%ebx
 mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-add    0x10(%ebp),%eax
-lea    0x16(%eax),%edx
+add    $0x16,%eax
+lea    (%ebx,%eax,1),%edx
 mov    -0xc(%ebp),%eax
 addl   $0x1,-0xc(%ebp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   *%ecx
-mov    %al,-0x15(%ebp)
-movzbl -0x15(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x354>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x338>
 movl   $0x2841,0x8(%esp)
 movl   $&_ZZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfoE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"loadLimitNpcBuyItemInfo (get_uint(sellCount)) Error",0x8(%esp)
 movl   $"./log/DBQueryErr",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x382>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x368>
 addl   $0x1,-0x10(%ebp)
 mov    0x10(%ebp),%eax
-mov    0xa(%eax),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 cmp    -0x10(%ebp),%eax
-jbe    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x370>
+jle    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x356>
 cmpl   $0x1d,-0x10(%ebp)
-ja     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x370>
+jg     <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x356>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x375>
-mov    $0x0,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x16d>
+jmp    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x35b>
+mov    $0x0,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo+0x164>
 mov    $0x1,%eax
-leave
+add    $0x64,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::loadLimitNpcBuyItemInfo(LimitNpcBuyItemRequestInfo*, LimitNpcBuyItemResultInfo*) */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo
          (CDBManager *this,LimitNpcBuyItemRequestInfo *param_1,LimitNpcBuyItemResultInfo *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [11];
  char local_19;
  int *local_18;
  uint local_14;
  int local_10;
  
  local_18 = *(int **)(this + 8);
  if (local_18 != (int *)0x0) {
    local_19 = (**(code **)(*local_18 + 0x1c))
                         (local_18,0x4f45,
                          "seLect item_index, max_count, sell_count from limit_npc_item limit %d",
                          0x1e);
    if (local_19 == '\x01') {
      local_19 = (**(code **)(*local_18 + 0x20))(local_18,0x4f45);
      if (local_19 == '\x01') {
        uVar3 = (**(code **)(*local_18 + 0x6c))(local_18);
        *(undefined4 *)(param_2 + 10) = uVar3;
        if (*(int *)(param_2 + 10) == 0) {
          CMyFileLog::CMyFileLog(local_44,"loadLimitNpcBuyItemInfo",0x2821);
          CMyFileLog::operator()
                    (local_44,"./log/DBQueryErr",
                     "loadLimitNpcBuyItemInfo (Row_Data Not Exist) Error");
        }
        else {
          local_14 = 0;
          while( true ) {
            if ((local_14 < *(uint *)(param_2 + 10)) && (local_14 < 0x1e)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (!bVar1) {
              return 1;
            }
            local_19 = (**(code **)(*local_18 + 0x24))(local_18);
            if (local_19 != '\x01') {
              CMyFileLog::CMyFileLog(local_3c,"loadLimitNpcBuyItemInfo",0x282a);
              CMyFileLog::operator()
                        (local_3c,"./log/DBQueryErr","loadLimitNpcBuyItemInfo Query(fetch) Error");
              return 0;
            }
            local_10 = 1;
            local_19 = (**(code **)(*local_18 + 0x38))(local_18,0,param_2 + local_14 * 0xc + 0xe);
            iVar2 = local_10;
            if (local_19 != '\x01') {
              CMyFileLog::CMyFileLog(local_34,"loadLimitNpcBuyItemInfo",0x2833);
              CMyFileLog::operator()
                        (local_34,"./log/DBQueryErr",
                         "loadLimitNpcBuyItemInfo (get_uint(itemId)) Error");
              return 0;
            }
            local_10 = local_10 + 1;
            local_19 = (**(code **)(*local_18 + 0x38))
                                 (local_18,iVar2,param_2 + local_14 * 0xc + 0x12);
            iVar2 = local_10;
            if (local_19 != '\x01') {
              CMyFileLog::CMyFileLog(local_2c,"loadLimitNpcBuyItemInfo",0x283a);
              CMyFileLog::operator()
                        (local_2c,"./log/DBQueryErr",
                         "loadLimitNpcBuyItemInfo (get_uint(maxCount) Error");
              return 0;
            }
            local_10 = local_10 + 1;
            local_19 = (**(code **)(*local_18 + 0x38))
                                 (local_18,iVar2,param_2 + local_14 * 0xc + 0x16);
            if (local_19 != '\x01') break;
            local_14 = local_14 + 1;
            local_19 = '\x01';
          }
          CMyFileLog::CMyFileLog(local_24,"loadLimitNpcBuyItemInfo",0x2841);
          CMyFileLog::operator()
                    (local_24,"./log/DBQueryErr",
                     "loadLimitNpcBuyItemInfo (get_uint(sellCount)) Error");
        }
      }
      else {
        CMyFileLog::CMyFileLog(local_4c,"loadLimitNpcBuyItemInfo",0x281a);
        CMyFileLog::operator()
                  (local_4c,"./log/DBQueryErr","loadLimitNpcBuyItemInfo Query(exec) Error");
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_54,"loadLimitNpcBuyItemInfo",0x2811);
      CMyFileLog::operator()
                (local_54,"./log/DBQueryErr",
                 "seLect item_index, max_count, sell_count from limit_npc_item Error");
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
