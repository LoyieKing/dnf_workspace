# ~DB_DeleteChannel

`_ZN16DB_DeleteChannelD1Ev`

`DB_DeleteChannel::~DB_DeleteChannel()`

| 类 | 地址 |
|---|---|
| `DB_DeleteChannel` | `0x084028ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084028ae  _ZN16DB_DeleteChannelD1Ev
#           DB_DeleteChannel::~DB_DeleteChannel()
# range [0x084028ae, 0x084028dd]
084028ae +0x00:  push   %ebp
084028af +0x01:  mov    %esp,%ebp
084028b1 +0x03:  sub    $0x18,%esp
084028b4 +0x06:  mov    0x8(%ebp),%eax
084028b7 +0x09:  movl   $&_ZTV16DB_DeleteChannel+0x8,(%eax)
084028bd +0x0f:  mov    0x8(%ebp),%eax
084028c0 +0x12:  mov    %eax,(%esp)
084028c3 +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
084028c8 +0x1a:  mov    $0x0,%eax
084028cd +0x1f:  test   %al,%al
084028cf +0x21:  je     084028dc <+0x2e>
084028d1 +0x23:  mov    0x8(%ebp),%eax
084028d4 +0x26:  mov    %eax,(%esp)
084028d7 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084028dc +0x2e:  leave
084028dd +0x2f:  ret
```

## 反编译 C

```c
// DB_DeleteChannel::~DB_DeleteChannel @ 0x84028ae

/* WARNING: Removing unreachable block (ram,0x084028d1) */
/* DB_DeleteChannel::~DB_DeleteChannel() */

void __thiscall DB_DeleteChannel::~DB_DeleteChannel(DB_DeleteChannel *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fc60;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
