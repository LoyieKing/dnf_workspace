# log

`_ZN14LwServerWriter3logEPKcS1_iS1_`

`LwServerWriter::log(char const*, char const*, int, char const*)`

| 类 | 地址 |
|---|---|
| `LwServerWriter` | `0x0854e2d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854e2d4  _ZN14LwServerWriter3logEPKcS1_iS1_
#           LwServerWriter::log(char const*, char const*, int, char const*)
# range [0x0854e2d4, 0x0854e3d6]
0854e2d4 +0x000:  push   %ebp
0854e2d5 +0x001:  mov    %esp,%ebp
0854e2d7 +0x003:  push   %esi
0854e2d8 +0x004:  push   %ebx
0854e2d9 +0x005:  sub    $0x1030,%esp
0854e2df +0x00b:  cmpl   $0x0,0x10(%ebp)
0854e2e3 +0x00f:  je     0854e31a <+0x46>
0854e2e5 +0x011:  mov    0x18(%ebp),%eax
0854e2e8 +0x014:  mov    %eax,0x14(%esp)
0854e2ec +0x018:  mov    0x14(%ebp),%eax
0854e2ef +0x01b:  mov    %eax,0x10(%esp)
0854e2f3 +0x01f:  mov    0x10(%ebp),%eax
0854e2f6 +0x022:  mov    %eax,0xc(%esp)
0854e2fa +0x026:  movl   $"%s(%d): %s",0x8(%esp)
0854e302 +0x02e:  movl   $0xfff,0x4(%esp)
0854e30a +0x036:  lea    -0x100c(%ebp),%eax
0854e310 +0x03c:  mov    %eax,(%esp)
0854e313 +0x03f:  call   0807dbe0 <_init+0x4d8>
0854e318 +0x044:  jmp    0854e33f <+0x6b>
0854e31a +0x046:  mov    0x18(%ebp),%eax
0854e31d +0x049:  mov    %eax,0xc(%esp)
0854e321 +0x04d:  movl   $"%s",0x8(%esp)
0854e329 +0x055:  movl   $0xfff,0x4(%esp)
0854e331 +0x05d:  lea    -0x100c(%ebp),%eax
0854e337 +0x063:  mov    %eax,(%esp)
0854e33a +0x066:  call   0807dbe0 <_init+0x4d8>
0854e33f +0x06b:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854e344 +0x070:  mov    %eax,%ecx
0854e346 +0x072:  mov    0x8(%ebp),%eax
0854e349 +0x075:  mov    0x4(%eax),%eax
0854e34c +0x078:  mov    %eax,%edx
0854e34e +0x07a:  mov    %edx,%eax
0854e350 +0x07c:  add    %eax,%eax
0854e352 +0x07e:  add    %edx,%eax
0854e354 +0x080:  shl    $0x3,%eax
0854e357 +0x083:  lea    (%ecx,%eax,1),%eax
0854e35a +0x086:  mov    %eax,0x4(%esp)
0854e35e +0x08a:  lea    -0xc(%ebp),%eax
0854e361 +0x08d:  mov    %eax,(%esp)
0854e364 +0x090:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0854e369 +0x095:  mov    0x8(%ebp),%eax
0854e36c +0x098:  mov    0x4(%eax),%eax
0854e36f +0x09b:  cmp    $0x1,%eax
0854e372 +0x09e:  je     0854e37b <+0xa7>
0854e374 +0x0a0:  cmp    $0x2,%eax
0854e377 +0x0a3:  je     0854e394 <+0xc0>
0854e379 +0x0a5:  jmp    0854e3ab <+0xd7>
0854e37b +0x0a7:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854e380 +0x0ac:  lea    -0x100c(%ebp),%edx
0854e386 +0x0b2:  mov    %edx,0x4(%esp)
0854e38a +0x0b6:  mov    %eax,(%esp)
0854e38d +0x0b9:  call   0854f1c2 <_ZN4CLog8logErrorEPKcz>  ; CLog::logError(char const*, ...)
0854e392 +0x0be:  jmp    0854e3ab <+0xd7>
0854e394 +0x0c0:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854e399 +0x0c5:  lea    -0x100c(%ebp),%edx
0854e39f +0x0cb:  mov    %edx,0x4(%esp)
0854e3a3 +0x0cf:  mov    %eax,(%esp)
0854e3a6 +0x0d2:  call   0854f40a <_ZN4CLog8logDebugEPKcz>  ; CLog::logDebug(char const*, ...)
0854e3ab +0x0d7:  lea    -0xc(%ebp),%eax
0854e3ae +0x0da:  mov    %eax,(%esp)
0854e3b1 +0x0dd:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0854e3b6 +0x0e2:  add    $0x1030,%esp
0854e3bc +0x0e8:  pop    %ebx
0854e3bd +0x0e9:  pop    %esi
0854e3be +0x0ea:  pop    %ebp
0854e3bf +0x0eb:  ret
0854e3c0 +0x0ec:  mov    %edx,%ebx
0854e3c2 +0x0ee:  mov    %eax,%esi
0854e3c4 +0x0f0:  lea    -0xc(%ebp),%eax
0854e3c7 +0x0f3:  mov    %eax,(%esp)
0854e3ca +0x0f6:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0854e3cf +0x0fb:  mov    %esi,%eax
0854e3d1 +0x0fd:  mov    %ebx,%edx
0854e3d3 +0x0ff:  mov    %eax,(%esp)
0854e3d6 +0x102:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// LwServerWriter::log @ 0x854e2d4

/* LwServerWriter::log(char const*, char const*, int, char const*) */

void __thiscall
LwServerWriter::log(LwServerWriter *this,char *param_1,char *param_2,int param_3,char *param_4)

{
  int iVar1;
  CLog *this_00;
  char *pcVar2;
  char local_1010 [4096];
  Guard<Mutex> local_10 [4];
  
  if (param_2 == (char *)0x0) {
    snprintf(local_1010,0xfff,"%s",param_4);
  }
  else {
    snprintf(local_1010,0xfff,"%s(%d): %s",param_2,param_3,param_4);
  }
  iVar1 = CLog::instance();
  Guard<Mutex>::Guard(local_10,(Mutex *)(iVar1 + *(int *)(this + 4) * 0x18));
  if (*(int *)(this + 4) == 1) {
    this_00 = (CLog *)CLog::instance();
                    /* try { // try from 0854e38d to 0854e391 has its CatchHandler @ 0854e3c0 */
    CLog::logError(this_00,local_1010);
  }
  else if (*(int *)(this + 4) == 2) {
    pcVar2 = (char *)CLog::instance();
    CLog::logDebug(pcVar2,local_1010);
  }
  Guard<Mutex>::~Guard(local_10);
  return;
}
```
