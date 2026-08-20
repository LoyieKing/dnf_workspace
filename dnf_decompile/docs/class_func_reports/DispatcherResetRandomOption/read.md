# read

`_ZN27DispatcherResetRandomOption4readER9PacketBufR8MSG_BASE`

`DispatcherResetRandomOption::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DispatcherResetRandomOption` | `0x081dd1e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dd1e2  _ZN27DispatcherResetRandomOption4readER9PacketBufR8MSG_BASE
#           DispatcherResetRandomOption::read(PacketBuf&, MSG_BASE&)
# range [0x081dd1e2, 0x081dd2bd]
081dd1e2 +0x00:  push   %ebp
081dd1e3 +0x01:  mov    %esp,%ebp
081dd1e5 +0x03:  sub    $0x28,%esp
081dd1e8 +0x06:  mov    0x10(%ebp),%eax
081dd1eb +0x09:  mov    %eax,-0xc(%ebp)
081dd1ee +0x0c:  mov    -0xc(%ebp),%eax
081dd1f1 +0x0f:  add    $0xe,%eax
081dd1f4 +0x12:  mov    %eax,0x4(%esp)
081dd1f8 +0x16:  mov    0xc(%ebp),%eax
081dd1fb +0x19:  mov    %eax,(%esp)
081dd1fe +0x1c:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081dd203 +0x21:  xor    $0x1,%eax
081dd206 +0x24:  test   %al,%al
081dd208 +0x26:  je     081dd233 <+0x51>
081dd20a +0x28:  movl   $0x0,0xc(%esp)
081dd212 +0x30:  movl   $0x0,0x8(%esp)
081dd21a +0x38:  movl   $&_ZZN27DispatcherResetRandomOption4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dd222 +0x40:  movl   $0x4db2,(%esp)
081dd229 +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dd22e +0x4c:  jmp    081dd2bc <+0xda>
081dd233 +0x51:  mov    -0xc(%ebp),%eax
081dd236 +0x54:  add    $0x10,%eax
081dd239 +0x57:  mov    %eax,0x4(%esp)
081dd23d +0x5b:  mov    0xc(%ebp),%eax
081dd240 +0x5e:  mov    %eax,(%esp)
081dd243 +0x61:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081dd248 +0x66:  xor    $0x1,%eax
081dd24b +0x69:  test   %al,%al
081dd24d +0x6b:  je     081dd275 <+0x93>
081dd24f +0x6d:  movl   $0x0,0xc(%esp)
081dd257 +0x75:  movl   $0x0,0x8(%esp)
081dd25f +0x7d:  movl   $&_ZZN27DispatcherResetRandomOption4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dd267 +0x85:  movl   $0x4db5,(%esp)
081dd26e +0x8c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dd273 +0x91:  jmp    081dd2bc <+0xda>
081dd275 +0x93:  mov    -0xc(%ebp),%eax
081dd278 +0x96:  add    $0x12,%eax
081dd27b +0x99:  mov    %eax,0x4(%esp)
081dd27f +0x9d:  mov    0xc(%ebp),%eax
081dd282 +0xa0:  mov    %eax,(%esp)
081dd285 +0xa3:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081dd28a +0xa8:  xor    $0x1,%eax
081dd28d +0xab:  test   %al,%al
081dd28f +0xad:  je     081dd2b7 <+0xd5>
081dd291 +0xaf:  movl   $0x0,0xc(%esp)
081dd299 +0xb7:  movl   $0x0,0x8(%esp)
081dd2a1 +0xbf:  movl   $&_ZZN27DispatcherResetRandomOption4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081dd2a9 +0xc7:  movl   $0x4db8,(%esp)
081dd2b0 +0xce:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dd2b5 +0xd3:  jmp    081dd2bc <+0xda>
081dd2b7 +0xd5:  mov    $0x0,%eax
081dd2bc +0xda:  leave
081dd2bd +0xdb:  ret
```

## 反编译 C

```c
// DispatcherResetRandomOption::read @ 0x81dd1e2

/* DispatcherResetRandomOption::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DispatcherResetRandomOption::read
          (DispatcherResetRandomOption *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x12));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x4db8,
                         "virtual int DispatcherResetRandomOption::read(PacketBuf&, MSG_BASE&)",0,0)
        ;
      }
    }
    else {
      uVar2 = LineFunc(0x4db5,"virtual int DispatcherResetRandomOption::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x4db2,"virtual int DispatcherResetRandomOption::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}
```
