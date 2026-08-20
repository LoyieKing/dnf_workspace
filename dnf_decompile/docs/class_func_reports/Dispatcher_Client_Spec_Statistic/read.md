# read

`_ZN32Dispatcher_Client_Spec_Statistic4readER9PacketBufR8MSG_BASE`

`Dispatcher_Client_Spec_Statistic::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Client_Spec_Statistic` | `0x081ce5fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce5fe  _ZN32Dispatcher_Client_Spec_Statistic4readER9PacketBufR8MSG_BASE
#           Dispatcher_Client_Spec_Statistic::read(PacketBuf&, MSG_BASE&)
# range [0x081ce5fe, 0x081ce6d3]
081ce5fe +0x00:  push   %ebp
081ce5ff +0x01:  mov    %esp,%ebp
081ce601 +0x03:  sub    $0x28,%esp
081ce604 +0x06:  mov    0x10(%ebp),%eax
081ce607 +0x09:  mov    %eax,-0x10(%ebp)
081ce60a +0x0c:  mov    -0x10(%ebp),%eax
081ce60d +0x0f:  add    $0xd,%eax
081ce610 +0x12:  mov    %eax,0x4(%esp)
081ce614 +0x16:  mov    0xc(%ebp),%eax
081ce617 +0x19:  mov    %eax,(%esp)
081ce61a +0x1c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081ce61f +0x21:  mov    -0x10(%ebp),%eax
081ce622 +0x24:  add    $0xe,%eax
081ce625 +0x27:  mov    %eax,0x4(%esp)
081ce629 +0x2b:  mov    0xc(%ebp),%eax
081ce62c +0x2e:  mov    %eax,(%esp)
081ce62f +0x31:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081ce634 +0x36:  mov    -0x10(%ebp),%eax
081ce637 +0x39:  add    $0xf,%eax
081ce63a +0x3c:  mov    %eax,0x4(%esp)
081ce63e +0x40:  mov    0xc(%ebp),%eax
081ce641 +0x43:  mov    %eax,(%esp)
081ce644 +0x46:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081ce649 +0x4b:  movl   $0x0,-0xc(%ebp)
081ce650 +0x52:  jmp    081ce6b9 <+0xbb>
081ce652 +0x54:  mov    -0xc(%ebp),%edx
081ce655 +0x57:  mov    %edx,%eax
081ce657 +0x59:  add    %eax,%eax
081ce659 +0x5b:  add    %edx,%eax
081ce65b +0x5d:  shl    $0x2,%eax
081ce65e +0x60:  add    -0x10(%ebp),%eax
081ce661 +0x63:  add    $0x12,%eax
081ce664 +0x66:  mov    %eax,0x4(%esp)
081ce668 +0x6a:  mov    0xc(%ebp),%eax
081ce66b +0x6d:  mov    %eax,(%esp)
081ce66e +0x70:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081ce673 +0x75:  mov    -0xc(%ebp),%edx
081ce676 +0x78:  mov    %edx,%eax
081ce678 +0x7a:  add    %eax,%eax
081ce67a +0x7c:  add    %edx,%eax
081ce67c +0x7e:  shl    $0x2,%eax
081ce67f +0x81:  add    -0x10(%ebp),%eax
081ce682 +0x84:  add    $0x16,%eax
081ce685 +0x87:  mov    %eax,0x4(%esp)
081ce689 +0x8b:  mov    0xc(%ebp),%eax
081ce68c +0x8e:  mov    %eax,(%esp)
081ce68f +0x91:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081ce694 +0x96:  mov    -0xc(%ebp),%edx
081ce697 +0x99:  mov    %edx,%eax
081ce699 +0x9b:  add    %eax,%eax
081ce69b +0x9d:  add    %edx,%eax
081ce69d +0x9f:  shl    $0x2,%eax
081ce6a0 +0xa2:  add    -0x10(%ebp),%eax
081ce6a3 +0xa5:  add    $0x1a,%eax
081ce6a6 +0xa8:  mov    %eax,0x4(%esp)
081ce6aa +0xac:  mov    0xc(%ebp),%eax
081ce6ad +0xaf:  mov    %eax,(%esp)
081ce6b0 +0xb2:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081ce6b5 +0xb7:  addl   $0x1,-0xc(%ebp)
081ce6b9 +0xbb:  mov    -0x10(%ebp),%eax
081ce6bc +0xbe:  movzbl 0xf(%eax),%eax
081ce6c0 +0xc2:  movzbl %al,%eax
081ce6c3 +0xc5:  cmp    -0xc(%ebp),%eax
081ce6c6 +0xc8:  setg   %al
081ce6c9 +0xcb:  test   %al,%al
081ce6cb +0xcd:  jne    081ce652 <+0x54>
081ce6cd +0xcf:  mov    $0x0,%eax
081ce6d2 +0xd4:  leave
081ce6d3 +0xd5:  ret
```

## 反编译 C

```c
// Dispatcher_Client_Spec_Statistic::read @ 0x81ce5fe

/* Dispatcher_Client_Spec_Statistic::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Client_Spec_Statistic::read
          (Dispatcher_Client_Spec_Statistic *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  int local_10;
  
  PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
  PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xf));
  for (local_10 = 0; local_10 < (int)(uint)(byte)param_2[0xf]; local_10 = local_10 + 1) {
    PacketBuf::get_byte(param_1,(uchar *)(param_2 + local_10 * 0xc + 0x12));
    PacketBuf::get_int(param_1,(uint *)(param_2 + local_10 * 0xc + 0x16));
    PacketBuf::get_int(param_1,(uint *)(param_2 + local_10 * 0xc + 0x1a));
  }
  return 0;
}
```
