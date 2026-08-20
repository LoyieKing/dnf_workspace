# read

`_ZN26Dispatcher_MailBox_Extract4readER9PacketBufR8MSG_BASE`

`Dispatcher_MailBox_Extract::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MailBox_Extract` | `0x081ccdfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ccdfa  _ZN26Dispatcher_MailBox_Extract4readER9PacketBufR8MSG_BASE
#           Dispatcher_MailBox_Extract::read(PacketBuf&, MSG_BASE&)
# range [0x081ccdfa, 0x081cce4f]
081ccdfa +0x00:  push   %ebp
081ccdfb +0x01:  mov    %esp,%ebp
081ccdfd +0x03:  sub    $0x28,%esp
081cce00 +0x06:  mov    0x10(%ebp),%eax
081cce03 +0x09:  mov    %eax,-0xc(%ebp)
081cce06 +0x0c:  mov    -0xc(%ebp),%eax
081cce09 +0x0f:  add    $0xd,%eax
081cce0c +0x12:  mov    %eax,0x4(%esp)
081cce10 +0x16:  mov    0xc(%ebp),%eax
081cce13 +0x19:  mov    %eax,(%esp)
081cce16 +0x1c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081cce1b +0x21:  xor    $0x1,%eax
081cce1e +0x24:  test   %al,%al
081cce20 +0x26:  je     081cce48 <+0x4e>
081cce22 +0x28:  movl   $0x0,0xc(%esp)
081cce2a +0x30:  movl   $0x0,0x8(%esp)
081cce32 +0x38:  movl   $&_ZZN26Dispatcher_MailBox_Extract4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cce3a +0x40:  movl   $0x244c,(%esp)
081cce41 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cce46 +0x4c:  jmp    081cce4d <+0x53>
081cce48 +0x4e:  mov    $0x0,%eax
081cce4d +0x53:  leave
081cce4e +0x54:  ret
081cce4f +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_MailBox_Extract::read @ 0x81ccdfa

/* Dispatcher_MailBox_Extract::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_MailBox_Extract::read
          (Dispatcher_MailBox_Extract *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x244c,"virtual int Dispatcher_MailBox_Extract::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}
```
