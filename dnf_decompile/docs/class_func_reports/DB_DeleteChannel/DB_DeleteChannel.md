# DB_DeleteChannel

`_ZN16DB_DeleteChannelC1Ev`

`DB_DeleteChannel::DB_DeleteChannel()`

| 类 | 地址 |
|---|---|
| `DB_DeleteChannel` | `0x08402892` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08402892  _ZN16DB_DeleteChannelC1Ev
#           DB_DeleteChannel::DB_DeleteChannel()
# range [0x08402892, 0x084028ad]
08402892 +0x00:  push   %ebp
08402893 +0x01:  mov    %esp,%ebp
08402895 +0x03:  sub    $0x18,%esp
08402898 +0x06:  mov    0x8(%ebp),%eax
0840289b +0x09:  mov    %eax,(%esp)
0840289e +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
084028a3 +0x11:  mov    0x8(%ebp),%eax
084028a6 +0x14:  movl   $&_ZTV16DB_DeleteChannel+0x8,(%eax)
084028ac +0x1a:  leave
084028ad +0x1b:  ret
```

## 反编译 C

```c
// DB_DeleteChannel::DB_DeleteChannel @ 0x8402892

/* DB_DeleteChannel::DB_DeleteChannel() */

void __thiscall DB_DeleteChannel::DB_DeleteChannel(DB_DeleteChannel *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fc60;
  return;
}
```
