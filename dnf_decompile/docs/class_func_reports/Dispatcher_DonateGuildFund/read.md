# read

`_ZN26Dispatcher_DonateGuildFund4readER9PacketBufR8MSG_BASE`

`Dispatcher_DonateGuildFund::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DonateGuildFund` | `0x081d4920` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d4920  _ZN26Dispatcher_DonateGuildFund4readER9PacketBufR8MSG_BASE
#           Dispatcher_DonateGuildFund::read(PacketBuf&, MSG_BASE&)
# range [0x081d4920, 0x081d496f]
081d4920 +0x00:  push   %ebp
081d4921 +0x01:  mov    %esp,%ebp
081d4923 +0x03:  sub    $0x18,%esp
081d4926 +0x06:  mov    0x10(%ebp),%eax
081d4929 +0x09:  add    $0xd,%eax
081d492c +0x0c:  mov    %eax,0x4(%esp)
081d4930 +0x10:  mov    0xc(%ebp),%eax
081d4933 +0x13:  mov    %eax,(%esp)
081d4936 +0x16:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081d493b +0x1b:  xor    $0x1,%eax
081d493e +0x1e:  test   %al,%al
081d4940 +0x20:  je     081d4968 <+0x48>
081d4942 +0x22:  movl   $0x0,0xc(%esp)
081d494a +0x2a:  movl   $0x0,0x8(%esp)
081d4952 +0x32:  movl   $&_ZZN26Dispatcher_DonateGuildFund4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d495a +0x3a:  movl   $0x3491,(%esp)
081d4961 +0x41:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d4966 +0x46:  jmp    081d496d <+0x4d>
081d4968 +0x48:  mov    $0x0,%eax
081d496d +0x4d:  leave
081d496e +0x4e:  ret
081d496f +0x4f:  nop
```

## 反编译 C

```c
// Dispatcher_DonateGuildFund::read @ 0x81d4920

/* Dispatcher_DonateGuildFund::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_DonateGuildFund::read
          (Dispatcher_DonateGuildFund *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x3491,"virtual int Dispatcher_DonateGuildFund::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}
```
