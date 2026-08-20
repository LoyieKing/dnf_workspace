# read

`_ZN29Dispatcher_ValidateScriptHash4readER9PacketBufR8MSG_BASE`

`Dispatcher_ValidateScriptHash::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ValidateScriptHash` | `0x082641e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082641e2  _ZN29Dispatcher_ValidateScriptHash4readER9PacketBufR8MSG_BASE
#           Dispatcher_ValidateScriptHash::read(PacketBuf&, MSG_BASE&)
# range [0x082641e2, 0x082642b7]
082641e2 +0x00:  push   %ebp
082641e3 +0x01:  mov    %esp,%ebp
082641e5 +0x03:  sub    $0x18,%esp
082641e8 +0x06:  mov    0x10(%ebp),%eax
082641eb +0x09:  add    $0xd,%eax
082641ee +0x0c:  mov    %eax,0x4(%esp)
082641f2 +0x10:  mov    0xc(%ebp),%eax
082641f5 +0x13:  mov    %eax,(%esp)
082641f8 +0x16:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
082641fd +0x1b:  xor    $0x1,%eax
08264200 +0x1e:  test   %al,%al
08264202 +0x20:  je     0826422d <+0x4b>
08264204 +0x22:  movl   $0x0,0xc(%esp)
0826420c +0x2a:  movl   $0x0,0x8(%esp)
08264214 +0x32:  movl   $&_ZZN29Dispatcher_ValidateScriptHash4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
0826421c +0x3a:  movl   $0x37d,(%esp)
08264223 +0x41:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08264228 +0x46:  jmp    082642b6 <+0xd4>
0826422d +0x4b:  mov    0x10(%ebp),%eax
08264230 +0x4e:  add    $0xe,%eax
08264233 +0x51:  mov    %eax,0x4(%esp)
08264237 +0x55:  mov    0xc(%ebp),%eax
0826423a +0x58:  mov    %eax,(%esp)
0826423d +0x5b:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08264242 +0x60:  xor    $0x1,%eax
08264245 +0x63:  test   %al,%al
08264247 +0x65:  je     0826426f <+0x8d>
08264249 +0x67:  movl   $0x0,0xc(%esp)
08264251 +0x6f:  movl   $0x0,0x8(%esp)
08264259 +0x77:  movl   $&_ZZN29Dispatcher_ValidateScriptHash4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08264261 +0x7f:  movl   $0x382,(%esp)
08264268 +0x86:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0826426d +0x8b:  jmp    082642b6 <+0xd4>
0826426f +0x8d:  mov    0x10(%ebp),%eax
08264272 +0x90:  add    $0xf,%eax
08264275 +0x93:  mov    %eax,0x4(%esp)
08264279 +0x97:  mov    0xc(%ebp),%eax
0826427c +0x9a:  mov    %eax,(%esp)
0826427f +0x9d:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08264284 +0xa2:  xor    $0x1,%eax
08264287 +0xa5:  test   %al,%al
08264289 +0xa7:  je     082642b1 <+0xcf>
0826428b +0xa9:  movl   $0x0,0xc(%esp)
08264293 +0xb1:  movl   $0x0,0x8(%esp)
0826429b +0xb9:  movl   $&_ZZN29Dispatcher_ValidateScriptHash4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
082642a3 +0xc1:  movl   $0x387,(%esp)
082642aa +0xc8:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082642af +0xcd:  jmp    082642b6 <+0xd4>
082642b1 +0xcf:  mov    $0x0,%eax
082642b6 +0xd4:  leave
082642b7 +0xd5:  ret
```

## 反编译 C

```c
// Dispatcher_ValidateScriptHash::read @ 0x82641e2

/* Dispatcher_ValidateScriptHash::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ValidateScriptHash::read
          (Dispatcher_ValidateScriptHash *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x387,
                         "virtual int Dispatcher_ValidateScriptHash::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x382,
                       "virtual int Dispatcher_ValidateScriptHash::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x37d,"virtual int Dispatcher_ValidateScriptHash::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}
```
