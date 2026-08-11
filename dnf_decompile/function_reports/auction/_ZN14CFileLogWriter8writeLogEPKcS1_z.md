# _ZN14CFileLogWriter8writeLogEPKcS1_z

`CFileLogWriter::writeLog(char const*, char const*, ...)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8069a22` | `0x3fd` | `0x806727c` | `0x407` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,307 +1,309 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2dc,%esp
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0x54(%ebp)
 lea    -0x9c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime_r>
 mov    %eax,-0x24(%ebp)
 lea    0x14(%ebp),%eax
 mov    %eax,-0x58(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    -0x24(%ebp),%edx
 mov    0x10(%edx),%edx
 lea    0x1(%edx),%ecx
 mov    -0x24(%ebp),%edx
 mov    0x14(%edx),%edx
 add    $0x76c,%edx
 mov    %eax,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"%s%04d%02d%02d.log",0x4(%esp)
 lea    -0x1c8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
 lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x49(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0x1c8(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0xd3>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3cc>
+jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3ec>
 lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
 lea    -0x60(%ebp),%eax
 lea    -0x5c(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x48(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x48(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CFLogEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x161>
+je     <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x166>
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CFLogEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0x1c(%ebp)
 mov    -0x58(%ebp),%eax
 mov    %eax,0xc(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CFLog8writeLogEP2tmPKcPc>
-jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3bf>
+mov    $0x0,%ebx
+jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3c9>
 mov    -0x54(%ebp),%eax
-sub    $&_ZL14gUnicodeBuffer+0xaf7c,%eax
+sub    $&_ZL17g_szUnicodeBuffer+0xaf7c,%eax
 mov    %eax,-0x64(%ebp)
 lea    -0xc8(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime_r>
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    -0x20(%ebp),%edx
 mov    0x10(%edx),%edx
 lea    0x1(%edx),%ecx
 mov    -0x20(%ebp),%edx
 mov    0x14(%edx),%edx
 add    $0x76c,%edx
 mov    %eax,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"%s%04d%02d%02d.log",0x4(%esp)
 lea    -0x2c8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 lea    -0x2c8(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x209>
+jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x20e>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3aa>
+jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3b4>
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
 lea    -0x6c(%ebp),%eax
 lea    -0x68(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x40(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x40(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CFLogEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x294>
+je     <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x299>
 lea    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP5CFLogEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x27f>
+je     <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x284>
 mov    (%eax),%edx
 add    $0x4,%edx
 mov    (%edx),%edx
 mov    %eax,(%esp)
 call   *%edx
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 mov    -0x6c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 movl   $0xc,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 lea    -0x5c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN5CFLogC1ERSs>
-jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x2ca>
+jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x2cf>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
-jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x388>
+jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x38d>
 mov    %ebx,%eax
 mov    %eax,-0x70(%ebp)
 lea    -0x2c(%ebp),%eax
 lea    -0x70(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x5c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRSsRP5CFLogESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKSsP5CFLogEC1ISsS2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
 lea    -0x3c(%ebp),%eax
 lea    -0x34(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP5CFLogSt4lessISsESaISt4pairIKSsS1_EEE6insertERKS6_>
 sub    $0x4,%esp
 movzbl -0x38(%ebp),%ebx
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKSsP5CFLogED1Ev>
-jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x357>
+jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x35c>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKSsP5CFLogED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x342>
+jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x347>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairISsP5CFLogED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x388>
+jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x38d>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairISsP5CFLogED1Ev>
 test   %bl,%bl
-je     <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x39d>
+je     <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3a2>
 mov    -0x58(%ebp),%edx
 mov    -0x70(%ebp),%eax
 mov    %edx,0xc(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    -0x24(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN5CFLog8writeLogEP2tmPKcPc>
-jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x39d>
+jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3a2>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3aa>
+jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3b4>
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3bf>
+mov    $0x1,%ebx
+jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3c9>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3cc>
+jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3ec>
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN14CFileLogWriter8writeLogEPKcS1_z+0x3e7>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
+test   %ebx,%ebx
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuardI6CMutexED1Ev>
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void writeLog(CFileLogWriter * this, char * fileName, char * logMsg,
   ...) */

void __thiscall
CFileLogWriter::_ZN14CFileLogWriter8writeLogEPKcS1_z
          (CFileLogWriter *this,char *fileName,char *logMsg,...)

{
  bool bVar1;
  pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*> *ppVar2
  ;
  CFLog *pCVar3;
  _Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>
  *__x;
  tm *__x_00;
  undefined1 *puVar4;
  char local_2cc [256];
  char local_1cc [256];
  tm local_cc;
  tm local_a0;
  CFLog *local_74;
  undefined1 local_70 [8];
  _Base_ptr local_68;
  undefined1 local_64 [4];
  string local_60;
  _Base_ptr local_5c;
  _Base_ptr local_58;
  CGuard<CMutex> local_54;
  allocator<char> local_4d;
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  char local_3c;
  pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>
  local_38;
  pair<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*> local_30;
  tm *local_28;
  tm *local_24;
  CFLog *local_20;
  
                    /* Unresolved local var: CGuard<CMutex> auto1@[???]
                       Unresolved local var: time_t currTime@[???]
                       Unresolved local var: tm result@[???]
                       Unresolved local var: tm * currtm@[???]
                       Unresolved local var: va_list args@[???]
                       Unresolved local var: char[256] newTempFileName@[???]
                       Unresolved local var: string newFileName@[???]
                       Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>
                       itr@[???]
                       Unresolved local var: time_t prevtime@[???]
                       Unresolved local var: tm result2@[???]
                       Unresolved local var: tm * prevtm@[???]
                       Unresolved local var: char[256] prevTempFileName@[???]
                       Unresolved local var: string prevFileName@[???]
                       Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>
                       prev_itr@[???]
                       Unresolved local var: CFLog * newLog@[???] */
  CGuard<CMutex>::CGuard(&local_54,&this->lock_);
  local_58 = (_Base_ptr)time((time_t *)0x0);
  local_28 = localtime_r((time_t *)&local_58,&local_a0);
  local_5c = (_Base_ptr)&stack0x00000010;
  sprintf(local_1cc,"%s%04d%02d%02d.log",fileName,local_28->tm_year + 0x76c,local_28->tm_mon + 1,
          local_28->tm_mday);
  std::allocator<char>::allocator();
                    /* try { // try from 08069ad6 to 08069ada has its CatchHandler @ 08069add */
  std::string::string(&local_60,local_1cc,(allocator *)&local_4d);
  std::allocator<char>::~allocator(&local_4d);
                    /* try { // try from 08069b17 to 08069b7d has its CatchHandler @ 08069dcc */
  std::
  map<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*,_std::less<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::allocator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>_>
  ::find((map<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*,_std::less<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::allocator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>_>
          *)local_64,
         (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)&this->logs_);
  std::
  map<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*,_std::less<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::allocator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>_>
  ::end((map<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*,_std::less<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::allocator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>_>
         *)local_4c);
  bVar1 = std::
          _Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>
          ::operator!=((_Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>
                        *)local_64,
                       (_Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>
                        *)local_4c);
  if (bVar1) {
                    /* Unresolved local var: CFLog * log@[???] */
    ppVar2 = std::
             _Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>
             ::operator->((_Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>
                           *)local_64);
    local_20 = ppVar2->second;
    __x_00 = local_28;
    CFLog::writeLog(local_20,(tm *)local_28,logMsg,(va_list)local_5c);
  }
  else {
    local_68 = local_58 + -0x1518;
    local_24 = localtime_r((time_t *)&local_68,&local_cc);
    sprintf(local_2cc,"%s%04d%02d%02d.log",fileName,local_24->tm_year + 0x76c,local_24->tm_mon + 1,
            local_24->tm_mday);
    std::allocator<char>::allocator();
                    /* try { // try from 08069c0c to 08069c10 has its CatchHandler @ 08069c13 */
    std::string::string(local_70 + 4,local_2cc,(allocator *)(local_4c + 7));
    std::allocator<char>::~allocator((allocator<char> *)(local_4c + 7));
    puVar4 = local_70 + 4;
                    /* try { // try from 08069c4d to 08069cc1 has its CatchHandler @ 08069daa */
    std::
    map<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*,_std::less<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::allocator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>_>
    ::find((map<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*,_std::less<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::allocator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>_>
            *)local_70,
           (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)&this->logs_);
    std::
    map<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*,_std::less<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::allocator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>_>
    ::end((map<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*,_std::less<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::allocator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>_>
           *)local_44);
    __x = (_Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>
           *)local_44;
    bVar1 = std::
            _Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>
            ::operator!=((_Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>
                          *)local_70,__x);
    if (bVar1) {
      ppVar2 = std::
               _Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>
               ::operator->((_Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>
                             *)local_70);
      pCVar3 = ppVar2->second;
      if (pCVar3 != (CFLog *)0x0) {
        (*pCVar3->_vptr_CFLog[1])(pCVar3,__x,puVar4);
      }
      std::
      map<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*,_std::less<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::allocator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>_>
      ::erase(&this->logs_,
              (_Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>
               )local_70._0_4_);
    }
    pCVar3 = operator_new(0xc);
                    /* try { // try from 08069cd0 to 08069cd4 has its CatchHandler @ 08069cd7 */
    CFLog::CFLog(pCVar3,&local_60);
    local_74 = pCVar3;
                    /* try { // try from 08069d05 to 08069d09 has its CatchHandler @ 08069daa */
    std::make_pair<std::string&,_CFLog*&>(&local_30,&local_60,&local_74);
                    /* try { // try from 08069d1a to 08069d1e has its CatchHandler @ 08069d64 */
    std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>
    ::pair<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>
              (&local_38,&local_30);
    __x_00 = (tm *)&this->logs_;
                    /* try { // try from 08069d36 to 08069d3a has its CatchHandler @ 08069d4f */
    std::
    map<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*,_std::less<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::allocator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>_>
    ::insert((map<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*,_std::less<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>,_std::allocator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>_>_>
              *)(local_44 + 4),
             (pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>
              *)__x_00);
                    /* try { // try from 08069d48 to 08069d4c has its CatchHandler @ 08069d64 */
    std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>
    ::~pair(&local_38,(int)__x_00);
                    /* try { // try from 08069d7f to 08069da7 has its CatchHandler @ 08069daa */
    std::pair<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_CFLog*>::~pair
              (&local_30,(int)__x_00);
    if (local_3c != '\0') {
      __x_00 = local_28;
      CFLog::writeLog(local_74,(tm *)local_28,logMsg,(va_list)local_5c);
    }
                    /* try { // try from 08069dc5 to 08069dc9 has its CatchHandler @ 08069dcc */
    std::string::~string((string *)(local_70 + 4));
  }
                    /* try { // try from 08069de7 to 08069deb has its CatchHandler @ 08069dee */
  std::string::~string((string *)&local_60);
  CGuard<CMutex>::~CGuard(&local_54,(int)__x_00);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/ServerCommon/DNFFileLog.cpp](source/DNFServer/ServerCommon/DNFFileLog.cpp)（约第 56 行）：

```cpp
void CFileLogWriter::writeLog(char const* fileName, char const* logMsg, ...) {
    CGuard<CMutex> auto1(&mutex);
    time_t currTime = time(NULL);
    tm currtm;
    // 原始：使用 localtime_r 返回的 tm*（非直接取 buffer）
    tm* result = localtime_r(&currTime, &currtm);
    // 原始：va_list 在 sprintf 之前建立
    va_list args;
    va_start(args, logMsg);

    char newTempFileName[256];
    sprintf(newTempFileName, "%s%04d%02d%02d.log", fileName, result->tm_year + 1900,
            result->tm_mon + 1, result->tm_mday);
    std::string newFileName(newTempFileName);
    std::map<std::string, CFLog*>::iterator itr = logs.find(newFileName);
    if (itr != logs.end()) {
        CFLog* log = itr->second;
        log->writeLog(result, logMsg, (char*)args);
        va_end(args);
        return;
    }

    // 首次写今日日志：关闭并移除昨日句柄，再新建今日句柄
    time_t prevtime = currTime - 86400;
    tm prevtm;
    tm* result2 = localtime_r(&prevtime, &prevtm);
    char prevTempFileName[256];
    sprintf(prevTempFileName, "%s%04d%02d%02d.log", fileName, result2->tm_year + 1900,
            result2->tm_mon + 1, result2->tm_mday);
    // 原始：昨日 key 为具名 string，生命周期延至函数末（非临时 std::string）
    std::string prevFileName(prevTempFileName);
    std::map<std::string, CFLog*>::iterator prev_itr = logs.find(prevFileName);
    if (prev_itr != logs.end()) {
        // 原始：delete 直接用迭代器 second（ptEv 一次，delete 复用 eax）
        delete prev_itr->second;
        logs.erase(prev_itr);
    }

    CFLog* newLog = new CFLog(newFileName);
    // 原始：insert(make_pair(...)) 并检查返回值，插入成功才写日志
    if (logs.insert(std::make_pair(newFileName, newLog)).second) {
        newLog->writeLog(result, logMsg, (char*)args);
    }
    va_end(args);
}
```
