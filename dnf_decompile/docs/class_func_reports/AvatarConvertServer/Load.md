# Load

`_ZN19AvatarConvertServer4LoadEv`

`AvatarConvertServer::Load()`

| 类 | 地址 |
|---|---|
| `AvatarConvertServer` | `0x081930ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081930ba  _ZN19AvatarConvertServer4LoadEv
#           AvatarConvertServer::Load()
# range [0x081930ba, 0x0819312b]
081930ba +0x00:  push   %ebp
081930bb +0x01:  mov    %esp,%ebp
081930bd +0x03:  sub    $0x38,%esp
081930c0 +0x06:  movl   $0x0,0x14(%esp)
081930c8 +0x0e:  movl   $0x1,0x10(%esp)
081930d0 +0x16:  movl   $0x9,0xc(%esp)
081930d8 +0x1e:  movl   $0x37f,0x8(%esp)
081930e0 +0x26:  movl   $&_ZZN19AvatarConvertServer4LoadEvE19__PRETTY_FUNCTION__,0x4(%esp)
081930e8 +0x2e:  lea    -0x18(%ebp),%eax
081930eb +0x31:  mov    %eax,(%esp)
081930ee +0x34:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
081930f3 +0x39:  movl   $"\t- Loading Avatar Convert script - ",0x4(%esp)
081930fb +0x41:  lea    -0x18(%ebp),%eax
081930fe +0x44:  mov    %eax,(%esp)
08193101 +0x47:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08193106 +0x4c:  mov    0x8(%ebp),%eax
08193109 +0x4f:  add    $0x4,%eax
0819310c +0x52:  mov    %eax,(%esp)
0819310f +0x55:  call   088b1b36 <_ZN4ARAD6SCRIPT13AvatarConvert10loadScriptEv>  ; ARAD::SCRIPT::AvatarConvert::loadScript()
08193114 +0x5a:  test   %eax,%eax
08193116 +0x5c:  setne  %al
08193119 +0x5f:  test   %al,%al
0819311b +0x61:  je     08193124 <+0x6a>
0819311d +0x63:  mov    $0x0,%eax
08193122 +0x68:  jmp    08193129 <+0x6f>
08193124 +0x6a:  mov    $0x1,%eax
08193129 +0x6f:  leave
0819312a +0x70:  ret
0819312b +0x71:  nop
```

## 反编译 C

```c
// AvatarConvertServer::Load @ 0x81930ba

/* AvatarConvertServer::Load() */

bool AvatarConvertServer::Load(void)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual bool AvatarConvertServer::Load()",0x37f,9,true,false);
  cMyTrace::operator()(local_1c,"\t- Loading Avatar Convert script - ");
  iVar1 = ARAD::SCRIPT::AvatarConvert::loadScript();
  return iVar1 == 0;
}
```
