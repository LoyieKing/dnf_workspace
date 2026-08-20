# operator()

`_ZN8cMyTraceclEPKcz`

`cMyTrace::operator()(char const*, ...)`

| 类 | 地址 |
|---|---|
| `cMyTrace` | `0x0854f788` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854f788  _ZN8cMyTraceclEPKcz
#           cMyTrace::operator()(char const*, ...)
# range [0x0854f788, 0x0854f98f]
0854f788 +0x000:  push   %ebp
0854f789 +0x001:  mov    %esp,%ebp
0854f78b +0x003:  push   %esi
0854f78c +0x004:  push   %ebx
0854f78d +0x005:  sub    $0x1020,%esp
0854f793 +0x00b:  movl   $0x1000,0x8(%esp)
0854f79b +0x013:  movl   $0x0,0x4(%esp)
0854f7a3 +0x01b:  lea    -0x1014(%ebp),%eax
0854f7a9 +0x021:  mov    %eax,(%esp)
0854f7ac +0x024:  call   0807dcc0 <_init+0x5b8>
0854f7b1 +0x029:  mov    0x8(%ebp),%eax
0854f7b4 +0x02c:  mov    0x8(%eax),%eax
0854f7b7 +0x02f:  cmp    $0x8,%eax
0854f7ba +0x032:  je     0854f7f0 <+0x68>
0854f7bc +0x034:  mov    0x8(%ebp),%eax
0854f7bf +0x037:  mov    0x8(%eax),%eax
0854f7c2 +0x03a:  cmp    $0x9,%eax
0854f7c5 +0x03d:  je     0854f7f0 <+0x68>
0854f7c7 +0x03f:  mov    0x8(%ebp),%eax
0854f7ca +0x042:  mov    0x4(%eax),%edx
0854f7cd +0x045:  mov    0x8(%ebp),%eax
0854f7d0 +0x048:  mov    (%eax),%eax
0854f7d2 +0x04a:  mov    %edx,0xc(%esp)
0854f7d6 +0x04e:  mov    %eax,0x8(%esp)
0854f7da +0x052:  movl   $"%s(%d): ",0x4(%esp)
0854f7e2 +0x05a:  lea    -0x1014(%ebp),%eax
0854f7e8 +0x060:  mov    %eax,(%esp)
0854f7eb +0x063:  call   0807e440 <_init+0xd38>
0854f7f0 +0x068:  lea    0x10(%ebp),%eax
0854f7f3 +0x06b:  mov    %eax,-0x10(%ebp)
0854f7f6 +0x06e:  lea    -0x1014(%ebp),%eax
0854f7fc +0x074:  mov    %eax,(%esp)
0854f7ff +0x077:  call   0807e3b0 <_init+0xca8>
0854f804 +0x07c:  mov    %eax,-0xc(%ebp)
0854f807 +0x07f:  mov    -0x10(%ebp),%edx
0854f80a +0x082:  mov    -0xc(%ebp),%eax
0854f80d +0x085:  mov    $0xfff,%ecx
0854f812 +0x08a:  sub    %eax,%ecx
0854f814 +0x08c:  mov    -0xc(%ebp),%ebx
0854f817 +0x08f:  lea    -0x1014(%ebp),%eax
0854f81d +0x095:  add    %ebx,%eax
0854f81f +0x097:  mov    %edx,0xc(%esp)
0854f823 +0x09b:  mov    0xc(%ebp),%edx
0854f826 +0x09e:  mov    %edx,0x8(%esp)
0854f82a +0x0a2:  mov    %ecx,0x4(%esp)
0854f82e +0x0a6:  mov    %eax,(%esp)
0854f831 +0x0a9:  call   0807e5f0 <_init+0xee8>
0854f836 +0x0ae:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854f83b +0x0b3:  mov    %eax,%ecx
0854f83d +0x0b5:  mov    0x8(%ebp),%eax
0854f840 +0x0b8:  mov    0x8(%eax),%edx
0854f843 +0x0bb:  mov    %edx,%eax
0854f845 +0x0bd:  add    %eax,%eax
0854f847 +0x0bf:  add    %edx,%eax
0854f849 +0x0c1:  shl    $0x3,%eax
0854f84c +0x0c4:  lea    (%ecx,%eax,1),%eax
0854f84f +0x0c7:  mov    %eax,0x4(%esp)
0854f853 +0x0cb:  lea    -0x14(%ebp),%eax
0854f856 +0x0ce:  mov    %eax,(%esp)
0854f859 +0x0d1:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0854f85e +0x0d6:  mov    0x8(%ebp),%eax
0854f861 +0x0d9:  mov    0x8(%eax),%eax
0854f864 +0x0dc:  cmp    $0x9,%eax
0854f867 +0x0df:  ja     0854f95f <+0x1d7>
0854f86d +0x0e5:  mov    &data#76bf9eb5(.rodata)(,%eax,4),%eax
0854f874 +0x0ec:  jmp    *%eax
0854f876 +0x0ee:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854f87b +0x0f3:  lea    -0x1014(%ebp),%edx
0854f881 +0x0f9:  mov    %edx,0x4(%esp)
0854f885 +0x0fd:  mov    %eax,(%esp)
0854f888 +0x100:  call   0854f162 <_ZN4CLog9logNoticeEPKcz>  ; CLog::logNotice(char const*, ...)
0854f88d +0x105:  jmp    0854f95f <+0x1d7>
0854f892 +0x10a:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854f897 +0x10f:  lea    -0x1014(%ebp),%edx
0854f89d +0x115:  mov    %edx,0x4(%esp)
0854f8a1 +0x119:  mov    %eax,(%esp)
0854f8a4 +0x11c:  call   0854f1c2 <_ZN4CLog8logErrorEPKcz>  ; CLog::logError(char const*, ...)
0854f8a9 +0x121:  jmp    0854f95f <+0x1d7>
0854f8ae +0x126:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854f8b3 +0x12b:  lea    -0x1014(%ebp),%edx
0854f8b9 +0x131:  mov    %edx,0x4(%esp)
0854f8bd +0x135:  mov    %eax,(%esp)
0854f8c0 +0x138:  call   0854f40a <_ZN4CLog8logDebugEPKcz>  ; CLog::logDebug(char const*, ...)
0854f8c5 +0x13d:  jmp    0854f95f <+0x1d7>
0854f8ca +0x142:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854f8cf +0x147:  lea    -0x1014(%ebp),%edx
0854f8d5 +0x14d:  mov    %edx,0x4(%esp)
0854f8d9 +0x151:  mov    %eax,(%esp)
0854f8dc +0x154:  call   0854f414 <_ZN4CLog10logConsoleEPKcz>  ; CLog::logConsole(char const*, ...)
0854f8e1 +0x159:  jmp    0854f95f <+0x1d7>
0854f8e3 +0x15b:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854f8e8 +0x160:  lea    -0x1014(%ebp),%edx
0854f8ee +0x166:  mov    %edx,0x4(%esp)
0854f8f2 +0x16a:  mov    %eax,(%esp)
0854f8f5 +0x16d:  call   0854f282 <_ZN4CLog8logMoneyEPKcz>  ; CLog::logMoney(char const*, ...)
0854f8fa +0x172:  jmp    0854f95f <+0x1d7>
0854f8fc +0x174:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854f901 +0x179:  lea    -0x1014(%ebp),%edx
0854f907 +0x17f:  mov    %edx,0x4(%esp)
0854f90b +0x183:  mov    %eax,(%esp)
0854f90e +0x186:  call   0854f222 <_ZN4CLog11logCriticalEPKcz>  ; CLog::logCritical(char const*, ...)
0854f913 +0x18b:  jmp    0854f95f <+0x1d7>
0854f915 +0x18d:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854f91a +0x192:  lea    -0x1014(%ebp),%edx
0854f920 +0x198:  mov    %edx,0x4(%esp)
0854f924 +0x19c:  mov    %eax,(%esp)
0854f927 +0x19f:  call   0854f4c0 <_ZN4CLog11logSnapShotEPKcz>  ; CLog::logSnapShot(char const*, ...)
0854f92c +0x1a4:  mov    0x8(%ebp),%eax
0854f92f +0x1a7:  movzbl 0xc(%eax),%eax
0854f933 +0x1ab:  movzbl %al,%esi
0854f936 +0x1ae:  mov    0x8(%ebp),%eax
0854f939 +0x1b1:  movzbl 0xd(%eax),%eax
0854f93d +0x1b5:  movzbl %al,%ebx
0854f940 +0x1b8:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854f945 +0x1bd:  lea    -0x1014(%ebp),%edx
0854f94b +0x1c3:  mov    %edx,0xc(%esp)
0854f94f +0x1c7:  mov    %esi,0x8(%esp)
0854f953 +0x1cb:  mov    %ebx,0x4(%esp)
0854f957 +0x1cf:  mov    %eax,(%esp)
0854f95a +0x1d2:  call   0854f520 <_ZN4CLog7logInitEbbPKcz>  ; CLog::logInit(bool, bool, char const*, ...)
0854f95f +0x1d7:  lea    -0x14(%ebp),%eax
0854f962 +0x1da:  mov    %eax,(%esp)
0854f965 +0x1dd:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0854f96a +0x1e2:  add    $0x1020,%esp
0854f970 +0x1e8:  pop    %ebx
0854f971 +0x1e9:  pop    %esi
0854f972 +0x1ea:  pop    %ebp
0854f973 +0x1eb:  ret
0854f974 +0x1ec:  mov    %edx,%ebx
0854f976 +0x1ee:  mov    %eax,%esi
0854f978 +0x1f0:  lea    -0x14(%ebp),%eax
0854f97b +0x1f3:  mov    %eax,(%esp)
0854f97e +0x1f6:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0854f983 +0x1fb:  mov    %esi,%eax
0854f985 +0x1fd:  mov    %ebx,%edx
0854f987 +0x1ff:  mov    %eax,(%esp)
0854f98a +0x202:  call   08ae3750 <_Unwind_Resume>
0854f98f +0x207:  nop
```

## 反编译 C

```c
// cMyTrace::operator @ 0x854f788

