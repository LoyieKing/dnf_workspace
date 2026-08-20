# Load

`_ZN26CreateDnfEventSciprtServer4LoadEv`

`CreateDnfEventSciprtServer::Load()`

| 类 | 地址 |
|---|---|
| `CreateDnfEventSciprtServer` | `0x0816451e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816451e  _ZN26CreateDnfEventSciprtServer4LoadEv
#           CreateDnfEventSciprtServer::Load()
# range [0x0816451e, 0x0816458f]
0816451e +0x00:  push   %ebp
0816451f +0x01:  mov    %esp,%ebp
08164521 +0x03:  sub    $0x38,%esp
08164524 +0x06:  movl   $0x0,0x14(%esp)
0816452c +0x0e:  movl   $0x1,0x10(%esp)
08164534 +0x16:  movl   $0x9,0xc(%esp)
0816453c +0x1e:  movl   $0xd0,0x8(%esp)
08164544 +0x26:  movl   $&_ZZN26CreateDnfEventSciprtServer4LoadEvE19__PRETTY_FUNCTION__,0x4(%esp)
0816454c +0x2e:  lea    -0x18(%ebp),%eax
0816454f +0x31:  mov    %eax,(%esp)
08164552 +0x34:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08164557 +0x39:  movl   $"\t- Loading EventCreateDnf script - ",0x4(%esp)
0816455f +0x41:  lea    -0x18(%ebp),%eax
08164562 +0x44:  mov    %eax,(%esp)
08164565 +0x47:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0816456a +0x4c:  mov    0x8(%ebp),%eax
0816456d +0x4f:  add    $0x4,%eax
08164570 +0x52:  mov    %eax,(%esp)
08164573 +0x55:  call   08ac0034 <_ZN20CreateDnfEventSciprt10loadScriptEv>  ; CreateDnfEventSciprt::loadScript()
08164578 +0x5a:  test   %eax,%eax
0816457a +0x5c:  setne  %al
0816457d +0x5f:  test   %al,%al
0816457f +0x61:  je     08164588 <+0x6a>
08164581 +0x63:  mov    $0x0,%eax
08164586 +0x68:  jmp    0816458d <+0x6f>
08164588 +0x6a:  mov    $0x1,%eax
0816458d +0x6f:  leave
0816458e +0x70:  ret
0816458f +0x71:  nop
```

## 反编译 C

```c
// CreateDnfEventSciprtServer::Load @ 0x816451e

/* CreateDnfEventSciprtServer::Load() */

bool CreateDnfEventSciprtServer::Load(void)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual bool CreateDnfEventSciprtServer::Load()",0xd0,9,true,false);
  cMyTrace::operator()(local_1c,"\t- Loading EventCreateDnf script - ");
  iVar1 = CreateDnfEventSciprt::loadScript();
  return iVar1 == 0;
}
```
