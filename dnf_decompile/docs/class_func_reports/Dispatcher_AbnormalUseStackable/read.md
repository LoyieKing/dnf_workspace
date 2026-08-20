# read

`_ZN31Dispatcher_AbnormalUseStackable4readER9PacketBufR8MSG_BASE`

`Dispatcher_AbnormalUseStackable::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AbnormalUseStackable` | `0x0826491c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826491c  _ZN31Dispatcher_AbnormalUseStackable4readER9PacketBufR8MSG_BASE
#           Dispatcher_AbnormalUseStackable::read(PacketBuf&, MSG_BASE&)
# range [0x0826491c, 0x082649ad]
0826491c +0x00:  push   %ebp
0826491d +0x01:  mov    %esp,%ebp
0826491f +0x03:  sub    $0x18,%esp
08264922 +0x06:  mov    0x10(%ebp),%eax
08264925 +0x09:  add    $0x10,%eax
08264928 +0x0c:  mov    %eax,0x4(%esp)
0826492c +0x10:  mov    0xc(%ebp),%eax
0826492f +0x13:  mov    %eax,(%esp)
08264932 +0x16:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08264937 +0x1b:  xor    $0x1,%eax
0826493a +0x1e:  test   %al,%al
0826493c +0x20:  je     08264964 <+0x48>
0826493e +0x22:  movl   $0x0,0xc(%esp)
08264946 +0x2a:  movl   $0x0,0x8(%esp)
0826494e +0x32:  movl   $&_ZZN31Dispatcher_AbnormalUseStackable4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08264956 +0x3a:  movl   $0x530,(%esp)
0826495d +0x41:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08264962 +0x46:  jmp    082649ab <+0x8f>
08264964 +0x48:  mov    0x10(%ebp),%eax
08264967 +0x4b:  add    $0x14,%eax
0826496a +0x4e:  mov    %eax,0x4(%esp)
0826496e +0x52:  mov    0xc(%ebp),%eax
08264971 +0x55:  mov    %eax,(%esp)
08264974 +0x58:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08264979 +0x5d:  xor    $0x1,%eax
0826497c +0x60:  test   %al,%al
0826497e +0x62:  je     082649a6 <+0x8a>
08264980 +0x64:  movl   $0x0,0xc(%esp)
08264988 +0x6c:  movl   $0x0,0x8(%esp)
08264990 +0x74:  movl   $&_ZZN31Dispatcher_AbnormalUseStackable4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08264998 +0x7c:  movl   $0x534,(%esp)
0826499f +0x83:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082649a4 +0x88:  jmp    082649ab <+0x8f>
082649a6 +0x8a:  mov    $0x0,%eax
082649ab +0x8f:  leave
082649ac +0x90:  ret
082649ad +0x91:  nop
```

## 反编译 C

```c
// Dispatcher_AbnormalUseStackable::read @ 0x826491c

/* Dispatcher_AbnormalUseStackable::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_AbnormalUseStackable::read
          (Dispatcher_AbnormalUseStackable *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x10));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x14));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x534,
                       "virtual int Dispatcher_AbnormalUseStackable::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x530,
                     "virtual int Dispatcher_AbnormalUseStackable::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}
```
