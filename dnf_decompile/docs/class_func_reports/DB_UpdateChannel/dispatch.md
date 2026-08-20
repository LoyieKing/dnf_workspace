# dispatch

`_ZN16DB_UpdateChannel8dispatchEiiP6Stream`

`DB_UpdateChannel::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateChannel` | `0x08417fb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417fb4  _ZN16DB_UpdateChannel8dispatchEiiP6Stream
#           DB_UpdateChannel::dispatch(int, int, Stream*)
# range [0x08417fb4, 0x08418031]
08417fb4 +0x00:  push   %ebp
08417fb5 +0x01:  mov    %esp,%ebp
08417fb7 +0x03:  sub    $0x28,%esp
08417fba +0x06:  mov    0x8(%ebp),%eax
08417fbd +0x09:  mov    0x14(%ebp),%edx
08417fc0 +0x0c:  mov    %edx,0xc(%esp)
08417fc4 +0x10:  mov    0x10(%ebp),%edx
08417fc7 +0x13:  mov    %edx,0x8(%esp)
08417fcb +0x17:  mov    0xc(%ebp),%edx
08417fce +0x1a:  mov    %edx,0x4(%esp)
08417fd2 +0x1e:  mov    %eax,(%esp)
08417fd5 +0x21:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08417fda +0x26:  xor    $0x1,%eax
08417fdd +0x29:  test   %al,%al
08417fdf +0x2b:  je     08417fe8 <+0x34>
08417fe1 +0x2d:  mov    $0x0,%eax
08417fe6 +0x32:  jmp    0841802f <+0x7b>
08417fe8 +0x34:  mov    0x14(%ebp),%eax
08417feb +0x37:  mov    %eax,(%esp)
08417fee +0x3a:  call   08450d7c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3992>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3992
08417ff3 +0x3f:  mov    %eax,-0xc(%ebp)
08417ff6 +0x42:  cmpl   $0x0,-0xc(%ebp)
08417ffa +0x46:  jne    08418003 <+0x4f>
08417ffc +0x48:  mov    $0x0,%eax
08418001 +0x4d:  jmp    0841802f <+0x7b>
08418003 +0x4f:  mov    -0xc(%ebp),%eax
08418006 +0x52:  mov    %eax,0x4(%esp)
0841800a +0x56:  mov    0x8(%ebp),%eax
0841800d +0x59:  mov    %eax,(%esp)
08418010 +0x5c:  call   08418032 <_ZN16DB_UpdateChannel13UpdateChannelEP18SIG_UPDATE_CHANNEL>  ; DB_UpdateChannel::UpdateChannel(SIG_UPDATE_CHANNEL*)
08418015 +0x61:  mov    %al,-0xd(%ebp)
08418018 +0x64:  movzbl -0xd(%ebp),%eax
0841801c +0x68:  xor    $0x1,%eax
0841801f +0x6b:  test   %al,%al
08418021 +0x6d:  je     0841802a <+0x76>
08418023 +0x6f:  mov    $0x0,%eax
08418028 +0x74:  jmp    0841802f <+0x7b>
0841802a +0x76:  mov    $0x1,%eax
0841802f +0x7b:  leave
08418030 +0x7c:  ret
08418031 +0x7d:  nop
```

## 反编译 C

```c
// DB_UpdateChannel::dispatch @ 0x8417fb4

/* DB_UpdateChannel::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdateChannel::dispatch(DB_UpdateChannel *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SIG_UPDATE_CHANNEL *pSVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pSVar3 = Stream::GetOutBuffer<SIG_UPDATE_CHANNEL>(param_3);
    if (pSVar3 == (SIG_UPDATE_CHANNEL *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = UpdateChannel(this,pSVar3);
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