/* cMyTrace::TEMPNAMEPLACEHOLDERVALUE(char const*, ...) */

void __thiscall cMyTrace::operator()(cMyTrace *this,char *param_1,...)

{
  cMyTrace cVar1;
  cMyTrace cVar2;
  int iVar3;
  char *pcVar4;
  CLog *pCVar5;
  char local_1018 [4096];
  Guard<Mutex> local_18 [4];
  undefined1 *local_14;
  size_t local_10;
  
  memset(local_1018,0,0x1000);
  if ((*(int *)(this + 8) != 8) && (*(int *)(this + 8) != 9)) {
    sprintf(local_1018,"%s(%d): ",*(undefined4 *)this,*(undefined4 *)(this + 4));
  }
  local_14 = &stack0x0000000c;
  local_10 = strlen(local_1018);
  vsnprintf(local_1018 + local_10,0xfff - local_10,param_1,local_14);
  iVar3 = CLog::instance();
  Guard<Mutex>::Guard(local_18,(Mutex *)(iVar3 + *(int *)(this + 8) * 0x18));
  switch(*(undefined4 *)(this + 8)) {
  case 0:
    pCVar5 = (CLog *)CLog::instance();
                    /* try { // try from 0854f888 to 0854f95e has its CatchHandler @ 0854f974 */
    CLog::logNotice(pCVar5,local_1018);
    break;
  case 1:
    pCVar5 = (CLog *)CLog::instance();
    CLog::logError(pCVar5,local_1018);
    break;
  case 2:
    pcVar4 = (char *)CLog::instance();
    CLog::logDebug(pcVar4,local_1018);
    break;
  case 3:
    pCVar5 = (CLog *)CLog::instance();
    CLog::logConsole(pCVar5,local_1018);
    break;
  case 4:
    pCVar5 = (CLog *)CLog::instance();
    CLog::logMoney(pCVar5,local_1018);
    break;
  case 5:
    pCVar5 = (CLog *)CLog::instance();
    CLog::logCritical(pCVar5,local_1018);
    break;
  case 8:
    pCVar5 = (CLog *)CLog::instance();
    CLog::logSnapShot(pCVar5,local_1018);
  case 9:
    cVar1 = this[0xc];
    cVar2 = this[0xd];
    pCVar5 = (CLog *)CLog::instance();
    CLog::logInit(pCVar5,(bool)cVar2,(bool)cVar1,local_1018);
  }
  Guard<Mutex>::~Guard(local_18);
  return;
}
```
