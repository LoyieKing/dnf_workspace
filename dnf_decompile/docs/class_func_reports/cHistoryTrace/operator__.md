# operator()

`_ZN13cHistoryTraceclEPKcz`

`cHistoryTrace::operator()(char const*, ...)`

| 类 | 地址 |
|---|---|
| `cHistoryTrace` | `0x0854f990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854f990  _ZN13cHistoryTraceclEPKcz
#           cHistoryTrace::operator()(char const*, ...)
# range [0x0854f990, 0x0854fa01]
0854f990 +0x00:  push   %ebp
0854f991 +0x01:  mov    %esp,%ebp
0854f993 +0x03:  push   %esi
0854f994 +0x04:  push   %ebx
0854f995 +0x05:  sub    $0x20,%esp
0854f998 +0x08:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854f99d +0x0d:  add    $0xa8,%eax
0854f9a2 +0x12:  mov    %eax,0x4(%esp)
0854f9a6 +0x16:  lea    -0xc(%ebp),%eax
0854f9a9 +0x19:  mov    %eax,(%esp)
0854f9ac +0x1c:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0854f9b1 +0x21:  lea    0x10(%ebp),%eax
0854f9b4 +0x24:  mov    %eax,-0x10(%ebp)
0854f9b7 +0x27:  mov    -0x10(%ebp),%ebx
0854f9ba +0x2a:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854f9bf +0x2f:  mov    %ebx,0x8(%esp)
0854f9c3 +0x33:  mov    0xc(%ebp),%edx
0854f9c6 +0x36:  mov    %edx,0x4(%esp)
0854f9ca +0x3a:  mov    %eax,(%esp)
0854f9cd +0x3d:  call   0854f2e2 <_ZN4CLog10logHistoryEPKcPc>  ; CLog::logHistory(char const*, char*)
0854f9d2 +0x42:  jmp    0854f9ef <+0x5f>
0854f9d4 +0x44:  mov    %edx,%ebx
0854f9d6 +0x46:  mov    %eax,%esi
0854f9d8 +0x48:  lea    -0xc(%ebp),%eax
0854f9db +0x4b:  mov    %eax,(%esp)
0854f9de +0x4e:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0854f9e3 +0x53:  mov    %esi,%eax
0854f9e5 +0x55:  mov    %ebx,%edx
0854f9e7 +0x57:  mov    %eax,(%esp)
0854f9ea +0x5a:  call   08ae3750 <_Unwind_Resume>
0854f9ef +0x5f:  lea    -0xc(%ebp),%eax
0854f9f2 +0x62:  mov    %eax,(%esp)
0854f9f5 +0x65:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0854f9fa +0x6a:  add    $0x20,%esp
0854f9fd +0x6d:  pop    %ebx
0854f9fe +0x6e:  pop    %esi
0854f9ff +0x6f:  pop    %ebp
0854fa00 +0x70:  ret
0854fa01 +0x71:  nop
```

## 反编译 C

```c
// cHistoryTrace::operator @ 0x854f990

/* cHistoryTrace::TEMPNAMEPLACEHOLDERVALUE(char const*, ...) */

void __thiscall cHistoryTrace::operator()(cHistoryTrace *this,char *param_1,...)

{
  int iVar1;
  CLog *this_00;
  Guard<Mutex> local_10 [4];
  
  iVar1 = CLog::instance();
  Guard<Mutex>::Guard(local_10,(Mutex *)(iVar1 + 0xa8));
  this_00 = (CLog *)CLog::instance();
                    /* try { // try from 0854f9cd to 0854f9d1 has its CatchHandler @ 0854f9d4 */
  CLog::logHistory(this_00,param_1,&stack0x0000000c);
  Guard<Mutex>::~Guard(local_10);
  return;
}
```
