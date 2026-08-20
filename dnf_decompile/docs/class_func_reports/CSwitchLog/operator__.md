# operator()

`_ZN10CSwitchLogclEPKcz`

`CSwitchLog::operator()(char const*, ...)`

| 类 | 地址 |
|---|---|
| `CSwitchLog` | `0x0854fd64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854fd64  _ZN10CSwitchLogclEPKcz
#           CSwitchLog::operator()(char const*, ...)
# range [0x0854fd64, 0x0854fef8]
0854fd64 +0x000:  push   %ebp
0854fd65 +0x001:  mov    %esp,%ebp
0854fd67 +0x003:  push   %esi
0854fd68 +0x004:  push   %ebx
0854fd69 +0x005:  sub    $0x1020,%esp
0854fd6f +0x00b:  mov    0x8(%ebp),%eax
0854fd72 +0x00e:  mov    0xc(%eax),%eax
0854fd75 +0x011:  movzbl &_ZN10CSwitchLog10log_write_E(%eax),%eax
0854fd7c +0x018:  test   %al,%al
0854fd7e +0x01a:  je     0854feef <+0x18b>
0854fd84 +0x020:  mov    0x8(%ebp),%eax
0854fd87 +0x023:  mov    0x4(%eax),%edx
0854fd8a +0x026:  mov    0x8(%ebp),%eax
0854fd8d +0x029:  mov    (%eax),%eax
0854fd8f +0x02b:  mov    %edx,0xc(%esp)
0854fd93 +0x02f:  mov    %eax,0x8(%esp)
0854fd97 +0x033:  movl   $"%s(%d): ",0x4(%esp)
0854fd9f +0x03b:  lea    -0x1014(%ebp),%eax
0854fda5 +0x041:  mov    %eax,(%esp)
0854fda8 +0x044:  call   0807e440 <_init+0xd38>
0854fdad +0x049:  lea    0x10(%ebp),%eax
0854fdb0 +0x04c:  mov    %eax,-0x10(%ebp)
0854fdb3 +0x04f:  lea    -0x1014(%ebp),%eax
0854fdb9 +0x055:  mov    %eax,(%esp)
0854fdbc +0x058:  call   0807e3b0 <_init+0xca8>
0854fdc1 +0x05d:  mov    %eax,-0xc(%ebp)
0854fdc4 +0x060:  mov    -0x10(%ebp),%edx
0854fdc7 +0x063:  mov    -0xc(%ebp),%eax
0854fdca +0x066:  mov    $0xfff,%ecx
0854fdcf +0x06b:  sub    %eax,%ecx
0854fdd1 +0x06d:  mov    -0xc(%ebp),%ebx
0854fdd4 +0x070:  lea    -0x1014(%ebp),%eax
0854fdda +0x076:  add    %ebx,%eax
0854fddc +0x078:  mov    %edx,0xc(%esp)
0854fde0 +0x07c:  mov    0xc(%ebp),%edx
0854fde3 +0x07f:  mov    %edx,0x8(%esp)
0854fde7 +0x083:  mov    %ecx,0x4(%esp)
0854fdeb +0x087:  mov    %eax,(%esp)
0854fdee +0x08a:  call   0807e5f0 <_init+0xee8>
0854fdf3 +0x08f:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854fdf8 +0x094:  mov    %eax,%ecx
0854fdfa +0x096:  mov    0x8(%ebp),%eax
0854fdfd +0x099:  mov    0x8(%eax),%edx
0854fe00 +0x09c:  mov    %edx,%eax
0854fe02 +0x09e:  add    %eax,%eax
0854fe04 +0x0a0:  add    %edx,%eax
0854fe06 +0x0a2:  shl    $0x3,%eax
0854fe09 +0x0a5:  lea    (%ecx,%eax,1),%eax
0854fe0c +0x0a8:  mov    %eax,0x4(%esp)
0854fe10 +0x0ac:  lea    -0x14(%ebp),%eax
0854fe13 +0x0af:  mov    %eax,(%esp)
0854fe16 +0x0b2:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0854fe1b +0x0b7:  mov    0x8(%ebp),%eax
0854fe1e +0x0ba:  mov    0x8(%eax),%eax
0854fe21 +0x0bd:  cmp    $0x5,%eax
0854fe24 +0x0c0:  ja     0854fec7 <+0x163>
0854fe2a +0x0c6:  mov    &data#a25a8498(.rodata)(,%eax,4),%eax
0854fe31 +0x0cd:  jmp    *%eax
0854fe33 +0x0cf:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854fe38 +0x0d4:  lea    -0x1014(%ebp),%edx
0854fe3e +0x0da:  mov    %edx,0x4(%esp)
0854fe42 +0x0de:  mov    %eax,(%esp)
0854fe45 +0x0e1:  call   0854f162 <_ZN4CLog9logNoticeEPKcz>  ; CLog::logNotice(char const*, ...)
0854fe4a +0x0e6:  jmp    0854fec7 <+0x163>
0854fe4c +0x0e8:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854fe51 +0x0ed:  lea    -0x1014(%ebp),%edx
0854fe57 +0x0f3:  mov    %edx,0x4(%esp)
0854fe5b +0x0f7:  mov    %eax,(%esp)
0854fe5e +0x0fa:  call   0854f1c2 <_ZN4CLog8logErrorEPKcz>  ; CLog::logError(char const*, ...)
0854fe63 +0x0ff:  jmp    0854fec7 <+0x163>
0854fe65 +0x101:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854fe6a +0x106:  lea    -0x1014(%ebp),%edx
0854fe70 +0x10c:  mov    %edx,0x4(%esp)
0854fe74 +0x110:  mov    %eax,(%esp)
0854fe77 +0x113:  call   0854f40a <_ZN4CLog8logDebugEPKcz>  ; CLog::logDebug(char const*, ...)
0854fe7c +0x118:  jmp    0854fec7 <+0x163>
0854fe7e +0x11a:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854fe83 +0x11f:  lea    -0x1014(%ebp),%edx
0854fe89 +0x125:  mov    %edx,0x4(%esp)
0854fe8d +0x129:  mov    %eax,(%esp)
0854fe90 +0x12c:  call   0854f414 <_ZN4CLog10logConsoleEPKcz>  ; CLog::logConsole(char const*, ...)
0854fe95 +0x131:  jmp    0854fec7 <+0x163>
0854fe97 +0x133:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854fe9c +0x138:  lea    -0x1014(%ebp),%edx
0854fea2 +0x13e:  mov    %edx,0x4(%esp)
0854fea6 +0x142:  mov    %eax,(%esp)
0854fea9 +0x145:  call   0854f282 <_ZN4CLog8logMoneyEPKcz>  ; CLog::logMoney(char const*, ...)
0854feae +0x14a:  jmp    0854fec7 <+0x163>
0854feb0 +0x14c:  call   0817dfec <_GLOBAL__I__ZN13AradAppSystem11AradAppInitEiPPc+0x1c>  ; global constructors keyed to AradAppSystem::AradAppInit(int, char**)+0x1c
0854feb5 +0x151:  lea    -0x1014(%ebp),%edx
0854febb +0x157:  mov    %edx,0x4(%esp)
0854febf +0x15b:  mov    %eax,(%esp)
0854fec2 +0x15e:  call   0854f222 <_ZN4CLog11logCriticalEPKcz>  ; CLog::logCritical(char const*, ...)
0854fec7 +0x163:  lea    -0x14(%ebp),%eax
0854feca +0x166:  mov    %eax,(%esp)
0854fecd +0x169:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0854fed2 +0x16e:  jmp    0854feef <+0x18b>
0854fed4 +0x170:  mov    %edx,%ebx
0854fed6 +0x172:  mov    %eax,%esi
0854fed8 +0x174:  lea    -0x14(%ebp),%eax
0854fedb +0x177:  mov    %eax,(%esp)
0854fede +0x17a:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0854fee3 +0x17f:  mov    %esi,%eax
0854fee5 +0x181:  mov    %ebx,%edx
0854fee7 +0x183:  mov    %eax,(%esp)
0854feea +0x186:  call   08ae3750 <_Unwind_Resume>
0854feef +0x18b:  add    $0x1020,%esp
0854fef5 +0x191:  pop    %ebx
0854fef6 +0x192:  pop    %esi
0854fef7 +0x193:  pop    %ebp
0854fef8 +0x194:  ret
```

