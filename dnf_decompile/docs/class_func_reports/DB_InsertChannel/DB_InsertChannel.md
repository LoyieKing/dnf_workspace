# DB_InsertChannel

`_ZN16DB_InsertChannelC1Ev`

`DB_InsertChannel::DB_InsertChannel()`

| 类 | 地址 |
|---|---|
| `DB_InsertChannel` | `0x0840364c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840364c  _ZN16DB_InsertChannelC1Ev
#           DB_InsertChannel::DB_InsertChannel()
# range [0x0840364c, 0x08403667]
0840364c +0x00:  push   %ebp
0840364d +0x01:  mov    %esp,%ebp
0840364f +0x03:  sub    $0x18,%esp
08403652 +0x06:  mov    0x8(%ebp),%eax
08403655 +0x09:  mov    %eax,(%esp)
08403658 +0x0c:  call   0844d7a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3bc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3bc
0840365d +0x11:  mov    0x8(%ebp),%eax
08403660 +0x14:  movl   $&_ZTV16DB_InsertChannel+0x8,(%eax)
08403666 +0x1a:  leave
08403667 +0x1b:  ret
```

## 反编译 C

```c
// DB_InsertChannel::DB_InsertChannel @ 0x840364c

/* DB_InsertChannel::DB_InsertChannel() */

void __thiscall DB_InsertChannel::DB_InsertChannel(DB_InsertChannel *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fc30;
  return;
}
```
