# read

`_ZN19DisPatcher_UseEquip4readER9PacketBufR8MSG_BASE`

`DisPatcher_UseEquip::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseEquip` | `0x081c0dfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c0dfa  _ZN19DisPatcher_UseEquip4readER9PacketBufR8MSG_BASE
#           DisPatcher_UseEquip::read(PacketBuf&, MSG_BASE&)
# range [0x081c0dfa, 0x081c0e49]
081c0dfa +0x00:  push   %ebp
081c0dfb +0x01:  mov    %esp,%ebp
081c0dfd +0x03:  sub    $0x18,%esp
081c0e00 +0x06:  mov    0x10(%ebp),%eax
081c0e03 +0x09:  add    $0xd,%eax
081c0e06 +0x0c:  mov    %eax,0x4(%esp)
081c0e0a +0x10:  mov    0xc(%ebp),%eax
081c0e0d +0x13:  mov    %eax,(%esp)
081c0e10 +0x16:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c0e15 +0x1b:  xor    $0x1,%eax
081c0e18 +0x1e:  test   %al,%al
081c0e1a +0x20:  je     081c0e42 <+0x48>
081c0e1c +0x22:  movl   $0x0,0xc(%esp)
081c0e24 +0x2a:  movl   $0x0,0x8(%esp)
081c0e2c +0x32:  movl   $&_ZZN19DisPatcher_UseEquip4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c0e34 +0x3a:  movl   $0x9d0,(%esp)
081c0e3b +0x41:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c0e40 +0x46:  jmp    081c0e47 <+0x4d>
081c0e42 +0x48:  mov    $0x0,%eax
081c0e47 +0x4d:  leave
081c0e48 +0x4e:  ret
081c0e49 +0x4f:  nop
```

## 反编译 C

```c
// DisPatcher_UseEquip::read @ 0x81c0dfa

/* DisPatcher_UseEquip::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_UseEquip::read(DisPatcher_UseEquip *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x9d0,"virtual int DisPatcher_UseEquip::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
