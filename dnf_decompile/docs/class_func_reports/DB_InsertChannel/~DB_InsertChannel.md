# ~DB_InsertChannel

`_ZN16DB_InsertChannelD1Ev`

`DB_InsertChannel::~DB_InsertChannel()`

| 类 | 地址 |
|---|---|
| `DB_InsertChannel` | `0x08403668` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08403668  _ZN16DB_InsertChannelD1Ev
#           DB_InsertChannel::~DB_InsertChannel()
# range [0x08403668, 0x08403697]
08403668 +0x00:  push   %ebp
08403669 +0x01:  mov    %esp,%ebp
0840366b +0x03:  sub    $0x18,%esp
0840366e +0x06:  mov    0x8(%ebp),%eax
08403671 +0x09:  movl   $&_ZTV16DB_InsertChannel+0x8,(%eax)
08403677 +0x0f:  mov    0x8(%ebp),%eax
0840367a +0x12:  mov    %eax,(%esp)
0840367d +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
08403682 +0x1a:  mov    $0x0,%eax
08403687 +0x1f:  test   %al,%al
08403689 +0x21:  je     08403696 <+0x2e>
0840368b +0x23:  mov    0x8(%ebp),%eax
0840368e +0x26:  mov    %eax,(%esp)
08403691 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08403696 +0x2e:  leave
08403697 +0x2f:  ret
```

## 反编译 C

```c
// DB_InsertChannel::~DB_InsertChannel @ 0x8403668

/* WARNING: Removing unreachable block (ram,0x0840368b) */
/* DB_InsertChannel::~DB_InsertChannel() */

void __thiscall DB_InsertChannel::~DB_InsertChannel(DB_InsertChannel *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fc30;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```
