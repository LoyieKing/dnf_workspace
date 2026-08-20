# read

`_ZN30Dispatcher_SaveCharacterOption4readER9PacketBufR8MSG_BASE`

`Dispatcher_SaveCharacterOption::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveCharacterOption` | `0x081ce8bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce8bc  _ZN30Dispatcher_SaveCharacterOption4readER9PacketBufR8MSG_BASE
#           Dispatcher_SaveCharacterOption::read(PacketBuf&, MSG_BASE&)
# range [0x081ce8bc, 0x081ce97b]
081ce8bc +0x00:  push   %ebp
081ce8bd +0x01:  mov    %esp,%ebp
081ce8bf +0x03:  sub    $0x28,%esp
081ce8c2 +0x06:  mov    0x10(%ebp),%eax
081ce8c5 +0x09:  mov    %eax,-0xc(%ebp)
081ce8c8 +0x0c:  mov    -0xc(%ebp),%eax
081ce8cb +0x0f:  add    $0xd,%eax
081ce8ce +0x12:  mov    %eax,0x4(%esp)
081ce8d2 +0x16:  mov    0xc(%ebp),%eax
081ce8d5 +0x19:  mov    %eax,(%esp)
081ce8d8 +0x1c:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081ce8dd +0x21:  xor    $0x1,%eax
081ce8e0 +0x24:  test   %al,%al
081ce8e2 +0x26:  jne    081ce8f1 <+0x35>
081ce8e4 +0x28:  mov    -0xc(%ebp),%eax
081ce8e7 +0x2b:  mov    0xd(%eax),%eax
081ce8ea +0x2e:  cmp    $0x200,%eax
081ce8ef +0x33:  jbe    081ce8f8 <+0x3c>
081ce8f1 +0x35:  mov    $0x1,%eax
081ce8f6 +0x3a:  jmp    081ce8fd <+0x41>
081ce8f8 +0x3c:  mov    $0x0,%eax
081ce8fd +0x41:  test   %al,%al
081ce8ff +0x43:  je     081ce927 <+0x6b>
081ce901 +0x45:  movl   $0x0,0xc(%esp)
081ce909 +0x4d:  movl   $0x0,0x8(%esp)
081ce911 +0x55:  movl   $&_ZZN30Dispatcher_SaveCharacterOption4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ce919 +0x5d:  movl   $0x2829,(%esp)
081ce920 +0x64:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ce925 +0x69:  jmp    081ce97a <+0xbe>
081ce927 +0x6b:  mov    -0xc(%ebp),%eax
081ce92a +0x6e:  mov    0xd(%eax),%eax
081ce92d +0x71:  mov    %eax,%edx
081ce92f +0x73:  mov    -0xc(%ebp),%eax
081ce932 +0x76:  add    $0x11,%eax
081ce935 +0x79:  mov    %edx,0x8(%esp)
081ce939 +0x7d:  mov    %eax,0x4(%esp)
081ce93d +0x81:  mov    0xc(%ebp),%eax
081ce940 +0x84:  mov    %eax,(%esp)
081ce943 +0x87:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
081ce948 +0x8c:  xor    $0x1,%eax
081ce94b +0x8f:  test   %al,%al
081ce94d +0x91:  je     081ce975 <+0xb9>
081ce94f +0x93:  movl   $0x0,0xc(%esp)
081ce957 +0x9b:  movl   $0x0,0x8(%esp)
081ce95f +0xa3:  movl   $&_ZZN30Dispatcher_SaveCharacterOption4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ce967 +0xab:  movl   $0x282b,(%esp)
081ce96e +0xb2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ce973 +0xb7:  jmp    081ce97a <+0xbe>
081ce975 +0xb9:  mov    $0x0,%eax
081ce97a +0xbe:  leave
081ce97b +0xbf:  ret
```

## 反编译 C

```c
// Dispatcher_SaveCharacterOption::read @ 0x81ce8bc

/* Dispatcher_SaveCharacterOption::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SaveCharacterOption::read
          (Dispatcher_SaveCharacterOption *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0xd));
  if ((cVar2 == '\x01') && (*(uint *)(param_2 + 0xd) < 0x201)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = LineFunc(0x2829,
                     "virtual int Dispatcher_SaveCharacterOption::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  else {
    cVar2 = PacketBuf::get_binary(param_1,(char *)(param_2 + 0x11),*(int *)(param_2 + 0xd));
    if (cVar2 == '\x01') {
      uVar3 = 0;
    }
    else {
      uVar3 = LineFunc(0x282b,
                       "virtual int Dispatcher_SaveCharacterOption::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  return uVar3;
}
```
