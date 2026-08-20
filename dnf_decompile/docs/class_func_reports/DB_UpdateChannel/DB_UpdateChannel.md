# DB_UpdateChannel

`_ZN16DB_UpdateChannelC1Ev`

`DB_UpdateChannel::DB_UpdateChannel()`

| 类 | 地址 |
|---|---|
| `DB_UpdateChannel` | `0x08417f4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417f4a  _ZN16DB_UpdateChannelC1Ev
#           DB_UpdateChannel::DB_UpdateChannel()
# range [0x08417f4a, 0x08417f65]
08417f4a +0x00:  push   %ebp
08417f4b +0x01:  mov    %esp,%ebp
08417f4d +0x03:  sub    $0x18,%esp
08417f50 +0x06:  mov    0x8(%ebp),%eax
08417f53 +0x09:  mov    %eax,(%esp)
08417f56 +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
08417f5b +0x11:  mov    0x8(%ebp),%eax
08417f5e +0x14:  movl   $&_ZTV16DB_UpdateChannel+0x8,(%eax)
08417f64 +0x1a:  leave
08417f65 +0x1b:  ret
```

## 反编译 C

```c
// DB_UpdateChannel::DB_UpdateChannel @ 0x8417f4a

/* DB_UpdateChannel::DB_UpdateChannel() */

void __thiscall DB_UpdateChannel::DB_UpdateChannel(DB_UpdateChannel *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f9f0;
  return;
}
```
