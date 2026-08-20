# read

`_ZN22Dispatcher_SecurityLog4readER9PacketBufR8MSG_BASE`

`Dispatcher_SecurityLog::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecurityLog` | `0x0825fabc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825fabc  _ZN22Dispatcher_SecurityLog4readER9PacketBufR8MSG_BASE
#           Dispatcher_SecurityLog::read(PacketBuf&, MSG_BASE&)
# range [0x0825fabc, 0x0825fb37]
0825fabc +0x00:  push   %ebp
0825fabd +0x01:  mov    %esp,%ebp
0825fabf +0x03:  sub    $0x28,%esp
0825fac2 +0x06:  lea    -0x10(%ebp),%eax
0825fac5 +0x09:  mov    %eax,0x4(%esp)
0825fac9 +0x0d:  mov    0xc(%ebp),%eax
0825facc +0x10:  mov    %eax,(%esp)
0825facf +0x13:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0825fad4 +0x18:  xor    $0x1,%eax
0825fad7 +0x1b:  test   %al,%al
0825fad9 +0x1d:  je     0825fae2 <+0x26>
0825fadb +0x1f:  mov    $0x99a,%eax
0825fae0 +0x24:  jmp    0825fb36 <+0x7a>
0825fae2 +0x26:  mov    0x10(%ebp),%eax
0825fae5 +0x29:  mov    -0x10(%ebp),%edx
0825fae8 +0x2c:  mov    %edx,0xd(%eax)
0825faeb +0x2f:  movl   $0x0,-0xc(%ebp)
0825faf2 +0x36:  jmp    0825fb26 <+0x6a>
0825faf4 +0x38:  mov    0x10(%ebp),%eax
0825faf7 +0x3b:  mov    -0xc(%ebp),%edx
0825fafa +0x3e:  add    $0x4,%edx
0825fafd +0x41:  shl    $0x2,%edx
0825fb00 +0x44:  add    %edx,%eax
0825fb02 +0x46:  add    $0x1,%eax
0825fb05 +0x49:  mov    %eax,0x4(%esp)
0825fb09 +0x4d:  mov    0xc(%ebp),%eax
0825fb0c +0x50:  mov    %eax,(%esp)
0825fb0f +0x53:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0825fb14 +0x58:  xor    $0x1,%eax
0825fb17 +0x5b:  test   %al,%al
0825fb19 +0x5d:  je     0825fb22 <+0x66>
0825fb1b +0x5f:  mov    $0x9a2,%eax
0825fb20 +0x64:  jmp    0825fb36 <+0x7a>
0825fb22 +0x66:  addl   $0x1,-0xc(%ebp)
0825fb26 +0x6a:  cmpl   $0x4,-0xc(%ebp)
0825fb2a +0x6e:  setle  %al
0825fb2d +0x71:  test   %al,%al
0825fb2f +0x73:  jne    0825faf4 <+0x38>
0825fb31 +0x75:  mov    $0x0,%eax
0825fb36 +0x7a:  leave
0825fb37 +0x7b:  ret
```

## 反编译 C

```c
// Dispatcher_SecurityLog::read @ 0x825fabc

/* Dispatcher_SecurityLog::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SecurityLog::read(Dispatcher_SecurityLog *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_14;
  int local_10;
  
  cVar1 = PacketBuf::get_int(param_1,&local_14);
  if (cVar1 == '\x01') {
    *(int *)(param_2 + 0xd) = local_14;
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + (local_10 + 4) * 4 + 1));
      if (cVar1 != '\x01') {
        return 0x9a2;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0x99a;
  }
  return uVar2;
}
```
