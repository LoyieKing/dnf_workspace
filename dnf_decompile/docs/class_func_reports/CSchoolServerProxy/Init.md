# Init

`_ZN18CSchoolServerProxy4InitEv`

`CSchoolServerProxy::Init()`

| 类 | 地址 |
|---|---|
| `CSchoolServerProxy` | `0x08471e7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471e7a  _ZN18CSchoolServerProxy4InitEv
#           CSchoolServerProxy::Init()
# range [0x08471e7a, 0x08471ed1]
08471e7a +0x00:  push   %ebp
08471e7b +0x01:  mov    %esp,%ebp
08471e7d +0x03:  sub    $0x28,%esp
08471e80 +0x06:  mov    0x8(%ebp),%eax
08471e83 +0x09:  add    $0x8,%eax
08471e86 +0x0c:  mov    %eax,(%esp)
08471e89 +0x0f:  call   0848369a <_ZN11CUdpHandler16InitClientSocketEv>  ; CUdpHandler::InitClientSocket()
08471e8e +0x14:  cmp    $0xffffffff,%eax
08471e91 +0x17:  sete   %al
08471e94 +0x1a:  test   %al,%al
08471e96 +0x1c:  je     08471ecb <+0x51>
08471e98 +0x1e:  movl   $"[CSchoolServerProxy::Init] Can't init udp client socket\n",0x10(%esp)
08471ea0 +0x26:  movl   $0x3c,0xc(%esp)
08471ea8 +0x2e:  movl   $&_ZZN18CSchoolServerProxy4InitEvE19__PRETTY_FUNCTION__,0x8(%esp)
08471eb0 +0x36:  movl   $"DF_SchoolServerProxy.cpp",0x4(%esp)
08471eb8 +0x3e:  movl   $0x1,(%esp)
08471ebf +0x45:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08471ec4 +0x4a:  mov    $0x0,%eax
08471ec9 +0x4f:  jmp    08471ed0 <+0x56>
08471ecb +0x51:  mov    $0x1,%eax
08471ed0 +0x56:  leave
08471ed1 +0x57:  ret
```

## 反编译 C

```c
// CSchoolServerProxy::Init @ 0x8471e7a

/* CSchoolServerProxy::Init() */

bool __thiscall CSchoolServerProxy::Init(CSchoolServerProxy *this)

{
  int iVar1;
  
  iVar1 = CUdpHandler::InitClientSocket((CUdpHandler *)(this + 8));
  if (iVar1 == -1) {
    LogManager::logFormat
              (1,"DF_SchoolServerProxy.cpp","bool CSchoolServerProxy::Init()",0x3c,
               "[CSchoolServerProxy::Init] Can\'t init udp client socket\n");
  }
  return iVar1 != -1;
}
```
