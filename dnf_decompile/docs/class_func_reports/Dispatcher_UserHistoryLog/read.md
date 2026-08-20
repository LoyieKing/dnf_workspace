# read

`_ZN25Dispatcher_UserHistoryLog4readER9PacketBufR8MSG_BASE`

`Dispatcher_UserHistoryLog::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UserHistoryLog` | `0x081da5d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081da5d2  _ZN25Dispatcher_UserHistoryLog4readER9PacketBufR8MSG_BASE
#           Dispatcher_UserHistoryLog::read(PacketBuf&, MSG_BASE&)
# range [0x081da5d2, 0x081da6bf]
081da5d2 +0x00:  push   %ebp
081da5d3 +0x01:  mov    %esp,%ebp
081da5d5 +0x03:  sub    $0x28,%esp
081da5d8 +0x06:  mov    0x10(%ebp),%eax
081da5db +0x09:  mov    %eax,-0xc(%ebp)
081da5de +0x0c:  mov    -0xc(%ebp),%eax
081da5e1 +0x0f:  add    $0xd,%eax
081da5e4 +0x12:  mov    %eax,0x4(%esp)
081da5e8 +0x16:  mov    0xc(%ebp),%eax
081da5eb +0x19:  mov    %eax,(%esp)
081da5ee +0x1c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081da5f3 +0x21:  xor    $0x1,%eax
081da5f6 +0x24:  test   %al,%al
081da5f8 +0x26:  je     081da623 <+0x51>
081da5fa +0x28:  movl   $0x0,0xc(%esp)
081da602 +0x30:  movl   $0x0,0x8(%esp)
081da60a +0x38:  movl   $&_ZZN25Dispatcher_UserHistoryLog4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081da612 +0x40:  movl   $0x48a9,(%esp)
081da619 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081da61e +0x4c:  jmp    081da6be <+0xec>
081da623 +0x51:  mov    -0xc(%ebp),%eax
081da626 +0x54:  add    $0x10,%eax
081da629 +0x57:  mov    %eax,0x4(%esp)
081da62d +0x5b:  mov    0xc(%ebp),%eax
081da630 +0x5e:  mov    %eax,(%esp)
081da633 +0x61:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081da638 +0x66:  xor    $0x1,%eax
081da63b +0x69:  test   %al,%al
081da63d +0x6b:  je     081da665 <+0x93>
081da63f +0x6d:  movl   $0x0,0xc(%esp)
081da647 +0x75:  movl   $0x0,0x8(%esp)
081da64f +0x7d:  movl   $&_ZZN25Dispatcher_UserHistoryLog4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081da657 +0x85:  movl   $0x48ac,(%esp)
081da65e +0x8c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081da663 +0x91:  jmp    081da6be <+0xec>
081da665 +0x93:  mov    -0xc(%ebp),%eax
081da668 +0x96:  mov    0x10(%eax),%eax
081da66b +0x99:  mov    -0xc(%ebp),%edx
081da66e +0x9c:  add    $0x14,%edx
081da671 +0x9f:  mov    %eax,0xc(%esp)
081da675 +0xa3:  movl   $0x100,0x8(%esp)
081da67d +0xab:  mov    %edx,0x4(%esp)
081da681 +0xaf:  mov    0xc(%ebp),%eax
081da684 +0xb2:  mov    %eax,(%esp)
081da687 +0xb5:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081da68c +0xba:  xor    $0x1,%eax
081da68f +0xbd:  test   %al,%al
081da691 +0xbf:  je     081da6b9 <+0xe7>
081da693 +0xc1:  movl   $0x0,0xc(%esp)
081da69b +0xc9:  movl   $0x0,0x8(%esp)
081da6a3 +0xd1:  movl   $&_ZZN25Dispatcher_UserHistoryLog4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081da6ab +0xd9:  movl   $0x48af,(%esp)
081da6b2 +0xe0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081da6b7 +0xe5:  jmp    081da6be <+0xec>
081da6b9 +0xe7:  mov    $0x0,%eax
081da6be +0xec:  leave
081da6bf +0xed:  ret
```

## 反编译 C

```c
// Dispatcher_UserHistoryLog::read @ 0x81da5d2

/* Dispatcher_UserHistoryLog::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UserHistoryLog::read
          (Dispatcher_UserHistoryLog *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x14),0x100,*(int *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x48af,"virtual int Dispatcher_UserHistoryLog::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x48ac,"virtual int Dispatcher_UserHistoryLog::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x48a9,"virtual int Dispatcher_UserHistoryLog::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}
```
