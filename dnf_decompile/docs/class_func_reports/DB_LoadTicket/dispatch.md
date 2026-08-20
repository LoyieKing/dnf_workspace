# dispatch

`_ZN13DB_LoadTicket8dispatchEiiP6Stream`

`DB_LoadTicket::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadTicket` | `0x084195dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084195dc  _ZN13DB_LoadTicket8dispatchEiiP6Stream
#           DB_LoadTicket::dispatch(int, int, Stream*)
# range [0x084195dc, 0x08419689]
084195dc +0x00:  push   %ebp
084195dd +0x01:  mov    %esp,%ebp
084195df +0x03:  sub    $0x28,%esp
084195e2 +0x06:  mov    0x8(%ebp),%eax
084195e5 +0x09:  mov    0x14(%ebp),%edx
084195e8 +0x0c:  mov    %edx,0xc(%esp)
084195ec +0x10:  mov    0x10(%ebp),%edx
084195ef +0x13:  mov    %edx,0x8(%esp)
084195f3 +0x17:  mov    0xc(%ebp),%edx
084195f6 +0x1a:  mov    %edx,0x4(%esp)
084195fa +0x1e:  mov    %eax,(%esp)
084195fd +0x21:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08419602 +0x26:  xor    $0x1,%eax
08419605 +0x29:  test   %al,%al
08419607 +0x2b:  je     08419610 <+0x34>
08419609 +0x2d:  mov    $0x0,%eax
0841960e +0x32:  jmp    08419688 <+0xac>
08419610 +0x34:  mov    0x14(%ebp),%eax
08419613 +0x37:  mov    %eax,(%esp)
08419616 +0x3a:  call   08450f20 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3b36>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3b36
0841961b +0x3f:  mov    %eax,-0xc(%ebp)
0841961e +0x42:  cmpl   $0x0,-0xc(%ebp)
08419622 +0x46:  jne    0841962b <+0x4f>
08419624 +0x48:  mov    $0x0,%eax
08419629 +0x4d:  jmp    08419688 <+0xac>
0841962b +0x4f:  mov    -0xc(%ebp),%eax
0841962e +0x52:  mov    %eax,0x4(%esp)
08419632 +0x56:  mov    0x8(%ebp),%eax
08419635 +0x59:  mov    %eax,(%esp)
08419638 +0x5c:  call   0841968a <_ZN13DB_LoadTicket10LoadTicketEP15SIG_LOAD_TICKET>  ; DB_LoadTicket::LoadTicket(SIG_LOAD_TICKET*)
0841963d +0x61:  xor    $0x1,%eax
08419640 +0x64:  test   %al,%al
08419642 +0x66:  je     0841964e <+0x72>
08419644 +0x68:  mov    -0xc(%ebp),%eax
08419647 +0x6b:  movl   $0x1,0x4(%eax)
0841964e +0x72:  mov    -0xc(%ebp),%eax
08419651 +0x75:  mov    %eax,0xc(%esp)
08419655 +0x79:  mov    0x10(%ebp),%eax
08419658 +0x7c:  mov    %eax,0x8(%esp)
0841965c +0x80:  mov    0xc(%ebp),%eax
0841965f +0x83:  mov    %eax,0x4(%esp)
08419663 +0x87:  mov    0x8(%ebp),%eax
08419666 +0x8a:  mov    %eax,(%esp)
08419669 +0x8d:  call   08419770 <_ZN13DB_LoadTicket10SendResultEiiP15SIG_LOAD_TICKET>  ; DB_LoadTicket::SendResult(int, int, SIG_LOAD_TICKET*)
0841966e +0x92:  mov    %al,-0xd(%ebp)
08419671 +0x95:  movzbl -0xd(%ebp),%eax
08419675 +0x99:  xor    $0x1,%eax
08419678 +0x9c:  test   %al,%al
0841967a +0x9e:  je     08419683 <+0xa7>
0841967c +0xa0:  mov    $0x0,%eax
08419681 +0xa5:  jmp    08419688 <+0xac>
08419683 +0xa7:  mov    $0x1,%eax
08419688 +0xac:  leave
08419689 +0xad:  ret
```

## 反编译 C

```c
// DB_LoadTicket::dispatch @ 0x84195dc

/* DB_LoadTicket::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadTicket::dispatch(DB_LoadTicket *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SIG_LOAD_TICKET *pSVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pSVar3 = Stream::GetOutBuffer<SIG_LOAD_TICKET>(param_3);
    if (pSVar3 == (SIG_LOAD_TICKET *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = LoadTicket(this,pSVar3);
      if (cVar1 != '\x01') {
        *(undefined4 *)(pSVar3 + 4) = 1;
      }
      cVar1 = SendResult(this,param_1,param_2,pSVar3);
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
