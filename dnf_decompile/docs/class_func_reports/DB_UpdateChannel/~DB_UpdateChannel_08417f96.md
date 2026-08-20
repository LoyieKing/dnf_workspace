# ~DB_UpdateChannel

`_ZN16DB_UpdateChannelD0Ev`

`DB_UpdateChannel::~DB_UpdateChannel()`

| 类 | 地址 |
|---|---|
| `DB_UpdateChannel` | `0x08417f96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417f96  _ZN16DB_UpdateChannelD0Ev
#           DB_UpdateChannel::~DB_UpdateChannel()
# range [0x08417f96, 0x08417fb3]
08417f96 +0x00:  push   %ebp
08417f97 +0x01:  mov    %esp,%ebp
08417f99 +0x03:  sub    $0x18,%esp
08417f9c +0x06:  mov    0x8(%ebp),%eax
08417f9f +0x09:  mov    %eax,(%esp)
08417fa2 +0x0c:  call   08417f66 <_ZN16DB_UpdateChannelD1Ev>  ; DB_UpdateChannel::~DB_UpdateChannel()
08417fa7 +0x11:  mov    0x8(%ebp),%eax
08417faa +0x14:  mov    %eax,(%esp)
08417fad +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417fb2 +0x1c:  leave
08417fb3 +0x1d:  ret
```

## 反编译 C

```c
// DB_UpdateChannel::~DB_UpdateChannel @ 0x8417f96

/* DB_UpdateChannel::~DB_UpdateChannel() */

void __thiscall DB_UpdateChannel::~DB_UpdateChannel(DB_UpdateChannel *this)

{
  ~DB_UpdateChannel(this);
  operator_delete(this);
  return;
}
```
