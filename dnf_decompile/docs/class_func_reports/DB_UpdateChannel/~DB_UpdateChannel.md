# ~DB_UpdateChannel

`_ZN16DB_UpdateChannelD1Ev`

`DB_UpdateChannel::~DB_UpdateChannel()`

| 类 | 地址 |
|---|---|
| `DB_UpdateChannel` | `0x08417f66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417f66  _ZN16DB_UpdateChannelD1Ev
#           DB_UpdateChannel::~DB_UpdateChannel()
# range [0x08417f66, 0x08417f95]
08417f66 +0x00:  push   %ebp
08417f67 +0x01:  mov    %esp,%ebp
08417f69 +0x03:  sub    $0x18,%esp
08417f6c +0x06:  mov    0x8(%ebp),%eax
08417f6f +0x09:  movl   $&_ZTV16DB_UpdateChannel+0x8,(%eax)
08417f75 +0x0f:  mov    0x8(%ebp),%eax
08417f78 +0x12:  mov    %eax,(%esp)
08417f7b +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08417f80 +0x1a:  mov    $0x0,%eax
08417f85 +0x1f:  test   %al,%al
08417f87 +0x21:  je     08417f94 <+0x2e>
08417f89 +0x23:  mov    0x8(%ebp),%eax
08417f8c +0x26:  mov    %eax,(%esp)
08417f8f +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417f94 +0x2e:  leave
08417f95 +0x2f:  ret
```

## 反编译 C

```c
// DB_UpdateChannel::~DB_UpdateChannel @ 0x8417f66

/* WARNING: Removing unreachable block (ram,0x08417f89) */
/* DB_UpdateChannel::~DB_UpdateChannel() */

void __thiscall DB_UpdateChannel::~DB_UpdateChannel(DB_UpdateChannel *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f9f0;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
