# ~DB_DeleteChannel

`_ZN16DB_DeleteChannelD0Ev`

`DB_DeleteChannel::~DB_DeleteChannel()`

| 类 | 地址 |
|---|---|
| `DB_DeleteChannel` | `0x084028de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084028de  _ZN16DB_DeleteChannelD0Ev
#           DB_DeleteChannel::~DB_DeleteChannel()
# range [0x084028de, 0x084028fb]
084028de +0x00:  push   %ebp
084028df +0x01:  mov    %esp,%ebp
084028e1 +0x03:  sub    $0x18,%esp
084028e4 +0x06:  mov    0x8(%ebp),%eax
084028e7 +0x09:  mov    %eax,(%esp)
084028ea +0x0c:  call   084028ae <_ZN16DB_DeleteChannelD1Ev>  ; DB_DeleteChannel::~DB_DeleteChannel()
084028ef +0x11:  mov    0x8(%ebp),%eax
084028f2 +0x14:  mov    %eax,(%esp)
084028f5 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084028fa +0x1c:  leave
084028fb +0x1d:  ret
```

## 反编译 C

```c
// DB_DeleteChannel::~DB_DeleteChannel @ 0x84028de

/* DB_DeleteChannel::~DB_DeleteChannel() */

void __thiscall DB_DeleteChannel::~DB_DeleteChannel(DB_DeleteChannel *this)

{
  ~DB_DeleteChannel(this);
  operator_delete(this);
  return;
}
```
