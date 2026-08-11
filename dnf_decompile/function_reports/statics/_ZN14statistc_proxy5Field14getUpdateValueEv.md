# _ZN14statistc_proxy5Field14getUpdateValueEv

`statistc_proxy::Field::getUpdateValue()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x804cdb6` | `0x1d5` | `0x8069d9e` | `0x1d5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,115 +1,115 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 mov    $&_ZGVZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,%eax
 movzbl (%eax),%eax
 test   %al,%al
 jne    <T> <_ZN14statistc_proxy5Field14getUpdateValueEv+0x86>
 movl   $&_ZGVZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,(%esp)
 call   <T> <__cxa_guard_acquire>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN14statistc_proxy5Field14getUpdateValueEv+0x86>
 mov    $0x0,%ebx
 movl   $&_ZZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,(%esp)
 call   <T> <_ZNSsC1Ev>
 movl   $&_ZGVZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,(%esp)
 call   <T> <__cxa_guard_release>
 mov    $&_ZNSsD2Ev,%eax
-movl   $&data#b8e3732b(.rodata),0x8(%esp)
+movl   $&data#509bacd4(.data),0x8(%esp)
 movl   $&_ZZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_atexit>
 jmp    <T> <_ZN14statistc_proxy5Field14getUpdateValueEv+0x86>
 mov    %edx,%esi
 mov    %eax,%edi
 test   %bl,%bl
 jne    <T> <_ZN14statistc_proxy5Field14getUpdateValueEv+0x7a>
 movl   $&_ZGVZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,(%esp)
 call   <T> <__cxa_guard_abort>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 movl   $&_ZZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,(%esp)
 call   <T> <_ZNSs5clearEv>
 mov    0x8(%ebp),%edx
 lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsySt4lessISsESaISt4pairIKSsyEEE5beginEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN14statistc_proxy5Field14getUpdateValueEv+0x18f>
 movl   $&_ZZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,(%esp)
 call   <T> <_ZNKSs6lengthEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN14statistc_proxy5Field14getUpdateValueEv+0xd5>
 movl   $",",0x4(%esp)
 movl   $&_ZZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,(%esp)
 call   <T> <_ZNSspLEPKc>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsyEEptEv>
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0x4(%esp)
 movl   $&_ZZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,(%esp)
 call   <T> <_ZNSspLEPKc>
 movl   $"=",0x4(%esp)
 movl   $&_ZZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,(%esp)
 call   <T> <_ZNSspLEPKc>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsyEEptEv>
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0x4(%esp)
 movl   $&_ZZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,(%esp)
 call   <T> <_ZNSspLEPKc>
 movl   $"+",0x4(%esp)
 movl   $&_ZZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,(%esp)
 call   <T> <_ZNSspLEPKc>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsyEEptEv>
 mov    0x8(%eax),%edx
 mov    0x4(%eax),%eax
 mov    %eax,0x8(%esp)
 mov    %edx,0xc(%esp)
 movl   $"%llu",0x4(%esp)
 movl   $&_ZZN14statistc_proxy5Field14getUpdateValueEvE3tmp,(%esp)
 call   <T> <sprintf>
 movl   $&_ZZN14statistc_proxy5Field14getUpdateValueEvE3tmp,0x4(%esp)
 movl   $&_ZZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,(%esp)
 call   <T> <_ZNSspLEPKc>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKSsyEEppEv>
 mov    0x8(%ebp),%edx
 lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsySt4lessISsESaISt4pairIKSsyEEE3endEv>
 sub    $0x4,%esp
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsyEEneERKS3_>
 test   %al,%al
 jne    <T> <_ZN14statistc_proxy5Field14getUpdateValueEv+0xac>
 movl   $&_ZZN14statistc_proxy5Field14getUpdateValueEvE10queryPiece,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* statistc_proxy::Field::getUpdateValue() */

void statistc_proxy::Field::_ZN14statistc_proxy5Field14getUpdateValueEv(void)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  char *pcVar4;
  map<std::string,unsigned_long_long,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long_long>>>
  local_24 [4];
  map<std::string,unsigned_long_long,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long_long>>>
  local_20 [16];
  
  if (getUpdateValue()::queryPiece == '\0') {
    iVar2 = __cxa_guard_acquire(&getUpdateValue()::queryPiece);
    if (iVar2 != 0) {
                    /* try { // try from 0804cdec to 0804cdf0 has its CatchHandler @ 0804ce1c */
      std::string::string((string *)&getUpdateValue()::queryPiece);
      __cxa_guard_release(&getUpdateValue()::queryPiece);
      __cxa_atexit(std::string::~string,&getUpdateValue()::queryPiece,&__dso_handle);
    }
  }
  std::string::clear((string *)&getUpdateValue()::queryPiece);
  std::
  map<std::string,unsigned_long_long,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long_long>>>
  ::begin(local_24);
  while( true ) {
    std::
    map<std::string,unsigned_long_long,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long_long>>>
    ::end(local_20);
    cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,unsigned_long_long>>::operator!=
                      ((_Rb_tree_iterator<std::pair<std::string_const,unsigned_long_long>> *)
                       local_24,(_Rb_tree_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = std::string::length((string *)&getUpdateValue()::queryPiece);
    if (iVar2 != 0) {
      std::string::operator+=((string *)&getUpdateValue()::queryPiece,",");
    }
    psVar3 = (string *)
             std::_Rb_tree_iterator<std::pair<std::string_const,unsigned_long_long>>::operator->
                       ((_Rb_tree_iterator<std::pair<std::string_const,unsigned_long_long>> *)
                        local_24);
    pcVar4 = (char *)std::string::c_str(psVar3);
    std::string::operator+=((string *)&getUpdateValue()::queryPiece,pcVar4);
    std::string::operator+=((string *)&getUpdateValue()::queryPiece,"=");
    psVar3 = (string *)
             std::_Rb_tree_iterator<std::pair<std::string_const,unsigned_long_long>>::operator->
                       ((_Rb_tree_iterator<std::pair<std::string_const,unsigned_long_long>> *)
                        local_24);
    pcVar4 = (char *)std::string::c_str(psVar3);
    std::string::operator+=((string *)&getUpdateValue()::queryPiece,pcVar4);
    std::string::operator+=((string *)&getUpdateValue()::queryPiece,"+");
    iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,unsigned_long_long>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,unsigned_long_long>> *)
                       local_24);
    sprintf(getUpdateValue()::tmp,"%llu",*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
    std::string::operator+=((string *)&getUpdateValue()::queryPiece,getUpdateValue()::tmp);
    std::_Rb_tree_iterator<std::pair<std::string_const,unsigned_long_long>>::operator++
              ((_Rb_tree_iterator<std::pair<std::string_const,unsigned_long_long>> *)local_24);
  }
  std::string::c_str((string *)&getUpdateValue()::queryPiece);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/StatisticProxy.cpp](source/DNFServer/GameServer/Statics/StatisticProxy.cpp)（约第 102 行）：

```cpp
char* Field::getUpdateValue()
{
    static std::string queryPiece;
    static char tmp[32];
    queryPiece.clear();
    for (std::map<std::string, unsigned long long>::iterator it = m_fields.begin();
         it != m_fields.end(); ++it)
    {
        if (queryPiece.length() != 0)
        {
            queryPiece += ",";
        }
        queryPiece += it->first.c_str();
        queryPiece += "=";
        queryPiece += it->first.c_str();
        queryPiece += "+";
        sprintf(tmp, "%llu", it->second);
        queryPiece += tmp;
    }
    return (char*)queryPiece.c_str();
}
```
