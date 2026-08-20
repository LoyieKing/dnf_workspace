# read

`_ZN30Dispatcher_RegisterToBlackList4readER9PacketBufR8MSG_BASE`

`Dispatcher_RegisterToBlackList::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RegisterToBlackList` | `0x081cdbc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cdbc6  _ZN30Dispatcher_RegisterToBlackList4readER9PacketBufR8MSG_BASE
#           Dispatcher_RegisterToBlackList::read(PacketBuf&, MSG_BASE&)
# range [0x081cdbc6, 0x081cdc6f]
081cdbc6 +0x00:  push   %ebp
081cdbc7 +0x01:  mov    %esp,%ebp
081cdbc9 +0x03:  sub    $0x28,%esp
081cdbcc +0x06:  mov    0x10(%ebp),%eax
081cdbcf +0x09:  mov    %eax,-0xc(%ebp)
081cdbd2 +0x0c:  mov    -0xc(%ebp),%eax
081cdbd5 +0x0f:  add    $0x10,%eax
081cdbd8 +0x12:  mov    %eax,0x4(%esp)
081cdbdc +0x16:  mov    0xc(%ebp),%eax
081cdbdf +0x19:  mov    %eax,(%esp)
081cdbe2 +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081cdbe7 +0x21:  xor    $0x1,%eax
081cdbea +0x24:  test   %al,%al
081cdbec +0x26:  je     081cdc14 <+0x4e>
081cdbee +0x28:  movl   $0x0,0xc(%esp)
081cdbf6 +0x30:  movl   $0x0,0x8(%esp)
081cdbfe +0x38:  movl   $&_ZZN30Dispatcher_RegisterToBlackList4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cdc06 +0x40:  movl   $0x267d,(%esp)
081cdc0d +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cdc12 +0x4c:  jmp    081cdc6d <+0xa7>
081cdc14 +0x4e:  mov    -0xc(%ebp),%eax
081cdc17 +0x51:  mov    0x10(%eax),%eax
081cdc1a +0x54:  mov    -0xc(%ebp),%edx
081cdc1d +0x57:  add    $0x14,%edx
081cdc20 +0x5a:  mov    %eax,0xc(%esp)
081cdc24 +0x5e:  movl   $0x1e,0x8(%esp)
081cdc2c +0x66:  mov    %edx,0x4(%esp)
081cdc30 +0x6a:  mov    0xc(%ebp),%eax
081cdc33 +0x6d:  mov    %eax,(%esp)
081cdc36 +0x70:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081cdc3b +0x75:  xor    $0x1,%eax
081cdc3e +0x78:  test   %al,%al
081cdc40 +0x7a:  je     081cdc68 <+0xa2>
081cdc42 +0x7c:  movl   $0x0,0xc(%esp)
081cdc4a +0x84:  movl   $0x0,0x8(%esp)
081cdc52 +0x8c:  movl   $&_ZZN30Dispatcher_RegisterToBlackList4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cdc5a +0x94:  movl   $0x2680,(%esp)
081cdc61 +0x9b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cdc66 +0xa0:  jmp    081cdc6d <+0xa7>
081cdc68 +0xa2:  mov    $0x0,%eax
081cdc6d +0xa7:  leave
081cdc6e +0xa8:  ret
081cdc6f +0xa9:  nop
```

## 反编译 C

```c
// Dispatcher_RegisterToBlackList::read @ 0x81cdbc6

/* Dispatcher_RegisterToBlackList::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RegisterToBlackList::read
          (Dispatcher_RegisterToBlackList *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x10));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x14),0x1e,*(int *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x2680,
                       "virtual int Dispatcher_RegisterToBlackList::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x267d,
                     "virtual int Dispatcher_RegisterToBlackList::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
