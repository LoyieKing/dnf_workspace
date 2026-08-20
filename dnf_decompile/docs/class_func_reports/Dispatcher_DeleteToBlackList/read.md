# read

`_ZN28Dispatcher_DeleteToBlackList4readER9PacketBufR8MSG_BASE`

`Dispatcher_DeleteToBlackList::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DeleteToBlackList` | `0x081cde36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cde36  _ZN28Dispatcher_DeleteToBlackList4readER9PacketBufR8MSG_BASE
#           Dispatcher_DeleteToBlackList::read(PacketBuf&, MSG_BASE&)
# range [0x081cde36, 0x081cdedf]
081cde36 +0x00:  push   %ebp
081cde37 +0x01:  mov    %esp,%ebp
081cde39 +0x03:  sub    $0x28,%esp
081cde3c +0x06:  mov    0x10(%ebp),%eax
081cde3f +0x09:  mov    %eax,-0xc(%ebp)
081cde42 +0x0c:  mov    -0xc(%ebp),%eax
081cde45 +0x0f:  add    $0x10,%eax
081cde48 +0x12:  mov    %eax,0x4(%esp)
081cde4c +0x16:  mov    0xc(%ebp),%eax
081cde4f +0x19:  mov    %eax,(%esp)
081cde52 +0x1c:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081cde57 +0x21:  xor    $0x1,%eax
081cde5a +0x24:  test   %al,%al
081cde5c +0x26:  je     081cde84 <+0x4e>
081cde5e +0x28:  movl   $0x0,0xc(%esp)
081cde66 +0x30:  movl   $0x0,0x8(%esp)
081cde6e +0x38:  movl   $&_ZZN28Dispatcher_DeleteToBlackList4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cde76 +0x40:  movl   $0x26ce,(%esp)
081cde7d +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cde82 +0x4c:  jmp    081cdedd <+0xa7>
081cde84 +0x4e:  mov    -0xc(%ebp),%eax
081cde87 +0x51:  mov    0x10(%eax),%eax
081cde8a +0x54:  mov    -0xc(%ebp),%edx
081cde8d +0x57:  add    $0x14,%edx
081cde90 +0x5a:  mov    %eax,0xc(%esp)
081cde94 +0x5e:  movl   $0x1e,0x8(%esp)
081cde9c +0x66:  mov    %edx,0x4(%esp)
081cdea0 +0x6a:  mov    0xc(%ebp),%eax
081cdea3 +0x6d:  mov    %eax,(%esp)
081cdea6 +0x70:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081cdeab +0x75:  xor    $0x1,%eax
081cdeae +0x78:  test   %al,%al
081cdeb0 +0x7a:  je     081cded8 <+0xa2>
081cdeb2 +0x7c:  movl   $0x0,0xc(%esp)
081cdeba +0x84:  movl   $0x0,0x8(%esp)
081cdec2 +0x8c:  movl   $&_ZZN28Dispatcher_DeleteToBlackList4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cdeca +0x94:  movl   $0x26d1,(%esp)
081cded1 +0x9b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cded6 +0xa0:  jmp    081cdedd <+0xa7>
081cded8 +0xa2:  mov    $0x0,%eax
081cdedd +0xa7:  leave
081cdede +0xa8:  ret
081cdedf +0xa9:  nop
```

## 反编译 C

```c
// Dispatcher_DeleteToBlackList::read @ 0x81cde36

/* Dispatcher_DeleteToBlackList::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_DeleteToBlackList::read
          (Dispatcher_DeleteToBlackList *this,PacketBuf *param_1,MSG_BASE *param_2)

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
      uVar2 = LineFunc(0x26d1,
                       "virtual int Dispatcher_DeleteToBlackList::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x26ce,"virtual int Dispatcher_DeleteToBlackList::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```
