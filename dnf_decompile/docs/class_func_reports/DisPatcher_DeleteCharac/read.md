# read

`_ZN23DisPatcher_DeleteCharac4readER9PacketBufR8MSG_BASE`

`DisPatcher_DeleteCharac::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DeleteCharac` | `0x081c1094` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c1094  _ZN23DisPatcher_DeleteCharac4readER9PacketBufR8MSG_BASE
#           DisPatcher_DeleteCharac::read(PacketBuf&, MSG_BASE&)
# range [0x081c1094, 0x081c1181]
081c1094 +0x00:  push   %ebp
081c1095 +0x01:  mov    %esp,%ebp
081c1097 +0x03:  sub    $0x28,%esp
081c109a +0x06:  mov    0x10(%ebp),%eax
081c109d +0x09:  mov    %eax,-0xc(%ebp)
081c10a0 +0x0c:  mov    -0xc(%ebp),%eax
081c10a3 +0x0f:  add    $0xd,%eax
081c10a6 +0x12:  mov    %eax,0x4(%esp)
081c10aa +0x16:  mov    0xc(%ebp),%eax
081c10ad +0x19:  mov    %eax,(%esp)
081c10b0 +0x1c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081c10b5 +0x21:  xor    $0x1,%eax
081c10b8 +0x24:  test   %al,%al
081c10ba +0x26:  je     081c10e5 <+0x51>
081c10bc +0x28:  movl   $0x0,0xc(%esp)
081c10c4 +0x30:  movl   $0x0,0x8(%esp)
081c10cc +0x38:  movl   $&_ZZN23DisPatcher_DeleteCharac4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c10d4 +0x40:  movl   $0xa26,(%esp)
081c10db +0x47:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c10e0 +0x4c:  jmp    081c1180 <+0xec>
081c10e5 +0x51:  mov    -0xc(%ebp),%eax
081c10e8 +0x54:  add    $0xe,%eax
081c10eb +0x57:  mov    %eax,0x4(%esp)
081c10ef +0x5b:  mov    0xc(%ebp),%eax
081c10f2 +0x5e:  mov    %eax,(%esp)
081c10f5 +0x61:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081c10fa +0x66:  xor    $0x1,%eax
081c10fd +0x69:  test   %al,%al
081c10ff +0x6b:  je     081c1127 <+0x93>
081c1101 +0x6d:  movl   $0x0,0xc(%esp)
081c1109 +0x75:  movl   $0x0,0x8(%esp)
081c1111 +0x7d:  movl   $&_ZZN23DisPatcher_DeleteCharac4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c1119 +0x85:  movl   $0xa29,(%esp)
081c1120 +0x8c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c1125 +0x91:  jmp    081c1180 <+0xec>
081c1127 +0x93:  mov    -0xc(%ebp),%eax
081c112a +0x96:  mov    0xe(%eax),%eax
081c112d +0x99:  mov    -0xc(%ebp),%edx
081c1130 +0x9c:  add    $0x12,%edx
081c1133 +0x9f:  mov    %eax,0xc(%esp)
081c1137 +0xa3:  movl   $0x1e,0x8(%esp)
081c113f +0xab:  mov    %edx,0x4(%esp)
081c1143 +0xaf:  mov    0xc(%ebp),%eax
081c1146 +0xb2:  mov    %eax,(%esp)
081c1149 +0xb5:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081c114e +0xba:  xor    $0x1,%eax
081c1151 +0xbd:  test   %al,%al
081c1153 +0xbf:  je     081c117b <+0xe7>
081c1155 +0xc1:  movl   $0x0,0xc(%esp)
081c115d +0xc9:  movl   $0x0,0x8(%esp)
081c1165 +0xd1:  movl   $&_ZZN23DisPatcher_DeleteCharac4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081c116d +0xd9:  movl   $0xa30,(%esp)
081c1174 +0xe0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c1179 +0xe5:  jmp    081c1180 <+0xec>
081c117b +0xe7:  mov    $0x0,%eax
081c1180 +0xec:  leave
081c1181 +0xed:  ret
```

## 反编译 C

```c
// DisPatcher_DeleteCharac::read @ 0x81c1094

/* DisPatcher_DeleteCharac::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_DeleteCharac::read(DisPatcher_DeleteCharac *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x12),0x1e,*(int *)(param_2 + 0xe));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0xa30,"virtual int DisPatcher_DeleteCharac::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0xa29,"virtual int DisPatcher_DeleteCharac::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0xa26,"virtual int DisPatcher_DeleteCharac::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}
```
