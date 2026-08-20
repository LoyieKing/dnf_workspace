# dispatch

`_ZN15DB_InsertTicket8dispatchEiiP6Stream`

`DB_InsertTicket::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertTicket` | `0x08403ab8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08403ab8  _ZN15DB_InsertTicket8dispatchEiiP6Stream
#           DB_InsertTicket::dispatch(int, int, Stream*)
# range [0x08403ab8, 0x08403b07]
08403ab8 +0x00:  push   %ebp
08403ab9 +0x01:  mov    %esp,%ebp
08403abb +0x03:  sub    $0x28,%esp
08403abe +0x06:  mov    0x14(%ebp),%eax
08403ac1 +0x09:  mov    %eax,(%esp)
08403ac4 +0x0c:  call   084505e8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x31fe>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x31fe
08403ac9 +0x11:  mov    %eax,-0xc(%ebp)
08403acc +0x14:  cmpl   $0x0,-0xc(%ebp)
08403ad0 +0x18:  jne    08403ad9 <+0x21>
08403ad2 +0x1a:  mov    $0x0,%eax
08403ad7 +0x1f:  jmp    08403b05 <+0x4d>
08403ad9 +0x21:  mov    -0xc(%ebp),%eax
08403adc +0x24:  mov    %eax,0x4(%esp)
08403ae0 +0x28:  mov    0x8(%ebp),%eax
08403ae3 +0x2b:  mov    %eax,(%esp)
08403ae6 +0x2e:  call   08403b08 <_ZN15DB_InsertTicket12InsertTicketEP17SIG_INSERT_TICKET>  ; DB_InsertTicket::InsertTicket(SIG_INSERT_TICKET*)
08403aeb +0x33:  mov    %al,-0xd(%ebp)
08403aee +0x36:  movzbl -0xd(%ebp),%eax
08403af2 +0x3a:  xor    $0x1,%eax
08403af5 +0x3d:  test   %al,%al
08403af7 +0x3f:  je     08403b00 <+0x48>
08403af9 +0x41:  mov    $0x0,%eax
08403afe +0x46:  jmp    08403b05 <+0x4d>
08403b00 +0x48:  mov    $0x1,%eax
08403b05 +0x4d:  leave
08403b06 +0x4e:  ret
08403b07 +0x4f:  nop
```

## 反编译 C

```c
// DB_InsertTicket::dispatch @ 0x8403ab8

/* DB_InsertTicket::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_InsertTicket::dispatch(DB_InsertTicket *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_INSERT_TICKET *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_INSERT_TICKET>(param_3);
  if (pSVar2 == (SIG_INSERT_TICKET *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = InsertTicket(this,pSVar2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