## 反编译 C

```c
// CSwitchLog::operator @ 0x854fd64

/* CSwitchLog::TEMPNAMEPLACEHOLDERVALUE(char const*, ...) */

void __thiscall CSwitchLog::operator()(CSwitchLog *this,char *param_1,...)

{
  int iVar1;
  char *pcVar2;
  CLog *pCVar3;
  char local_1018 [4096];
  Guard<Mutex> local_18 [4];
  undefined1 *local_14;
  size_t local_10;
  
  if ((&log_write_)[*(int *)(this + 0xc)] != '\0') {
    sprintf(local_1018,"%s(%d): ",*(undefined4 *)this,*(undefined4 *)(this + 4));
    local_14 = &stack0x0000000c;
    local_10 = strlen(local_1018);
    vsnprintf(local_1018 + local_10,0xfff - local_10,param_1,local_14);
    iVar1 = CLog::instance();
    Guard<Mutex>::Guard(local_18,(Mutex *)(iVar1 + *(int *)(this + 8) * 0x18));
    switch(*(undefined4 *)(this + 8)) {
    case 0:
      pCVar3 = (CLog *)CLog::instance();
                    /* try { // try from 0854fe45 to 0854fec6 has its CatchHandler @ 0854fed4 */
      CLog::logNotice(pCVar3,local_1018);
      break;
    case 1:
      pCVar3 = (CLog *)CLog::instance();
      CLog::logError(pCVar3,local_1018);
      break;
    case 2:
      pcVar2 = (char *)CLog::instance();
      CLog::logDebug(pcVar2,local_1018);
      break;
    case 3:
      pCVar3 = (CLog *)CLog::instance();
      CLog::logConsole(pCVar3,local_1018);
      break;
    case 4:
      pCVar3 = (CLog *)CLog::instance();
      CLog::logMoney(pCVar3,local_1018);
      break;
    case 5:
      pCVar3 = (CLog *)CLog::instance();
      CLog::logCritical(pCVar3,local_1018);
    }
    Guard<Mutex>::~Guard(local_18);
  }
  return;
}
```
