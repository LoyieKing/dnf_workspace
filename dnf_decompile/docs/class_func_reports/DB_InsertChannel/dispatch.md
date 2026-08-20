# dispatch

`_ZN16DB_InsertChannel8dispatchEiiP6Stream`

`DB_InsertChannel::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertChannel` | `0x084036b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084036b6  _ZN16DB_InsertChannel8dispatchEiiP6Stream
#           DB_InsertChannel::dispatch(int, int, Stream*)
# range [0x084036b6, 0x08403733]
084036b6 +0x00:  push   %ebp
084036b7 +0x01:  mov    %esp,%ebp
084036b9 +0x03:  sub    $0x28,%esp
084036bc +0x06:  mov    0x8(%ebp),%eax
084036bf +0x09:  mov    0x14(%ebp),%edx
084036c2 +0x0c:  mov    %edx,0xc(%esp)
084036c6 +0x10:  mov    0x10(%ebp),%edx
084036c9 +0x13:  mov    %edx,0x8(%esp)
084036cd +0x17:  mov    0xc(%ebp),%edx
084036d0 +0x1a:  mov    %edx,0x4(%esp)
084036d4 +0x1e:  mov    %eax,(%esp)
084036d7 +0x21:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
084036dc +0x26:  xor    $0x1,%eax
084036df +0x29:  test   %al,%al
084036e1 +0x2b:  je     084036ea <+0x34>
084036e3 +0x2d:  mov    $0x0,%eax
084036e8 +0x32:  jmp    08403731 <+0x7b>
084036ea +0x34:  mov    0x14(%ebp),%eax
084036ed +0x37:  mov    %eax,(%esp)
084036f0 +0x3a:  call   08450594 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x31aa>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x31aa
084036f5 +0x3f:  mov    %eax,-0xc(%ebp)
084036f8 +0x42:  cmpl   $0x0,-0xc(%ebp)
084036fc +0x46:  jne    08403705 <+0x4f>
084036fe +0x48:  mov    $0x0,%eax
08403703 +0x4d:  jmp    08403731 <+0x7b>
08403705 +0x4f:  mov    -0xc(%ebp),%eax
08403708 +0x52:  mov    %eax,0x4(%esp)
0840370c +0x56:  mov    0x8(%ebp),%eax
0840370f +0x59:  mov    %eax,(%esp)
08403712 +0x5c:  call   08403734 <_ZN16DB_InsertChannel13InsertChannelEP18SIG_INSERT_CHANNEL>  ; DB_InsertChannel::InsertChannel(SIG_INSERT_CHANNEL*)
08403717 +0x61:  mov    %al,-0xd(%ebp)
0840371a +0x64:  movzbl -0xd(%ebp),%eax
0840371e +0x68:  xor    $0x1,%eax
08403721 +0x6b:  test   %al,%al
08403723 +0x6d:  je     0840372c <+0x76>
08403725 +0x6f:  mov    $0x0,%eax
0840372a +0x74:  jmp    08403731 <+0x7b>
0840372c +0x76:  mov    $0x1,%eax
08403731 +0x7b:  leave
08403732 +0x7c:  ret
08403733 +0x7d:  nop
```

## 反编译 C

```c
// DB_InsertChannel::dispatch @ 0x84036b6

/* DB_InsertChannel::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_InsertChannel::dispatch(DB_InsertChannel *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SIG_INSERT_CHANNEL *pSVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pSVar3 = Stream::GetOutBuffer<SIG_INSERT_CHANNEL>(param_3);
    if (pSVar3 == (SIG_INSERT_CHANNEL *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = InsertChannel(this,pSVar3);
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
