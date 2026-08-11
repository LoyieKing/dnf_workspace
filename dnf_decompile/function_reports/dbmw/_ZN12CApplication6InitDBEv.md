# _ZN12CApplication6InitDBEv

`CApplication::InitDB()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x806d25c` | `0x7ec` | `0x806d5ba` | `0x7ec` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,504 +1,504 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x160,%esp
 mov    0x8(%ebp),%eax
 lea    0x50(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication>
 movl   $"Application DB Manager Init() Success!",(%esp)
 call   <T> <puts>
 lea    -0x129(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x129(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"E_MASTER_DB",0x4(%esp)
 lea    -0x130(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x130(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication6OpenDBE18ENUM_DB_HANDLE_IDXSs>
 mov    %eax,%ebx
 xor    $0x1,%ebx
 lea    -0x130(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication6InitDBEv+0xca>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x130(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication6InitDBEv+0xac>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x129(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x129(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 test   %bl,%bl
 je     <T> <_ZN12CApplication6InitDBEv+0xe6>
 mov    $0x0,%ebx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7e0>
 lea    -0x148(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEEC1Ev>
 movl   $0x1,-0x110(%ebp)
 lea    -0x118(%ebp),%eax
 movl   $"E_ACCOUNT_DB",0x8(%esp)
 lea    -0x110(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI18ENUM_DB_HANDLE_IDXRA13_KcESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x118(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x120(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsEC1IS0_PKcEEOS_IT_T0_E>
 lea    -0x128(%ebp),%eax
 lea    -0x120(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x148(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEE6insertERKS5_>
 sub    $0x4,%esp
 lea    -0x120(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 jmp    <T> <_ZN12CApplication6InitDBEv+0x189>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x120(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7b4>
 movl   $0x2,-0xf4(%ebp)
 lea    -0xfc(%ebp),%eax
 movl   $"E_GAME_DB",0x8(%esp)
 lea    -0xf4(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI18ENUM_DB_HANDLE_IDXRA10_KcESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0xfc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x104(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsEC1IS0_PKcEEOS_IT_T0_E>
 lea    -0x10c(%ebp),%eax
 lea    -0x104(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x148(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEE6insertERKS5_>
 sub    $0x4,%esp
 lea    -0x104(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 jmp    <T> <_ZN12CApplication6InitDBEv+0x21e>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x104(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7b4>
 movl   $0x3,-0xd8(%ebp)
 lea    -0xe0(%ebp),%eax
 movl   $"E_GAME_DB_2ND",0x8(%esp)
 lea    -0xd8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI18ENUM_DB_HANDLE_IDXRA14_KcESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0xe0(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0xe8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsEC1IS0_PKcEEOS_IT_T0_E>
 lea    -0xf0(%ebp),%eax
 lea    -0xe8(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x148(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEE6insertERKS5_>
 sub    $0x4,%esp
 lea    -0xe8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 jmp    <T> <_ZN12CApplication6InitDBEv+0x2b3>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xe8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7b4>
 movl   $0x4,-0xbc(%ebp)
 lea    -0xc4(%ebp),%eax
 movl   $"E_LOG_DB",0x8(%esp)
 lea    -0xbc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI18ENUM_DB_HANDLE_IDXRA9_KcESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0xc4(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsEC1IS0_PKcEEOS_IT_T0_E>
 lea    -0xd4(%ebp),%eax
 lea    -0xcc(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x148(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEE6insertERKS5_>
 sub    $0x4,%esp
 lea    -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 jmp    <T> <_ZN12CApplication6InitDBEv+0x348>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xcc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7b4>
 movl   $0x6,-0xa0(%ebp)
 lea    -0xa8(%ebp),%eax
 movl   $"E_SSO_DB",0x8(%esp)
 lea    -0xa0(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI18ENUM_DB_HANDLE_IDXRA9_KcESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0xa8(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0xb0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsEC1IS0_PKcEEOS_IT_T0_E>
 lea    -0xb8(%ebp),%eax
 lea    -0xb0(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x148(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEE6insertERKS5_>
 sub    $0x4,%esp
 lea    -0xb0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 jmp    <T> <_ZN12CApplication6InitDBEv+0x3dd>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xb0(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7b4>
 movl   $0x8,-0x84(%ebp)
 lea    -0x8c(%ebp),%eax
 movl   $"E_GUILD_DB",0x8(%esp)
 lea    -0x84(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI18ENUM_DB_HANDLE_IDXRA11_KcESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x8c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x94(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsEC1IS0_PKcEEOS_IT_T0_E>
 lea    -0x9c(%ebp),%eax
 lea    -0x94(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x148(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEE6insertERKS5_>
 sub    $0x4,%esp
 lea    -0x94(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 jmp    <T> <_ZN12CApplication6InitDBEv+0x472>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x94(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7b4>
 movl   $0x5,-0x68(%ebp)
 lea    -0x70(%ebp),%eax
 movl   $"E_WEB_DB",0x8(%esp)
 lea    -0x68(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI18ENUM_DB_HANDLE_IDXRA9_KcESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x70(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsEC1IS0_PKcEEOS_IT_T0_E>
 lea    -0x80(%ebp),%eax
 lea    -0x78(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x148(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEE6insertERKS5_>
 sub    $0x4,%esp
 lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 jmp    <T> <_ZN12CApplication6InitDBEv+0x4ec>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7b4>
 movl   $0xf,-0x4c(%ebp)
 lea    -0x54(%ebp),%eax
 movl   $"E_FRAME_LAG_INDEX_DB",0x8(%esp)
 lea    -0x4c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI18ENUM_DB_HANDLE_IDXRA21_KcESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x54(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsEC1IS0_PKcEEOS_IT_T0_E>
 lea    -0x64(%ebp),%eax
 lea    -0x5c(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x148(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEE6insertERKS5_>
 sub    $0x4,%esp
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 jmp    <T> <_ZN12CApplication6InitDBEv+0x566>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7b4>
 movl   $0x9,-0x30(%ebp)
 lea    -0x38(%ebp),%eax
 movl   $"E_EVENT_DB",0x8(%esp)
 lea    -0x30(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI18ENUM_DB_HANDLE_IDXRA11_KcESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x38(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsEC1IS0_PKcEEOS_IT_T0_E>
 lea    -0x48(%ebp),%eax
 lea    -0x40(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x148(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEE6insertERKS5_>
 sub    $0x4,%esp
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 jmp    <T> <_ZN12CApplication6InitDBEv+0x5e0>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7b4>
 movl   $0xd,-0x14(%ebp)
 lea    -0x1c(%ebp),%eax
 movl   $"E_SE_EVENT_DB",0x8(%esp)
 lea    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairI18ENUM_DB_HANDLE_IDXRA14_KcESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsEC1IS0_PKcEEOS_IT_T0_E>
 lea    -0x2c(%ebp),%eax
 lea    -0x24(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x148(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEE6insertERKS5_>
 sub    $0x4,%esp
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 jmp    <T> <_ZN12CApplication6InitDBEv+0x65a>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIK18ENUM_DB_HANDLE_IDXSsED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7b4>
 lea    -0x14c(%ebp),%eax
 lea    -0x148(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEE5beginEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN12CApplication6InitDBEv+0x76c>
 lea    -0x14c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDXSsEEptEv>
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig13GetDBConnInfoE18ENUM_DB_HANDLE_IDX>
-mov    %eax,%esi
+mov    %eax,%ebx
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig14GetServerGroupEv>
-mov    %eax,%ebx
+mov    %eax,%esi
 lea    -0x14c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDXSsEEptEv>
 mov    (%eax),%eax
-mov    %esi,0xc(%esp)
-mov    %ebx,0x8(%esp)
+mov    %ebx,0xc(%esp)
+mov    %esi,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN12CApplication6InitDBEv+0x6e6>
 mov    $0x0,%ebx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7d2>
 lea    -0x14c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDXSsEEptEv>
 add    $0x4,%eax
 mov    %eax,0x4(%esp)
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1ERKSs>
 lea    -0x14c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDXSsEEptEv>
 mov    (%eax),%eax
 lea    -0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication6OpenDBE18ENUM_DB_HANDLE_IDXSs>
 mov    %eax,%ebx
 xor    $0x1,%ebx
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CApplication6InitDBEv+0x753>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7b4>
 test   %bl,%bl
 je     <T> <_ZN12CApplication6InitDBEv+0x75e>
 mov    $0x0,%ebx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7d2>
 lea    -0x14c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDXSsEEppEv>
 lea    -0x10(%ebp),%eax
 lea    -0x148(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIK18ENUM_DB_HANDLE_IDXSsEEneERKS4_>
 test   %al,%al
 jne    <T> <_ZN12CApplication6InitDBEv+0x67a>
 movl   $"DBMW_ALL_DB Open Success",(%esp)
 call   <T> <puts>
 mov    $0x1,%ebx
 jmp    <T> <_ZN12CApplication6InitDBEv+0x7d2>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x148(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x148(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapI18ENUM_DB_HANDLE_IDXSsSt4lessIS0_ESaISt4pairIKS0_SsEEED1Ev>
 mov    %ebx,%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::InitDB() */

undefined4 __thiscall CApplication::_ZN12CApplication6InitDBEv(CApplication *this)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
  local_150 [4];
  map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
  local_14c [24];
  string local_134 [7];
  allocator local_12d;
  pair local_12c [8];
  pair<ENUM_DB_HANDLE_IDX_const,std::string> local_124 [8];
  ENUM_DB_HANDLE_IDX local_11c [8];
  char local_114 [12];
  pair<ENUM_DB_HANDLE_IDX_const,std::string> local_108 [8];
  ENUM_DB_HANDLE_IDX local_100 [8];
  char local_f8 [12];
  pair<ENUM_DB_HANDLE_IDX_const,std::string> local_ec [8];
  ENUM_DB_HANDLE_IDX local_e4 [8];
  char local_dc [12];
  pair<ENUM_DB_HANDLE_IDX_const,std::string> local_d0 [8];
  ENUM_DB_HANDLE_IDX local_c8 [8];
  char local_c0 [12];
  pair<ENUM_DB_HANDLE_IDX_const,std::string> local_b4 [8];
  ENUM_DB_HANDLE_IDX local_ac [8];
  char local_a4 [12];
  pair<ENUM_DB_HANDLE_IDX_const,std::string> local_98 [8];
  ENUM_DB_HANDLE_IDX local_90 [8];
  char local_88 [12];
  pair<ENUM_DB_HANDLE_IDX_const,std::string> local_7c [8];
  ENUM_DB_HANDLE_IDX local_74 [8];
  char local_6c [12];
  pair<ENUM_DB_HANDLE_IDX_const,std::string> local_60 [8];
  ENUM_DB_HANDLE_IDX local_58 [8];
  char local_50 [12];
  pair<ENUM_DB_HANDLE_IDX_const,std::string> local_44 [8];
  ENUM_DB_HANDLE_IDX local_3c [8];
  char local_34 [12];
  pair<ENUM_DB_HANDLE_IDX_const,std::string> local_28 [8];
  ENUM_DB_HANDLE_IDX local_20 [8];
  char local_18 [4];
  map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
  local_14 [4];
  string local_10 [4];
  
  CDBManager::_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication((CDBManager *)(this + 0x50),1,this)
  ;
  puts("Application DB Manager Init() Success!");
  std::allocator<char>::allocator();
                    /* try { // try from 0806d2b9 to 0806d2bd has its CatchHandler @ 0806d308 */
  std::string::string(local_134,"E_MASTER_DB",&local_12d);
                    /* try { // try from 0806d2d6 to 0806d2da has its CatchHandler @ 0806d2f0 */
  cVar1 = OpenDB(this,0,local_134);
                    /* try { // try from 0806d2e9 to 0806d2ed has its CatchHandler @ 0806d308 */
  std::string::~string(local_134);
  std::allocator<char>::~allocator((allocator<char> *)&local_12d);
  if (cVar1 == '\x01') {
    std::
    map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
    ::map(local_14c);
    local_114[0] = '\x01';
    local_114[1] = '\0';
    local_114[2] = '\0';
    local_114[3] = '\0';
                    /* try { // try from 0806d375 to 0806d394 has its CatchHandler @ 0806da10 */
    std::make_pair<ENUM_DB_HANDLE_IDX,char_const(&)[13]>(local_11c,local_114);
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::pair<ENUM_DB_HANDLE_IDX,char_const*>
              (local_124,local_11c);
                    /* try { // try from 0806d3b2 to 0806d3b6 has its CatchHandler @ 0806d3ca */
    std::
    map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
    ::insert(local_12c);
                    /* try { // try from 0806d3c3 to 0806d3c7 has its CatchHandler @ 0806da10 */
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::~pair(local_124);
    local_f8[0] = '\x02';
    local_f8[1] = '\0';
    local_f8[2] = '\0';
    local_f8[3] = '\0';
                    /* try { // try from 0806d40a to 0806d429 has its CatchHandler @ 0806da10 */
    std::make_pair<ENUM_DB_HANDLE_IDX,char_const(&)[10]>(local_100,local_f8);
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::pair<ENUM_DB_HANDLE_IDX,char_const*>
              (local_108,local_100);
                    /* try { // try from 0806d447 to 0806d44b has its CatchHandler @ 0806d45f */
    std::
    map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
    ::insert(local_114 + 4);
                    /* try { // try from 0806d458 to 0806d45c has its CatchHandler @ 0806da10 */
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::~pair(local_108);
    local_dc[0] = '\x03';
    local_dc[1] = '\0';
    local_dc[2] = '\0';
    local_dc[3] = '\0';
                    /* try { // try from 0806d49f to 0806d4be has its CatchHandler @ 0806da10 */
    std::make_pair<ENUM_DB_HANDLE_IDX,char_const(&)[14]>(local_e4,local_dc);
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::pair<ENUM_DB_HANDLE_IDX,char_const*>
              (local_ec,local_e4);
                    /* try { // try from 0806d4dc to 0806d4e0 has its CatchHandler @ 0806d4f4 */
    std::
    map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
    ::insert(local_f8 + 4);
                    /* try { // try from 0806d4ed to 0806d4f1 has its CatchHandler @ 0806da10 */
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::~pair(local_ec);
    local_c0[0] = '\x04';
    local_c0[1] = '\0';
    local_c0[2] = '\0';
    local_c0[3] = '\0';
                    /* try { // try from 0806d534 to 0806d553 has its CatchHandler @ 0806da10 */
    std::make_pair<ENUM_DB_HANDLE_IDX,char_const(&)[9]>(local_c8,local_c0);
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::pair<ENUM_DB_HANDLE_IDX,char_const*>
              (local_d0,local_c8);
                    /* try { // try from 0806d571 to 0806d575 has its CatchHandler @ 0806d589 */
    std::
    map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
    ::insert(local_dc + 4);
                    /* try { // try from 0806d582 to 0806d586 has its CatchHandler @ 0806da10 */
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::~pair(local_d0);
    local_a4[0] = '\x06';
    local_a4[1] = '\0';
    local_a4[2] = '\0';
    local_a4[3] = '\0';
                    /* try { // try from 0806d5c9 to 0806d5e8 has its CatchHandler @ 0806da10 */
    std::make_pair<ENUM_DB_HANDLE_IDX,char_const(&)[9]>(local_ac,local_a4);
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::pair<ENUM_DB_HANDLE_IDX,char_const*>
              (local_b4,local_ac);
                    /* try { // try from 0806d606 to 0806d60a has its CatchHandler @ 0806d61e */
    std::
    map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
    ::insert(local_c0 + 4);
                    /* try { // try from 0806d617 to 0806d61b has its CatchHandler @ 0806da10 */
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::~pair(local_b4);
    local_88[0] = '\b';
    local_88[1] = '\0';
    local_88[2] = '\0';
    local_88[3] = '\0';
                    /* try { // try from 0806d65e to 0806d67d has its CatchHandler @ 0806da10 */
    std::make_pair<ENUM_DB_HANDLE_IDX,char_const(&)[11]>(local_90,local_88);
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::pair<ENUM_DB_HANDLE_IDX,char_const*>
              (local_98,local_90);
                    /* try { // try from 0806d69b to 0806d69f has its CatchHandler @ 0806d6b3 */
    std::
    map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
    ::insert(local_a4 + 4);
                    /* try { // try from 0806d6ac to 0806d6b0 has its CatchHandler @ 0806da10 */
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::~pair(local_98);
    local_6c[0] = '\x05';
    local_6c[1] = '\0';
    local_6c[2] = '\0';
    local_6c[3] = '\0';
                    /* try { // try from 0806d6ea to 0806d703 has its CatchHandler @ 0806da10 */
    std::make_pair<ENUM_DB_HANDLE_IDX,char_const(&)[9]>(local_74,local_6c);
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::pair<ENUM_DB_HANDLE_IDX,char_const*>
              (local_7c,local_74);
                    /* try { // try from 0806d71b to 0806d71f has its CatchHandler @ 0806d730 */
    std::
    map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
    ::insert(local_88 + 4);
                    /* try { // try from 0806d729 to 0806d72d has its CatchHandler @ 0806da10 */
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::~pair(local_7c);
    local_50[0] = '\x0f';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
                    /* try { // try from 0806d764 to 0806d77d has its CatchHandler @ 0806da10 */
    std::make_pair<ENUM_DB_HANDLE_IDX,char_const(&)[21]>(local_58,local_50);
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::pair<ENUM_DB_HANDLE_IDX,char_const*>
              (local_60,local_58);
                    /* try { // try from 0806d795 to 0806d799 has its CatchHandler @ 0806d7aa */
    std::
    map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
    ::insert(local_6c + 4);
                    /* try { // try from 0806d7a3 to 0806d7a7 has its CatchHandler @ 0806da10 */
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::~pair(local_60);
    local_34[0] = '\t';
    local_34[1] = '\0';
    local_34[2] = '\0';
    local_34[3] = '\0';
                    /* try { // try from 0806d7de to 0806d7f7 has its CatchHandler @ 0806da10 */
    std::make_pair<ENUM_DB_HANDLE_IDX,char_const(&)[11]>(local_3c,local_34);
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::pair<ENUM_DB_HANDLE_IDX,char_const*>
              (local_44,local_3c);
                    /* try { // try from 0806d80f to 0806d813 has its CatchHandler @ 0806d824 */
    std::
    map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
    ::insert(local_50 + 4);
                    /* try { // try from 0806d81d to 0806d821 has its CatchHandler @ 0806da10 */
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::~pair(local_44);
    local_18[0] = '\r';
    local_18[1] = '\0';
    local_18[2] = '\0';
    local_18[3] = '\0';
                    /* try { // try from 0806d858 to 0806d871 has its CatchHandler @ 0806da10 */
    std::make_pair<ENUM_DB_HANDLE_IDX,char_const(&)[14]>(local_20,local_18);
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::pair<ENUM_DB_HANDLE_IDX,char_const*>
              (local_28,local_20);
                    /* try { // try from 0806d889 to 0806d88d has its CatchHandler @ 0806d89e */
    std::
    map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
    ::insert(local_34 + 4);
                    /* try { // try from 0806d897 to 0806d89b has its CatchHandler @ 0806da10 */
    std::pair<ENUM_DB_HANDLE_IDX_const,std::string>::~pair(local_28);
                    /* try { // try from 0806d8c9 to 0806d961 has its CatchHandler @ 0806da10 */
    std::
    map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
    ::begin(local_150);
    while( true ) {
      std::
      map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>> *)
                         local_150,(_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      puVar2 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>::operator->
                         ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>> *)
                          local_150);
      uVar5 = CAppConfig::_ZN10CAppConfig13GetDBConnInfoE18ENUM_DB_HANDLE_IDX
                        (*(CAppConfig **)(this + 0x10),*puVar2);
      uVar3 = CAppConfig::GetServerGroup(*(CAppConfig **)(this + 0x10));
      puVar2 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>::operator->
                         ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>> *)
                          local_150);
      cVar1 = _ZN12CApplication13QueryConnInfoE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPR12STDBConnInfo
                        (this,*puVar2,uVar3,uVar5);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0806da2e;
      }
      iVar4 = std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>::operator->
                        ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>> *)
                         local_150);
      std::string::string(local_10,(string *)(iVar4 + 4));
      puVar2 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>::operator->
                         ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>> *)
                          local_150);
                    /* try { // try from 0806d983 to 0806d987 has its CatchHandler @ 0806d99a */
      cVar1 = OpenDB(this,*puVar2,local_10);
                    /* try { // try from 0806d993 to 0806d997 has its CatchHandler @ 0806da10 */
      std::string::~string(local_10);
      if (cVar1 != '\x01') {
        uVar5 = 0;
        goto LAB_0806da2e;
      }
                    /* try { // try from 0806d9c3 to 0806da08 has its CatchHandler @ 0806da10 */
      std::_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>::operator++
                ((_Rb_tree_iterator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>> *)local_150);
    }
    puts("DBMW_ALL_DB Open Success");
    uVar5 = 1;
LAB_0806da2e:
    std::
    map<ENUM_DB_HANDLE_IDX,std::string,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,std::string>>>
    ::~map(local_14c);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFApplication.cpp](source/DNFServer/GameServer/DBMW/DNFApplication.cpp)（约第 179 行）：

```cpp
bool CApplication::InitDB()
{
    m_dbManager.Init((ENUM_DB_KIND)1, this);
    puts("Application DB Manager Init() Success!");
    if (OpenDB(DB_HANDLE_0, "E_MASTER_DB") != 1)
        return 0;
    std::map<ENUM_DB_HANDLE_IDX, std::string> dbMap;
    dbMap.insert(std::make_pair(DB_HANDLE_1, "E_ACCOUNT_DB"));
    dbMap.insert(std::make_pair(DB_HANDLE_2, "E_GAME_DB"));
    dbMap.insert(std::make_pair(DB_HANDLE_3, "E_GAME_DB_2ND"));
    dbMap.insert(std::make_pair(DB_HANDLE_4, "E_LOG_DB"));
    dbMap.insert(std::make_pair(DB_HANDLE_6, "E_SSO_DB"));
    dbMap.insert(std::make_pair((ENUM_DB_HANDLE_IDX)8, "E_GUILD_DB"));
    dbMap.insert(std::make_pair(DB_HANDLE_5, "E_WEB_DB"));
    dbMap.insert(std::make_pair((ENUM_DB_HANDLE_IDX)0xf, "E_FRAME_LAG_INDEX_DB"));
    dbMap.insert(std::make_pair((ENUM_DB_HANDLE_IDX)0x9, "E_EVENT_DB"));
    dbMap.insert(std::make_pair((ENUM_DB_HANDLE_IDX)0xd, "E_SE_EVENT_DB"));
    for (std::map<ENUM_DB_HANDLE_IDX, std::string>::iterator it = dbMap.begin();
         it != dbMap.end(); ++it)
    {
        if (QueryConnInfo(it->first,
                          (ENUM_SERVER_GROUP)((CAppConfig*)m_appConfig)->GetServerGroup(),
                          *((CAppConfig*)m_appConfig)->GetDBConnInfo(it->first)) != 1)
            return 0;
        if (OpenDB(it->first, it->second) != 1)
            return 0;
    }
    puts("DBMW_ALL_DB Open Success");
    return 1;
}
```
