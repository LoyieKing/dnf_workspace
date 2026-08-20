# dispatch

`_ZN15DB_StatBreakJar8dispatchEiiP6Stream`

`DB_StatBreakJar::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_StatBreakJar` | `0x08417a7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417a7c  _ZN15DB_StatBreakJar8dispatchEiiP6Stream
#           DB_StatBreakJar::dispatch(int, int, Stream*)
# range [0x08417a7c, 0x08417af9]
08417a7c +0x00:  push   %ebp
08417a7d +0x01:  mov    %esp,%ebp
08417a7f +0x03:  sub    $0x28,%esp
08417a82 +0x06:  mov    0x8(%ebp),%eax
08417a85 +0x09:  mov    0x14(%ebp),%edx
08417a88 +0x0c:  mov    %edx,0xc(%esp)
08417a8c +0x10:  mov    0x10(%ebp),%edx
08417a8f +0x13:  mov    %edx,0x8(%esp)
08417a93 +0x17:  mov    0xc(%ebp),%edx
08417a96 +0x1a:  mov    %edx,0x4(%esp)
08417a9a +0x1e:  mov    %eax,(%esp)
08417a9d +0x21:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08417aa2 +0x26:  xor    $0x1,%eax
08417aa5 +0x29:  test   %al,%al
08417aa7 +0x2b:  je     08417ab0 <+0x34>
08417aa9 +0x2d:  mov    $0x0,%eax
08417aae +0x32:  jmp    08417af7 <+0x7b>
08417ab0 +0x34:  mov    0x14(%ebp),%eax
08417ab3 +0x37:  mov    %eax,(%esp)
08417ab6 +0x3a:  call   08450bd8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x37ee>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x37ee
08417abb +0x3f:  mov    %eax,-0xc(%ebp)
08417abe +0x42:  cmpl   $0x0,-0xc(%ebp)
08417ac2 +0x46:  jne    08417acb <+0x4f>
08417ac4 +0x48:  mov    $0x0,%eax
08417ac9 +0x4d:  jmp    08417af7 <+0x7b>
08417acb +0x4f:  mov    -0xc(%ebp),%eax
08417ace +0x52:  mov    %eax,0x4(%esp)
08417ad2 +0x56:  mov    0x8(%ebp),%eax
08417ad5 +0x59:  mov    %eax,(%esp)
08417ad8 +0x5c:  call   08417afa <_ZN15DB_StatBreakJar8LogWriteEP17MSG_STAT_BREAKJAR>  ; DB_StatBreakJar::LogWrite(MSG_STAT_BREAKJAR*)
08417add +0x61:  mov    %al,-0xd(%ebp)
08417ae0 +0x64:  movzbl -0xd(%ebp),%eax
08417ae4 +0x68:  xor    $0x1,%eax
08417ae7 +0x6b:  test   %al,%al
08417ae9 +0x6d:  je     08417af2 <+0x76>
08417aeb +0x6f:  mov    $0x0,%eax
08417af0 +0x74:  jmp    08417af7 <+0x7b>
08417af2 +0x76:  mov    $0x1,%eax
08417af7 +0x7b:  leave
08417af8 +0x7c:  ret
08417af9 +0x7d:  nop
```

## 反编译 C

```c
// DB_StatBreakJar::dispatch @ 0x8417a7c

/* DB_StatBreakJar::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_StatBreakJar::dispatch(DB_StatBreakJar *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  MSG_STAT_BREAKJAR *pMVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pMVar3 = Stream::GetOutBuffer<MSG_STAT_BREAKJAR>(param_3);
    if (pMVar3 == (MSG_STAT_BREAKJAR *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = LogWrite((MSG_STAT_BREAKJAR *)this);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
