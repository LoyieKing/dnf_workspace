# read

`_ZN22DisPatcher_GetUserInfo4readER9PacketBufR8MSG_BASE`

`DisPatcher_GetUserInfo::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_GetUserInfo` | `0x081c3d46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c3d46  _ZN22DisPatcher_GetUserInfo4readER9PacketBufR8MSG_BASE
#           DisPatcher_GetUserInfo::read(PacketBuf&, MSG_BASE&)
# range [0x081c3d46, 0x081c3dd7]
081c3d46 +0x00:  push   %ebp
081c3d47 +0x01:  mov    %esp,%ebp
081c3d49 +0x03:  sub    $0x18,%esp
081c3d4c +0x06:  mov    0x10(%ebp),%eax
081c3d4f +0x09:  add    $0xd,%eax
081c3d52 +0x0c:  mov    %eax,0x4(%esp)
081c3d56 +0x10:  mov    0xc(%ebp),%eax
081c3d59 +0x13:  mov    %eax,(%esp)
081c3d5c +0x16:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081c3d61 +0x1b:  xor    $0x1,%eax
081c3d64 +0x1e:  test   %al,%al
081c3d66 +0x20:  je     081c3d8e <+0x48>
081c3d68 +0x22:  movl   $0x0,0xc(%esp)
081c3d70 +0x2a:  movl   $0x0,0x8(%esp)
081c3d78 +0x32:  movl   $&_ZZN22DisPatcher_GetUserInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c3d80 +0x3a:  movl   $0xf5b,(%esp)
081c3d87 +0x41:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c3d8c +0x46:  jmp    081c3dd5 <+0x8f>
081c3d8e +0x48:  mov    0x10(%ebp),%eax
081c3d91 +0x4b:  add    $0xf,%eax
081c3d94 +0x4e:  mov    %eax,0x4(%esp)
081c3d98 +0x52:  mov    0xc(%ebp),%eax
081c3d9b +0x55:  mov    %eax,(%esp)
081c3d9e +0x58:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c3da3 +0x5d:  xor    $0x1,%eax
081c3da6 +0x60:  test   %al,%al
081c3da8 +0x62:  je     081c3dd0 <+0x8a>
081c3daa +0x64:  movl   $0x0,0xc(%esp)
081c3db2 +0x6c:  movl   $0x0,0x8(%esp)
081c3dba +0x74:  movl   $&_ZZN22DisPatcher_GetUserInfo4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c3dc2 +0x7c:  movl   $0xf5d,(%esp)
081c3dc9 +0x83:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c3dce +0x88:  jmp    081c3dd5 <+0x8f>
081c3dd0 +0x8a:  mov    $0x0,%eax
081c3dd5 +0x8f:  leave
081c3dd6 +0x90:  ret
081c3dd7 +0x91:  nop
```

## 反编译 C

```c
// DisPatcher_GetUserInfo::read @ 0x81c3d46

/* DisPatcher_GetUserInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_GetUserInfo::read(DisPatcher_GetUserInfo *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0xf5d,"virtual int DisPatcher_GetUserInfo::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xf5b,"virtual int DisPatcher_GetUserInfo::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
